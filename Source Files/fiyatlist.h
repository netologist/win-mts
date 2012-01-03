//---------------------------------------------------------------------------

#ifndef fiyatlistH
#define fiyatlistH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmOzelFiyatListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TDBGrid *DBGrid2;
    TEdit *Edit1;
    TLabel *Label1;
    TLabel *Label2;
    TEdit *Edit2;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmOzelFiyatListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmOzelFiyatListesi *frmOzelFiyatListesi;
//---------------------------------------------------------------------------
#endif
