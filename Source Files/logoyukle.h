//---------------------------------------------------------------------------

#ifndef logoyukleH
#define logoyukleH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TfrmLogo : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TImage *Image1;
    TBevel *Bevel1;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton2;
    TOpenPictureDialog *OpenPictureDialog1;
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmLogo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmLogo *frmLogo;
//---------------------------------------------------------------------------
#endif
