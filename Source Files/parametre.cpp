//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "parametre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmParametreler *frmParametreler;
//---------------------------------------------------------------------------
__fastcall TfrmParametreler::TfrmParametreler(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmParametreler::BitBtn1Click(TObject *Sender)
{
    tblPARAMETRE->Edit();
    tblPARAMETRE->Post();
    frmParametreler->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmParametreler::FormShow(TObject *Sender)
{
    tblPARAMETRE->Open();
    if (tblPARAMETRE->IsEmpty() == true) {
        tblPARAMETRE->Insert();
    }
    else {
        tblPARAMETRE->First();
        tblPARAMETRE->Edit();
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmParametreler::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblPARAMETRE->Close();    
}
//---------------------------------------------------------------------------

