//---------------------------------------------------------------------------

#ifndef topludokumH
#define topludokumH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <Menus.hpp>
#include <ImgList.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TfrmTopluRapor : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label18;
    TLabel *Label19;
    TDBGrid *DBGrid4;
    TEdit *editAdaGore;
    TEdit *editKodaGore;
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TStaticText *StaticText1;
    TDBGrid *DBGrid2;
    TStaticText *StaticText2;
    TSpeedButton *SpeedButton1;
    TAnimate *Animate1;
    TLabel *Label1;
    TQuery *querySTOKLIST;
    TStringField *querySTOKLISTINDEKS;
    TStringField *querySTOKLISTDEPARTMAN;
    TFloatField *querySTOKLISTKOD;
    TStringField *querySTOKLISTCINSI_KUTUSU;
    TStringField *querySTOKLISTCINSI;
    TStringField *querySTOKLISTADI;
    TStringField *querySTOKLISTOLCU_BIRIMI;
    TFloatField *querySTOKLISTBIRIM_ORANI;
    TFloatField *querySTOKLISTBIRIM_FIYATI;
    TFloatField *querySTOKLISTKDV_ORANI;
    TFloatField *querySTOKLISTDEVIR_MIKTARI;
    TFloatField *querySTOKLISTSON_DURUM;
    TFloatField *querySTOKLISTMALIYETI;
    TFloatField *querySTOKLISTISLETME_KARI;
    TFloatField *querySTOKLISTISLETME_GIDERI;
    TFloatField *querySTOKLISTARA_TOPLAM;
    TFloatField *querySTOKLISTKDV_TUTARI;
    TFloatField *querySTOKLISTGENEL_TOPLAM;
    TFloatField *querySTOKLISTYUVARLAMA;
    TDataSource *dsrcSTOKLIST;
    TLabel *Label2;
    TDataSource *dsrcMALZEMELIST;
    TTable *tblMALZEMELIST;
    TStringField *tblMALZEMELISTINDEKS;
    TFloatField *tblMALZEMELISTKOD;
    TStringField *tblMALZEMELISTAD;
    TTimer *Timer1;
    TPopupMenu *popupMALZEME;
    TMenuItem *Sil1;
    TMenuItem *TabloyuBoalt1;
    TImageList *ImageList1;
    TDataSource *dsrcURUNLISTESI;
    TQuery *queryURUNLISTESI;
    TTable *tblURUNLISTESI;
    TQuery *queryURETIMANA;
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
    TStringField *queryURETIMANAURUNKODU;
    TStringField *tblURUNLISTESIINDEKS;
    TFloatField *tblURUNLISTESIKOD;
    TStringField *tblURUNLISTESIAD;
    TSpeedButton *SpeedButton2;
    TComboBox *comboDepartman;
    TComboBox *comboCinsi;
    TRadioGroup *RadioGroup1;
    TLabel *Label3;
    TPopupMenu *popupURUN;
    TMenuItem *Sil2;
    TMenuItem *TabloyuBosalt2;
    TQuery *queryMALZEMELIST;
    TQuery *queryURETIMANA2;
    TStringField *queryURETIMANA2MALZEMEKODU;
    TFloatField *tblURUNLISTESIFIYATI;
    TStringField *tblURUNLISTESIETIN_TURU;
    TFloatField *tblURUNLISTESIGRAMAJI;
    TStringField *queryURETIMANAMALZEMEKODU;
    TFloatField *queryURETIMANAMALZEMEMIKTARI;
    TStringField *queryURUNLISTESIINDEKS;
    TFloatField *queryURUNLISTESIKOD;
    TStringField *queryURUNLISTESIAD;
    TFloatField *queryURUNLISTESIFIYATI;
    TStringField *queryURUNLISTESIETIN_TURU;
    TFloatField *queryURUNLISTESIGRAMAJI;
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall StokListeSorgusu(bool AdaGore);
    void __fastcall comboDepartmanChange(TObject *Sender);
    void __fastcall RadioGroup2Click(TObject *Sender);
    void __fastcall editAdaGoreChange(TObject *Sender);
    void __fastcall editKodaGoreChange(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall DBGrid4DblClick(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall TabloyuBoalt1Click(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall TabloBosalt(void);
    void __fastcall comboCinsiChange(TObject *Sender);
    void __fastcall editKodaGoreClick(TObject *Sender);
    void __fastcall editAdaGoreClick(TObject *Sender);
    void __fastcall Sil2Click(TObject *Sender);
    void __fastcall TabloyuBosalt2Click(TObject *Sender);
    void __fastcall RadioGroup1Click(TObject *Sender);
    void __fastcall UrunArama(void);
    void __fastcall MalzemeArama(void);
    void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmTopluRapor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTopluRapor *frmTopluRapor;
//---------------------------------------------------------------------------
#endif
