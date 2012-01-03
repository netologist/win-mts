//---------------------------------------------------------------------------

#ifndef hasilatraporuH
#define hasilatraporuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <ImgList.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include "Trayicon.h"
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TfrmGunlukSatisCizelgesi : public TForm
{
__published:	// IDE-managed Components
    TDBGrid *DBGrid1;
    TStatusBar *StatusBar1;
    TToolBar *ToolBar1;
    TToolButton *ToolButton1;
    TToolButton *ToolButton2;
    TToolButton *ToolButton3;
    TMainMenu *MainMenu1;
    TMenuItem *Dosya1;
    TMenuItem *Rapor1;
    TImageList *ImageList1;
    TToolButton *ToolButton4;
    TToolButton *ToolButton5;
    TMenuItem *Yeni1;
    TMenuItem *Kaydet1;
    TMenuItem *Sil1;
    TMenuItem *N1;
    TMenuItem *A1;
    TMenuItem *N2;
    TMenuItem *k1;
    TMenuItem *rnSat1;
    TToolButton *ToolButton6;
    TDateTimePicker *DateTimePicker1;
    TToolButton *ToolButton7;
    TComboBox *comboDepartman;
    TToolButton *ToolButton8;
    TDataSource *dsrcSATIS_CETVELI;
    TTable *tblSATIS_CETVELI;
    TTimer *Timer1;
    TDateField *tblSATIS_CETVELITARIH;
    TStringField *tblSATIS_CETVELIDEPARTMAN;
    TFloatField *tblSATIS_CETVELISTOK_KODU;
    TStringField *tblSATIS_CETVELISTOK_ADI;
    TFloatField *tblSATIS_CETVELIMIKTAR;
    TStringField *tblSATIS_CETVELIOLCU_BIRIMI;
    TFloatField *tblSATIS_CETVELIBIRIM_FIYATI;
    TFloatField *tblSATIS_CETVELITUTAR;
    TPopupMenu *PopupMenu1;
    TMenuItem *Sil2;
    TToolButton *ToolButton9;
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
    TQuery *querySATISCETVELI;
    TFloatField *querySATISCETVELISUMOFTUTAR;
    TQuickRep *QuickRep1;
    TQRBand *PageHeaderBand1;
    TQRLabel *qrlabelTARIH;
    TQRLabel *qrlabelISLETME_ADI;
    TQRBand *ColumnHeaderBand1;
    TQRChildBand *ChildBand1;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel10;
    TQRLabel *QRLabel11;
    TQRLabel *QRLabel12;
    TQRLabel *QRLabel13;
    TQRLabel *QRLabel14;
    TQRLabel *QRLabel15;
    TQRLabel *QRLabel16;
    TQRLabel *QRLabel17;
    TQRLabel *QRLabel18;
    TQRLabel *QRLabel19;
    TQRLabel *QRLabel20;
    TQRLabel *QRLabel21;
    TQRBand *DetailBand1;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQRDBText *QRDBText6;
    TQRDBText *QRDBText7;
    TQRShape *QRShape1;
    TQRShape *QRShape2;
    TQRShape *QRShape3;
    TQRShape *QRShape4;
    TQRShape *QRShape5;
    TQRShape *QRShape6;
    TQRShape *QRShape7;
    TQRShape *QRShape8;
    TQRShape *QRShape9;
    TQRShape *QRShape10;
    TQRShape *QRShape11;
    TQRShape *QRShape12;
    TQRShape *QRShape13;
    TQRShape *QRShape14;
    TQRShape *QRShape17;
    TQRShape *QRShape18;
    TQRShape *QRShape19;
    TQRShape *QRShape15;
    TQRShape *QRShape16;
    TQRShape *QRShape20;
    TQRShape *QRShape21;
    TQRShape *QRShape22;
    TQRShape *QRShape23;
    TQRShape *QRShape24;
    TQRShape *QRShape25;
    TQRShape *QRShape26;
    TQRShape *QRShape27;
    TQRShape *QRShape28;
    TQRShape *QRShape29;
    TQRLabel *QRLabel22;
    TQRSysData *QRSysData1;
    TQRBand *SummaryBand1;
    TQRLabel *qrlabelONAY;
    TQRLabel *qrlabelYETKILI1ADI;
    TQRLabel *qrlabelYETKILI1RUTBE;
    TQRLabel *qrlabelYETKILI1GOREVI;
    TQRLabel *qrlabelYETKILI2ADI;
    TQRLabel *qrlabelYETKILI2RUTBE;
    TQRLabel *qrlabelYETKILI2GOREVI;
    TQRLabel *qrlabelYETKILI3ADI;
    TQRLabel *qrlabelYETKILI3RUTBE;
    TQRLabel *qrlabelYETKILI3GOREVI;
    TQRLabel *qrlabelYETKILI4ADI;
    TQRLabel *qrlabelYETKILI4RUTBE;
    TQRLabel *qrlabelYETKILI4GOREVI;
    TQRLabel *qrlabelYETKILI5ADI;
    TQRLabel *qrlabelYETKILI5RUTBE;
    TQRLabel *qrlabelYETKILI5GOREVI;
    TQRShape *QRShape30;
    TQRLabel *QRLabel2;
    TQRShape *QRShape31;
    TQRLabel *QRLabel3;
    TQRShape *QRShape32;
    TQRExpr *QRExpr1;
    TQRExpr *QRExpr2;
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall tblSATIS_CETVELIAfterInsert(TDataSet *DataSet);
    void __fastcall tblSATIS_CETVELIMIKTARChange(TField *Sender);
    void __fastcall comboDepartmanChange(TObject *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall tblSATIS_CETVELIBIRIM_FIYATIChange(TField *Sender);
    void __fastcall Sil2Click(TObject *Sender);
    void __fastcall DateTimePicker1Change(TObject *Sender);
    void __fastcall ToolButton9Click(TObject *Sender);
    void __fastcall tblSATIS_CETVELISTOK_KODUChange(TField *Sender);
    void __fastcall A1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall rnSat1Click(TObject *Sender);
    void __fastcall ModulKisitlandirma(void);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmGunlukSatisCizelgesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmGunlukSatisCizelgesi *frmGunlukSatisCizelgesi;
//---------------------------------------------------------------------------
#endif
