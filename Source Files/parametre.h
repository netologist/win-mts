//---------------------------------------------------------------------------

#ifndef parametreH
#define parametreH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmParametreler : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TDBEdit *DBEdit1;
    TDBEdit *DBEdit2;
    TDBEdit *DBEdit3;
    TBitBtn *BitBtn1;
    TGroupBox *GroupBox1;
    TDataSource *dsrcPARAMETRE;
    TTable *tblPARAMETRE;
    TStringField *tblPARAMETRETANIMLAMA;
    TFloatField *tblPARAMETREISLETME_ORANI;
    TFloatField *tblPARAMETREKAR_ORANI;
    TFloatField *tblPARAMETREISLETME_GIDERI;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmParametreler(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmParametreler *frmParametreler;
//---------------------------------------------------------------------------
#endif
