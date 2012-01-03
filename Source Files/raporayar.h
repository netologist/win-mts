//---------------------------------------------------------------------------

#ifndef raporayarH
#define raporayarH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmRaporSecimi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TRadioGroup *RadioGroup1;
    TGroupBox *GroupBox3;
    TComboBox *comboYETKILI1;
    TComboBox *comboYETKILI2;
    TComboBox *comboYETKILI3;
    TComboBox *comboYETKILI4;
    TEdit *editYETKILI1RUTBE;
    TEdit *editYETKILI1GOREVI;
    TEdit *editYETKILI2RUTBE;
    TEdit *editYETKILI2GOREVI;
    TEdit *editYETKILI3RUTBE;
    TEdit *editYETKILI3GOREVI;
    TEdit *editYETKILI4RUTBE;
    TEdit *editYETKILI4GOREVI;
    TGroupBox *GroupBox2;
    TLabel *Label1;
    TEdit *editKopyaSayisi;
    TGroupBox *GroupBox4;
    TComboBox *comboYETKILI5;
    TEdit *editYETKILI5RUTBE;
    TEdit *editYETKILI5GOREVI;
    TLabel *Label3;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TGroupBox *GroupBox5;
    TLabel *Label4;
    TLabel *Label5;
    TStaticText *StaticText1;
    TStaticText *StaticText2;
    TEdit *editBaslangicStokKodu;
    TEdit *editBitisStokKodu;
    TDateTimePicker *DateTimePicker2;
    TDateTimePicker *DateTimePicker3;
    TQuery *queryPERSONEL;
    TIntegerField *queryPERSONELOncelik;
    TStringField *queryPERSONELRutbe;
    TStringField *queryPERSONELAdSoyad;
    TStringField *queryPERSONELGorevi;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton2;
    TLabel *Label2;
    TEdit *editBaslangicStokAdi;
    TEdit *editBitisStokAdi;
    TLabel *Label6;
    TUpDown *UpDown1;
    TSpeedButton *speedbutonBASLANGIC;
    TSpeedButton *speedbutonBITIS;
    TComboBox *comboDepartmanBaslangic;
    TComboBox *comboDepartmanBitis;
    TLabel *Label7;
    TComboBox *comboStokCinsiBaslangic;
    TComboBox *comboStokCinsiBitis;
    TCheckBox *checkboxGIRIS;
    TCheckBox *checkboxCIKIS;
    TCheckBox *checkboxHAZIRLIK;
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall PersonelBilgisiDoldur(void);
    void __fastcall RutbeYukle(void);
    void __fastcall RutbeKaydet(void);
    void __fastcall comboYETKILI1Change(TObject *Sender);
    void __fastcall comboYETKILI2Change(TObject *Sender);
    void __fastcall comboYETKILI3Change(TObject *Sender);
    void __fastcall comboYETKILI4Change(TObject *Sender);
    void __fastcall comboYETKILI5Change(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall RadioGroup1Click(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall MuaddelRaporOncesiHazirlik(void);
    void __fastcall MaliyetRaporOncesiHazirlik(void);
    void __fastcall SayimRaporuOncesiHazirlik(void);
    void __fastcall speedbutonBASLANGICClick(TObject *Sender);
    void __fastcall speedbutonBITISClick(TObject *Sender);
    void __fastcall FiyatListesiRaporOncesiHazirlik(void);
    void __fastcall HareketRaporuOncesiHazirlik(void);
    void __fastcall DonemSonuRaporuOncesiHazirlik(void);
    void __fastcall GunlukSatisRaporuOncesiHazirlik(void);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmRaporSecimi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmRaporSecimi *frmRaporSecimi;
//---------------------------------------------------------------------------
#endif
