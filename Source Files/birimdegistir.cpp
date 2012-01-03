//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "birimdegistir.h"
#include "olcu.h"
#include "stoklist.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmBirimOranDegistir *frmBirimOranDegistir;
//---------------------------------------------------------------------------
__fastcall TfrmBirimOranDegistir::TfrmBirimOranDegistir(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmBirimOranDegistir::FormShow(TObject *Sender)
{
    // Ölçü Birimi ComboBox'ýna kayýt ekleniyor...
    comboYeniMuaddelBirimi->Items->Clear();
    comboYeniOlcuBirimi->Items->Clear();
    frmOlcuBirimi->tblOLCU->Open();
    frmOlcuBirimi->tblOLCU->First();
    while (!frmOlcuBirimi->tblOLCU->Eof) {
        comboYeniMuaddelBirimi->Items->Add(frmOlcuBirimi->tblOLCUTANIMLAMA->Value);
        comboYeniOlcuBirimi->Items->Add(frmOlcuBirimi->tblOLCUTANIMLAMA->Value);
        frmOlcuBirimi->tblOLCU->Next();
    }
    frmOlcuBirimi->tblOLCU->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmBirimOranDegistir::comboYeniMuaddelBirimiChange(
      TObject *Sender)
{
    frmOlcuBirimi->tblOLCU->Open();
    frmOlcuBirimi->tblOLCU->RecNo = comboYeniMuaddelBirimi->ItemIndex+1;
    editYeniMuaddelBirimOrani->Text = frmOlcuBirimi->tblOLCUBIRIM_ORANI->Value;
    frmOlcuBirimi->tblOLCU->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmBirimOranDegistir::comboYeniOlcuBirimiChange(
      TObject *Sender)
{
    frmOlcuBirimi->tblOLCU->Open();
    frmOlcuBirimi->tblOLCU->RecNo = comboYeniOlcuBirimi->ItemIndex+1;
    editYeniOlcuBirimOrani->Text = frmOlcuBirimi->tblOLCUBIRIM_ORANI->Value;
    frmOlcuBirimi->tblOLCU->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmBirimOranDegistir::BitBtn2Click(TObject *Sender)
{
    SpeedButton2Click(Sender);
    frmBirimOranDegistir->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmBirimOranDegistir::SpeedButton1Click(TObject *Sender)
{
    frmStokListesi->Show();
    frmStokListesi->Caption = "Stok Listesi [Birim Oraný Deðiþtirme]";
}
//---------------------------------------------------------------------------

void __fastcall TfrmBirimOranDegistir::SpeedButton2Click(TObject *Sender)
{
    Label8->Caption = "% 0";

    editDepartman->Clear();
    editStokKodu->Clear();
    editStokAdi->Clear();
    editEskiOlcuBirimi->Clear();
    editOlcuEskiBirimOrani->Clear();
    editEskiMuaddelBirimi->Clear();
    editEskiMuaddelBirimOrani->Clear();
    editYeniOlcuBirimOrani->Clear();
    editYeniMuaddelBirimOrani->Clear();

    // Ölçü Birimi ComboBox'ýna kayýt ekleniyor...
    comboYeniMuaddelBirimi->Items->Clear();
    comboYeniOlcuBirimi->Items->Clear();
    frmOlcuBirimi->tblOLCU->Open();
    frmOlcuBirimi->tblOLCU->First();
    while (!frmOlcuBirimi->tblOLCU->Eof) {
        comboYeniMuaddelBirimi->Items->Add(frmOlcuBirimi->tblOLCUTANIMLAMA->Value);
        comboYeniOlcuBirimi->Items->Add(frmOlcuBirimi->tblOLCUTANIMLAMA->Value);
        frmOlcuBirimi->tblOLCU->Next();
    }
    frmOlcuBirimi->tblOLCU->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmBirimOranDegistir::Timer1Timer(TObject *Sender)
{
    if (editStokKodu->Text.Length() == 0) {
        BitBtn1->Enabled = false;
    }
    else
        BitBtn1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmBirimOranDegistir::BitBtn1Click(TObject *Sender)
{
    Animate1->Active = true;
    // Stok Kartý Datadan filtreleniyor...
    tblSTOKANA->Open();
    tblSTOKANA->Filter = "[INDEKS]='"+editDepartman->Text+editStokKodu->Text+"'";
    tblSTOKANA->Filtered = true;

    // Muaddel Oranýný düzenle ...
    if (editYeniMuaddelBirimOrani->Text.Length() != 0
            && comboYeniMuaddelBirimi->Text.Length() != 0) {
        queryDUZENLE->Close();
        queryDUZENLE->SQL->Clear();
        queryDUZENLE->SQL->Add("UPDATE URUNANA");
        queryDUZENLE->SQL->Add("SET MALZEMEMIKTARI = (MALZEMEMIKTARI /"
            + editEskiMuaddelBirimOrani->Text+") * "
            + editYeniMuaddelBirimOrani->Text);
        queryDUZENLE->SQL->Add("WHERE MALZEMEKODU='"
            + editDepartman->Text + editStokKodu->Text+"'");
        queryDUZENLE->ExecSQL();

        tblSTOKANA->Edit();
        tblSTOKANAMUADDEL_BIRIMI->Value = comboYeniMuaddelBirimi->Text;
        tblSTOKANA->Edit();
        tblSTOKANAMUADDEL_BIRIM_ORANI->Value = StrToFloat(editYeniMuaddelBirimOrani->Text);
        tblSTOKANA->Post();
    }
    // --------------------------------------------- Kaynak Kodu Sonu

    // Ölçü Birimi Oranýný Stok Durumu ve Stok Hareketinde düzenle...
    if (editYeniOlcuBirimOrani->Text.Length() != 0
            && comboYeniOlcuBirimi->Text.Length() != 0) {
        // Stok Durumunda ayarlanýyor...
        queryDUZENLE->Close();
        queryDUZENLE->SQL->Clear();
        queryDUZENLE->SQL->Add("UPDATE STOKDURUMU");
        queryDUZENLE->SQL->Add("SET MIKTAR = (MIKTAR /"
            + editOlcuEskiBirimOrani->Text+") * "
            + editYeniOlcuBirimOrani->Text);
        queryDUZENLE->SQL->Add("WHERE DEPARTMAN='"
            + editDepartman->Text + "' AND STOKKODU = " + editStokKodu->Text);
        queryDUZENLE->ExecSQL();

        // Stok Hareketinde ayarlanýyor...
        queryDUZENLE->Close();
        queryDUZENLE->SQL->Clear();
        queryDUZENLE->SQL->Add("UPDATE STOKHAR");
        queryDUZENLE->SQL->Add("SET MIKTAR = (MIKTAR /"
            + editOlcuEskiBirimOrani->Text+") * "
            + editYeniOlcuBirimOrani->Text);
        queryDUZENLE->SQL->Add("WHERE DEPARTMAN='"
            + editDepartman->Text + "' AND KOD = " + editStokKodu->Text);
        queryDUZENLE->ExecSQL();
        // --------------------------------------------- Kaynak Kodu Sonu

        tblSTOKANA->Edit();
        tblSTOKANAOLCU_BIRIMI->Value = comboYeniOlcuBirimi->Text;
        tblSTOKANA->Edit();
        tblSTOKANABIRIM_ORANI->Value = StrToFloat(editYeniOlcuBirimOrani->Text);
        tblSTOKANA->Post();
    }
    tblSTOKANA->Close();
    Animate1->Active = false;    
}
//---------------------------------------------------------------------------

