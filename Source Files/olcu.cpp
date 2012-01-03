//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "olcu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmOlcuBirimi *frmOlcuBirimi;
//---------------------------------------------------------------------------
__fastcall TfrmOlcuBirimi::TfrmOlcuBirimi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmOlcuBirimi::FormShow(TObject *Sender)
{
    tblOLCU->Open();
}
//---------------------------------------------------------------------------
void __fastcall TfrmOlcuBirimi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblOLCU->Close();    
}
//---------------------------------------------------------------------------
