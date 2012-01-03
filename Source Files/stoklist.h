//---------------------------------------------------------------------------

#ifndef stoklistH
#define stoklistH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TfrmStokListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TGroupBox *GroupBox2;
    TLabel *Label1;
    TEdit *editSTOKKODU;
    TLabel *Label2;
    TEdit *editSTOKADI;
    TDataSource *dsrcSTOKLISTESI;
    TQuery *querySTOKLISTESI;
    TStringField *querySTOKLISTESIINDEKS;
    TStringField *querySTOKLISTESIDEPARTMAN;
    TFloatField *querySTOKLISTESIKOD;
    TStringField *querySTOKLISTESICINSI_KUTUSU;
    TStringField *querySTOKLISTESICINSI;
    TStringField *querySTOKLISTESIADI;
    TStringField *querySTOKLISTESIOLCU_BIRIMI;
    TFloatField *querySTOKLISTESIBIRIM_ORANI;
    TFloatField *querySTOKLISTESIBIRIM_FIYATI;
    TFloatField *querySTOKLISTESIKDV_ORANI;
    TFloatField *querySTOKLISTESIDEVIR_MIKTARI;
    TFloatField *querySTOKLISTESISON_DURUM;
    TFloatField *querySTOKLISTESIMALIYETI;
    TFloatField *querySTOKLISTESIISLETME_KARI;
    TFloatField *querySTOKLISTESIISLETME_GIDERI;
    TFloatField *querySTOKLISTESIARA_TOPLAM;
    TFloatField *querySTOKLISTESIKDV_TUTARI;
    TFloatField *querySTOKLISTESIGENEL_TOPLAM;
    TFloatField *querySTOKLISTESIYUVARLAMA;
    TGroupBox *GroupBox3;
    TLabel *Label3;
    TComboBox *comboDepartman;
    TComboBox *comboCinsi;
    TLabel *Label4;
    TStringField *querySTOKLISTESIMUADDEL_BIRIMI;
    TFloatField *querySTOKLISTESIMUADDEL_BIRIM_ORANI;
    TDateField *querySTOKLISTESITARIH;
    TTimeField *querySTOKLISTESISAAT;
    void __fastcall editSTOKKODUChange(TObject *Sender);
    void __fastcall editSTOKADIChange(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall Secim(void);
    void __fastcall comboDepartmanChange(TObject *Sender);
    void __fastcall comboCinsiChange(TObject *Sender);
    void __fastcall dbcomboCinsiChange(TObject *Sender);
    void __fastcall editSTOKKODUClick(TObject *Sender);
    void __fastcall editSTOKADIClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmStokListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmStokListesi *frmStokListesi;
//---------------------------------------------------------------------------
#endif
