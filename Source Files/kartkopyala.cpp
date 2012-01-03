//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kartkopyala.h"
#include "stokana.h"
#include "departman.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmKartKopyala *frmKartKopyala;
//---------------------------------------------------------------------------
__fastcall TfrmKartKopyala::TfrmKartKopyala(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmKartKopyala::SpeedButton1Click(TObject *Sender)
{
    if (!(ComboBox2->Text.Length() != 0 && Edit2->Text.Length()))
        Application->MessageBoxA("Departman hanesi boþ kalamaz...",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else if (frmStokKarti->DBRadioGroup1->ItemIndex == 1 && (ComboBox1->Text != ComboBox2->Text) )
        Application->MessageBoxA("Departmanlarý ayný olmayan ürünler kopyalanamaz...",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        SpeedButton1->Visible = false;
        Animate1->Active = true;
        Animate1->Visible = true;
        frmKartKopyala->Caption = "Kopyalanýyor...";
        StokAnaOlustur();
        UretimAnaOlustur();
        SpeedButton1->Visible = true;
        Animate1->Active = false;
        Animate1->Visible = false;
        frmKartKopyala->Caption = "Stok Kartý Kopyalama Modülü";
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmKartKopyala::FormShow(TObject *Sender)
{
    Edit2->Clear();
    SpeedButton1->Visible = true;
    Animate1->Active = false;
    Animate1->Visible = false;
    frmKartKopyala->Caption = "Stok Kartý Kopyalama Modülü";

    // Departman ComboBox'ýna kayýt ekleniyor...
    ComboBox1->Items->Clear();
    ComboBox2->Items->Clear();
    frmDepartman->tblDEPARTMAN->Open();
    frmDepartman->tblDEPARTMAN->First();
    while (!frmDepartman->tblDEPARTMAN->Eof) {
        ComboBox1->Items->Add(frmDepartman->tblDEPARTMANDEPARTMAN->Value);
        ComboBox2->Items->Add(frmDepartman->tblDEPARTMANDEPARTMAN->Value);
        frmDepartman->tblDEPARTMAN->Next();
    }
    frmDepartman->tblDEPARTMAN->Close();

    ComboBox1->ItemIndex = frmStokKarti->dbcomboDepartman->ItemIndex;
    Edit1->Text = frmStokKarti->dbeditKod->Text;
    Edit3->Text = frmStokKarti->dbeditAd->Text;
    Edit4->Text = frmStokKarti->dbeditAd->Text;
}
//---------------------------------------------------------------------------
void __fastcall TfrmKartKopyala::ComboBox2Change(TObject *Sender)
{
    queryYENIKOD->Close();
    queryYENIKOD->SQL->Clear();
    queryYENIKOD->SQL->Add("SELECT * FROM STOKANA");
    queryYENIKOD->SQL->Add("WHERE DEPARTMAN='"+ComboBox2->Text+"'");
    queryYENIKOD->SQL->Add("ORDER BY KOD DESC");
    queryYENIKOD->ExecSQL();
    queryYENIKOD->Open();

    queryYENIKOD->First();
    Edit2->Text = FloatToStr(queryYENIKODKOD->Value+1);
    queryYENIKOD->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartKopyala::UretimAnaOlustur(void)
{
    // Uretim hareketinden, üretim ana dosyasý oluþturuluyor...
    if (frmStokKarti->DBRadioGroup1->ItemIndex == 1) {
        frmStokKarti->tblURETIMHAREKETI->First();
        while (!frmStokKarti->tblURETIMHAREKETI->Eof) {
            tblURETIMANA->Open();
            tblURETIMANA->Insert();
            tblURETIMANA->Edit();
            tblURETIMANAURUNKODU->Value = (ComboBox2->Text + Edit2->Text);
            tblURETIMANA->Edit();
            tblURETIMANAMALZEMEKODU->Value =
                ComboBox2->Text + FloatToStr(frmStokKarti->tblURETIMHAREKETIKOD->Value);
            tblURETIMANA->Edit();
            tblURETIMANAMALZEMEMIKTARI->Value = frmStokKarti->tblURETIMHAREKETIMIKTAR->Value;
            tblURETIMANA->Post();
            tblURETIMANA->Close();
            frmStokKarti->tblURETIMHAREKETI->Next();
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartKopyala::StokAnaOlustur(void)
{
    TDateTime Zaman;

    tblSTOKANA->Open();
    tblSTOKANA->Insert();
    tblSTOKANA->Edit();
    tblSTOKANAINDEKS->Value = (ComboBox2->Text + Edit2->Text);
    tblSTOKANA->Edit();
    tblSTOKANADEPARTMAN->Value = ComboBox2->Text;
    tblSTOKANA->Edit();
    tblSTOKANAKOD->Value = StrToFloat(Edit2->Text);
    tblSTOKANA->Edit();
    tblSTOKANACINSI_KUTUSU->Value = frmStokKarti->tblSTOKANACINSI_KUTUSU->Value;
    tblSTOKANA->Edit();
    tblSTOKANACINSI->Value = frmStokKarti->tblSTOKANACINSI->Value;
    tblSTOKANA->Edit();
    tblSTOKANAADI->Value = Edit4->Text;
    tblSTOKANA->Edit();
    tblSTOKANAOLCU_BIRIMI->Value = frmStokKarti->tblSTOKANAOLCU_BIRIMI->Value;
    tblSTOKANA->Edit();
    tblSTOKANABIRIM_ORANI->Value = frmStokKarti->tblSTOKANABIRIM_ORANI->Value;
    tblSTOKANA->Edit();
    tblSTOKANAMUADDEL_BIRIMI->Value = frmStokKarti->tblSTOKANAMUADDEL_BIRIMI->Value;
    tblSTOKANA->Edit();
    tblSTOKANAMUADDEL_BIRIM_ORANI->Value = frmStokKarti->tblSTOKANAMUADDEL_BIRIM_ORANI->Value;
    tblSTOKANA->Edit();
    tblSTOKANABIRIM_FIYATI->Value = frmStokKarti->tblSTOKANABIRIM_FIYATI->Value;
    tblSTOKANA->Edit();
    tblSTOKANAKDV_ORANI->Value = frmStokKarti->tblSTOKANAKDV_ORANI->Value;
    tblSTOKANA->Edit();
    tblSTOKANADEVIR_MIKTARI->Value = frmStokKarti->tblSTOKANADEVIR_MIKTARI->Value;
    tblSTOKANA->Edit();
    tblSTOKANASON_DURUM->Value = frmStokKarti->tblSTOKANASON_DURUM->Value;
    tblSTOKANA->Edit();
    tblSTOKANAMALIYETI->Value = frmStokKarti->tblSTOKANAMALIYETI->Value;
    tblSTOKANA->Edit();
    tblSTOKANAISLETME_KARI->Value = frmStokKarti->tblSTOKANAISLETME_KARI->Value;
    tblSTOKANA->Edit();
    tblSTOKANAISLETME_GIDERI->Value = frmStokKarti->tblSTOKANAISLETME_GIDERI->Value;
    tblSTOKANA->Edit();
    tblSTOKANAARA_TOPLAM->Value = frmStokKarti->tblSTOKANAARA_TOPLAM->Value;
    tblSTOKANA->Edit();
    tblSTOKANAKDV_TUTARI->Value = frmStokKarti->tblSTOKANAKDV_TUTARI->Value;
    tblSTOKANA->Edit();
    tblSTOKANAGENEL_TOPLAM->Value = frmStokKarti->tblSTOKANAGENEL_TOPLAM->Value;
    tblSTOKANA->Edit();
    tblSTOKANAYUVARLAMA->Value = frmStokKarti->tblSTOKANAYUVARLAMA->Value;
    tblSTOKANA->Edit();
    tblSTOKANATARIH->Value = Zaman.CurrentDate();
    tblSTOKANA->Edit();
    tblSTOKANASAAT->Value = Zaman.CurrentTime();
    tblSTOKANA->Post();
    tblSTOKANA->Close();
}

