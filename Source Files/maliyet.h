//---------------------------------------------------------------------------

#ifndef maliyetH
#define maliyetH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TfrmMaliyetCetveli : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel1;
    TQRBand *DetailBand2;
    TDataSource *dsrcURETIMRECETESI;
    TQuery *queryURETIMRECETESI;
    TQRDBText *QRDBText1;
    TDataSource *dsrcSTOKKARTI;
    TTable *tblSTOKKARTI;
    TQRSubDetail *QRSubDetail1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQRDBText *QRDBText6;
    TQRDBText *QRDBText7;
    TQRDBText *QRDBText8;
    TQRBand *GroupHeaderBand1;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel10;
    TQRLabel *QRLabel11;
    TQRLabel *QRLabel12;
    TQRLabel *QRLabel13;
    TQRLabel *QRLabel14;
    TQRLabel *QRLabel15;
    TQRLabel *QRLabel16;
    TQRDBText *QRDBText15;
    TQRBand *GroupFooterBand1;
    TQRDBText *QRDBText9;
    TQRLabel *QRLabel2;
    TQRLabel *qrlabelISLETMEKARI;
    TQRLabel *qrlabelISLETMEGIDERI;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRDBText *QRDBText10;
    TQRDBText *QRDBText11;
    TQRDBText *QRDBText12;
    TQRDBText *QRDBText13;
    TQRDBText *QRDBText14;
    TQRShape *QRShape1;
    TQRShape *QRShape3;
    TQRShape *QRShape4;
    TQRShape *QRShape5;
    TQRShape *QRShape6;
    TQRShape *QRShape7;
    TQRShape *QRShape8;
    TQRShape *QRShape9;
    TQRShape *QRShape10;
    TQRShape *QRShape11;
    TQRShape *QRShape12;
    TQRShape *QRShape13;
    TQRShape *QRShape14;
    TQRShape *QRShape2;
    TQRLabel *QRLabel17;
    TQRDBText *QRDBText16;
    TQRShape *QRShape15;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel18;
    TQRDBText *QRDBText17;
    TQRShape *QRShape16;
    TQRShape *QRShape17;
    TQRLabel *QRLabel19;
    TQRLabel *QRLabel21;
    TQRLabel *qrlabelYETKILI1ADI;
    TQRLabel *qrlabelYETKILI1RUTBE;
    TQRLabel *qrlabelYETKILI1GOREVI;
    TQRLabel *qrlabelYETKILI2ADI;
    TQRLabel *qrlabelYETKILI2RUTBE;
    TQRLabel *qrlabelYETKILI2GOREVI;
    TQRLabel *qrlabelYETKILI3ADI;
    TQRLabel *qrlabelYETKILI3RUTBE;
    TQRLabel *qrlabelYETKILI3GOREVI;
    TQRLabel *qrlabelYETKILI4ADI;
    TQRLabel *qrlabelYETKILI4RUTBE;
    TQRLabel *qrlabelYETKILI4GOREVI;
    TQRLabel *qrlabelYETKILI5ADI;
    TQRLabel *qrlabelYETKILI5RUTBE;
    TQRLabel *qrlabelYETKILI5GOREVI;
    TStringField *tblSTOKKARTIINDEKS;
    TStringField *tblSTOKKARTIDEPARTMAN;
    TFloatField *tblSTOKKARTIKOD;
    TStringField *tblSTOKKARTICINSI_KUTUSU;
    TStringField *tblSTOKKARTICINSI;
    TStringField *tblSTOKKARTIADI;
    TStringField *tblSTOKKARTIOLCU_BIRIMI;
    TFloatField *tblSTOKKARTIBIRIM_ORANI;
    TFloatField *tblSTOKKARTIBIRIM_FIYATI;
    TFloatField *tblSTOKKARTIKDV_ORANI;
    TFloatField *tblSTOKKARTIDEVIR_MIKTARI;
    TFloatField *tblSTOKKARTISON_DURUM;
    TFloatField *tblSTOKKARTIMALIYETI;
    TFloatField *tblSTOKKARTIISLETME_KARI;
    TFloatField *tblSTOKKARTIISLETME_GIDERI;
    TFloatField *tblSTOKKARTIARA_TOPLAM;
    TFloatField *tblSTOKKARTIKDV_TUTARI;
    TFloatField *tblSTOKKARTIGENEL_TOPLAM;
    TFloatField *tblSTOKKARTIYUVARLAMA;
    TDateField *tblSTOKKARTITARIH;
    TTimeField *tblSTOKKARTISAAT;
    TFloatField *queryURETIMRECETESIKOD;
    TStringField *queryURETIMRECETESIADI;
    TFloatField *queryURETIMRECETESIOLCUSU;
    TStringField *queryURETIMRECETESIBIRIMI;
    TFloatField *queryURETIMRECETESIMIKTAR;
    TFloatField *queryURETIMRECETESIBIRIMFIYATI;
    TFloatField *queryURETIMRECETESIKDV;
    TFloatField *queryURETIMRECETESIKDVTUTARI;
    TFloatField *queryURETIMRECETESITUTAR;
    TQRLabel *qrlabelTARIH;
    TQRLabel *qrlabelISLETME_ADI;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmMaliyetCetveli(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMaliyetCetveli *frmMaliyetCetveli;
//---------------------------------------------------------------------------
#endif
