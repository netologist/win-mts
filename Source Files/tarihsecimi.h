//---------------------------------------------------------------------------

#ifndef tarihsecimiH
#define tarihsecimiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmTarihSecimi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TDateTimePicker *DateTimePicker1;
    TBitBtn *BitBtn1;
    TTable *tblFIYATGECMISI;
    TStringField *tblFIYATGECMISIINDEKS;
    TDateField *tblFIYATGECMISITARIH;
    TFloatField *tblFIYATGECMISIFIYAT;
    TBitBtn *BitBtn2;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmTarihSecimi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTarihSecimi *frmTarihSecimi;
//---------------------------------------------------------------------------
#endif
