//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "anamenu.h"
#include "paroladegistir.h"
#include "logoyukle.h"
#include "parametre.h"
#include "uruncinsi.h"
#include "sifregiris.h"
#include "olcu.h"
#include "DepartmanDegis.h"
#include "hasilatraporu.h"
#include "fiyatlandirma.h"
#include "birimdegistir.h"
#include "personel.h"
#include "sifre.h"
#include "departman.h"
#include "hasilatraporu.h"
#include "topludokum.h"
#include "raporayar.h"
#include "stokana.h"
#include "stkcikis.h"
#include "fatura.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Trayicon"
#pragma resource "*.dfm"
TfrmAnaMenu *frmAnaMenu;
bool KullaniciOnayla = false;
//---------------------------------------------------------------------------
__fastcall TfrmAnaMenu::TfrmAnaMenu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAnaMenu::GirisIzni(void)
{
    tblGIRISKONTROL->Open();
    if (tblGIRISKONTROLISLETME_GIDERI->Value > 5000) {
        Application->MessageBoxA("Unknown error", "Error", MB_OK + MB_ICONERROR);
        tblGIRISKONTROL->Close();
        frmSifre->Close();
    }
    tblGIRISKONTROL->Close();
}


void __fastcall TfrmAnaMenu::HammaddeGirileri1Click(TObject *Sender)
{
    frmStokKarti->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SpeedButton1Click(TObject *Sender)
{
    if (StokKart2->Enabled == true)
        frmStokKarti->Show();
    else
        Application->MessageBoxA("Giriþ Hakkýnýz Y o k . . .\nGiriþ Hakký Ýçin Sistem Yöneticinizle Görüþün.",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::Giriler1Click(TObject *Sender)
{
    frmStokHareketi->Caption = "Ýç Daðýtým Giriþi";
    frmStokHareketi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::klar1Click(TObject *Sender)
{
    frmStokHareketi->Caption = "Ürün / Hizmet Çýkýþý";
    frmStokHareketi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FaturaGirileri1Click(TObject *Sender)
{
    frmStokHareketi->Caption = "Ýç Daðýtým Giriþi";
    frmStokHareketi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::rnHizmetGirileri1Click(TObject *Sender)
{
    frmStokHareketi->Caption = "Ürün / Hizmet Çýkýþý";
    frmStokHareketi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SpeedButton2Click(TObject *Sender)
{
    TMouse *Fare = new TMouse;

    popupSTOKHAREKETI->Popup(Fare->CursorPos.x, Fare->CursorPos.y);
    delete Fare;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SpeedButton3Click(TObject *Sender)
{
    if (MaliyetCetveli1->Enabled == true) {
        frmRaporSecimi->Show();
        frmRaporSecimi->RadioGroup1->ItemIndex = 0;
    }

    else
        Application->MessageBoxA("Giriþ Hakkýnýz Y o k . . .\nGiriþ Hakký Ýçin Sistem Yöneticinizle Görüþün.",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);

}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::MaliyetCetveli1Click(TObject *Sender)
{
    frmRaporSecimi->Show();
    frmRaporSecimi->RadioGroup1->ItemIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::MuaddelCetveli1Click(TObject *Sender)
{
    frmRaporSecimi->Show();
    frmRaporSecimi->RadioGroup1->ItemIndex = 1;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FiyatListesi1Click(TObject *Sender)
{
    frmRaporSecimi->RadioGroup1->ItemIndex = 2;
    frmRaporSecimi->RadioGroup1Click(Sender);
    frmRaporSecimi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::StokDurumu1Click(TObject *Sender)
{
    frmRaporSecimi->RadioGroup1->ItemIndex = 3;
    frmRaporSecimi->RadioGroup1Click(Sender);
    frmRaporSecimi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::Hakknda1Click(TObject *Sender)
{
    GroupBox2->Top = 0;
    frmAnaMenu->Menu = NULL;
    frmAnaMenu->Height = 236;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::BitBtn1Click(TObject *Sender)
{
    GroupBox2->Top = 189;
    frmAnaMenu->Menu = MainMenu1;
    frmAnaMenu->Height = 252;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::ParafAtacakPersonel1Click(TObject *Sender)
{
    frmImzaYetkilileri->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::Stoklleri1Click(TObject *Sender)
{
    frmOlcuBirimi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::BirimTanmlar1Click(TObject *Sender)
{
    frmDepartman->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SabitTanmlar1Click(TObject *Sender)
{
    frmParametreler->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::rnCinsleriTanmlar1Click(TObject *Sender)
{
    frmUrunCinsi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::mzaYetkilileri1Click(TObject *Sender)
{
    frmImzaYetkilileri->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::StoklveBirimleri1Click(TObject *Sender)
{
    frmOlcuBirimi->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::rnCinsiveTanmlar1Click(TObject *Sender)
{
    frmUrunCinsi->Show();      
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::DepartmanTanmlar1Click(TObject *Sender)
{
    frmDepartman->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SabitTanmalamveParametreler1Click(
      TObject *Sender)
{
    frmParametreler->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SpeedButton4Click(TObject *Sender)
{
    TMouse *Fare = new TMouse;

    popupAYARLAR->Popup(Fare->CursorPos.x, Fare->CursorPos.y);
    delete Fare;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::TopluMaliyetveMuaddelBasm1Click(
      TObject *Sender)
{
    frmTopluRapor->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SpeedButton5Click(TObject *Sender)
{
    AnsiString Safak;
    TDateTime tZaman;
    unsigned short Gun, Ay, Yil;
    AnsiString Aylar[12] =
                    { " Ocak ", " Þubat ", " Mart ", " Nisan ",
                      " Mayýs ", " Haziran ", " Temmuz ", " Aðustos ",
                      " Eylül ", " Ekim ", " Kasým ", " Aralýk " };

    Safak = FloatToStr(StrToDate("15.05.2003") - tZaman.CurrentDate());

    tZaman = tZaman.CurrentDate();
    tZaman.DecodeDate(&Yil, &Ay, &Gun);
    if (KullaniciOnayla == false) {
        KullaniciOnayla = true;
        Label6->Caption = IntToStr(Gun)+Aylar[Ay-1]+IntToStr(Yil)+" (Þafak "+Safak+")";
    }
    else {
        KullaniciOnayla = false;
        Label6->Caption = "18 Ocak 2002 (Þafak 482)";
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmAnaMenu::rndeMalzemeArama1Click(TObject *Sender)
{
    frmTopluRapor->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FIFOyagrefiyatlandrma1Click(TObject *Sender)
{
    frmFiyatAyarlama->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    Database->Connected = false;
    frmSifre->Close();   
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::StokHareketi2Click(TObject *Sender)
{
    frmRaporSecimi->RadioGroup1->ItemIndex = 4;
    frmRaporSecimi->RadioGroup1Click(Sender);          
    frmRaporSecimi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::HaslatRaporu1Click(TObject *Sender)
{
    frmGunlukSatisCizelgesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::k1Click(TObject *Sender)
{
    frmAnaMenu->Close();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::DepartmanAdDeitir1Click(TObject *Sender)
{
    frmDepartmanAdiDegistir->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::StokKart2Click(TObject *Sender)
{
    frmStokKarti->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::DatmGirileri1Click(TObject *Sender)
{
    frmStokHareketi->Caption = "Ýç Daðýtým Giriþi";
    frmStokHareketi->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::rnHizmetGirileri2Click(TObject *Sender)
{
    frmStokHareketi->Caption = "Ürün / Hizmet Çýkýþý";
    frmStokHareketi->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::Hakknda2Click(TObject *Sender)
{
    GroupBox2->Top = 0;
    frmAnaMenu->Menu = NULL;
    frmAnaMenu->Height = 236;
    frmAnaMenu->Show();
    TrayIcon1->Restore();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::mzaYetkilileri3Click(TObject *Sender)
{
    frmImzaYetkilileri->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::rnCinsiTanmlar2Click(TObject *Sender)
{
    frmUrunCinsi->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::DepartmanTanmlamalar2Click(TObject *Sender)
{
    frmDepartman->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::StoklveBirimiTanmlar1Click(TObject *Sender)
{
    frmOlcuBirimi->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FIFOyaGreFiyatlandrma2Click(TObject *Sender)
{
    frmFiyatAyarlama->Show();      
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SabitTanmlarveParametreler2Click(
      TObject *Sender)
{
    frmParametreler->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::DepartmanAdDeitirmeModl1Click(TObject *Sender)
{
    frmDepartmanAdiDegistir->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::MaliyetCetveli2Click(TObject *Sender)
{
    MaliyetCetveli1Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::MuaddelCetveli2Click(TObject *Sender)
{
    MuaddelCetveli1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FiyatListesi2Click(TObject *Sender)
{
    FiyatListesi1Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::Malzemernnceleme1Click(TObject *Sender)
{
    rndeMalzemeArama1Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::StokSaymRaporu1Click(TObject *Sender)
{
    StokDurumu1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::GirikHareketi1Click(TObject *Sender)
{
    StokHareketi2Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::GnlkSatizelgesi1Click(TObject *Sender)
{
    HaslatRaporu1Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::BirimveOranDeitirme1Click(TObject *Sender)
{
    frmBirimOranDegistir->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::BirimveOranDeitirme2Click(TObject *Sender)
{
    frmBirimOranDegistir->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::YneticiModl1Click(TObject *Sender)
{
    frmYoneticiModulu->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::YneticiModl2Click(TObject *Sender)
{
    frmYoneticiModulu->Show();    
}
//---------------------------------------------------------------------------


void __fastcall TfrmAnaMenu::AktifKullancyDeitir1Click(TObject *Sender)
{
    frmSifre->Show();
    frmAnaMenu->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::AktifKullancyDeitir2Click(TObject *Sender)
{
    frmSifre->Show();
    frmAnaMenu->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::Timer1Timer(TObject *Sender)
{
    if (frmAnaMenu->WindowState == wsMinimized) {
        TrayIcon1->Minimize();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::TrayIcon1Restore(TObject *Sender)
{
    if (frmAnaMenu->WindowState == wsMinimized &&
        frmSifre->sbtnKILIT->Enabled == false)
    {
        frmAnaMenu->WindowState = wsNormal;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FormShow(TObject *Sender)
{
    // Kullanýcý adý bilgisisi durum çubuðunda gösteriliyor...
    StatusBar1->Panels->Items[1]->Text = frmSifre->querySIFREKONTROLKULLANICI->Value;

    // Stok Kartý Giriþini Ayarla *************************** Kod Topluluðu
    StokKart2->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLSTOK_KARTI->Value, 4) - '0';
    HammaddeGirileri1->Enabled = StokKart2->Enabled;
    // ------------------------------------------------ Kod Topluluðu Sonu

    // Stok Hareketini Ayarla ******************************* Kod Topluluðu
    Giriler1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLIC_DAGITIM_GIRISI->Value, 4) - '0';
    FaturaGirileri1->Enabled = Giriler1->Enabled;
    DatmGirileri1->Enabled = Giriler1->Enabled;

    klar1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLURUN_HIZMET_CIKISI->Value, 4) - '0';
    rnHizmetGirileri1->Enabled = klar1->Enabled;
    rnHizmetGirileri2->Enabled = klar1->Enabled;
    // ------------------------------------------------ Kod Topluluðu Sonu

    // Günlük Satýþ Çizelgesi ************************** Kod Topluluðu
    HaslatRaporu1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLGUNLUK_SATIS_CIZELGESI->Value, 4) - '0';
    GnlkSatizelgesi1->Enabled = HaslatRaporu1->Enabled;
    // -------------------------------------------- Kod Topluluðu Sonu

    // Rapor Seçimi ************************************* Kod Topluluðu
    MaliyetCetveli1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLRAPOR_SECIMI->Value, 4) - '0';
    MuaddelCetveli1->Enabled = MaliyetCetveli1->Enabled;
    FiyatListesi1->Enabled = MaliyetCetveli1->Enabled;
    StokDurumu1->Enabled = MaliyetCetveli1->Enabled;
    StokHareketi2->Enabled = MaliyetCetveli1->Enabled;
    MaliyetCetveli2->Enabled = MaliyetCetveli1->Enabled;
    MuaddelCetveli2->Enabled = MaliyetCetveli1->Enabled;
    FiyatListesi2->Enabled = MaliyetCetveli1->Enabled;
    StokSaymRaporu1->Enabled = MaliyetCetveli1->Enabled;
    GirikHareketi1->Enabled = MaliyetCetveli1->Enabled;
    // -------------------------------------------- Kod Topluluðu Sonu

    // Ýmza Yetkilileri ***************************** Kod Topluluðu
    ParafAtacakPersonel1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLIMZA_YETKILILERI->Value, 4) - '0';
    mzaYetkilileri3->Enabled = ParafAtacakPersonel1->Enabled;
    mzaYetkilileri1->Enabled = ParafAtacakPersonel1->Enabled;
    // ----------------------------------------- Kod Topluluðu Sonu

    // Ürün Cinsleri ***************************** Kod Topluluðu
    rnCinsleriTanmlar1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLURUN_CINSI->Value, 4) - '0';
    rnCinsiveTanmlar1->Enabled = rnCinsleriTanmlar1->Enabled;
    rnCinsiTanmlar2->Enabled = rnCinsleriTanmlar1->Enabled;
    // -------------------------------------- Kod Topluluðu Sonu

    // Departman Tanýmlamalarý ***************************** Kod Topluluðu
    BirimTanmlar1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLDEPARTMAN_TANIMLAMA->Value, 4) - '0';
    DepartmanTanmlar1->Enabled = BirimTanmlar1->Enabled;
    DepartmanTanmlamalar2->Enabled = BirimTanmlar1->Enabled;
    // ------------------------------------------------ Kod Topluluðu Sonu

    // Birim ve Oran Tanýmlarý ***************************** Kod Topluluðu
    Stoklleri1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLBIRIM_ORAN_TANIMLAMA->Value, 4) - '0';
    StoklveBirimleri1->Enabled = Stoklleri1->Enabled;
    StoklveBirimiTanmlar1->Enabled = Stoklleri1->Enabled;
    // ----------------------------------------- Kod Topluluðu Sonu

    // Sabit Taným ve Parametreler ************************ Kod Topluluðu
    SabitTanmlar1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLSABIT_TANIM_PARAMETRELER->Value, 4) - '0';
    SabitTanmalamveParametreler1->Enabled = SabitTanmlar1->Enabled;
    SabitTanmlarveParametreler2->Enabled = SabitTanmlar1->Enabled;
    // ----------------------------------------------- Kod Topluluðu Sonu

    // Fiyat Ayarlama ************************************* Kod Topluluðu
    FIFOyagrefiyatlandrma1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLFIYAT_AYARLAMA->Value, 4) - '0';
    FIFOyaGreFiyatlandrma2->Enabled = FIFOyagrefiyatlandrma1->Enabled;
    // ----------------------------------------------- Kod Topluluðu Sonu

    // Birim ve Oran Deðiþtirme **************************** Kod Topluluðu
    BirimveOranDeitirme1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLBIRIM_ORAN_DEGISTIRME->Value, 4) - '0';
    BirimveOranDeitirme2->Enabled = BirimveOranDeitirme1->Enabled;
    // ------------------------------------------------ Kod Topluluðu Sonu

    // Departman Adý Deðiþtirme *************************** Kod Topluluðu
    DepartmanAdDeitirmeModl1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLDEPARTMAN_ADI_DEGISTIRME->Value, 4) - '0';
    DepartmanAdDeitir1->Enabled = DepartmanAdDeitirmeModl1->Enabled;
    // ----------------------------------------------- Kod Topluluðu Sonu

    // Yönetici Modülü ************************************* Kod Topluluðu
    YneticiModl1->Enabled
        = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLYONETICI_MODULU->Value, 4) - '0';
    YneticiModl2->Enabled = YneticiModl1->Enabled;
    // ------------------------------------------------ Kod Topluluðu Sonu

    // Logo Buradan yükleniyor...
         Image1->Picture->LoadFromFile(Database->Directory + "LOGO.BMP");
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::ParolaDeitir1Click(TObject *Sender)
{
    frmParolaDegistir->Show();    
}
//---------------------------------------------------------------------------


void __fastcall TfrmAnaMenu::LogoYkle1Click(TObject *Sender)
{
    frmLogo->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::LogoYkle2Click(TObject *Sender)
{
    frmLogo->Show();    
}
//---------------------------------------------------------------------------
