//---------------------------------------------------------------------------

#ifndef muadraporuH
#define muadraporuH
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
class TfrmMuaddelCetveli : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TDataSource *dsrcSTOKKARTI;
    TTable *tblSTOKKARTI;
    TQRBand *DetailBand1;
    TQRBand *ColumnHeaderBand1;
    TQRLabel *QRLabel1;
    TDataSource *dsrcURETIMRECETESI;
    TQuery *queryURETIMRECETESI;
    TQRLabel *QRLabel2;
    TQRDBText *QRDBText1;
    TQRLabel *QRLabel3;
    TQRDBText *QRDBText2;
    TQRSubDetail *QRSubDetail1;
    TQRBand *GroupHeaderBand1;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQRShape *QRShape1;
    TQRShape *QRShape2;
    TQRShape *QRShape3;
    TQRShape *QRShape4;
    TQRBand *GroupFooterBand1;
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
    TFloatField *queryURETIMRECETESIKOD;
    TStringField *queryURETIMRECETESIADI;
    TFloatField *queryURETIMRECETESIOLCUSU;
    TStringField *queryURETIMRECETESIBIRIMI;
    TFloatField *queryURETIMRECETESIMIKTAR;
    TFloatField *queryURETIMRECETESIBIRIMFIYATI;
    TFloatField *queryURETIMRECETESIKDV;
    TFloatField *queryURETIMRECETESIKDVTUTARI;
    TFloatField *queryURETIMRECETESITUTAR;
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
    TQRLabel *qrlabelISLETME_ADI;
    TQRLabel *qrlabelTARIH;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmMuaddelCetveli(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMuaddelCetveli *frmMuaddelCetveli;
//---------------------------------------------------------------------------
#endif
