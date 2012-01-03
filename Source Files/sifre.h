//---------------------------------------------------------------------------

#ifndef sifreH
#define sifreH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TfrmYoneticiModulu : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TGroupBox *GroupBox2;
    TLabel *Label1;
    TLabel *Label2;
    TGroupBox *GroupBox3;
    TLabel *Label3;
    TComboBox *comboMENULER;
    TCheckBox *checkboxERISEBILME;
    TCheckBox *checkboxYENI_KAYIT;
    TCheckBox *checkboxDEGISIKLIK;
    TCheckBox *checkboxSILME;
    TBevel *Bevel1;
    TToolBar *ToolBar1;
    TToolButton *tbtnYENI;
    TToolButton *tbtnKAYDET;
    TToolButton *tbtnSIL;
    TImageList *ImageList1;
    TCheckBox *checkboxMASKE;
    TBitBtn *BitBtn2;
    TBitBtn *BitBtn1;
    TTable *tblYONETICI;
    TDataSource *dsrcYONETICI;
    TStringField *tblYONETICIKULLANICI;
    TStringField *tblYONETICIPAROLA;
    TStringField *tblYONETICIPAROLA_ONAY;
    TStringField *tblYONETICISTOK_KARTI;
    TStringField *tblYONETICIIC_DAGITIM_GIRISI;
    TStringField *tblYONETICIURUN_HIZMET_CIKISI;
    TStringField *tblYONETICIGUNLUK_SATIS_CIZELGESI;
    TStringField *tblYONETICIRAPOR_SECIMI;
    TStringField *tblYONETICIIMZA_YETKILILERI;
    TStringField *tblYONETICIURUN_CINSI;
    TStringField *tblYONETICIDEPARTMAN_TANIMLAMA;
    TStringField *tblYONETICIBIRIM_ORAN_TANIMLAMA;
    TStringField *tblYONETICISABIT_TANIM_PARAMETRELER;
    TStringField *tblYONETICIFIYAT_AYARLAMA;
    TStringField *tblYONETICIBIRIM_ORAN_DEGISTIRME;
    TStringField *tblYONETICIDEPARTMAN_ADI_DEGISTIRME;
    TStringField *tblYONETICIYONETICI_MODULU;
    TDBEdit *dbeditKULLANICI;
    TDBEdit *dbeditPAROLA;
    TDBEdit *dbeditPAROLA_ONAY;
    TTimer *Timer1;
    TMainMenu *MainMenu1;
    TMenuItem *Dosya1;
    TMenuItem *YeniKullanc1;
    TMenuItem *Kaydet1;
    TMenuItem *Sil1;
    TMenuItem *N1;
    TMenuItem *Kapat1;
    TLabel *Label4;
    void __fastcall checkboxMASKEClick(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall checkboxERISEBILMEClick(TObject *Sender);
    void __fastcall checkboxDEGISIKLIKClick(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall Kapat1Click(TObject *Sender);
    void __fastcall YeniKullanc1Click(TObject *Sender);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    char __fastcall KarakterAyikla(AnsiString cYazi, int nSayi);
    bool __fastcall MenuBilgisiGuncelle(int MenuNo, int CheckBoxNo);
    void __fastcall comboMENULERChange(TObject *Sender);
    void __fastcall tblYONETICIAfterInsert(TDataSet *DataSet);
    void __fastcall MenuBilgisiniYukle(int MenuNo, int CheckBoxNo);
    void __fastcall DBGrid1KeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall checkboxYENI_KAYITClick(TObject *Sender);
    void __fastcall checkboxSILMEClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmYoneticiModulu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmYoneticiModulu *frmYoneticiModulu;
//---------------------------------------------------------------------------
#endif
