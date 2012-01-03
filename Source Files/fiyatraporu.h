//---------------------------------------------------------------------------

#ifndef fiyatraporuH
#define fiyatraporuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QuickRpt.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <jpeg.hpp>
#include <Qrctrls.hpp>
//---------------------------------------------------------------------------
class TfrmFiyatListesi : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *DetailBand1;
    TQRBand *PageHeaderBand1;
    TQRLabel *qrlabelISLETME_ADI;
    TQRLabel *QRLabel2;
    TQRLabel *qrlabelTARIH;
    TQRDBText *QRDBText1;
    TQuery *querySTOKLISTESI;
    TQRDBText *QRDBText2;
    TQRBand *ColumnHeaderBand1;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRShape *QRShape2;
    TQRBand *PageFooterBand1;
    TQRLabel *qrlabelYETKILI_ADI;
    TQRLabel *qrlabelYETKILI_RUTBESI;
    TQRLabel *qrlabelYETKILI_GOREVI;
    TQRImage *QRImage1;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmFiyatListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmFiyatListesi *frmFiyatListesi;
//---------------------------------------------------------------------------
#endif
