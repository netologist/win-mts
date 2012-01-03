//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "departman.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmDepartman *frmDepartman;
//---------------------------------------------------------------------------
__fastcall TfrmDepartman::TfrmDepartman(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmDepartman::FormShow(TObject *Sender)
{
    tblDEPARTMAN->Open();
}
//---------------------------------------------------------------------------
void __fastcall TfrmDepartman::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblDEPARTMAN->Close();    
}
//---------------------------------------------------------------------------
