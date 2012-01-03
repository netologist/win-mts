//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "topludokum.h"
#include "uruncinsi.h"
#include "rapor.h"
#include "departman.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmTopluRapor *frmTopluRapor;
//---------------------------------------------------------------------------
__fastcall TfrmTopluRapor::TfrmTopluRapor(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmTopluRapor::UrunArama(void)
{
    tblMALZEMELIST->First();
    while (!tblMALZEMELIST->Eof) {
        queryURETIMANA->Close();
        queryURETIMANA->ParamByName("MALZEMEKODU")->AsString
            = tblMALZEMELISTINDEKS->Value;
        queryURETIMANA->Open();

        queryURETIMANA->First();
        tblURUNLISTESI->Open();
        while (!queryURETIMANA->Eof) {
            tblSTOKANA->Open();
            tblSTOKANA->Filtered = true;
            tblSTOKANA->Filter = "[INDEKS]='"+queryURETIMANAURUNKODU->Value+"'";

            tblURUNLISTESI->Insert();
            tblURUNLISTESI->Edit();
            tblURUNLISTESIINDEKS->Value = tblSTOKANAINDEKS->Value;
            tblURUNLISTESI->Edit();
            tblURUNLISTESIKOD->Value = tblSTOKANAKOD->Value;
            tblURUNLISTESI->Edit();
            tblURUNLISTESIAD->Value = tblSTOKANAADI->Value;
            tblURUNLISTESI->Edit();
            tblURUNLISTESIFIYATI->Value = tblSTOKANABIRIM_FIYATI->Value;
            tblURUNLISTESI->Edit();
            tblURUNLISTESIETIN_TURU->Value = tblMALZEMELISTAD->Value;
            tblURUNLISTESI->Edit();
            tblURUNLISTESIGRAMAJI->Value = queryURETIMANAMALZEMEMIKTARI->Value;
            tblURUNLISTESI->Post();
            tblSTOKANA->Close();
            queryURETIMANA->Next();
        }
        tblURUNLISTESI->Close();
        tblMALZEMELIST->Next();
    }
    queryURUNLISTESI->Close();
    queryURUNLISTESI->Open();
    Label2->Caption = "Toplam "+FloatToStr(queryURUNLISTESI->RecordCount)
        + " adet ürün bulundu.";
    queryURETIMANA->Close();        
}

void __fastcall TfrmTopluRapor::MalzemeArama(void)
{
    tblURUNLISTESI->First();
    while (!tblURUNLISTESI->Eof) {
        queryURETIMANA2->Close();
        queryURETIMANA2->ParamByName("URUNKODU")->AsString
            = tblURUNLISTESIINDEKS->Value;
        queryURETIMANA2->Open();

        queryURETIMANA2->First();
        tblMALZEMELIST->Open();
        while (!queryURETIMANA2->Eof) {
            tblSTOKANA->Open();
            tblSTOKANA->Filtered = true;
            tblSTOKANA->Filter = "[INDEKS]='"+queryURETIMANA2MALZEMEKODU->Value+"'";

            tblMALZEMELIST->Insert();
            tblMALZEMELIST->Edit();
            tblMALZEMELISTINDEKS->Value = tblSTOKANAINDEKS->Value;
            tblMALZEMELIST->Edit();
            tblMALZEMELISTKOD->Value = tblSTOKANAKOD->Value;
            tblMALZEMELIST->Edit();
            tblMALZEMELISTAD->Value = tblSTOKANAADI->Value;
            tblMALZEMELIST->Post();

            tblSTOKANA->Close();
            queryURETIMANA2->Next();
        }
        tblMALZEMELIST->Close();
        tblURUNLISTESI->Next();
    }
    queryMALZEMELIST->Close();
    queryMALZEMELIST->Open();
    Label2->Caption = "Toplam "+FloatToStr(queryMALZEMELIST->RecordCount)
        + " adet malzeme bulundu.";
    queryURETIMANA2->Close();        
}

//---------------------------------------------------------------------------
void __fastcall TfrmTopluRapor::SpeedButton1Click(TObject *Sender)
{
    Animate1->Active = true;
    SpeedButton1->Enabled = false;
    switch (RadioGroup1->ItemIndex) {
        case 0:
            UrunArama(); // Malzemelerin kullanýldýðý ürünler...
            break;
        case 1:
            MalzemeArama(); // Ürünlerde kullanýlan malzeme listesi...        
            break;
    }
    Animate1->Active = false;
    SpeedButton1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::StokListeSorgusu(bool AdaGore)
{
    querySTOKLIST->Close();
    querySTOKLIST->ParamByName("DEPARTMAN")->AsString = "%"+comboDepartman->Text+"%";
    querySTOKLIST->ParamByName("CINSI")->AsString = "%"+comboCinsi->Text+"%";
    if (RadioGroup1->ItemIndex == 0)
        querySTOKLIST->ParamByName("CINSI_KUTUSU")->AsString = "Malzeme";
    else
        querySTOKLIST->ParamByName("CINSI_KUTUSU")->AsString = "Ürün";
    if (AdaGore == true) {
        querySTOKLIST->ParamByName("ADI")->AsString = "%"+editAdaGore->Text+"%";
        querySTOKLIST->ParamByName("KOD")->AsFloat = NULL;
    }
    else {
        querySTOKLIST->ParamByName("ADI")->AsString = NULL;
        querySTOKLIST->ParamByName("KOD")->AsFloat = StrToFloat(editKodaGore->Text);
    }
    querySTOKLIST->Open();
}

void __fastcall TfrmTopluRapor::comboDepartmanChange(TObject *Sender)
{
    if (editKodaGore->Text.Length() != 0)
        StokListeSorgusu(false);
    else
        StokListeSorgusu(true);
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::RadioGroup2Click(TObject *Sender)
{
    ; // Arama türünü belirtme amaçlý kullanýlacak.....   
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::editAdaGoreChange(TObject *Sender)
{
    StokListeSorgusu(true);            
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::editKodaGoreChange(TObject *Sender)
{
    if (editKodaGore->Text.Length() != 0)
        StokListeSorgusu(false);
    else
        StokListeSorgusu(true);
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::FormShow(TObject *Sender)
{
    querySTOKLIST->Open();
    queryURUNLISTESI->Open();
    tblMALZEMELIST->Open();

    // Departman ComboBox'ýna kayýt ekleniyor...
    comboDepartman->Items->Clear();
    frmDepartman->tblDEPARTMAN->Open();
    frmDepartman->tblDEPARTMAN->First();
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

    comboDepartman->ItemIndex = 0;
    RadioGroup1Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    Label2->Caption = " ";

    querySTOKLIST->Close();
    tblSTOKANA->Close();
    queryURETIMANA->Close();
    tblMALZEMELIST->Close();
    tblURUNLISTESI->Close();
    queryURUNLISTESI->Close();
    queryMALZEMELIST->Close();

    //----------------------------
    tblMALZEMELIST->EmptyTable();
    tblURUNLISTESI->EmptyTable();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::DBGrid4DblClick(TObject *Sender)
{
    if (RadioGroup1->ItemIndex == 0) {
        // Stoklistesinden seçilen malzeme listesine atan kod
        tblMALZEMELIST->Open();

        tblMALZEMELIST->Insert();
        tblMALZEMELIST->Edit();
        tblMALZEMELISTINDEKS->Value = querySTOKLISTINDEKS->Value;
        tblMALZEMELIST->Edit();
        tblMALZEMELISTAD->Value = querySTOKLISTADI->Value;
        tblMALZEMELIST->Edit();
        tblMALZEMELISTKOD->Value = querySTOKLISTKOD->Value;
        tblMALZEMELIST->Edit();
        tblMALZEMELIST->Post();

        tblMALZEMELIST->Close();
        tblMALZEMELIST->Open();
        // Listeye bir þeyler atýldýðý andan itibaren departman
        // combosu kilitleniyor...
        comboDepartman->Enabled = false;
    }
    else {
        // Stoklistesinden seçilen malzeme listesine atan kod
        tblURUNLISTESI->Open();

        tblURUNLISTESI->Insert();
        tblURUNLISTESI->Edit();
        tblURUNLISTESIINDEKS->Value = querySTOKLISTINDEKS->Value;
        tblURUNLISTESI->Edit();
        tblURUNLISTESIAD->Value = querySTOKLISTADI->Value;
        tblURUNLISTESI->Edit();
        tblURUNLISTESIKOD->Value = querySTOKLISTKOD->Value;
        tblURUNLISTESI->Edit();
        tblURUNLISTESI->Post();

        tblURUNLISTESI->Close();
        tblURUNLISTESI->Open();
        // Listeye bir þeyler atýldýðý andan itibaren departman
        // combosu kilitleniyor...
        comboDepartman->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::Timer1Timer(TObject *Sender)
{
    switch (RadioGroup1->ItemIndex) {
        case 0:
            // Malzemelede kullanýlan ürünler arandýðýnda....
            if (tblMALZEMELIST->Active == true && tblMALZEMELIST->RecordCount <= 0) {
                comboDepartman->Enabled = true;
                Sil1->Enabled = false;
                TabloyuBoalt1->Enabled = false;
            }
            else {
                comboDepartman->Enabled = false;
                Sil1->Enabled = true;
                TabloyuBoalt1->Enabled = true;
            }
            break;
        case 1:
            // Ürünlerde kullanýlan malzemeler arandýðýnda....
            if (tblURUNLISTESI->Active == true && tblURUNLISTESI->RecordCount <= 0) {
                comboDepartman->Enabled = true;
                Sil2->Enabled = false;
                TabloyuBosalt2->Enabled = false;
            }
            else {
                comboDepartman->Enabled = false;
                Sil2->Enabled = true;
                TabloyuBosalt2->Enabled = true;
            }
            break;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::TabloBosalt(void)
{
    queryURUNLISTESI->Close();
    queryMALZEMELIST->Close();
    tblMALZEMELIST->Close();
    tblURUNLISTESI->Close();

    tblMALZEMELIST->EmptyTable();
    tblURUNLISTESI->EmptyTable();

    tblMALZEMELIST->Open();
    tblURUNLISTESI->Open();
    queryMALZEMELIST->Open();
    queryURUNLISTESI->Open();

    Label2->Caption = "";    
}

void __fastcall TfrmTopluRapor::TabloyuBoalt1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Tabloyu boþaltmak istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        TabloBosalt();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::Sil1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES)
        tblMALZEMELIST->Delete();

    RadioGroup1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::comboCinsiChange(TObject *Sender)
{
    if (editKodaGore->Text.Length() != 0)
        StokListeSorgusu(false);
    else
        StokListeSorgusu(true);
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::editKodaGoreClick(TObject *Sender)
{
    editAdaGore->Clear();
    editAdaGore->Color = clScrollBar;
    editKodaGore->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::editAdaGoreClick(TObject *Sender)
{
    editKodaGore->Clear();
    editAdaGore->Color = clWindow;
    editKodaGore->Color = clScrollBar;
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::Sil2Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES)
        tblURUNLISTESI->Delete();

    RadioGroup1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::TabloyuBosalt2Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Tabloyu boþaltmak istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        TabloBosalt();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::RadioGroup1Click(TObject *Sender)
{
    TabloBosalt();
    
    if (editKodaGore->Text.Length() != 0)
        StokListeSorgusu(false);
    else
        StokListeSorgusu(true);

    switch (RadioGroup1->ItemIndex) {
        case 0: // Malzeme Seçimi için ...
            DBGrid1->PopupMenu = popupMALZEME; // DBGrid1 == MALZEME LÝSTESÝ
            DBGrid2->PopupMenu = NULL; // DBGrid2 = URUN LÝSTESÝ
            dsrcMALZEMELIST->DataSet = tblMALZEMELIST;
            dsrcURUNLISTESI->DataSet = queryURUNLISTESI;
            break;
        case 1: // Ürün Seçimi için ...
            DBGrid1->PopupMenu = NULL; // DBGrid1 == MALZEME LÝSTESÝ
            DBGrid2->PopupMenu = popupURUN; // DBGrid2 = URUN LÝSTESÝ
            dsrcMALZEMELIST->DataSet = queryMALZEMELIST;
            dsrcURUNLISTESI->DataSet = tblURUNLISTESI;
            break;
    }
    dsrcMALZEMELIST->DataSet->Close();
    dsrcMALZEMELIST->DataSet->Open();
    dsrcURUNLISTESI->DataSet->Close();
    dsrcURUNLISTESI->DataSet->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTopluRapor::SpeedButton2Click(TObject *Sender)
{
    frmRapor->queryURUNLISTESI->Close();
    frmRapor->queryURUNLISTESI->Open();
    frmRapor->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

