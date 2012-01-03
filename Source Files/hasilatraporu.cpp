//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "hasilatraporu.h"
#include "anamenu.h"
#include "stoklist.h"
#include "raporayar.h"
#include "departman.h"
#include "sifregiris.h"
#include "sifre.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Trayicon"
#pragma resource "*.dfm"
TfrmGunlukSatisCizelgesi *frmGunlukSatisCizelgesi;

//---------------------------------------------------------------------------
__fastcall TfrmGunlukSatisCizelgesi::TfrmGunlukSatisCizelgesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmGunlukSatisCizelgesi::Timer1Timer(TObject *Sender)
{
    tblSATIS_CETVELI->Active = true;

    if (tblSATIS_CETVELI->Active == true) {
        querySATISCETVELI->Close();
        querySATISCETVELI->ParamByName("DEPARTMAN")->AsString = comboDepartman->Text;
        querySATISCETVELI->ParamByName("TARIH")->AsDate = DateTimePicker1->Date;
        querySATISCETVELI->Open();
        StatusBar1->Panels->Items[2]->Text = querySATISCETVELISUMOFTUTAR->DisplayText;
        querySATISCETVELI->Close();

        ModulKisitlandirma();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::ModulKisitlandirma(void)
{
    bool myEnabled;

    frmSifre->querySIFREKONTROL->Active = true;
    myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLGUNLUK_SATIS_CIZELGESI->Value, 5) - '0';

    if (myEnabled == false) {
        Yeni1->Enabled = false;
        ToolButton1->Enabled = false;

        Kaydet1->Enabled = false;
        ToolButton2->Enabled = false;

        Sil1->Enabled = false;
        Sil2->Enabled = false;
        ToolButton3->Enabled = false;

        DBGrid1->ReadOnly = true;
    }
    else {
        // ************************ Yeni kayýt girilsin mi? kontrolü
        myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLGUNLUK_SATIS_CIZELGESI->Value, 6) - '0';
        if (myEnabled == true) {
            Yeni1->Enabled = true;
            ToolButton1->Enabled = true;
        }
        else {
            Yeni1->Enabled = false;
            ToolButton1->Enabled = false;
        }
        // --------------------------------------- Kod Topluluðu Sonu

        // ************************************* Kayýt Silinsin mi? kontrolü
        myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLGUNLUK_SATIS_CIZELGESI->Value, 7) - '0';
        if (myEnabled == true && tblSATIS_CETVELI->RecordCount > 0) {
            Sil1->Enabled = true;
            Sil2->Enabled = true;
            ToolButton3->Enabled = true;
        }
        else {
            Sil1->Enabled = false;
            Sil2->Enabled = false;
            ToolButton3->Enabled = false;
        }
        // ------------------------------------------ Kod Topluluðu Sonu

        // *************** Kaydetme iþlemini etkinleþtir....
        if (tblSATIS_CETVELI->RecordCount > 0) {
            Kaydet1->Enabled = true;
            ToolButton2->Enabled = true;
        }
        else {
            Kaydet1->Enabled = false;
            ToolButton2->Enabled = false;
        }
        // ------------------------------ Kod Topluluðu Sonu

        // ****************** Database Grid'i aktif et....
        DBGrid1->ReadOnly = false;
    }
    // Rapor Seçimi Aktif mi, Pasif mi?
    myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLRAPOR_SECIMI->Value, 4) - '0';
    rnSat1->Enabled = myEnabled;
    ToolButton8->Enabled = myEnabled;
}

