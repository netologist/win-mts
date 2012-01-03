//---------------------------------------------------------------------------

#ifndef personelH
#define personelH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmImzaYetkilileri : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBNavigator *DBNavigator1;
    TDBGrid *DBGrid1;
    TGroupBox *GroupBox2;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TDBEdit *dbeditRUTBEDERECESI;
    TDBEdit *dbeditADISOYADI;
    TDBEdit *dbeditRUTBESI;
    TDBEdit *dbeditGOREVI;
    TDataSource *dsrcPERSONEL;
    TTable *tblPERSONEL;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmImzaYetkilileri(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmImzaYetkilileri *frmImzaYetkilileri;
//---------------------------------------------------------------------------
#endif
