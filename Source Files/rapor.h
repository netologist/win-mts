//---------------------------------------------------------------------------

#ifndef raporH
#define raporH
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
class TfrmRapor : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *DetailBand1;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQuery *queryURUNLISTESI;
    TStringField *queryURUNLISTESIINDEKS;
    TFloatField *queryURUNLISTESIKOD;
    TStringField *queryURUNLISTESIAD;
    TFloatField *queryURUNLISTESIFIYATI;
    TStringField *queryURUNLISTESIETIN_TURU;
    TFloatField *queryURUNLISTESIGRAMAJI;
    TDataSource *dsrcURUNLISTESI;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmRapor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmRapor *frmRapor;
//---------------------------------------------------------------------------
#endif
