//---------------------------------------------------------------------------

#ifndef DepartmanDegisH
#define DepartmanDegisH
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
class TfrmDepartmanAdiDegistir : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TAnimate *Animate1;
    TStatusBar *StatusBar1;
    TSpeedButton *SpeedButton1;
    TGroupBox *GroupBox2;
    TStaticText *StaticText1;
    TComboBox *comboEskiDepartman;
    TStaticText *StaticText2;
    TEdit *editYeniDepartman;
    TTable *tblSTOKANA;
    TQuery *querySTOKANA;
    TStringField *querySTOKANAINDEKS;
    TStringField *querySTOKANADEPARTMAN;
    TFloatField *querySTOKANAKOD;
    TStringField *querySTOKANACINSI_KUTUSU;
    TStringField *querySTOKANACINSI;
    TStringField *querySTOKANAADI;
    TStringField *querySTOKANAOLCU_BIRIMI;
    TFloatField *querySTOKANABIRIM_ORANI;
    TStringField *querySTOKANAMUADDEL_BIRIMI;
    TFloatField *querySTOKANAMUADDEL_BIRIM_ORANI;
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
    TStringField *tblSTOKANAINDEKS;
    TStringField *tblSTOKANADEPARTMAN;
    TFloatField *tblSTOKANAKOD;
    TStringField *tblSTOKANACINSI_KUTUSU;
    TStringField *tblSTOKANACINSI;
    TStringField *tblSTOKANAADI;
    TStringField *tblSTOKANAOLCU_BIRIMI;
    TFloatField *tblSTOKANABIRIM_ORANI;
    TStringField *tblSTOKANAMUADDEL_BIRIMI;
    TFloatField *tblSTOKANAMUADDEL_BIRIM_ORANI;
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
    TQuery *queryURUNANA;
    TQuery *queryFIYATGECMISI;
    TQuery *querySTOKHAR;
    TQuery *querySTOKDURUMU;
    TQuery *querySATISCETVELI;
    TTable *tblDEPARTMAN;
    TStringField *tblDEPARTMANDEPARTMAN;
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmDepartmanAdiDegistir(TComponent* Owner);
    void __fastcall UrunAnaDegistir(AnsiString EskiIndeks, AnsiString YeniIndeks);
    void __fastcall FiyatGecmisiDegistir(AnsiString EskiIndeks, AnsiString YeniIndeks);
    void __fastcall StokDurumuDegistir(AnsiString EskiDepartman, AnsiString YeniDepartman);
    void __fastcall StokHareketiDegistir(AnsiString EskiDepartman, AnsiString YeniDepartman);
    void __fastcall StokSatisCetveliDegistir(AnsiString EskiDepartman, AnsiString YeniDepartman);
    void __fastcall DegisiklikIsleminiUygula(void);    
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmDepartmanAdiDegistir *frmDepartmanAdiDegistir;
//---------------------------------------------------------------------------
#endif
