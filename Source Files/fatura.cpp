//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "anamenu.h"
#include "fatura.h"
#include "raporayar.h"
#include "departman.h"
#include "stoklist.h"
#include "sifregiris.h"
#include "sifre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmStokHareketi *frmStokHareketi;
bool YeniStokHareketi = false;
//---------------------------------------------------------------------------
__fastcall TfrmStokHareketi::TfrmStokHareketi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokHareketi::FormShow(TObject *Sender)
{
    TDateTime Zaman;

    frmAnaMenu->Database->Connected = true;

    // Burada querySIFREKONTROL kapatýlýyor.
    frmSifre->querySIFREKONTROL->Active = false;

    DateTimePicker1->Date = Zaman.CurrentDate();
    // Departman ComboBox'ýna kayýt ekleniyor...
    comboDepartman->Items->Clear();
    frmDepartman->tblDEPARTMAN->Open();
    frmDepartman->tblDEPARTMAN->First();
    while (!frmDepartman->tblDEPARTMAN->Eof) {
        comboDepartman->Items->Add(frmDepartman->tblDEPARTMANDEPARTMAN->Value);
        frmDepartman->tblDEPARTMAN->Next();
    }
    frmDepartman->tblDEPARTMAN->Close();
    comboDepartman->ItemIndex = 0;

    // Table açýlýyor ve departmana göre filtreleniyor...
    tblSTOKHAREKETI->Close();
    tblSTOKHAREKETI->Active = false;
    if (frmStokHareketi->Caption == "Ýç Daðýtým Giriþi")
        tblSTOKHAREKETI->Filter = "[DEPARTMAN]='"+comboDepartman->Text+"' AND [HAREKETTURU]=true AND [TARIH]='"+DateToStr(DateTimePicker1->Date)+"'";
    else
        tblSTOKHAREKETI->Filter = "[DEPARTMAN]='"+comboDepartman->Text+"' AND [HAREKETTURU]=false AND [TARIH]='"+DateToStr(DateTimePicker1->Date)+"'";
    tblSTOKHAREKETI->Filtered = true;
    tblSTOKHAREKETI->Active = true;
    tblSTOKHAREKETI->Open();
// ----------------------------------------------------------------------------
    // Stok hareketi modülüne göre kýsýtlandýrma iþlemleri ...
    ModulKisitlandirma();

    // Stok Hareketi Departman Bazýnda satýr toplamýný veriyor ...
    HareketToplami();

    // Kontür bittiyse çalýþmayacak ....
    frmAnaMenu->GirisIzni();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::k1Click(TObject *Sender)
{
    frmStokHareketi->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokHareketi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblSTOKHAREKETI->Active = false;
    frmAnaMenu->Database->Connected = false;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::comboDepartmanChange(TObject *Sender)
{
    tblSTOKHAREKETI->Active = false;
    if (frmStokHareketi->Caption == "Ýç Daðýtým Giriþi")
        tblSTOKHAREKETI->Filter = "[DEPARTMAN]='"+comboDepartman->Text+"' AND [HAREKETTURU]=true AND [TARIH]= '"+DateToStr(DateTimePicker1->Date)+"'";
    else
        tblSTOKHAREKETI->Filter = "[DEPARTMAN]='"+comboDepartman->Text+"' AND [HAREKETTURU]=false AND [TARIH]= '"+DateToStr(DateTimePicker1->Date)+"'";
    tblSTOKHAREKETI->Filtered = true;
    tblSTOKHAREKETI->Active = true;

    // Stok hareketi modülüne göre kýsýtlandýrma iþlemleri ...
    ModulKisitlandirma();

    // Stok Hareketi Departman Bazýnda satýr toplamýný veriyor ...
    HareketToplami();
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokHareketi::HareketToplami(void)
{
    // Stok Hareketi Departman Bazýnda satýr toplamýný veriyor...
    querySTOKHAREKETITOPLAM->Close();
    querySTOKHAREKETITOPLAM->ParamByName("DEPARTMAN")->AsString = comboDepartman->Text;
    if (frmStokHareketi->Caption == "Ýç Daðýtým Giriþi")
        querySTOKHAREKETITOPLAM->ParamByName("HAREKETTURU")->AsBoolean = true;
    else
        querySTOKHAREKETITOPLAM->ParamByName("HAREKETTURU")->AsBoolean = false;
    querySTOKHAREKETITOPLAM->ParamByName("TARIH")->AsDate = DateTimePicker1->Date;
    querySTOKHAREKETITOPLAM->Open();
    StatusBar1->Panels->Items[3]->Text = querySTOKHAREKETITOPLAMSUMOFTUTAR->DisplayText;
    querySTOKHAREKETITOPLAM->Close();
}

void __fastcall TfrmStokHareketi::tblSTOKHAREKETIAfterInsert(
      TDataSet *DataSet)
{
    TDateTime Zaman;

    tblSTOKHAREKETI->Edit();
    if (frmStokHareketi->Caption == "Ýç Daðýtým Giriþi")
        tblSTOKHAREKETIHAREKETTURU->Value = IS_DAGITIM_GIRISI;
    else
        tblSTOKHAREKETIHAREKETTURU->Value = URUN_VE_HIZMET_GIRISI;
    tblSTOKHAREKETI->Edit();
    tblSTOKHAREKETIDEPARTMAN->Value = comboDepartman->Text;
    tblSTOKHAREKETI->Edit();
    tblSTOKHAREKETITARIH->Value = DateTimePicker1->Date;
    tblSTOKHAREKETI->Edit();
    tblSTOKHAREKETISAAT->Value = Zaman.CurrentTime();

    // Hareket indeks numarasý yeni kayda veriliyor...
    queryHAREKETINDEKSNO->Open();
    tblSTOKHAREKETIHAREKETINDEKS->Value =
        queryHAREKETINDEKSNOHAREKETINDEKS->Value + 1;
    queryHAREKETINDEKSNO->Close();

    YeniStokHareketi = true;  
}
//---------------------------------------------------------------------------


void __fastcall TfrmStokHareketi::Sil2Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        StokDurumuSil();
        tblSTOKHAREKETI->Delete();
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokHareketi::Sil1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        StokDurumuSil();
        tblSTOKHAREKETI->Delete();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tblSTOKHAREKETIKODChange(TField *Sender)
{
    tblSTOKANA->Open();
    tblSTOKANA->Filtered = true;
    tblSTOKANA->Filter = "[INDEKS]='"
        + tblSTOKHAREKETIDEPARTMAN->Value
        + FloatToStr(tblSTOKHAREKETIKOD->Value)+"'";

    if (tblSTOKANA->RecordCount <= 0) {
        Application->MessageBox("Stok bulunamadý !...",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
        tblSTOKHAREKETI->Cancel();
    }
    else {
        tblSTOKHAREKETI->Edit();
        tblSTOKHAREKETIAD->Value = tblSTOKANAADI->Value;
        tblSTOKHAREKETI->Edit();
        tblSTOKHAREKETICINSI->Value = tblSTOKANACINSI_KUTUSU->Value;
        // Birim fiyatý atamasý en son yapýlmasý gerekmektedir. Çünkü stokana
        // bundan sonra iþlevini kaybetmektedir....
        tblSTOKHAREKETI->Edit();
        tblSTOKHAREKETIBIRIMFIYATI->Value = tblSTOKANABIRIM_FIYATI->Value;
    }
    tblSTOKANA->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::Yeni1Click(TObject *Sender)
{
    tblSTOKHAREKETI->Insert();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::Kaydet1Click(TObject *Sender)
{
    int nYer;

    tblSTOKHAREKETI->Edit();
    tblSTOKHAREKETI->Post();
    nYer = tblSTOKHAREKETI->RecNo;
    tblSTOKHAREKETI->Close();
    tblSTOKHAREKETI->Open();
    tblSTOKHAREKETI->RecNo = nYer;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::ModulKisitlandirma(void)
{
    bool myEnabled;

    frmSifre->querySIFREKONTROL->Active = true;
    if (frmStokHareketi->Caption == "Ýç Daðýtým Giriþi")
        myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLIC_DAGITIM_GIRISI->Value, 5) - '0';
    else
        myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLURUN_HIZMET_CIKISI->Value, 5) - '0';

    // Stok Hareketi Kýsýtlamdýrma Kontrolü
    if (myEnabled == false) {
        tbtnYENI->Enabled = false;
        Yeni1->Enabled = false;

        Sil1->Enabled = false;
        Sil2->Enabled = false;
        tbtnSIL->Enabled = false;

        tbtnKAYDET->Enabled = false;
        Kaydet1->Enabled = false;
        DBGrid1->ReadOnly = true;
    }
    else {
        // ************************ Yeni kayýt girilsin mi? kontrolü
        if (frmStokHareketi->Caption == "Ýç Daðýtým Giriþi")
            myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLIC_DAGITIM_GIRISI->Value, 6) - '0';
        else
            myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLURUN_HIZMET_CIKISI->Value, 6) - '0';

        if (myEnabled == true) {
            Yeni1->Enabled = true;
            tbtnYENI->Enabled = true;
        }
        else {
            Yeni1->Enabled = false;
            tbtnYENI->Enabled = false;
        }
        // --------------------------------------- Kod Topluluðu Sonu

        // ************************************* Kayýt Silinsin mi? kontrolü
        if (frmStokHareketi->Caption == "Ýç Daðýtým Giriþi")
            myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLIC_DAGITIM_GIRISI->Value, 7) - '0';
        else
            myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLURUN_HIZMET_CIKISI->Value, 7) - '0';

        if (myEnabled == true && tblSTOKHAREKETI->RecordCount > 0) {
            Sil1->Enabled = true;
            Sil2->Enabled = true;
            tbtnSIL->Enabled = true;
        }
        else {
            Sil1->Enabled = false;
            Sil2->Enabled = false;
            tbtnSIL->Enabled = false;
        }
        // ------------------------------------------ Kod Topluluðu Sonu

        // *************** Kaydetme iþlemini etkinleþtir....
        if (tblSTOKHAREKETI->RecordCount > 0) {
            Kaydet1->Enabled = true;
            tbtnKAYDET->Enabled = true;
        }
        else {
            Kaydet1->Enabled = false;
            tbtnKAYDET->Enabled = false;
        }
        // ------------------------------ Kod Topluluðu Sonu

        // ****************** Database Grid'i aktif et....
        DBGrid1->ReadOnly = false;
    }
    // Rapor Seçimi Aktif mi, Pasif mi?
    myEnabled = frmYoneticiModulu->KarakterAyikla(frmSifre->querySIFREKONTROLRAPOR_SECIMI->Value, 4) - '0';
    DonemSonuRaporu1->Enabled = myEnabled;
    ToolButton2->Enabled = myEnabled;
}

void __fastcall TfrmStokHareketi::tblSTOKHAREKETIMIKTARChange(
      TField *Sender)
{
    // Birim fiyatýndaki deðiþiklik stok kartýna yansýtýlýyor...
    tblSTOKANA->Open();
    tblSTOKANA->Filtered = true;
    tblSTOKANA->Filter = "[INDEKS]='"
        + tblSTOKHAREKETIDEPARTMAN->Value
        + FloatToStr(tblSTOKHAREKETIKOD->Value)+"'";

    if (tblSTOKANA->RecordCount > 0) {
        // Tutar hesaplanýyor....
        tblSTOKHAREKETI->Edit();
        tblSTOKHAREKETITUTAR->Value =
            ( tblSTOKHAREKETIBIRIMFIYATI->Value / tblSTOKANABIRIM_ORANI->Value )
            * tblSTOKHAREKETIMIKTAR->Value;
    }
    tblSTOKANA->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokHareketi::StokDurumuSil(void)
{
    querySTOKDURUMSIL->SQL->Clear();
    querySTOKDURUMSIL->SQL->Add("DELETE FROM STOKDURUMU");
    querySTOKDURUMSIL->SQL->Add("WHERE HAREKETINDEKS="
        +FloatToStr(tblSTOKHAREKETIHAREKETINDEKS->Value));
    querySTOKDURUMSIL->ExecSQL();
}

void __fastcall TfrmStokHareketi::tblSTOKHAREKETIBIRIMFIYATIChange(
      TField *Sender)
{
    tblSTOKHAREKETIMIKTARChange(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        if (DBGrid1->SelectedIndex < DBGrid1->FieldCount-1)
            ++DBGrid1->SelectedIndex;
        else {
            DBGrid1->SelectedIndex = 0;
            // Kayýt ediliyor....
            Kaydet1Click(Sender);
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokHareketi::StokDurumuUrunEkle(void)
{
    queryURUNANA->ParamByName("URUNKODU")->AsString =
        tblSTOKHAREKETIDEPARTMAN->Value + FloatToStr(tblSTOKHAREKETIKOD->Value);
    queryURUNANA->Open();

    queryURUNANA->First();
    while (!queryURUNANA->Eof) {
        tblSTOKDURUMU->Open();
        tblSTOKDURUMU->Insert();
        tblSTOKDURUMU->Edit();
        tblSTOKDURUMUHAREKETINDEKS->Value = tblSTOKHAREKETIHAREKETINDEKS->Value;
        tblSTOKDURUMU->Edit();
        tblSTOKDURUMUHAREKETTURU->Value = tblSTOKHAREKETIHAREKETTURU->Value;
        tblSTOKDURUMU->Edit();
        tblSTOKDURUMUBELGENO->Value = tblSTOKHAREKETIBELGENO->Value;
        tblSTOKDURUMU->Edit();
        tblSTOKDURUMUTARIH->Value = tblSTOKHAREKETITARIH->Value;
        tblSTOKDURUMU->Edit();
        tblSTOKDURUMUSAAT->Value = tblSTOKHAREKETISAAT->Value;
        // tblStokAna Filtreleniyor...
        tblSTOKANA->Open();
        tblSTOKANA->Filtered = true;
        tblSTOKANA->Filter = "[INDEKS]='"+queryURUNANAMALZEMEKODU->Value+"'";

        if (tblSTOKANA->RecordCount > 0) {
            tblSTOKDURUMU->Edit();
            tblSTOKDURUMUDEPARTMAN->Value = tblSTOKHAREKETIDEPARTMAN->Value;
            tblSTOKDURUMU->Edit();
            tblSTOKDURUMUSTOKKODU->Value = tblSTOKANAKOD->Value;
            tblSTOKDURUMU->Edit();
            tblSTOKDURUMUSTOKADI->Value = tblSTOKANAADI->Value;
            tblSTOKDURUMU->Edit();
            tblSTOKDURUMUBIRIMFIYATI->Value = tblSTOKANABIRIM_FIYATI->Value;
            tblSTOKDURUMU->Edit();
            tblSTOKDURUMUMIKTAR->Value =
                (tblSTOKHAREKETIMIKTAR->Value / tblSTOKANAMUADDEL_BIRIM_ORANI->Value)
                    * queryURUNANAMALZEMEMIKTARI->Value;
            tblSTOKDURUMU->Post();
        }

        tblSTOKANA->Close();
        tblSTOKDURUMU->Close();
        // Bir sonraki Uretim aðacý kalemine git. . .
        queryURUNANA->Next();
    }
}

void __fastcall TfrmStokHareketi::StokDurumuMalzemeEkle(void)
{
    // tblStokAna Filtreleniyor...
    tblSTOKANA->Open();
    tblSTOKANA->Filtered = true;
    tblSTOKANA->Filter = "[INDEKS]='"
        + tblSTOKHAREKETIDEPARTMAN->Value
        + FloatToStr(tblSTOKHAREKETIKOD->Value)+"'";

    tblSTOKDURUMU->Open();
    tblSTOKDURUMU->Insert();
    tblSTOKDURUMU->Edit();
    tblSTOKDURUMUHAREKETINDEKS->Value = tblSTOKHAREKETIHAREKETINDEKS->Value;
    tblSTOKDURUMU->Edit();
    tblSTOKDURUMUHAREKETTURU->Value = tblSTOKHAREKETIHAREKETTURU->Value;
    tblSTOKDURUMU->Edit();
    tblSTOKDURUMUBELGENO->Value = tblSTOKHAREKETIBELGENO->Value;
    tblSTOKDURUMU->Edit();
    tblSTOKDURUMUTARIH->Value = tblSTOKHAREKETITARIH->Value;
    tblSTOKDURUMU->Edit();
    tblSTOKDURUMUDEPARTMAN->Value = tblSTOKHAREKETIDEPARTMAN->Value;
    tblSTOKDURUMU->Edit();
    tblSTOKDURUMUSTOKKODU->Value = tblSTOKHAREKETIKOD->Value;
    tblSTOKDURUMU->Edit();
    tblSTOKDURUMUSTOKADI->Value = tblSTOKHAREKETIAD->Value;
    tblSTOKDURUMU->Edit();
    tblSTOKDURUMUBIRIMFIYATI->Value = tblSTOKHAREKETIBIRIMFIYATI->Value;
    tblSTOKDURUMU->Edit();
    tblSTOKDURUMUMIKTAR->Value = tblSTOKHAREKETIMIKTAR->Value;
    tblSTOKDURUMU->Edit();
    tblSTOKDURUMUSAAT->Value = tblSTOKHAREKETISAAT->Value;
    tblSTOKDURUMU->Post();
    tblSTOKDURUMU->Close();

    tblSTOKANA->Close();
}

void __fastcall TfrmStokHareketi::tblSTOKHAREKETIAfterPost(
      TDataSet *DataSet)
{
    if (tblSTOKHAREKETICINSI->Value == "Malzeme") {
        StokDurumuSil();
        StokDurumuMalzemeEkle();
    }
    else {
        StokDurumuSil();
        StokDurumuMalzemeEkle();
        StokDurumuUrunEkle();
    }
    YeniStokHareketi = false;

    // Stok hareketi modülüne göre kýsýtlandýrma iþlemleri ...
    ModulKisitlandirma();

    // Stok Hareketi Departman Bazýnda satýr toplamýný veriyor ...
    HareketToplami();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tblSTOKDURUMUBIRIMFIYATIChange(
      TField *Sender)
{
    // Tutar hesaplanýyor....
    if (tblSTOKDURUMUBIRIMFIYATI->Value != 0) {
        tblSTOKDURUMU->Edit();
        tblSTOKDURUMUTUTAR->Value =
            ( tblSTOKDURUMUBIRIMFIYATI->Value / tblSTOKANABIRIM_ORANI->Value )
            * tblSTOKDURUMUMIKTAR->Value;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tblSTOKDURUMUMIKTARChange(TField *Sender)
{
    // Tutar hesaplanýyor....
    if (tblSTOKDURUMUBIRIMFIYATI->Value != 0) {
        tblSTOKDURUMU->Edit();
        tblSTOKDURUMUTUTAR->Value =
            ( tblSTOKDURUMUBIRIMFIYATI->Value / tblSTOKANABIRIM_ORANI->Value )
            * tblSTOKDURUMUMIKTAR->Value;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tblSTOKHAREKETIAfterCancel(
      TDataSet *DataSet)
{
    YeniStokHareketi = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::A1Click(TObject *Sender)
{
    frmStokListesi->Caption = "Stok Listesi [Stok Hareketi]";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokHareketi::DateTimePicker1Change(TObject *Sender)
{
    tblSTOKHAREKETI->Active = false;
    if (frmStokHareketi->Caption == "Ýç Daðýtým Giriþi")
        tblSTOKHAREKETI->Filter = "[DEPARTMAN]='"+comboDepartman->Text+"' AND [HAREKETTURU]=true AND [TARIH]= '"+DateToStr(DateTimePicker1->Date)+"'";
    else
        tblSTOKHAREKETI->Filter = "[DEPARTMAN]='"+comboDepartman->Text+"' AND [HAREKETTURU]=false AND [TARIH]= '"+DateToStr(DateTimePicker1->Date)+"'";
    tblSTOKHAREKETI->Filtered = true;
    tblSTOKHAREKETI->Active = true;

    // Stok hareketi modülüne göre kýsýtlandýrma iþlemleri ...
    ModulKisitlandirma();

    // Stok Hareketi Departman Bazýnda satýr toplamýný veriyor ...
    HareketToplami();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::TariheGoreListele1Click(TObject *Sender)
{
    TDateTime Zaman;

    DateTimePicker1->Date = Zaman.CurrentDate();
    // DateTimePicker Nesnesi Deðiþtiðinde Filtrelemeyi Yenilemesi Ýçin
    DateTimePicker1Change(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::DonemSonuRaporu1Click(TObject *Sender)
{
    frmRaporSecimi->Show();
    frmRaporSecimi->RadioGroup1->ItemIndex = 6;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::DBGrid1KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    // Stokana tableindan sürekli filtrelensin . . .
    tblSTOKANA2->Open();
    tblSTOKANA2->Filtered = true;
    tblSTOKANA2->Filter = "[INDEKS]='"
        + tblSTOKHAREKETIDEPARTMAN->Value
        + FloatToStr(tblSTOKHAREKETIKOD->Value) + "'";
    if (tblSTOKANA2->RecordCount > 0) {
        // Stokana filtresi durum çubuðunda gözüküyor...
        StatusBar1->Panels->Items[0]->Text = "Ölçü = "
            + FloatToStr(tblSTOKANA2BIRIM_ORANI->Value);
        StatusBar1->Panels->Items[1]->Text = "Birim = "
            + tblSTOKANA2OLCU_BIRIMI->Value;
    }
    else {
        StatusBar1->Panels->Items[0]->Text = " ";
        StatusBar1->Panels->Items[1]->Text = " ";
    }
    tblSTOKANA2->Close();
}
//---------------------------------------------------------------------------



void __fastcall TfrmStokHareketi::tblSTOKHAREKETIADChange(TField *Sender)
{
    // Stokana tableindan sürekli filtrelensin . . .
    tblSTOKANA2->Open();
    tblSTOKANA2->Filtered = true;
    tblSTOKANA2->Filter = "[INDEKS]='"
        + tblSTOKHAREKETIDEPARTMAN->Value
        + FloatToStr(tblSTOKHAREKETIKOD->Value) + "'";
    if (tblSTOKANA2->RecordCount > 0) {
        // Stokana filtresi durum çubuðunda gözüküyor...
        StatusBar1->Panels->Items[0]->Text = "Ölçü = "
            + FloatToStr(tblSTOKANA2BIRIM_ORANI->Value);
        StatusBar1->Panels->Items[1]->Text = "Birim = "
            + tblSTOKANA2OLCU_BIRIMI->Value;
    }
    else {
        StatusBar1->Panels->Items[0]->Text = " ";
        StatusBar1->Panels->Items[1]->Text = " ";
    }
    tblSTOKANA2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::DBGrid1CellClick(TColumn *Column)
{
    // Stokana tableindan sürekli filtrelensin . . .
    tblSTOKANA2->Open();
    tblSTOKANA2->Filtered = true;
    tblSTOKANA2->Filter = "[INDEKS]='"
        + tblSTOKHAREKETIDEPARTMAN->Value
        + FloatToStr(tblSTOKHAREKETIKOD->Value) + "'";
    if (tblSTOKANA2->RecordCount > 0) {
        // Stokana filtresi durum çubuðunda gözüküyor...
        StatusBar1->Panels->Items[0]->Text = "Ölçü = "
            + FloatToStr(tblSTOKANA2BIRIM_ORANI->Value);
        StatusBar1->Panels->Items[1]->Text = "Birim = "
            + tblSTOKANA2OLCU_BIRIMI->Value;
    }
    else {
        StatusBar1->Panels->Items[0]->Text = " ";
        StatusBar1->Panels->Items[1]->Text = " ";
    }
    tblSTOKANA2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tblSTOKHAREKETIAfterDelete(
      TDataSet *DataSet)
{
    // Stok hareketi modülüne göre kýsýtlandýrma iþlemleri ...
    ModulKisitlandirma();

    // Stok Hareketi Departman Bazýnda satýr toplamýný veriyor ...
    HareketToplami();
}
//---------------------------------------------------------------------------

