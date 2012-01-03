//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fiyatlandirma.h"
#include "departman.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFiyatAyarlama *frmFiyatAyarlama;
//---------------------------------------------------------------------------
__fastcall TfrmFiyatAyarlama::TfrmFiyatAyarlama(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmFiyatAyarlama::LIFOyaGoreFiyatlandir(void)
{
    int nSayac = 0;

    SpeedButton1->Enabled = false;
    Animate1->Active = true;

    querySTOKANA->ParamByName("DEPARTMAN")->AsString = comboDepartman->Text+"%";
    querySTOKANA->Active = true;
    tblSTOKANA->Active = true;

    querySTOKANA->First();
    while (!querySTOKANA->Eof) {
        tblSTOKANA->Filtered = false;
        tblSTOKANA->Filter = "[INDEKS] = '"+querySTOKANAINDEKS->Value+"'";
        tblSTOKANA->Filtered = true;
        // Ýlerleme Göstergesi Hareketini Saðlayan Kod Topluluðu
        nSayac = (100 * querySTOKANA->RecNo) / querySTOKANA->RecordCount;
        ProgressBar1->Position = nSayac;
        labelYUZDE->Caption = "% "+IntToStr(nSayac)+ " tamamlandý.";
        labelYUZDE->Refresh();
        labelYUZDE->Caption = "% 0";
        editStokKodu->Text = querySTOKANADEPARTMAN->Value + " - "
            + FloatToStr(querySTOKANAKOD->Value);
        editStokKodu->Refresh();
        editStokKodu->Clear();
        editStokAdi->Text = querySTOKANAADI->Value;
        editStokAdi->Refresh();
        editStokAdi->Clear();
        // -------------------------------------- Kod Topluluðu Sonu

        // Þu an aktif olan stok kodunun hareketlerini listeleyen Kod Topluluðu
        querySTOKGIRISI->Active = false;
        querySTOKGIRISI->ParamByName("DEPARTMAN")->AsString = querySTOKANADEPARTMAN->Value;
        querySTOKGIRISI->ParamByName("KOD")->AsFloat = querySTOKANAKOD->Value;
        querySTOKGIRISI->Active = true;

        // Aþaðýdaki Kod Topluluðu'nda - Giriþ Miktarý - en son tarihli
        // hareketin birim fiyatý StokAna'nýn birim fiyatýna atanýyor....
        querySTOKGIRISI->Last();
        if (querySTOKGIRISI->RecordCount > 0) {
            tblSTOKANA->Edit();
            tblSTOKANABIRIM_FIYATI->Value = querySTOKGIRISIBIRIMFIYATI->Value;
            tblSTOKANA->Post();
        }
        // ----------------------------------------------- Kod Topluluðu Sonu
        querySTOKANA->Next();
    }

    tblSTOKANA->Active = false;
    querySTOKANA->Active = false;
    querySTOKCIKISI->Active = false;
    querySTOKGIRISI->Active = false;

    ProgressBar1->Position = 0;
    Animate1->Active = false;
    SpeedButton1->Enabled = true;
}

void __fastcall TfrmFiyatAyarlama::FIFOyaGoreFiyatlandir(void)
{
    int nSayac = 0;
    double nGirisToplami = 0;

    SpeedButton1->Enabled = false;
    Animate1->Active = true;

    querySTOKANA->ParamByName("DEPARTMAN")->AsString = comboDepartman->Text+"%";
    querySTOKANA->Active = true;
    tblSTOKANA->Active = true;

    querySTOKANA->First();
    while (!querySTOKANA->Eof) {
        tblSTOKANA->Filtered = false;
        tblSTOKANA->Filter = "[INDEKS] = '"+querySTOKANAINDEKS->Value+"'";
        tblSTOKANA->Filtered = true;
        // Ýlerleme Göstergesi Hareketini Saðlayan Kod Topluluðu
        nSayac = (100 * querySTOKANA->RecNo) / querySTOKANA->RecordCount;
        ProgressBar1->Position = nSayac;
        labelYUZDE->Caption = "% "+IntToStr(nSayac)+ " tamamlandý.";
        labelYUZDE->Refresh();
        labelYUZDE->Caption = "% 0";
        editStokKodu->Text = querySTOKANADEPARTMAN->Value + " - "
            + FloatToStr(querySTOKANAKOD->Value);
        editStokKodu->Refresh();
        editStokKodu->Clear();
        editStokAdi->Text = querySTOKANAADI->Value;
        editStokAdi->Refresh();
        editStokAdi->Clear();
        // -------------------------------------- Kod Topluluðu Sonu

        // Þu an aktif olan stok kodunun hareketlerini listeleyen Kod Topluluðu
        querySTOKGIRISI->Active = false;
        querySTOKGIRISI->ParamByName("DEPARTMAN")->AsString = querySTOKANADEPARTMAN->Value;
        querySTOKGIRISI->ParamByName("KOD")->AsFloat = querySTOKANAKOD->Value;
        querySTOKGIRISI->Active = true;

        querySTOKCIKISI->Active = false;
        querySTOKCIKISI->ParamByName("DEPARTMAN")->AsString = querySTOKANADEPARTMAN->Value;
        querySTOKCIKISI->ParamByName("KOD")->AsFloat = querySTOKANAKOD->Value;
        querySTOKCIKISI->Active = true;
        // ------------------------------------------- Kod Topluluðu Sonu
        nGirisToplami = querySTOKANADEVIR_MIKTARI->Value;

        // Aþaðýdaki Kod Topluluðu'nda Giriþ Miktarý, Çýkýþ Miktarýndan küçük
        // oluncaya kadar döngüye devam ediliyor. Ve Büyük yada Eþit olduðunda ise
        // Birim Fiyatý StokAna'nýn birim fiyatýna atanýyor....
        querySTOKGIRISI->First();
        while (!querySTOKGIRISI->Eof && (nGirisToplami <= querySTOKCIKISISUMOFMIKTAR->Value)) {
            tblSTOKANA->Edit();
            tblSTOKANABIRIM_FIYATI->Value = querySTOKGIRISIBIRIMFIYATI->Value;
            tblSTOKANA->Post();

            nGirisToplami += querySTOKGIRISIMIKTAR->Value;
            querySTOKGIRISI->Next();
        }
        // ----------------------------------------------- Kod Topluluðu Sonu
        querySTOKANA->Next();
    }

    tblSTOKANA->Active = false;
    querySTOKANA->Active = false;
    querySTOKCIKISI->Active = false;
    querySTOKGIRISI->Active = false;

    ProgressBar1->Position = 0;
    Animate1->Active = false;
    SpeedButton1->Enabled = true;
}

void __fastcall TfrmFiyatAyarlama::FiyatlandirmayiBaslat(void)
{
    if (RadioGroup1->ItemIndex == 0)
        FIFOyaGoreFiyatlandir();
    else
        LIFOyaGoreFiyatlandir();
}

void __fastcall TfrmFiyatAyarlama::SpeedButton1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Fiyatlandýrmaya baþlamak istediðinize emin misiniz?", "Baþlatma Onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) 
        FiyatlandirmayiBaslat();
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiyatAyarlama::FormShow(TObject *Sender)
{
    // Departman ComboBox'ýna kayýt ekleniyor...
    comboDepartman->Items->Clear();
    frmDepartman->tblDEPARTMAN->Open();
    frmDepartman->tblDEPARTMAN->First();
    comboDepartman->Items->Add("");
    while (!frmDepartman->tblDEPARTMAN->Eof) {
        comboDepartman->Items->Add(frmDepartman->tblDEPARTMANDEPARTMAN->Value);
        frmDepartman->tblDEPARTMAN->Next();
    }
    frmDepartman->tblDEPARTMAN->Close();

    comboDepartman->ItemIndex = 1;
}
//---------------------------------------------------------------------------
