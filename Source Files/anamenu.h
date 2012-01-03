//---------------------------------------------------------------------------

#ifndef anamenuH
#define anamenuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Menus.hpp>
#include <Graphics.hpp>
#include <ImgList.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include "Trayicon.h"
#include <Grids.hpp>
#include <Outline.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TfrmAnaMenu : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TMainMenu *MainMenu1;
    TMenuItem *StokKart1;
    TMenuItem *StokHareketi1;
    TMenuItem *Raporlar1;
    TMenuItem *Ayarlar1;
    TMenuItem *HammaddeGirileri1;
    TMenuItem *Giriler1;
    TMenuItem *klar1;
    TMenuItem *MaliyetCetveli1;
    TMenuItem *MuaddelCetveli1;
    TMenuItem *HaslatRaporu1;
    TMenuItem *FiyatListesi1;
    TMenuItem *StokDurumu1;
    TMenuItem *ParafAtacakPersonel1;
    TMenuItem *BirimTanmlar1;
    TMenuItem *SabitTanmlar1;
    TMenuItem *Stoklleri1;
    TMenuItem *Yardm1;
    TMenuItem *Hakknda1;
    TStatusBar *StatusBar1;
    TPanel *Panel1;
    TImage *Image1;
    TSpeedButton *SpeedButton1;
    TPopupMenu *popupSTOKHAREKETI;
    TMenuItem *FaturaGirileri1;
    TMenuItem *rnHizmetGirileri1;
    TSpeedButton *SpeedButton2;
    TSpeedButton *SpeedButton3;
    TSpeedButton *SpeedButton4;
    TGroupBox *GroupBox2;
    TPanel *Panel2;
    TImage *Image2;
    TLabel *Label1;
    TLabel *Label2;
    TBitBtn *BitBtn1;
    TLabel *Label3;
    TLabel *Label4;
    TImageList *ImageList1;
    TMenuItem *N1;
    TMenuItem *N2;
    TLabel *Label5;
    TLabel *Label6;
    TMenuItem *rnCinsleriTanmlar1;
    TPopupMenu *popupAYARLAR;
    TMenuItem *mzaYetkilileri1;
    TMenuItem *StoklveBirimleri1;
    TMenuItem *rnCinsiveTanmlar1;
    TMenuItem *DepartmanTanmlar1;
    TMenuItem *SabitTanmalamveParametreler1;
    TSpeedButton *SpeedButton5;
    TMenuItem *rndeMalzemeArama1;
    TDatabase *Database;
    TMenuItem *N3;
    TMenuItem *FIFOyagrefiyatlandrma1;
    TMenuItem *StokHareketi2;
    TTrayIcon *TrayIcon1;
    TPopupMenu *popupSYSTEMTRAY;
    TMenuItem *StokKart2;
    TMenuItem *N4;
    TMenuItem *StokHareketi3;
    TMenuItem *Raporlar2;
    TMenuItem *Ayarlar2;
    TMenuItem *k1;
    TMenuItem *DatmGirileri1;
    TMenuItem *rnHizmetGirileri2;
    TMenuItem *DepartmanAdDeitir1;
    TMenuItem *mzaYetkilileri3;
    TMenuItem *rnCinsiTanmlar2;
    TMenuItem *DepartmanTanmlamalar2;
    TMenuItem *StoklveBirimiTanmlar1;
    TMenuItem *N5;
    TMenuItem *FIFOyaGreFiyatlandrma2;
    TMenuItem *SabitTanmlarveParametreler2;
    TMenuItem *DepartmanAdDeitirmeModl1;
    TMenuItem *Hakknda2;
    TMenuItem *MaliyetCetveli2;
    TMenuItem *MuaddelCetveli2;
    TMenuItem *FiyatListesi2;
    TMenuItem *Malzemernnceleme1;
    TMenuItem *N6;
    TMenuItem *StokSaymRaporu1;
    TMenuItem *GirikHareketi1;
    TMenuItem *N7;
    TMenuItem *GnlkSatizelgesi1;
    TMenuItem *BirimveOranDeitirme1;
    TMenuItem *BirimveOranDeitirme2;
    TMenuItem *N8;
    TMenuItem *YneticiModl1;
    TMenuItem *YneticiModl2;
    TMenuItem *AktifKullancyDeitir2;
    TMenuItem *AktifKullancyDeitir1;
    TTimer *Timer1;
    TMenuItem *ParolaDeitir1;
    TMenuItem *ParolaDeitir2;
    TLabel *Label7;
    TTable *tblGIRISKONTROL;
    TDataSource *dsrcGIRISKONTROL;
    TStringField *tblGIRISKONTROLTANIMLAMA;
    TFloatField *tblGIRISKONTROLISLETME_ORANI;
    TFloatField *tblGIRISKONTROLKAR_ORANI;
    TFloatField *tblGIRISKONTROLISLETME_GIDERI;
    TMenuItem *LogoYkle1;
    TMenuItem *LogoYkle2;
    void __fastcall HammaddeGirileri1Click(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall Giriler1Click(TObject *Sender);
    void __fastcall klar1Click(TObject *Sender);
    void __fastcall FaturaGirileri1Click(TObject *Sender);
    void __fastcall rnHizmetGirileri1Click(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall SpeedButton3Click(TObject *Sender);
    void __fastcall MaliyetCetveli1Click(TObject *Sender);
    void __fastcall MuaddelCetveli1Click(TObject *Sender);
    void __fastcall FiyatListesi1Click(TObject *Sender);
    void __fastcall StokDurumu1Click(TObject *Sender);
    void __fastcall Hakknda1Click(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall ParafAtacakPersonel1Click(TObject *Sender);
    void __fastcall Stoklleri1Click(TObject *Sender);
    void __fastcall BirimTanmlar1Click(TObject *Sender);
    void __fastcall SabitTanmlar1Click(TObject *Sender);
    void __fastcall rnCinsleriTanmlar1Click(TObject *Sender);
    void __fastcall mzaYetkilileri1Click(TObject *Sender);
    void __fastcall StoklveBirimleri1Click(TObject *Sender);
    void __fastcall rnCinsiveTanmlar1Click(TObject *Sender);
    void __fastcall DepartmanTanmlar1Click(TObject *Sender);
    void __fastcall SabitTanmalamveParametreler1Click(TObject *Sender);
    void __fastcall SpeedButton4Click(TObject *Sender);
    void __fastcall TopluMaliyetveMuaddelBasm1Click(TObject *Sender);
    void __fastcall SpeedButton5Click(TObject *Sender);
    void __fastcall rndeMalzemeArama1Click(TObject *Sender);
    void __fastcall FIFOyagrefiyatlandrma1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall StokHareketi2Click(TObject *Sender);
    void __fastcall HaslatRaporu1Click(TObject *Sender);
    void __fastcall k1Click(TObject *Sender);
    void __fastcall DepartmanAdDeitir1Click(TObject *Sender);
    void __fastcall StokKart2Click(TObject *Sender);
    void __fastcall DatmGirileri1Click(TObject *Sender);
    void __fastcall rnHizmetGirileri2Click(TObject *Sender);
    void __fastcall Hakknda2Click(TObject *Sender);
    void __fastcall mzaYetkilileri3Click(TObject *Sender);
    void __fastcall rnCinsiTanmlar2Click(TObject *Sender);
    void __fastcall DepartmanTanmlamalar2Click(TObject *Sender);
    void __fastcall StoklveBirimiTanmlar1Click(TObject *Sender);
    void __fastcall FIFOyaGreFiyatlandrma2Click(TObject *Sender);
    void __fastcall SabitTanmlarveParametreler2Click(TObject *Sender);
    void __fastcall DepartmanAdDeitirmeModl1Click(TObject *Sender);
    void __fastcall MaliyetCetveli2Click(TObject *Sender);
    void __fastcall MuaddelCetveli2Click(TObject *Sender);
    void __fastcall FiyatListesi2Click(TObject *Sender);
    void __fastcall Malzemernnceleme1Click(TObject *Sender);
    void __fastcall StokSaymRaporu1Click(TObject *Sender);
    void __fastcall GirikHareketi1Click(TObject *Sender);
    void __fastcall GnlkSatizelgesi1Click(TObject *Sender);
    void __fastcall BirimveOranDeitirme1Click(TObject *Sender);
    void __fastcall BirimveOranDeitirme2Click(TObject *Sender);
    void __fastcall YneticiModl1Click(TObject *Sender);
    void __fastcall YneticiModl2Click(TObject *Sender);
    void __fastcall AktifKullancyDeitir1Click(TObject *Sender);
    void __fastcall AktifKullancyDeitir2Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall TrayIcon1Restore(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall ParolaDeitir1Click(TObject *Sender);
    void __fastcall GirisIzni(void);
    void __fastcall LogoYkle1Click(TObject *Sender);
    void __fastcall LogoYkle2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAnaMenu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAnaMenu *frmAnaMenu;
//---------------------------------------------------------------------------
#endif