void __fastcall TfrmGunlukSatisCizelgesi::FormShow(TObject *Sender)
{
    tblSATIS_CETVELI->Active = true;
    tblSTOKANA->Active = true;

    // Departman hanesi dolduruluyor...
    comboDepartman->Items->Clear();
    frmDepartman->tblDEPARTMAN->Open();
    frmDepartman->tblDEPARTMAN->First();
    while (!frmDepartman->tblDEPARTMAN->Eof) {
        comboDepartman->Items->Add(frmDepartman->tblDEPARTMANDEPARTMAN->Value);
        frmDepartman->tblDEPARTMAN->Next();
    }
    frmDepartman->tblDEPARTMAN->Close();
    // ----------------------------- Kod Sonu
    comboDepartman->ItemIndex = 0;

    DateTimePicker1->Date = DateTimePicker1->Date.CurrentDate();

    // Table Burada filtreleniyor...
    tblSATIS_CETVELI->Filtered = true;
    tblSATIS_CETVELI->Filter = "[TARIH] = "+DateTimePicker1->DateTime.DateString()
        +" AND "+"[DEPARTMAN] = '"+comboDepartman->Text+"'";

    // Burada querySIFREKONTOL pasif ediliyor.
    // ModulKisitlandirma(); fonksiyonunda aktif ediliyor...
    frmSifre->querySIFREKONTROL->Active = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::tblSATIS_CETVELIAfterInsert(
      TDataSet *DataSet)
{
    tblSATIS_CETVELI->Edit();
    tblSATIS_CETVELITARIH->Value = DateTimePicker1->Date;
    tblSATIS_CETVELIDEPARTMAN->Value = comboDepartman->Text;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::tblSATIS_CETVELIMIKTARChange(
      TField *Sender)
{
    tblSATIS_CETVELI->Edit();
    tblSATIS_CETVELITUTAR->Value =
        tblSATIS_CETVELIBIRIM_FIYATI->Value * tblSATIS_CETVELIMIKTAR->Value;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::comboDepartmanChange(
      TObject *Sender)
{
    tblSATIS_CETVELI->Filtered = true;
    tblSATIS_CETVELI->Filter = "[TARIH] = "+DateTimePicker1->DateTime.DateString()
        +" AND "+"[DEPARTMAN] = '"+comboDepartman->Text+"'";
}
//---------------------------------------------------------------------------


void __fastcall TfrmGunlukSatisCizelgesi::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        if (DBGrid1->SelectedIndex < DBGrid1->FieldCount-1)
            ++DBGrid1->SelectedIndex;
        else {
            DBGrid1->SelectedIndex = 0;
            // Kayýt ediliyor....
            Kaydet1Click(Sender);
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::Kaydet1Click(TObject *Sender)
{
    tblSATIS_CETVELI->Edit();
    tblSATIS_CETVELI->Post();
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::Yeni1Click(TObject *Sender)
{
    tblSATIS_CETVELI->Insert();
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::Sil1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES)
        tblSATIS_CETVELI->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::tblSATIS_CETVELIBIRIM_FIYATIChange(
      TField *Sender)
{
    tblSATIS_CETVELI->Edit();
    tblSATIS_CETVELITUTAR->Value =
        tblSATIS_CETVELIBIRIM_FIYATI->Value * tblSATIS_CETVELIMIKTAR->Value;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::Sil2Click(TObject *Sender)
{
    Sil1Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::DateTimePicker1Change(
      TObject *Sender)
{
    tblSATIS_CETVELI->Filtered = true;
    tblSATIS_CETVELI->Filter = "[TARIH] = "+DateTimePicker1->DateTime.DateString()
        +" AND "+"[DEPARTMAN] = '"+comboDepartman->Text+"'";
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::ToolButton9Click(TObject *Sender)
{
    DateTimePicker1->DateTime = DateTimePicker1->DateTime.CurrentDate();

    tblSATIS_CETVELI->Filtered = true;
    tblSATIS_CETVELI->Filter = "[TARIH] = "+DateTimePicker1->DateTime.DateString()
        +" AND "+"[DEPARTMAN] = '"+comboDepartman->Text+"'";
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::tblSATIS_CETVELISTOK_KODUChange(
      TField *Sender)
{
    tblSTOKANA->Active = true;
    tblSTOKANA->Filtered = true;
    tblSTOKANA->Filter = "[DEPARTMAN]='"+comboDepartman->Text+"' AND [KOD]="+tblSATIS_CETVELISTOK_KODU->Value;

    if (tblSTOKANA->RecordCount > 0) {
        tblSATIS_CETVELI->Edit();
        tblSATIS_CETVELISTOK_ADI->Value = tblSTOKANAADI->Value;
        tblSATIS_CETVELI->Edit();
        tblSATIS_CETVELIOLCU_BIRIMI->Value = tblSTOKANAOLCU_BIRIMI->Value;
        tblSATIS_CETVELI->Edit();
        tblSATIS_CETVELIBIRIM_FIYATI->Value = tblSTOKANABIRIM_FIYATI->Value;

        ++DBGrid1->SelectedIndex;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::A1Click(TObject *Sender)
{
    frmStokListesi->Caption = "Stok Listesi [Günlük Satýþ Çizelgesi]";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------


void __fastcall TfrmGunlukSatisCizelgesi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    frmAnaMenu->Database->Connected = false;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGunlukSatisCizelgesi::rnSat1Click(TObject *Sender)
{
    frmRaporSecimi->Show();
    frmRaporSecimi->RadioGroup1->ItemIndex = 5;
    frmRaporSecimi->DateTimePicker2->DateTime = DateTimePicker1->DateTime;
    frmRaporSecimi->comboDepartmanBaslangic->ItemIndex = comboDepartman->ItemIndex + 1;
}
//---------------------------------------------------------------------------


