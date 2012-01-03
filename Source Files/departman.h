//---------------------------------------------------------------------------

#ifndef departmanH
#define departmanH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmDepartman : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBNavigator *DBNavigator1;
    TDBGrid *DBGrid1;
    TDataSource *dsrcDEPARTMAN;
    TTable *tblDEPARTMAN;
    TStringField *tblDEPARTMANDEPARTMAN;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmDepartman(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmDepartman *frmDepartman;
//---------------------------------------------------------------------------
#endif
