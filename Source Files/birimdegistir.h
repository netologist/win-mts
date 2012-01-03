//---------------------------------------------------------------------------

#ifndef birimdegistirH
#define birimdegistirH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmBirimOranDegistir : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TEdit *editDepartman;
    TEdit *editStokKodu;
    TEdit *editStokAdi;
    TEdit *editEskiMuaddelBirimi;
    TEdit *editEskiMuaddelBirimOrani;
    TEdit *editEskiOlcuBirimi;
    TEdit *editOlcuEskiBirimOrani;
    TBevel *Bevel1;
    TSpeedButton *SpeedButton1;
    TEdit *editYeniMuaddelBirimOrani;
    TEdit *editYeniOlcuBirimOrani;
    TComboBox *comboYeniMuaddelBirimi;
    TComboBox *comboYeniOlcuBirimi;
    TStaticText *StaticText1;
    TStaticText *StaticText2;
    TAnimate *Animate1;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TProgressBar *ProgressBar1;
    TLabel *Label8;
    TStatusBar *StatusBar1;
    TSpeedButton *SpeedButton2;
    TTimer *Timer1;
    TQuery *queryDUZENLE;
    TTable *tblSTOKANA;
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
    void __fastcall FormShow(TObject *Sender);
    void __fastcall comboYeniMuaddelBirimiChange(TObject *Sender);
    void __fastcall comboYeniOlcuBirimiChange(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmBirimOranDegistir(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmBirimOranDegistir *frmBirimOranDegistir;
//---------------------------------------------------------------------------
#endif
