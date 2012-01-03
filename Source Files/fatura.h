//---------------------------------------------------------------------------

#ifndef faturaH
#define faturaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
#define IS_DAGITIM_GIRISI       true
#define URUN_VE_HIZMET_GIRISI   false
//---------------------------------------------------------------------------
class TfrmStokHareketi : public TForm
{
__published:	// IDE-managed Components
    TToolBar *ToolBar1;
    TToolButton *tbtnYENI;
    TToolButton *tbtnKAYDET;
    TToolButton *tbtnSIL;
    TImageList *ImageList1;
    TToolButton *ToolButton4;
    TToolButton *tbtnAC;
    TGroupBox *GroupBox2;
    TDBGrid *DBGrid1;
    TToolButton *ToolButton6;
    TStatusBar *StatusBar1;
    TToolButton *ToolButton7;
    TComboBox *comboDepartman;
    TMainMenu *MainMenu1;
    TMenuItem *Dosya1;
    TMenuItem *Yeni1;
    TMenuItem *Kaydet1;
    TMenuItem *Sil1;
    TMenuItem *N1;
    TMenuItem *A1;
    TMenuItem *N2;
    TMenuItem *k1;
    TMenuItem *Rapor1;
    TDataSource *dsrcSTOKHAREKETI;
    TTable *tblSTOKHAREKETI;
    TFloatField *tblSTOKHAREKETIHAREKETINDEKS;
    TBooleanField *tblSTOKHAREKETIHAREKETTURU;
    TDateField *tblSTOKHAREKETITARIH;
    TTimeField *tblSTOKHAREKETISAAT;
    TStringField *tblSTOKHAREKETIDEPARTMAN;
    TStringField *tblSTOKHAREKETICINSI;
    TFloatField *tblSTOKHAREKETIKOD;
    TStringField *tblSTOKHAREKETIAD;
    TFloatField *tblSTOKHAREKETIBIRIMFIYATI;
    TFloatField *tblSTOKHAREKETIMIKTAR;
    TFloatField *tblSTOKHAREKETITUTAR;
    TStringField *tblSTOKHAREKETIBELGENO;
    TPopupMenu *PopupMenu1;
    TMenuItem *Sil2;
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
    TTable *tblSTOKDURUMU;
    TQuery *queryURUNANA;
    TFloatField *tblSTOKDURUMUHAREKETINDEKS;
    TBooleanField *tblSTOKDURUMUHAREKETTURU;
    TStringField *tblSTOKDURUMUBELGENO;
    TDateField *tblSTOKDURUMUTARIH;
    TStringField *tblSTOKDURUMUDEPARTMAN;
    TFloatField *tblSTOKDURUMUSTOKKODU;
    TStringField *tblSTOKDURUMUSTOKADI;
    TFloatField *tblSTOKDURUMUBIRIMFIYATI;
    TFloatField *tblSTOKDURUMUMIKTAR;
    TFloatField *tblSTOKDURUMUTUTAR;
    TQuery *queryHAREKETINDEKSNO;
    TFloatField *queryHAREKETINDEKSNOHAREKETINDEKS;
    TQuery *querySTOKDURUMSIL;
    TStringField *queryURUNANAURUNKODU;
    TStringField *queryURUNANAMALZEMEKODU;
    TFloatField *queryURUNANAMALZEMEMIKTARI;
    TQuery *querySTOKHAREKETITOPLAM;
    TFloatField *querySTOKHAREKETITOPLAMSUMOFTUTAR;
    TTable *tblSTOKANA2;
    TStringField *tblSTOKANA2INDEKS;
    TStringField *tblSTOKANA2DEPARTMAN;
    TFloatField *tblSTOKANA2KOD;
    TStringField *tblSTOKANA2CINSI_KUTUSU;
    TStringField *tblSTOKANA2CINSI;
    TStringField *tblSTOKANA2ADI;
    TStringField *tblSTOKANA2OLCU_BIRIMI;
    TFloatField *tblSTOKANA2BIRIM_ORANI;
    TFloatField *tblSTOKANA2BIRIM_FIYATI;
    TFloatField *tblSTOKANA2KDV_ORANI;
    TFloatField *tblSTOKANA2DEVIR_MIKTARI;
    TFloatField *tblSTOKANA2SON_DURUM;
    TFloatField *tblSTOKANA2MALIYETI;
    TFloatField *tblSTOKANA2ISLETME_KARI;
    TFloatField *tblSTOKANA2ISLETME_GIDERI;
    TFloatField *tblSTOKANA2ARA_TOPLAM;
    TFloatField *tblSTOKANA2KDV_TUTARI;
    TFloatField *tblSTOKANA2GENEL_TOPLAM;
    TFloatField *tblSTOKANA2YUVARLAMA;
    TDateField *tblSTOKANA2TARIH;
    TTimeField *tblSTOKANA2SAAT;
    TToolButton *ToolButton1;
    TMenuItem *TariheGoreListele1;
    TTimeField *tblSTOKDURUMUSAAT;
    TStringField *tblSTOKANAMUADDEL_BIRIMI;
    TFloatField *tblSTOKANAMUADDEL_BIRIM_ORANI;
    TDateTimePicker *DateTimePicker1;
    TToolButton *ToolButton2;
    TToolButton *ToolButton3;
    TMenuItem *DonemSonuRaporu1;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall k1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall comboDepartmanChange(TObject *Sender);
    void __fastcall tblSTOKHAREKETIAfterInsert(TDataSet *DataSet);
    void __fastcall Sil2Click(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall tblSTOKHAREKETIKODChange(TField *Sender);
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall tblSTOKHAREKETIMIKTARChange(TField *Sender);
    void __fastcall tblSTOKHAREKETIBIRIMFIYATIChange(TField *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall tblSTOKHAREKETIAfterPost(TDataSet *DataSet);
    void __fastcall tblSTOKDURUMUBIRIMFIYATIChange(TField *Sender);
    void __fastcall tblSTOKDURUMUMIKTARChange(TField *Sender);
    void __fastcall StokDurumuSil(void);
    void __fastcall StokDurumuMalzemeEkle(void);
    void __fastcall StokDurumuUrunEkle(void);
    void __fastcall tblSTOKHAREKETIAfterCancel(TDataSet *DataSet);
    void __fastcall HareketToplami(void);
    void __fastcall A1Click(TObject *Sender);
    void __fastcall DateTimePicker1Change(TObject *Sender);
    void __fastcall TariheGoreListele1Click(TObject *Sender);
    void __fastcall DonemSonuRaporu1Click(TObject *Sender);
    void __fastcall DBGrid1KeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall ModulKisitlandirma(void);
    void __fastcall tblSTOKHAREKETIADChange(TField *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall tblSTOKHAREKETIAfterDelete(TDataSet *DataSet);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmStokHareketi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmStokHareketi *frmStokHareketi;
extern bool YeniStokHareketi;
//---------------------------------------------------------------------------
#endif
