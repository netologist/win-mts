//---------------------------------------------------------------------------

#ifndef donemsonuH
#define donemsonuH
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
class TfrmDonemSonu : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRBand *DetailBand1;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQRDBText *QRDBText6;
    TQRDBText *QRDBText7;
    TDataSource *dsrcDONEMSONU;
    TQuery *queryDONEMSONU;
    TFloatField *queryDONEMSONUHAREKETINDEKS;
    TBooleanField *queryDONEMSONUHAREKETTURU;
    TDateField *queryDONEMSONUTARIH;
    TTimeField *queryDONEMSONUSAAT;
    TStringField *queryDONEMSONUDEPARTMAN;
    TStringField *queryDONEMSONUCINSI;
    TFloatField *queryDONEMSONUKOD;
    TStringField *queryDONEMSONUAD;
    TFloatField *queryDONEMSONUBIRIMFIYATI;
    TFloatField *queryDONEMSONUMIKTAR;
    TFloatField *queryDONEMSONUTUTAR;
    TStringField *queryDONEMSONUBELGENO;
    TQRBand *PageFooterBand1;
    TQRExpr *QRExpr1;
    TQRExpr *QRExpr2;
    TQRLabel *QRLabel10;
    TQRExpr *QRExpr3;
    TQRChildBand *ChildBand1;
    TQRLabel *QRLabel11;
    TQRExpr *QRExpr4;
    TQRLabel *qrlabelUNITE;
    TQRLabel *qrlabelTARIH;
    TQRLabel *QRLabel12;
    TQRLabel *QRLabel13;
    TQRSysData *QRSysData1;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmDonemSonu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmDonemSonu *frmDonemSonu;
//---------------------------------------------------------------------------
#endif
