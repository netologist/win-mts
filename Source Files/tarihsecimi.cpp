//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "tarihsecimi.h"
#include "stokana.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmTarihSecimi *frmTarihSecimi;
//---------------------------------------------------------------------------
__fastcall TfrmTarihSecimi::TfrmTarihSecimi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmTarihSecimi::BitBtn1Click(TObject *Sender)
{
    tblFIYATGECMISI->Open();
    tblFIYATGECMISI->Insert();
    tblFIYATGECMISI->Edit();
    tblFIYATGECMISIINDEKS->Value = frmStokKarti->tblSTOKANAINDEKS->Value;
    tblFIYATGECMISI->Edit();
    tblFIYATGECMISITARIH->Value = DateTimePicker1->Date;
    tblFIYATGECMISI->Edit();
    tblFIYATGECMISIFIYAT->Value = frmStokKarti->tblSTOKANABIRIM_FIYATI->Value;
    tblFIYATGECMISI->Post();
    tblFIYATGECMISI->Close();

    // Pencere Kapatýlýyor...
    frmTarihSecimi->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTarihSecimi::BitBtn2Click(TObject *Sender)
{
    frmTarihSecimi->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTarihSecimi::FormShow(TObject *Sender)
{
    DateTimePicker1->DateTime = DateTimePicker1->DateTime.CurrentDate(); 
}
//---------------------------------------------------------------------------

void __fastcall TfrmTarihSecimi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    frmStokKarti->FiyatGecmisiGuncelle();
}
//---------------------------------------------------------------------------

