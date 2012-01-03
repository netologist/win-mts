//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "sifregiris.h"
#include "sifre.h"
#include "anamenu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSifre *frmSifre;
//---------------------------------------------------------------------------
__fastcall TfrmSifre::TfrmSifre(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmSifre::BitBtn1Click(TObject *Sender)
{
    GirisIzni();
    querySIFREKONTROL->Close();
    querySIFREKONTROL->Open();

    if (querySIFREKONTROL->RecordCount == 0
        && (editKULLANICI->Text == "yonetici" && editPAROLA->Text == "okos2003"))
    {
        sbtnKILIT->Enabled = false;
        frmAnaMenu->TrayIcon1->Visible = true;
        frmSifre->Hide();
        // Çok basit bir kontür sayacý...
        // Sayacýn tutulduðu alanýn adý ISLETME_GIDERI...
        tblPARAMETRE->Open();
        tblPARAMETRE->Edit();
        tblPARAMETREISLETME_GIDERI->Value += 1;
        tblPARAMETRE->Post();
        tblPARAMETRE->Close();
        // Sayac kodunun sonu...
        frmAnaMenu->Show();
    }
    else {
        querySIFREKONTROL->Filter = "[PAROLA]='"+editPAROLA->Text
            +"' AND [KULLANICI]='"+editKULLANICI->Text+"'";
        querySIFREKONTROL->Filtered = true;

        if (querySIFREKONTROLKULLANICI->Value.Length() > 0) {
            sbtnKILIT->Enabled = false;
            frmAnaMenu->TrayIcon1->Visible = true;
            // Çok basit bir kontür sayacý...
            // Sayacýn tutulduðu alanýn adý ISLETME_GIDERI...
            tblPARAMETRE->Open();
            tblPARAMETRE->Edit();
            tblPARAMETREISLETME_GIDERI->Value += 1;
            tblPARAMETRE->Post();
            tblPARAMETRE->Close();
            // Sayac kodunun sonu...
            frmSifre->Hide();
            if (frmAnaMenu->WindowState == wsMinimized)
                frmAnaMenu->TrayIcon1->Restore();
            frmAnaMenu->Show();
            frmAnaMenu->TrayIcon1->PopupMenu = frmAnaMenu->popupSYSTEMTRAY;
        }
        else {
            Application->MessageBoxA("Kullanýcý adý yada parolasý yanlýþ.",
                "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmSifre::BitBtn2Click(TObject *Sender)
{
    frmAnaMenu->Database->Connected = false;
    frmSifre->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSifre::FormShow(TObject *Sender)
{
    frmAnaMenu->TrayIcon1->Visible = false;
    sbtnKILIT->Enabled = true;
    editKULLANICI->Clear();
    editPAROLA->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSifre::GirisIzni(void)
{
    tblPARAMETRE->Open();
    if (tblPARAMETREISLETME_GIDERI->Value > 5000) {
        Application->MessageBoxA("Unknown error", "Error", MB_OK + MB_ICONERROR);
        tblPARAMETRE->Close();
        frmSifre->Close();
    }
    tblPARAMETRE->Close();
}

