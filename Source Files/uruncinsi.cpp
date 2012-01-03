//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uruncinsi.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmUrunCinsi *frmUrunCinsi;
//---------------------------------------------------------------------------
__fastcall TfrmUrunCinsi::TfrmUrunCinsi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmUrunCinsi::FormShow(TObject *Sender)
{
    tblURUNCINSI->Open();    
}
//---------------------------------------------------------------------------
void __fastcall TfrmUrunCinsi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblURUNCINSI->Close();    
}
//---------------------------------------------------------------------------
