//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("OkosMTS.res");
USEFORM("anamenu.cpp", frmAnaMenu);
USEFORM("stokana.cpp", frmStokKarti);
USEFORM("fatura.cpp", frmStokHareketi);
USEFORM("raporayar.cpp", frmRaporSecimi);
USEFORM("personel.cpp", frmImzaYetkilileri);
USEFORM("olcu.cpp", frmOlcuBirimi);
USEFORM("departman.cpp", frmDepartman);
USEFORM("parametre.cpp", frmParametreler);
USEFORM("uruncinsi.cpp", frmUrunCinsi);
USEFORM("stoklist.cpp", frmStokListesi);
USEFORM("kartkopyala.cpp", frmKartKopyala);
USEFORM("topludokum.cpp", frmTopluRapor);
USEFORM("muadraporu.cpp", frmMuaddelCetveli);
USEFORM("maliyet.cpp", frmMaliyetCetveli);
USEFORM("hasilatraporu.cpp", frmGunlukSatisCizelgesi);
USEFORM("fiyatlandirma.cpp", frmFiyatAyarlama);
USEFORM("sayimrap.cpp", frmSayimRaporu);
USEFORM("fiyatraporu.cpp", frmFiyatListesi);
USEFORM("hareketraporu.cpp", frmHareketRaporu);
USEFORM("DepartmanDegis.cpp", frmDepartmanAdiDegistir);
USEFORM("tarihsecimi.cpp", frmTarihSecimi);
USEFORM("donemsonu.cpp", frmDonemSonu);
USEFORM("birimdegistir.cpp", frmBirimOranDegistir);
USEFORM("sifre.cpp", frmYoneticiModulu);
USEFORM("sifregiris.cpp", frmSifre);
USEFORM("paroladegistir.cpp", frmParolaDegistir);
USEFORM("rapor.cpp", frmRapor);
USEFORM("logoyukle.cpp", frmLogo);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
         Application->Initialize();
         Application->CreateForm(__classid(TfrmSifre), &frmSifre);
         Application->CreateForm(__classid(TfrmAnaMenu), &frmAnaMenu);
         Application->CreateForm(__classid(TfrmStokKarti), &frmStokKarti);
         Application->CreateForm(__classid(TfrmStokHareketi), &frmStokHareketi);
         Application->CreateForm(__classid(TfrmRaporSecimi), &frmRaporSecimi);
         Application->CreateForm(__classid(TfrmImzaYetkilileri), &frmImzaYetkilileri);
         Application->CreateForm(__classid(TfrmOlcuBirimi), &frmOlcuBirimi);
         Application->CreateForm(__classid(TfrmDepartman), &frmDepartman);
         Application->CreateForm(__classid(TfrmParametreler), &frmParametreler);
         Application->CreateForm(__classid(TfrmUrunCinsi), &frmUrunCinsi);
         Application->CreateForm(__classid(TfrmStokListesi), &frmStokListesi);
         Application->CreateForm(__classid(TfrmKartKopyala), &frmKartKopyala);
         Application->CreateForm(__classid(TfrmTopluRapor), &frmTopluRapor);
         Application->CreateForm(__classid(TfrmMuaddelCetveli), &frmMuaddelCetveli);
         Application->CreateForm(__classid(TfrmMaliyetCetveli), &frmMaliyetCetveli);
         Application->CreateForm(__classid(TfrmGunlukSatisCizelgesi), &frmGunlukSatisCizelgesi);
         Application->CreateForm(__classid(TfrmFiyatAyarlama), &frmFiyatAyarlama);
         Application->CreateForm(__classid(TfrmSayimRaporu), &frmSayimRaporu);
         Application->CreateForm(__classid(TfrmFiyatListesi), &frmFiyatListesi);
         Application->CreateForm(__classid(TfrmHareketRaporu), &frmHareketRaporu);
         Application->CreateForm(__classid(TfrmDepartmanAdiDegistir), &frmDepartmanAdiDegistir);
         Application->CreateForm(__classid(TfrmTarihSecimi), &frmTarihSecimi);
         Application->CreateForm(__classid(TfrmDonemSonu), &frmDonemSonu);
         Application->CreateForm(__classid(TfrmBirimOranDegistir), &frmBirimOranDegistir);
         Application->CreateForm(__classid(TfrmYoneticiModulu), &frmYoneticiModulu);
         Application->CreateForm(__classid(TfrmParolaDegistir), &frmParolaDegistir);
         Application->CreateForm(__classid(TfrmRapor), &frmRapor);
         Application->CreateForm(__classid(TfrmLogo), &frmLogo);
         Application->Run();
    }
    catch (Exception &exception)
    {
         Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
