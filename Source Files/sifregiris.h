//---------------------------------------------------------------------------

#ifndef sifregirisH
#define sifregirisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmSifre : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TEdit *editKULLANICI;
    TEdit *editPAROLA;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TSpeedButton *sbtnKILIT;
    TQuery *querySIFREKONTROL;
    TStringField *querySIFREKONTROLKULLANICI;
    TStringField *querySIFREKONTROLPAROLA;
    TStringField *querySIFREKONTROLPAROLA_ONAY;
    TStringField *querySIFREKONTROLSTOK_KARTI;
    TStringField *querySIFREKONTROLIC_DAGITIM_GIRISI;
    TStringField *querySIFREKONTROLURUN_HIZMET_CIKISI;
    TStringField *querySIFREKONTROLGUNLUK_SATIS_CIZELGESI;
    TStringField *querySIFREKONTROLRAPOR_SECIMI;
    TStringField *querySIFREKONTROLIMZA_YETKILILERI;
    TStringField *querySIFREKONTROLURUN_CINSI;
    TStringField *querySIFREKONTROLDEPARTMAN_TANIMLAMA;
    TStringField *querySIFREKONTROLBIRIM_ORAN_TANIMLAMA;
    TStringField *querySIFREKONTROLSABIT_TANIM_PARAMETRELER;
    TStringField *querySIFREKONTROLFIYAT_AYARLAMA;
    TStringField *querySIFREKONTROLBIRIM_ORAN_DEGISTIRME;
    TStringField *querySIFREKONTROLDEPARTMAN_ADI_DEGISTIRME;
    TStringField *querySIFREKONTROLYONETICI_MODULU;
    TTable *tblPARAMETRE;
    TStringField *tblPARAMETRETANIMLAMA;
    TFloatField *tblPARAMETREISLETME_ORANI;
    TFloatField *tblPARAMETREKAR_ORANI;
    TFloatField *tblPARAMETREISLETME_GIDERI;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall GirisIzni(void);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmSifre(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSifre *frmSifre;
//---------------------------------------------------------------------------
#endif
