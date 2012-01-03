//---------------------------------------------------------------------------

#ifndef hareketraporuH
#define hareketraporuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmHareketRaporu : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *PageHeaderBand1;
    TQRBand *ColumnHeaderBand1;
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel12;
    TQRLabel *qrlabelDEPARTMAN;
    TQRBand *DetailBand1;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQuery *querySTOKANA;
    TQuery *querySTOKDURUMU;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel10;
    TQRLabel *QRLabel11;
    TDataSource *dsrcSTOKANA;
    TDataSource *dsrcSTOKDURUMU;
    TFloatField *querySTOKDURUMUHAREKETINDEKS;
    TBooleanField *querySTOKDURUMUHAREKETTURU;
    TStringField *querySTOKDURUMUBELGENO;
    TDateField *querySTOKDURUMUTARIH;
    TTimeField *querySTOKDURUMUSAAT;
    TStringField *querySTOKDURUMUDEPARTMAN;
    TFloatField *querySTOKDURUMUSTOKKODU;
    TStringField *querySTOKDURUMUSTOKADI;
    TFloatField *querySTOKDURUMUBIRIMFIYATI;
    TFloatField *querySTOKDURUMUMIKTAR;
    TFloatField *querySTOKDURUMUTUTAR;
    TStringField *querySTOKANAINDEKS;
    TStringField *querySTOKANADEPARTMAN;
    TFloatField *querySTOKANAKOD;
    TStringField *querySTOKANACINSI_KUTUSU;
    TStringField *querySTOKANACINSI;
    TStringField *querySTOKANAADI;
    TStringField *querySTOKANAOLCU_BIRIMI;
    TFloatField *querySTOKANABIRIM_ORANI;
    TStringField *querySTOKANAMUADDEL_BIRIMI;
    TFloatField *querySTOKANAMUADDEL_BIRIM_ORANI;
    TFloatField *querySTOKANABIRIM_FIYATI;
    TFloatField *querySTOKANAKDV_ORANI;
    TFloatField *querySTOKANADEVIR_MIKTARI;
    TFloatField *querySTOKANASON_DURUM;
    TFloatField *querySTOKANAMALIYETI;
    TFloatField *querySTOKANAISLETME_KARI;
    TFloatField *querySTOKANAISLETME_GIDERI;
    TFloatField *querySTOKANAARA_TOPLAM;
    TFloatField *querySTOKANAKDV_TUTARI;
    TFloatField *querySTOKANAGENEL_TOPLAM;
    TFloatField *querySTOKANAYUVARLAMA;
    TDateField *querySTOKANATARIH;
    TTimeField *querySTOKANASAAT;
    TQRSubDetail *QRSubDetail1;
    TQRDBText *QRDBText6;
    TQRDBText *QRDBText7;
    TQRDBText *QRDBText8;
    TQRDBText *QRDBText9;
    TQRDBText *QRDBText10;
    TQRDBText *QRDBText11;
    TQRSysData *QRSysData1;
    TQRLabel *QRLabel13;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHareketRaporu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHareketRaporu *frmHareketRaporu;
//---------------------------------------------------------------------------
#endif
