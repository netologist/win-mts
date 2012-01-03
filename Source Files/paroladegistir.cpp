//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "paroladegistir.h"
#include "sifre.h"
#include "sifregiris.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmParolaDegistir *frmParolaDegistir;
//---------------------------------------------------------------------------
__fastcall TfrmParolaDegistir::TfrmParolaDegistir(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmParolaDegistir::BitBtn1Click(TObject *Sender)
{
    if (UpperCase(frmSifre->querySIFREKONTROLPAROLA->Value)
        == UpperCase(editESKIPAROLA->Text))
    {
        if (UpperCase(editYENIPAROLA->Text)
            == UpperCase(editYENIPAROLAONAY->Text))
        {
            frmYoneticiModulu->tblYONETICI->Open();

            frmYoneticiModulu->tblYONETICI->Filtered = true;
            frmYoneticiModulu->tblYONETICI->Filter = "[KULLANICI]='"+
                frmSifre->querySIFREKONTROLKULLANICI->Value+"'";
            frmYoneticiModulu->tblYONETICI->Edit();
            frmYoneticiModulu->tblYONETICIPAROLA->Value = editYENIPAROLA->Text;
            frmYoneticiModulu->tblYONETICI->Edit();
            frmYoneticiModulu->tblYONETICIPAROLA_ONAY->Value = editYENIPAROLAONAY->Text;
            frmYoneticiModulu->tblYONETICI->Post();
            frmYoneticiModulu->tblYONETICI->Filtered = false;

            frmYoneticiModulu->tblYONETICI->Close();

            Application->MessageBoxA("Parola baþarýyla deðiþtirildi...",
                "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
            frmParolaDegistir->Close();
        }
        else {
          Application->MessageBoxA("Yeni girilen paralolar uyumsuz...",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
        }
    }
    else {
        Application->MessageBoxA("Eski parolanýzý doðru girmediniz !..",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmParolaDegistir::FormShow(TObject *Sender)
{
    frmSifre->querySIFREKONTROL->Open();

    frmParolaDegistir->Caption = "Parola Deðiþikliði -> [ "
        +frmSifre->querySIFREKONTROLKULLANICI->Value+" ]";
}
//---------------------------------------------------------------------------
void __fastcall TfrmParolaDegistir::BitBtn2Click(TObject *Sender)
{
    frmParolaDegistir->Close();    
}
//---------------------------------------------------------------------------
