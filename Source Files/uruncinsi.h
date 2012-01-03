//---------------------------------------------------------------------------

#ifndef uruncinsiH
#define uruncinsiH
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
class TfrmUrunCinsi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBNavigator *DBNavigator1;
    TDBGrid *DBGrid1;
    TDataSource *dsrcURUNCINSI;
    TTable *tblURUNCINSI;
    TStringField *tblURUNCINSIURUNCINSI;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmUrunCinsi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmUrunCinsi *frmUrunCinsi;
//---------------------------------------------------------------------------
#endif
