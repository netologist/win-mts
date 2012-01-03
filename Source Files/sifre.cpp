//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "sifre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TfrmYoneticiModulu *frmYoneticiModulu;
//---------------------------------------------------------------------------
__fastcall TfrmYoneticiModulu::TfrmYoneticiModulu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::checkboxMASKEClick(TObject *Sender)
{
    if (checkboxMASKE->Checked == false) {
        dbeditPAROLA->PasswordChar = NULL;
        dbeditPAROLA_ONAY->PasswordChar = NULL;
    }
    else {
        dbeditPAROLA->PasswordChar = '*';
        dbeditPAROLA_ONAY->PasswordChar = '*';
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::BitBtn2Click(TObject *Sender)
{
    tblYONETICI->Cancel();
    frmYoneticiModulu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::FormShow(TObject *Sender)
{
    Timer1->Enabled = true;
    tblYONETICI->Active = true;
    comboMENULER->ItemIndex = 0;
    comboMENULERChange(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::checkboxERISEBILMEClick(
      TObject *Sender)
{
    MenuBilgisiniYukle(comboMENULER->ItemIndex, 4);

    if (checkboxERISEBILME->Checked == true) {
        checkboxDEGISIKLIK->Enabled = MenuBilgisiGuncelle(comboMENULER->ItemIndex, 1);
        checkboxYENI_KAYIT->Enabled = MenuBilgisiGuncelle(comboMENULER->ItemIndex, 2);
        checkboxSILME->Enabled = MenuBilgisiGuncelle(comboMENULER->ItemIndex, 3);
        checkboxDEGISIKLIKClick(Sender);
    }
    else {
        checkboxDEGISIKLIK->Checked = false;
        checkboxYENI_KAYIT->Enabled = false;
        checkboxDEGISIKLIK->Enabled = false;
        checkboxSILME->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::checkboxDEGISIKLIKClick(
      TObject *Sender)
{
    MenuBilgisiniYukle(comboMENULER->ItemIndex, 5);

    // KayýtDeðiþiklik seçeneði ile baðlantýlý check box
    if (checkboxDEGISIKLIK->Checked == true) {
        checkboxYENI_KAYIT->Enabled = true;
        checkboxSILME->Enabled = true;
    }
    else {
        checkboxYENI_KAYIT->Enabled = false;
        checkboxSILME->Enabled = false;
        checkboxYENI_KAYIT->Checked = false;
        checkboxSILME->Checked = false;
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmYoneticiModulu::Timer1Timer(TObject *Sender)
{
    if (tblYONETICI->RecordCount > 0 || dbeditKULLANICI->Text.Length() > 0) {
        Kaydet1->Enabled = true;
        Sil1->Enabled = true;
        tbtnKAYDET->Enabled = true;
        tbtnSIL->Enabled = true;
    }
    else {
        Kaydet1->Enabled = false;
        Sil1->Enabled = false;
        tbtnKAYDET->Enabled = false;
        tbtnSIL->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::BitBtn1Click(TObject *Sender)
{
    Kaydet1Click(Sender);
    frmYoneticiModulu->Close();    
}
//---------------------------------------------------------------------------

bool __fastcall TfrmYoneticiModulu::MenuBilgisiGuncelle(int MenuNo, int CheckBoxNo)
{
    switch (MenuNo) {
        case 0:
            return KarakterAyikla(tblYONETICISTOK_KARTI->Value, CheckBoxNo) - '0';
        case 1:
            return KarakterAyikla(tblYONETICIIC_DAGITIM_GIRISI->Value, CheckBoxNo) - '0';
        case 2:
            return KarakterAyikla(tblYONETICIURUN_HIZMET_CIKISI->Value, CheckBoxNo) - '0';
        case 3:
            return KarakterAyikla(tblYONETICIGUNLUK_SATIS_CIZELGESI->Value, CheckBoxNo) - '0';
        case 4:
            return KarakterAyikla(tblYONETICIRAPOR_SECIMI->Value, CheckBoxNo) - '0';
        case 5:
            return KarakterAyikla(tblYONETICIIMZA_YETKILILERI->Value, CheckBoxNo) - '0';
        case 6:
            return KarakterAyikla(tblYONETICIURUN_CINSI->Value, CheckBoxNo) - '0';
        case 7:
            return KarakterAyikla(tblYONETICIDEPARTMAN_TANIMLAMA->Value, CheckBoxNo) - '0';
        case 8:
            return KarakterAyikla(tblYONETICIBIRIM_ORAN_TANIMLAMA->Value, CheckBoxNo) - '0';
        case 9:
            return KarakterAyikla(tblYONETICISABIT_TANIM_PARAMETRELER->Value, CheckBoxNo) - '0';
        case 10:
            return KarakterAyikla(tblYONETICIFIYAT_AYARLAMA->Value, CheckBoxNo) - '0';
        case 11:
            return KarakterAyikla(tblYONETICIBIRIM_ORAN_DEGISTIRME->Value, CheckBoxNo) - '0';
        case 12:
            return KarakterAyikla(tblYONETICIDEPARTMAN_ADI_DEGISTIRME->Value, CheckBoxNo) - '0';
        case 13:
            return KarakterAyikla(tblYONETICIYONETICI_MODULU->Value, CheckBoxNo) - '0';
    }
    return -1;
}

void __fastcall TfrmYoneticiModulu::MenuBilgisiniYukle(int MenuNo, int CheckBoxNo)
{
    char charTemp[10];
    bool bDeger;

    memset(charTemp, 0, 10);
    switch (MenuNo) {
        case 0:
            strcpy(charTemp, tblYONETICISTOK_KARTI->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICISTOK_KARTI->Value = AnsiString(charTemp);
            break;
        case 1:
            strcpy(charTemp, tblYONETICIIC_DAGITIM_GIRISI->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIIC_DAGITIM_GIRISI->Value = AnsiString(charTemp);
            break;
        case 2:
            strcpy(charTemp, tblYONETICIURUN_HIZMET_CIKISI->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIURUN_HIZMET_CIKISI->Value = AnsiString(charTemp);
            break;
        case 3:
            strcpy(charTemp, tblYONETICIGUNLUK_SATIS_CIZELGESI->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIGUNLUK_SATIS_CIZELGESI->Value = AnsiString(charTemp);
            break;
        case 4:
            strcpy(charTemp, tblYONETICIRAPOR_SECIMI->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIRAPOR_SECIMI->Value = AnsiString(charTemp);
            break;
        case 5:
            strcpy(charTemp, tblYONETICIIMZA_YETKILILERI->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIIMZA_YETKILILERI->Value = AnsiString(charTemp);
            break;
        case 6:
            strcpy(charTemp, tblYONETICIURUN_CINSI->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIURUN_CINSI->Value = AnsiString(charTemp);
            break;
        case 7:
            strcpy(charTemp, tblYONETICIDEPARTMAN_TANIMLAMA->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIDEPARTMAN_TANIMLAMA->Value = AnsiString(charTemp);
            break;
        case 8:
            strcpy(charTemp, tblYONETICIBIRIM_ORAN_TANIMLAMA->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIBIRIM_ORAN_TANIMLAMA->Value = AnsiString(charTemp);
            break;
        case 9:
            strcpy(charTemp, tblYONETICISABIT_TANIM_PARAMETRELER->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICISABIT_TANIM_PARAMETRELER->Value = AnsiString(charTemp);
            break;
        case 10:
            strcpy(charTemp, tblYONETICIFIYAT_AYARLAMA->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIFIYAT_AYARLAMA->Value = AnsiString(charTemp);
            break;
        case 11:
            strcpy(charTemp, tblYONETICIBIRIM_ORAN_DEGISTIRME->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIBIRIM_ORAN_DEGISTIRME->Value = AnsiString(charTemp);
            break;
        case 12:
            strcpy(charTemp, tblYONETICIDEPARTMAN_ADI_DEGISTIRME->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIDEPARTMAN_ADI_DEGISTIRME->Value = AnsiString(charTemp);
            break;
        case 13:
            strcpy(charTemp, tblYONETICIYONETICI_MODULU->Value.c_str());
            switch (CheckBoxNo) {
                case 4:
                    charTemp[4] = '0' + checkboxERISEBILME->Checked;
                    break;
                case 5:
                    charTemp[5] = '0' + checkboxDEGISIKLIK->Checked;
                    break;
                case 6:
                    charTemp[6] = '0' + checkboxYENI_KAYIT->Checked;
                    break;
                case 7:
                    charTemp[7] = '0' + checkboxSILME->Checked;
                    break;
            }
            tblYONETICI->Edit();
            tblYONETICIYONETICI_MODULU->Value = AnsiString(charTemp);
            break;
    }
}

char __fastcall TfrmYoneticiModulu::KarakterAyikla(AnsiString cYazi, int nSayi)
{
    char *chTemp, chKarakter;

    chTemp = (char *) malloc( cYazi.Length() + 1 );

    if (chTemp != NULL) {
        memset(chTemp, 0, cYazi.Length() + 1);
        strcpy(chTemp, cYazi.c_str());

        chKarakter = chTemp[nSayi];
        free(chTemp);

        return chKarakter;
    }

    return NULL;
}

void __fastcall TfrmYoneticiModulu::Kapat1Click(TObject *Sender)
{
    frmYoneticiModulu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::YeniKullanc1Click(TObject *Sender)
{
    checkboxERISEBILME->Enabled = true;
    checkboxDEGISIKLIK->Enabled = true;
    checkboxYENI_KAYIT->Enabled = true;
    checkboxSILME->Enabled = true;

    checkboxERISEBILME->Checked = true;
    checkboxDEGISIKLIK->Checked = true;
    checkboxYENI_KAYIT->Checked = true;
    checkboxSILME->Checked = true;

    tblYONETICI->Insert();
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::Kaydet1Click(TObject *Sender)
{
    if (UpperCase(dbeditPAROLA->Text) == UpperCase(dbeditPAROLA_ONAY->Text)) {
        tblYONETICI->Edit();
        tblYONETICI->Post();
    }
    else {
        Application->MessageBoxA("Girilen parolalar uyumsuz...",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::Sil1Click(TObject *Sender)
{
   int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES)
        tblYONETICI->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    Timer1->Enabled = false;
    tblYONETICI->Active = false;
}
//---------------------------------------------------------------------------


void __fastcall TfrmYoneticiModulu::comboMENULERChange(TObject *Sender)
{
    // Kayýt Silinebilir && Yeni Kayýt Girebilir...
    checkboxYENI_KAYIT->Enabled = MenuBilgisiGuncelle(comboMENULER->ItemIndex, 2);
    checkboxSILME->Enabled = MenuBilgisiGuncelle(comboMENULER->ItemIndex, 3);
    checkboxYENI_KAYIT->Checked = MenuBilgisiGuncelle(comboMENULER->ItemIndex, 6);
    checkboxSILME->Checked = MenuBilgisiGuncelle(comboMENULER->ItemIndex, 7);

    // Kayýtta Deðiþiklik Yapabilir....
    checkboxDEGISIKLIK->Enabled = MenuBilgisiGuncelle(comboMENULER->ItemIndex, 1);
    checkboxDEGISIKLIK->Checked = MenuBilgisiGuncelle(comboMENULER->ItemIndex, 5);
    checkboxERISEBILME->Checked = MenuBilgisiGuncelle(comboMENULER->ItemIndex, 4);

    checkboxERISEBILMEClick(Sender);
    checkboxDEGISIKLIKClick(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::tblYONETICIAfterInsert(
      TDataSet *DataSet)
{
    tblYONETICI->Edit();
    tblYONETICISTOK_KARTI->Value = "11111111";
    tblYONETICI->Edit();
    tblYONETICIIC_DAGITIM_GIRISI->Value = "11111111";
    tblYONETICI->Edit();
    tblYONETICIURUN_HIZMET_CIKISI->Value = "11111111";
    tblYONETICI->Edit();
    tblYONETICIGUNLUK_SATIS_CIZELGESI->Value = "11111111";
    tblYONETICI->Edit();
    tblYONETICIRAPOR_SECIMI->Value = "10001000";
    tblYONETICI->Edit();
    tblYONETICIIMZA_YETKILILERI->Value = "10001000";
    tblYONETICI->Edit();
    tblYONETICIURUN_CINSI->Value = "10001000";
    tblYONETICI->Edit();
    tblYONETICIDEPARTMAN_TANIMLAMA->Value = "10001000";
    tblYONETICI->Edit();
    tblYONETICIBIRIM_ORAN_TANIMLAMA->Value = "10001000";
    tblYONETICI->Edit();
    tblYONETICISABIT_TANIM_PARAMETRELER->Value = "10001000";
    tblYONETICI->Edit();
    tblYONETICIFIYAT_AYARLAMA->Value = "10001000";
    tblYONETICI->Edit();
    tblYONETICIBIRIM_ORAN_DEGISTIRME->Value = "10001000";
    tblYONETICI->Edit();
    tblYONETICIDEPARTMAN_ADI_DEGISTIRME->Value = "10001000";
    tblYONETICI->Edit();
    tblYONETICIYONETICI_MODULU->Value = "10001000";
}
//---------------------------------------------------------------------------
void __fastcall TfrmYoneticiModulu::DBGrid1KeyUp(TObject *Sender,
      WORD &Key, TShiftState Shift)
{
    comboMENULERChange(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::DBGrid1CellClick(TColumn *Column)
{
    TObject *Sender;

    comboMENULERChange(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::checkboxYENI_KAYITClick(
      TObject *Sender)
{
    MenuBilgisiniYukle(comboMENULER->ItemIndex, 6);
}
//---------------------------------------------------------------------------

void __fastcall TfrmYoneticiModulu::checkboxSILMEClick(TObject *Sender)
{
    MenuBilgisiniYukle(comboMENULER->ItemIndex, 7);    
}
//---------------------------------------------------------------------------

