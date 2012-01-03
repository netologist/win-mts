//---------------------------------------------------------------------------

#ifndef kartkopyalaH
#define kartkopyalaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmKartKopyala : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TStaticText *StaticText1;
    TStaticText *StaticText2;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TComboBox *ComboBox1;
    TComboBox *ComboBox2;
    TEdit *Edit1;
    TEdit *Edit2;
    TEdit *Edit3;
    TEdit *Edit4;
    TSpeedButton *SpeedButton1;
    TAnimate *Animate1;
    TQuery *queryYENIKOD;
    TStringField *queryYENIKODINDEKS;
    TStringField *queryYENIKODDEPARTMAN;
    TFloatField *queryYENIKODKOD;
    TStringField *queryYENIKODCINSI_KUTUSU;
    TStringField *queryYENIKODCINSI;
    TStringField *queryYENIKODADI;
    TStringField *queryYENIKODOLCU_BIRIMI;
    TFloatField *queryYENIKODBIRIM_ORANI;
    TFloatField *queryYENIKODBIRIM_FIYATI;
    TFloatField *queryYENIKODKDV_ORANI;
    TFloatField *queryYENIKODDEVIR_MIKTARI;
    TFloatField *queryYENIKODSON_DURUM;
    TFloatField *queryYENIKODMALIYETI;
    TFloatField *queryYENIKODISLETME_KARI;
    TFloatField *queryYENIKODISLETME_GIDERI;
    TFloatField *queryYENIKODARA_TOPLAM;
    TFloatField *queryYENIKODKDV_TUTARI;
    TFloatField *queryYENIKODGENEL_TOPLAM;
    TFloatField *queryYENIKODYUVARLAMA;
    TTable *tblSTOKANA;
    TTable *tblURETIMANA;
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
    TStringField *tblURETIMANAURUNKODU;
    TStringField *tblURETIMANAMALZEMEKODU;
    TFloatField *tblURETIMANAMALZEMEMIKTARI;
    TDateField *tblSTOKANATARIH;
    TTimeField *tblSTOKANASAAT;
    TStringField *tblSTOKANAMUADDEL_BIRIMI;
    TFloatField *tblSTOKANAMUADDEL_BIRIM_ORANI;
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall ComboBox2Change(TObject *Sender);
    void __fastcall UretimAnaOlustur(void);
    void __fastcall StokAnaOlustur(void);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmKartKopyala(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmKartKopyala *frmKartKopyala;
//---------------------------------------------------------------------------
#endif
