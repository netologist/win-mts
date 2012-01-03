//---------------------------------------------------------------------------

#ifndef sayimrapH
#define sayimrapH
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
class TfrmSayimRaporu : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *DetailBand1;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel2;
    TQRLabel *qrlabelISLETMEADI;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRSysData *QRSysData2;
    TQRDBText *QRDBText1;
    TQRDBText *qrdbtextSON_DURUM;
    TQRDBText *qrdbtextOLCU_BIRIMI;
    TQRExpr *qrexprTUTAR;
    TQRDBText *qrdbtextBIRIM_FIYATI;
    TQRBand *ColumnHeaderBand1;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel10;
    TQRLabel *qrlabelTARIH;
    TQuery *querySTOKANA;
    TQuery *querySTOKDURUMGIRISI;
    TQuery *querySTOKDURUMCIKISI;
    TFloatField *querySTOKDURUMGIRISISUMOFMIKTAR;
    TFloatField *querySTOKDURUMCIKISISUMOFMIKTAR;
    TTable *tblSTOKANA;
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
    TStringField *tblSTOKANAINDEKS;
    TStringField *tblSTOKANADEPARTMAN;
    TFloatField *tblSTOKANAKOD;
    TStringField *tblSTOKANACINSI_KUTUSU;
    TStringField *tblSTOKANACINSI;
    TStringField *tblSTOKANAADI;
    TStringField *tblSTOKANAOLCU_BIRIMI;
    TFloatField *tblSTOKANABIRIM_ORANI;
    TStringField *tblSTOKANAMUADDEL_BIRIMI;
    TFloatField *tblSTOKANAMUADDEL_BIRIM_ORANI;
    TFloatField *tblSTOKANABIRIM_FIYATI;
    TFloatField *tblSTOKANAKDV_ORANI;
    TFloatField *tblSTOKANADEVIR_MIKTARI;
    TFloatField *tblSTOKANASON_DURUM;
    TFloatField *tblSTOKANAMALIYETI;
    TFloatField *tblSTOKANAISLETME_KARI;
    TFloatField *tblSTOKANAISLETME_GIDERI;
    TFloatField *tblSTOKANAARA_TOPLAM;
    TFloatField *tblSTOKANAKDV_TUTARI;
    TFloatField *tblSTOKANAGENEL_TOPLAM;
    TFloatField *tblSTOKANAYUVARLAMA;
    TDateField *tblSTOKANATARIH;
    TTimeField *tblSTOKANASAAT;
    TQRBand *PageFooterBand1;
    TQRLabel *QRLabel3;
    TQRExpr *qrexprTUTAR_TOPLAMI;
    TQRChildBand *ChildBand1;
    TQRLabel *QRLabel11;
    TQRExpr *qrexprONCEKI_SAYFA_TUTARI;
    TQRDBText *QRDBText5;
    TQRLabel *QRLabel12;
    TQRLabel *QRLabel13;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmSayimRaporu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSayimRaporu *frmSayimRaporu;
//---------------------------------------------------------------------------
#endif
