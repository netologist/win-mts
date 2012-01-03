//---------------------------------------------------------------------------

#ifndef fiyatlandirmaH
#define fiyatlandirmaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmFiyatAyarlama : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TQuery *querySTOKANA;
    TStringField *querySTOKANAINDEKS;
    TStringField *querySTOKANADEPARTMAN;
    TFloatField *querySTOKANAKOD;
    TStringField *querySTOKANACINSI_KUTUSU;
    TStringField *querySTOKANACINSI;
    TStringField *querySTOKANAADI;
    TStringField *querySTOKANAOLCU_BIRIMI;
    TFloatField *querySTOKANABIRIM_ORANI;
    TFloatField *querySTOKANABIRIM_FIYATI;
    TFloatField *querySTOKANAKDV_ORANI;
    TFloatField *querySTOKANADEVIR_MIKTARI;
    TFloatField *querySTOKANASON_DURUM;
    TFloatField *querySTOKANAMALIYETI;
    TFloatField *querySTOKANAISLETME_KARI;
    TFloatField *querySTOKANAISLETME_GIDERI;
    TFloatField *querySTOKANAARA_TOPLAM;
    TFloatField *querySTOKANAKDV_TUTARI;
    TFloatField *querySTOKANAGENEL_TOPLAM;
    TFloatField *querySTOKANAYUVARLAMA;
    TDateField *querySTOKANATARIH;
    TTimeField *querySTOKANASAAT;
    TPanel *Panel1;
    TAnimate *Animate1;
    TSpeedButton *SpeedButton1;
    TGroupBox *GroupBox2;
    TLabel *Label1;
    TLabel *Label2;
    TEdit *editStokKodu;
    TEdit *editStokAdi;
    TQuery *querySTOKGIRISI;
    TFloatField *querySTOKGIRISIHAREKETINDEKS;
    TBooleanField *querySTOKGIRISIHAREKETTURU;
    TStringField *querySTOKGIRISIBELGENO;
    TDateField *querySTOKGIRISITARIH;
    TStringField *querySTOKGIRISIDEPARTMAN;
    TFloatField *querySTOKGIRISISTOKKODU;
    TStringField *querySTOKGIRISISTOKADI;
    TFloatField *querySTOKGIRISIBIRIMFIYATI;
    TFloatField *querySTOKGIRISIMIKTAR;
    TFloatField *querySTOKGIRISITUTAR;
    TQuery *querySTOKCIKISI;
    TFloatField *querySTOKCIKISISUMOFMIKTAR;
    TTimeField *querySTOKGIRISISAAT;
    TTable *tblSTOKANA;
    TStringField *tblSTOKANAINDEKS;
    TStringField *tblSTOKANADEPARTMAN;
    TFloatField *tblSTOKANAKOD;
    TStringField *tblSTOKANACINSI_KUTUSU;
    TStringField *tblSTOKANACINSI;
    TStringField *tblSTOKANAADI;
    TStringField *tblSTOKANAOLCU_BIRIMI;
    TFloatField *tblSTOKANABIRIM_ORANI;
    TFloatField *tblSTOKANABIRIM_FIYATI;
    TFloatField *tblSTOKANAKDV_ORANI;
    TFloatField *tblSTOKANADEVIR_MIKTARI;
    TFloatField *tblSTOKANASON_DURUM;
    TFloatField *tblSTOKANAMALIYETI;
    TFloatField *tblSTOKANAISLETME_KARI;
    TFloatField *tblSTOKANAISLETME_GIDERI;
    TFloatField *tblSTOKANAARA_TOPLAM;
    TFloatField *tblSTOKANAKDV_TUTARI;
    TFloatField *tblSTOKANAGENEL_TOPLAM;
    TFloatField *tblSTOKANAYUVARLAMA;
    TDateField *tblSTOKANATARIH;
    TTimeField *tblSTOKANASAAT;
    TRadioGroup *RadioGroup1;
    TComboBox *comboDepartman;
    TLabel *Label3;
    TProgressBar *ProgressBar1;
    TLabel *labelYUZDE;
    TBevel *Bevel1;
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FiyatlandirmayiBaslat(void);
    void __fastcall LIFOyaGoreFiyatlandir(void);
    void __fastcall FIFOyaGoreFiyatlandir(void);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmFiyatAyarlama(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmFiyatAyarlama *frmFiyatAyarlama;
//---------------------------------------------------------------------------
#endif
