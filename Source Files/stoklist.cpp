//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "stoklist.h"
#include "anamenu.h"
#include "sifregiris.h"
#include "sifre.h"
#include "uruncinsi.h"
#include "stokana.h"
#include "hasilatraporu.h"
#include "departman.h"
#include "birimdegistir.h"
#include "raporayar.h"
#include "fatura.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmStokListesi *frmStokListesi;
//---------------------------------------------------------------------------
__fastcall TfrmStokListesi::TfrmStokListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokListesi::editSTOKKODUChange(TObject *Sender)
{
    if (editSTOKKODU->Text.Length() != 0) {
        querySTOKLISTESI->Close();
        querySTOKLISTESI->ParamByName("DEPARTMAN")->AsString = "%"+comboDepartman->Text+"%";
        querySTOKLISTESI->ParamByName("CINSI")->AsString = "%"+comboCinsi->Text+"%";
        querySTOKLISTESI->ParamByName("ADI")->AsString = NULL;
        querySTOKLISTESI->ParamByName("KOD")->AsInteger = StrToFloat(editSTOKKODU->Text);
        querySTOKLISTESI->Open();
    }
    else
        editSTOKADIChange(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::editSTOKADIChange(TObject *Sender)
{
    querySTOKLISTESI->Close();
    querySTOKLISTESI->ParamByName("DEPARTMAN")->AsString = "%"+comboDepartman->Text+"%";
    querySTOKLISTESI->ParamByName("CINSI")->AsString = "%"+comboCinsi->Text+"%";
    querySTOKLISTESI->ParamByName("ADI")->AsString = "%"+editSTOKADI->Text+"%";
    querySTOKLISTESI->ParamByName("KOD")->AsInteger = NULL;
    querySTOKLISTESI->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::FormShow(TObject *Sender)
{
    // Departman ComboBox'ýna kayýt ekleniyor...
    comboDepartman->Items->Clear();
    frmDepartman->tblDEPARTMAN->Open();
    frmDepartman->tblDEPARTMAN->First();
    comboDepartman->Items->Add("");
    while (!frmDepartman->tblDEPARTMAN->Eof) {
        comboDepartman->Items->Add(frmDepartman->tblDEPARTMANDEPARTMAN->Value);
        frmDepartman->tblDEPARTMAN->Next();
    }
    frmDepartman->tblDEPARTMAN->Close();

    // Ürün Cinsi ComboBox'ýna kayýt ekleniyor...
    comboCinsi->Items->Clear();
    frmUrunCinsi->tblURUNCINSI->Open();
    frmUrunCinsi->tblURUNCINSI->First();
    comboCinsi->Items->Add("");
    comboCinsi->Items->Add("MALZEME");
    while (!frmUrunCinsi->tblURUNCINSI->Eof) {
        comboCinsi->Items->Add(frmUrunCinsi->tblURUNCINSIURUNCINSI->Value);
        frmUrunCinsi->tblURUNCINSI->Next();
    }
    frmUrunCinsi->tblURUNCINSI->Close();

    if (frmStokListesi->Caption == "Stok Listesi [Stok Kartý]")
        comboDepartman->ItemIndex =
            frmStokKarti->dbcomboDepartman->ItemIndex + 1;
    else if (frmStokListesi->Caption == "Stok Listesi [Günlük Satýþ Çizelgesi]")
        comboDepartman->ItemIndex =
            frmGunlukSatisCizelgesi->comboDepartman->ItemIndex + 1;
    else if (frmStokListesi->Caption == "Stok Listesi [Stok Hareketi]")
        comboDepartman->ItemIndex =
            frmStokHareketi->comboDepartman->ItemIndex + 1;
    else if (frmStokListesi->Caption == "Stok Listesi [Rapor Seçimi - Baþlangýç]") {
        comboDepartman->ItemIndex = frmRaporSecimi->comboDepartmanBaslangic->ItemIndex;
    }
    else if (frmStokListesi->Caption == "Stok Listesi [Rapor Seçimi - Bitiþ]") {
        // Bitis için Stok Listesi baþlangýç departmaný mý yoksa bitiþ departmanýna
        // göre mi filtrelemesini yapan Kod Topluluðu
        if (frmRaporSecimi->comboDepartmanBitis->Text == NULL)
            comboDepartman->ItemIndex = frmRaporSecimi->comboDepartmanBitis->ItemIndex;
        else
            comboDepartman->ItemIndex = frmRaporSecimi->comboDepartmanBaslangic->ItemIndex;
        // -----------------------------------------------Kod Topluluðu Sonu...
    }

    // Stok Kodu Listeleniyor...
    querySTOKLISTESI->Close();
    querySTOKLISTESI->ParamByName("DEPARTMAN")->AsString = "%"+comboDepartman->Text+"%";
    querySTOKLISTESI->ParamByName("CINSI")->AsString = "%"+comboCinsi->Text+"%";
    if (editSTOKKODU->Text.Length() == 0) {
        querySTOKLISTESI->ParamByName("KOD")->AsInteger = NULL;
        querySTOKLISTESI->ParamByName("ADI")->AsString = "%"+editSTOKADI->Text+"%";
    }
    else {
        querySTOKLISTESI->ParamByName("KOD")->AsInteger = StrToFloat(editSTOKKODU->Text);
        querySTOKLISTESI->ParamByName("ADI")->AsString = NULL;
    }
    querySTOKLISTESI->Open();
    // -------------------------------------
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    querySTOKLISTESI->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::DBGrid1CellClick(TColumn *Column)
{
    int nDeger;
    bool myEnabled;

    if (frmStokListesi->Caption == "Stok Listesi [Stok Kartý]") {
        frmSifre->querySIFREKONTROL->Close();
        frmSifre->querySIFREKONTROL->Open();
        myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLSTOK_KARTI->Value, 5) - '0';

        if (frmStokKarti->tblSTOKANA->Active == true && myEnabled == true) {
            nDeger = Application->MessageBox("Önceki bilgiler kayýt edilsin mi?", "Silme onayý",
                MB_YESNOCANCEL + MB_ICONQUESTION);

            if (nDeger == IDYES) {
                // Stok Table Kayýt Ediliyor...
                frmStokKarti->tblSTOKANA->Edit();
                frmStokKarti->tblSTOKANAINDEKS->Value = frmStokKarti->tblSTOKANADEPARTMAN->Value + FloatToStr(frmStokKarti->tblSTOKANAKOD->Value);
                frmStokKarti->tblSTOKANA->Post();
                // Üretim Reçetesi Kaydediliyor...
                if (frmStokKarti->DBRadioGroup1->ItemIndex == 1) {
                    frmStokKarti->UretimAnaSil();
                    frmStokKarti->UretimAnaOlustur();
                }
                Secim();
            }
            else if (nDeger == IDNO) {
                frmStokKarti->tblSTOKANA->Cancel();
                Secim();
            }
            else {
                goto IPTAL;
            }
        }
        else {
            frmStokKarti->tblSTOKANA->Cancel();
            Secim();
        }
    }
    else if (frmStokListesi->Caption == "Stok Listesi [Günlük Satýþ Çizelgesi]") {
        frmGunlukSatisCizelgesi->tblSATIS_CETVELI->Edit();
        frmGunlukSatisCizelgesi->tblSATIS_CETVELISTOK_KODU->Value = querySTOKLISTESIKOD->Value;
        frmGunlukSatisCizelgesi->tblSATIS_CETVELI->Edit();
        frmGunlukSatisCizelgesi->tblSATIS_CETVELISTOK_ADI->Value = querySTOKLISTESIADI->Value;
        frmGunlukSatisCizelgesi->tblSATIS_CETVELI->Edit();
        frmGunlukSatisCizelgesi->tblSATIS_CETVELIOLCU_BIRIMI->Value = querySTOKLISTESIOLCU_BIRIMI->Value;
        frmGunlukSatisCizelgesi->tblSATIS_CETVELI->Edit();
        frmGunlukSatisCizelgesi->tblSATIS_CETVELIBIRIM_FIYATI->Value = querySTOKLISTESIBIRIM_FIYATI->Value;
    }
    else if (frmStokListesi->Caption == "Stok Listesi [Rapor Seçimi - Baþlangýç]") {
        if ((frmRaporSecimi->comboDepartmanBitis->Text == querySTOKLISTESIDEPARTMAN->Value)
            || (frmRaporSecimi->comboDepartmanBitis->Text.Length() == 0)) {
            // Kontrol Doðruysa burada deðerler aktarýlýr...
            // -----------------------------------------------------------------------
            frmRaporSecimi->comboDepartmanBaslangic->ItemIndex = 0; // comboDepartman atanýyor...
            while (frmRaporSecimi->comboDepartmanBaslangic->Text != querySTOKLISTESIDEPARTMAN->Value)
                ++frmRaporSecimi->comboDepartmanBaslangic->ItemIndex;
            frmRaporSecimi->comboStokCinsiBaslangic->ItemIndex = 0; // comboCinsi atanýyor...
            while (frmRaporSecimi->comboStokCinsiBaslangic->Text != querySTOKLISTESICINSI->Value)
                ++frmRaporSecimi->comboStokCinsiBaslangic->ItemIndex;
            // -----------------------------------------------------------------------
            frmRaporSecimi->editBaslangicStokKodu->Text = querySTOKLISTESIKOD->Value;
            frmRaporSecimi->editBaslangicStokAdi->Text = querySTOKLISTESIADI->Value;
        }
        else
            Application->MessageBox("Seçilen stok uygun deðildir...", "Uyarý Mesajý",
                MB_OK + MB_ICONEXCLAMATION);
    }
    else if (frmStokListesi->Caption == "Stok Listesi [Rapor Seçimi - Bitiþ]") {
        if ((frmRaporSecimi->comboDepartmanBaslangic->Text == querySTOKLISTESIDEPARTMAN->Value)
            || (frmRaporSecimi->comboDepartmanBaslangic->Text.Length() == 0)) {
            // Kontrol Doðruysa burada deðerler aktarýlýr...
            frmRaporSecimi->comboDepartmanBitis->ItemIndex = 0; // Departman atanýyor...
            while (frmRaporSecimi->comboDepartmanBitis->Text != querySTOKLISTESIDEPARTMAN->Value)
                ++frmRaporSecimi->comboDepartmanBitis->ItemIndex;
            frmRaporSecimi->comboStokCinsiBitis->ItemIndex = 0; // comboCinsi atanýyor...
            while (frmRaporSecimi->comboStokCinsiBitis->Text != querySTOKLISTESICINSI->Value)
                ++frmRaporSecimi->comboStokCinsiBitis->ItemIndex;
            frmRaporSecimi->editBitisStokKodu->Text = querySTOKLISTESIKOD->Value;
            frmRaporSecimi->editBitisStokAdi->Text = querySTOKLISTESIADI->Value;
        }
        else
            Application->MessageBox("Seçilen stok uygun deðildir...", "Uyarý Mesajý",
                MB_OK + MB_ICONEXCLAMATION);
    }
    else if (frmStokListesi->Caption == "Stok Listesi [Birim Oraný Deðiþtirme]") {
        frmBirimOranDegistir->editDepartman->Text = querySTOKLISTESIDEPARTMAN->Value;
        frmBirimOranDegistir->editStokKodu->Text = querySTOKLISTESIKOD->Value;
        frmBirimOranDegistir->editStokAdi->Text = querySTOKLISTESIADI->Value;
        frmBirimOranDegistir->editEskiMuaddelBirimi->Text = querySTOKLISTESIMUADDEL_BIRIMI->Value;
        frmBirimOranDegistir->editEskiMuaddelBirimOrani->Text = querySTOKLISTESIMUADDEL_BIRIM_ORANI->Value;
        frmBirimOranDegistir->editEskiOlcuBirimi->Text = querySTOKLISTESIOLCU_BIRIMI->Value;
        frmBirimOranDegistir->editOlcuEskiBirimOrani->Text = querySTOKLISTESIBIRIM_ORANI->Value;
    }
    else {
        if (frmStokHareketi->comboDepartman->Text == querySTOKLISTESIDEPARTMAN->Value) {
            frmStokHareketi->tblSTOKHAREKETI->Edit();
            frmStokHareketi->tblSTOKHAREKETIKOD->Value = querySTOKLISTESIKOD->Value;
        }
        else
            Application->MessageBox("Seçilen stok uygun deðildir...", "Uyarý Mesajý",
                MB_OK + MB_ICONEXCLAMATION);
    }
    frmStokListesi->Close();
IPTAL:
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::Secim(void)
{
    AnsiString TempString;

    TempString = querySTOKLISTESIINDEKS->Value;

    frmAnaMenu->Database->Connected = false;
    frmAnaMenu->Database->Connected = true;

    frmStokKarti->tblSTOKANA->Close();
    frmStokKarti->tblSTOKANA->Open();
    frmStokKarti->tblSTOKANA->Filtered = true;
    frmStokKarti->tblSTOKANA->Filter = "[INDEKS] ='" + TempString + "'";
    StokYeniKayit = false;

    if (frmStokKarti->tblSTOKANACINSI_KUTUSU->Value != "Malzeme") {
        frmStokKarti->UretimRecetesiSifirla();
        frmStokKarti->UretimRecetesiOlustur(frmStokKarti->tblSTOKANAINDEKS->Value);
    }
    else
        frmStokKarti->UretimRecetesiSifirla();

    frmStokKarti->StokGirisListele();
    frmStokKarti->StokDurumunuHesapla();
    frmStokKarti->FiyatGecmisiGuncelle();
}

void __fastcall TfrmStokListesi::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    int nDeger;
    bool myEnabled;

    if (Key == Char(VK_RETURN)) {
        if (frmStokListesi->Caption == "Stok Listesi [Stok Kartý]") {
            frmSifre->querySIFREKONTROL->Close();
            frmSifre->querySIFREKONTROL->Open();
            myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLSTOK_KARTI->Value, 5) - '0';

            if (frmStokKarti->tblSTOKANA->Active == true && myEnabled == true) {
                nDeger = Application->MessageBox("Önceki bilgiler kayýt edilsin mi?", "Silme onayý",
                    MB_YESNOCANCEL + MB_ICONQUESTION);

                if (nDeger == IDYES) {
                    // Stok Table Kayýt Ediliyor...
                    frmStokKarti->tblSTOKANA->Edit();
                    frmStokKarti->tblSTOKANAINDEKS->Value = frmStokKarti->tblSTOKANADEPARTMAN->Value + FloatToStr(frmStokKarti->tblSTOKANAKOD->Value);
                    frmStokKarti->tblSTOKANA->Post();
                    // Üretim Reçetesi Kaydediliyor...
                    if (frmStokKarti->DBRadioGroup1->ItemIndex == 1) {
                        frmStokKarti->UretimAnaSil();
                        frmStokKarti->UretimAnaOlustur();
                    }
                    Secim();
                }
                else if (nDeger == IDNO) {
                    frmStokKarti->tblSTOKANA->Cancel();
                    Secim();
                }
                else {
                    goto IPTAL;
                }
            }
            else {
                frmStokKarti->tblSTOKANA->Cancel();
                Secim();
            }
        }
        else if (frmStokListesi->Caption == "Stok Listesi [Günlük Satýþ Çizelgesi]") {
            frmGunlukSatisCizelgesi->tblSATIS_CETVELI->Edit();
            frmGunlukSatisCizelgesi->tblSATIS_CETVELISTOK_KODU->Value = querySTOKLISTESIKOD->Value;
            frmGunlukSatisCizelgesi->tblSATIS_CETVELI->Edit();
            frmGunlukSatisCizelgesi->tblSATIS_CETVELISTOK_ADI->Value = querySTOKLISTESIADI->Value;
            frmGunlukSatisCizelgesi->tblSATIS_CETVELI->Edit();
            frmGunlukSatisCizelgesi->tblSATIS_CETVELIOLCU_BIRIMI->Value = querySTOKLISTESIOLCU_BIRIMI->Value;
            frmGunlukSatisCizelgesi->tblSATIS_CETVELI->Edit();
            frmGunlukSatisCizelgesi->tblSATIS_CETVELIBIRIM_FIYATI->Value = querySTOKLISTESIBIRIM_FIYATI->Value;
        }
        else if (frmStokListesi->Caption == "Stok Listesi [Rapor Seçimi - Baþlangýç]") {
            if ((frmRaporSecimi->comboDepartmanBitis->Text == querySTOKLISTESIDEPARTMAN->Value)
                || (frmRaporSecimi->comboDepartmanBitis->Text.Length() == 0)) {
                // Kontrol Doðruysa burada deðerler aktarýlýr...
                // -----------------------------------------------------------------------
                frmRaporSecimi->comboDepartmanBaslangic->ItemIndex = 0; // comboDepartman atanýyor...
                while (frmRaporSecimi->comboDepartmanBaslangic->Text != querySTOKLISTESIDEPARTMAN->Value)
                    ++frmRaporSecimi->comboDepartmanBaslangic->ItemIndex;
                frmRaporSecimi->comboStokCinsiBaslangic->ItemIndex = 0; // comboCinsi atanýyor...
                while (frmRaporSecimi->comboStokCinsiBaslangic->Text != querySTOKLISTESICINSI->Value)
                    ++frmRaporSecimi->comboStokCinsiBaslangic->ItemIndex;
                // -----------------------------------------------------------------------
                frmRaporSecimi->editBaslangicStokKodu->Text = querySTOKLISTESIKOD->Value;
                frmRaporSecimi->editBaslangicStokAdi->Text = querySTOKLISTESIADI->Value;
            }
            else
                Application->MessageBox("Seçilen stok uygun deðildir...", "Uyarý Mesajý",
                    MB_OK + MB_ICONEXCLAMATION);
        }
        else if (frmStokListesi->Caption == "Stok Listesi [Rapor Seçimi - Bitiþ]") {
            if ((frmRaporSecimi->comboDepartmanBaslangic->Text == querySTOKLISTESIDEPARTMAN->Value)
                || (frmRaporSecimi->comboDepartmanBaslangic->Text.Length() == 0)) {
                // Kontrol Doðruysa burada deðerler aktarýlýr...
                frmRaporSecimi->comboDepartmanBitis->ItemIndex = 0; // Departman atanýyor...
                while (frmRaporSecimi->comboDepartmanBitis->Text != querySTOKLISTESIDEPARTMAN->Value)
                    ++frmRaporSecimi->comboDepartmanBitis->ItemIndex;
                frmRaporSecimi->comboStokCinsiBitis->ItemIndex = 0; // comboCinsi atanýyor...
                while (frmRaporSecimi->comboStokCinsiBitis->Text != querySTOKLISTESICINSI->Value)
                    ++frmRaporSecimi->comboStokCinsiBitis->ItemIndex;
                frmRaporSecimi->editBitisStokKodu->Text = querySTOKLISTESIKOD->Value;
                frmRaporSecimi->editBitisStokAdi->Text = querySTOKLISTESIADI->Value;
            }
            else
                Application->MessageBox("Seçilen stok uygun deðildir...", "Uyarý Mesajý",
                    MB_OK + MB_ICONEXCLAMATION);
        }
        else if (frmStokListesi->Caption == "Stok Listesi [Birim Oraný Deðiþtirme]") {
            frmBirimOranDegistir->editDepartman->Text = querySTOKLISTESIDEPARTMAN->Value;
            frmBirimOranDegistir->editStokKodu->Text = querySTOKLISTESIKOD->Value;
            frmBirimOranDegistir->editStokAdi->Text = querySTOKLISTESIADI->Value;
            frmBirimOranDegistir->editEskiMuaddelBirimi->Text = querySTOKLISTESIMUADDEL_BIRIMI->Value;
            frmBirimOranDegistir->editEskiMuaddelBirimOrani->Text = querySTOKLISTESIMUADDEL_BIRIM_ORANI->Value;
            frmBirimOranDegistir->editEskiOlcuBirimi->Text = querySTOKLISTESIOLCU_BIRIMI->Value;
            frmBirimOranDegistir->editOlcuEskiBirimOrani->Text = querySTOKLISTESIBIRIM_ORANI->Value;
        }
        else {
            if (frmStokHareketi->comboDepartman->Text == querySTOKLISTESIDEPARTMAN->Value) {
                frmStokHareketi->tblSTOKHAREKETI->Edit();
                frmStokHareketi->tblSTOKHAREKETIKOD->Value = querySTOKLISTESIKOD->Value;
            }
            else
                Application->MessageBox("Seçilen stok uygun deðildir...", "Uyarý Mesajý",
                    MB_OK + MB_ICONEXCLAMATION);
        }
        frmStokListesi->Close();
    IPTAL:
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::comboDepartmanChange(TObject *Sender)
{
    querySTOKLISTESI->Close();
    querySTOKLISTESI->ParamByName("DEPARTMAN")->AsString = "%"+comboDepartman->Text+"%";
    querySTOKLISTESI->ParamByName("CINSI")->AsString = "%"+comboCinsi->Text+"%";
    if (editSTOKKODU->Text.Length() != 0) {
        querySTOKLISTESI->ParamByName("KOD")->AsInteger = StrToFloat(editSTOKKODU->Text);
        querySTOKLISTESI->ParamByName("ADI")->AsString = NULL;
    }
    else {
        querySTOKLISTESI->ParamByName("KOD")->AsInteger = NULL;
        querySTOKLISTESI->ParamByName("ADI")->AsString = "%"+editSTOKADI->Text+"%";
    }
    querySTOKLISTESI->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::comboCinsiChange(TObject *Sender)
{
    querySTOKLISTESI->Close();
    querySTOKLISTESI->ParamByName("DEPARTMAN")->AsString = "%"+comboDepartman->Text+"%";
    querySTOKLISTESI->ParamByName("CINSI")->AsString = "%"+comboCinsi->Text+"%";
    if (editSTOKKODU->Text.Length() != 0) {
        querySTOKLISTESI->ParamByName("KOD")->AsInteger = StrToFloat(editSTOKKODU->Text);
        querySTOKLISTESI->ParamByName("ADI")->AsString = NULL;
    }
    else {
        querySTOKLISTESI->ParamByName("KOD")->AsInteger = NULL;
        querySTOKLISTESI->ParamByName("ADI")->AsString = "%"+editSTOKADI->Text+"%";
    }
    querySTOKLISTESI->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::dbcomboCinsiChange(TObject *Sender)
{
    querySTOKLISTESI->Close();
    querySTOKLISTESI->ParamByName("DEPARTMAN")->AsString = "%"+comboDepartman->Text+"%";
    querySTOKLISTESI->ParamByName("CINSI")->AsString = "%"+comboCinsi->Text+"%";
    if (editSTOKKODU->Text.Length() == 0) {
        querySTOKLISTESI->ParamByName("KOD")->AsInteger = NULL;
        querySTOKLISTESI->ParamByName("ADI")->AsString = "%"+editSTOKADI->Text+"%";
    }
    else {
        querySTOKLISTESI->ParamByName("KOD")->AsInteger = StrToFloat(editSTOKKODU->Text);
        querySTOKLISTESI->ParamByName("ADI")->AsString = NULL;
    }
    querySTOKLISTESI->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::editSTOKKODUClick(TObject *Sender)
{
    editSTOKKODU->Color = clWindow;
    editSTOKADI->Color = clScrollBar;
    editSTOKADI->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::editSTOKADIClick(TObject *Sender)
{
    editSTOKADI->Color = clWindow;
    editSTOKKODU->Color = clScrollBar;
    editSTOKKODU->Clear();
}
//---------------------------------------------------------------------------

