//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "personel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmImzaYetkilileri *frmImzaYetkilileri;
//---------------------------------------------------------------------------
__fastcall TfrmImzaYetkilileri::TfrmImzaYetkilileri(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmImzaYetkilileri::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmImzaYetkilileri::FormShow(TObject *Sender)
{
    tblPERSONEL->Open();    
}
//---------------------------------------------------------------------------

