//---------------------------------------------------------------------------

#ifndef olcuH
#define olcuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmOlcuBirimi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBNavigator *DBNavigator1;
    TDBGrid *DBGrid1;
    TDataSource *dsrcOLCU;
    TTable *tblOLCU;
    TStringField *tblOLCUTANIMLAMA;
    TFloatField *tblOLCUBIRIM_ORANI;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmOlcuBirimi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmOlcuBirimi *frmOlcuBirimi;
//---------------------------------------------------------------------------
#endif
