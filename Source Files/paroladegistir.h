//---------------------------------------------------------------------------

#ifndef paroladegistirH
#define paroladegistirH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmParolaDegistir : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TEdit *editESKIPAROLA;
    TLabel *Label2;
    TLabel *Label3;
    TEdit *editYENIPAROLA;
    TEdit *editYENIPAROLAONAY;
    TBevel *Bevel1;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmParolaDegistir(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmParolaDegistir *frmParolaDegistir;
//---------------------------------------------------------------------------
#endif
