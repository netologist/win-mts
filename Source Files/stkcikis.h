//---------------------------------------------------------------------------

#ifndef stkcikisH
#define stkcikisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ToolWin.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TfrmStokCikisi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TToolBar *ToolBar1;
    TToolButton *ToolButton1;
    TToolButton *ToolButton2;
    TToolButton *ToolButton3;
    TToolButton *ToolButton4;
    TToolButton *ToolButton5;
    TImageList *ImageList1;
    TDBGrid *DBGrid1;
    TStatusBar *StatusBar1;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmStokCikisi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmStokCikisi *frmStokCikisi;
//---------------------------------------------------------------------------
#endif
