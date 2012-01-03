//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "logoyukle.h"
#include "anamenu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmLogo *frmLogo;
//---------------------------------------------------------------------------
__fastcall TfrmLogo::TfrmLogo(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmLogo::SpeedButton2Click(TObject *Sender)
{
    OpenPictureDialog1->Execute();
    Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
}
//---------------------------------------------------------------------------

void __fastcall TfrmLogo::SpeedButton1Click(TObject *Sender)
{
    // Seçilen logo kaydediliyor...
    Image1->Picture->SaveToFile(frmAnaMenu->Database->Directory + "LOGO.BMP");

    Application->MessageBoxA("Logo kaydedildi.", "Mesaj", 0);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmLogo::FormShow(TObject *Sender)
{
    Image1->Picture->LoadFromFile(frmAnaMenu->Database->Directory + "LOGO.BMP");
}
//---------------------------------------------------------------------------

void __fastcall TfrmLogo::FormClose(TObject *Sender, TCloseAction &Action)
{
    // Logo Anamenude deðiþtiriliyor...
    frmAnaMenu->Image1->Picture->LoadFromFile(frmAnaMenu->Database->Directory + "LOGO.BMP");
}
//---------------------------------------------------------------------------

