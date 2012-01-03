object frmKartKopyala: TfrmKartKopyala
  Left = 371
  Top = 292
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Stok Kartý Kopyalama Modülü'
  ClientHeight = 172
  ClientWidth = 400
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 400
    Height = 172
    TabOrder = 0
    object Label1: TLabel
      Left = 6
      Top = 36
      Width = 52
      Height = 13
      Caption = 'Departman'
    end
    object Label2: TLabel
      Left = 39
      Top = 60
      Width = 19
      Height = 13
      Caption = 'Kod'
    end
    object Label3: TLabel
      Left = 40
      Top = 84
      Width = 18
      Height = 13
      Caption = 'Ýsim'
    end
    object SpeedButton1: TSpeedButton
      Left = 9
      Top = 111
      Width = 379
      Height = 55
      Caption = 'K o p y a l a'
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        33333FF3333333333333447333333333333377FFF33333333333744473333333
        333337773FF3333333333444447333333333373F773FF3333333334444447333
        33333373F3773FF3333333744444447333333337F333773FF333333444444444
        733333373F3333773FF333334444444444733FFF7FFFFFFF77FF999999999999
        999977777777777733773333CCCCCCCCCC3333337333333F7733333CCCCCCCCC
        33333337F3333F773333333CCCCCCC3333333337333F7733333333CCCCCC3333
        333333733F77333333333CCCCC333333333337FF7733333333333CCC33333333
        33333777333333333333CC333333333333337733333333333333}
      Layout = blGlyphTop
      NumGlyphs = 2
      OnClick = SpeedButton1Click
    end
    object Animate1: TAnimate
      Left = 81
      Top = 105
      Width = 272
      Height = 60
      Active = False
      CommonAVI = aviCopyFiles
      StopFrame = 34
      Visible = False
    end
    object StaticText1: TStaticText
      Left = 69
      Top = 12
      Width = 154
      Height = 17
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSunken
      Caption = 'K A Y N A K'
      TabOrder = 0
    end
    object StaticText2: TStaticText
      Left = 237
      Top = 12
      Width = 154
      Height = 17
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSunken
      Caption = 'H E D E F'
      TabOrder = 1
    end
    object ComboBox1: TComboBox
      Left = 69
      Top = 36
      Width = 154
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 2
    end
    object ComboBox2: TComboBox
      Left = 237
      Top = 36
      Width = 154
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 3
      OnChange = ComboBox2Change
    end
    object Edit1: TEdit
      Left = 69
      Top = 60
      Width = 88
      Height = 21
      ReadOnly = True
      TabOrder = 4
    end
    object Edit2: TEdit
      Left = 237
      Top = 60
      Width = 88
      Height = 21
      ReadOnly = True
      TabOrder = 5
    end
    object Edit3: TEdit
      Left = 69
      Top = 84
      Width = 154
      Height = 21
      ReadOnly = True
      TabOrder = 6
    end
    object Edit4: TEdit
      Left = 237
      Top = 84
      Width = 154
      Height = 21
      TabOrder = 7
    end
  end
  object queryYENIKOD: TQuery
    DatabaseName = 'OKosMTS'
    SQL.Strings = (
      'SELECT * FROM STOKANA')
    Left = 15
    Top = 99
    object queryYENIKODINDEKS: TStringField
      FieldName = 'INDEKS'
      Origin = 'OKOSMTS."STOKANA.DB".INDEKS'
      Size = 35
    end
    object queryYENIKODDEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Origin = 'OKOSMTS."STOKANA.DB".DEPARTMAN'
      Size = 25
    end
    object queryYENIKODKOD: TFloatField
      FieldName = 'KOD'
      Origin = 'OKOSMTS."STOKANA.DB".KOD'
    end
    object queryYENIKODCINSI_KUTUSU: TStringField
      FieldName = 'CINSI_KUTUSU'
      Origin = 'OKOSMTS."STOKANA.DB".CINSI_KUTUSU'
      Size = 15
    end
    object queryYENIKODCINSI: TStringField
      FieldName = 'CINSI'
      Origin = 'OKOSMTS."STOKANA.DB".CINSI'
      Size = 25
    end
    object queryYENIKODADI: TStringField
      FieldName = 'ADI'
      Origin = 'OKOSMTS."STOKANA.DB".ADI'
      Size = 30
    end
    object queryYENIKODOLCU_BIRIMI: TStringField
      FieldName = 'OLCU_BIRIMI'
      Origin = 'OKOSMTS."STOKANA.DB".OLCU_BIRIMI'
      Size = 10
    end
    object queryYENIKODBIRIM_ORANI: TFloatField
      FieldName = 'BIRIM_ORANI'
      Origin = 'OKOSMTS."STOKANA.DB".BIRIM_ORANI'
    end
    object queryYENIKODBIRIM_FIYATI: TFloatField
      FieldName = 'BIRIM_FIYATI'
      Origin = 'OKOSMTS."STOKANA.DB".BIRIM_FIYATI'
    end
    object queryYENIKODKDV_ORANI: TFloatField
      FieldName = 'KDV_ORANI'
      Origin = 'OKOSMTS."STOKANA.DB".KDV_ORANI'
    end
    object queryYENIKODDEVIR_MIKTARI: TFloatField
      FieldName = 'DEVIR_MIKTARI'
      Origin = 'OKOSMTS."STOKANA.DB".DEVIR_MIKTARI'
    end
    object queryYENIKODSON_DURUM: TFloatField
      FieldName = 'SON_DURUM'
      Origin = 'OKOSMTS."STOKANA.DB".SON_DURUM'
    end
    object queryYENIKODMALIYETI: TFloatField
      FieldName = 'MALIYETI'
      Origin = 'OKOSMTS."STOKANA.DB".MALIYETI'
    end
    object queryYENIKODISLETME_KARI: TFloatField
      FieldName = 'ISLETME_KARI'
      Origin = 'OKOSMTS."STOKANA.DB".ISLETME_KARI'
    end
    object queryYENIKODISLETME_GIDERI: TFloatField
      FieldName = 'ISLETME_GIDERI'
      Origin = 'OKOSMTS."STOKANA.DB".ISLETME_GIDERI'
    end
    object queryYENIKODARA_TOPLAM: TFloatField
      FieldName = 'ARA_TOPLAM'
      Origin = 'OKOSMTS."STOKANA.DB".ARA_TOPLAM'
    end
    object queryYENIKODKDV_TUTARI: TFloatField
      FieldName = 'KDV_TUTARI'
      Origin = 'OKOSMTS."STOKANA.DB".KDV_TUTARI'
    end
    object queryYENIKODGENEL_TOPLAM: TFloatField
      FieldName = 'GENEL_TOPLAM'
      Origin = 'OKOSMTS."STOKANA.DB".GENEL_TOPLAM'
    end
    object queryYENIKODYUVARLAMA: TFloatField
      FieldName = 'YUVARLAMA'
      Origin = 'OKOSMTS."STOKANA.DB".YUVARLAMA'
    end
  end
  object tblSTOKANA: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'stokana.DB'
    Left = 15
    Top = 129
    object tblSTOKANAINDEKS: TStringField
      FieldName = 'INDEKS'
      Size = 35
    end
    object tblSTOKANADEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Size = 25
    end
    object tblSTOKANAKOD: TFloatField
      FieldName = 'KOD'
    end
    object tblSTOKANACINSI_KUTUSU: TStringField
      FieldName = 'CINSI_KUTUSU'
      Size = 15
    end
    object tblSTOKANACINSI: TStringField
      FieldName = 'CINSI'
      Size = 25
    end
    object tblSTOKANAADI: TStringField
      FieldName = 'ADI'
      Size = 30
    end
    object tblSTOKANAOLCU_BIRIMI: TStringField
      FieldName = 'OLCU_BIRIMI'
      Size = 10
    end
    object tblSTOKANABIRIM_ORANI: TFloatField
      FieldName = 'BIRIM_ORANI'
    end
    object tblSTOKANABIRIM_FIYATI: TFloatField
      FieldName = 'BIRIM_FIYATI'
    end
    object tblSTOKANAKDV_ORANI: TFloatField
      FieldName = 'KDV_ORANI'
    end
    object tblSTOKANADEVIR_MIKTARI: TFloatField
      FieldName = 'DEVIR_MIKTARI'
    end
    object tblSTOKANASON_DURUM: TFloatField
      FieldName = 'SON_DURUM'
    end
    object tblSTOKANAMALIYETI: TFloatField
      FieldName = 'MALIYETI'
    end
    object tblSTOKANAISLETME_KARI: TFloatField
      FieldName = 'ISLETME_KARI'
    end
    object tblSTOKANAISLETME_GIDERI: TFloatField
      FieldName = 'ISLETME_GIDERI'
    end
    object tblSTOKANAARA_TOPLAM: TFloatField
      FieldName = 'ARA_TOPLAM'
    end
    object tblSTOKANAKDV_TUTARI: TFloatField
      FieldName = 'KDV_TUTARI'
    end
    object tblSTOKANAGENEL_TOPLAM: TFloatField
      FieldName = 'GENEL_TOPLAM'
    end
    object tblSTOKANAYUVARLAMA: TFloatField
      FieldName = 'YUVARLAMA'
    end
    object tblSTOKANATARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblSTOKANASAAT: TTimeField
      FieldName = 'SAAT'
    end
    object tblSTOKANAMUADDEL_BIRIMI: TStringField
      FieldName = 'MUADDEL_BIRIMI'
      Size = 10
    end
    object tblSTOKANAMUADDEL_BIRIM_ORANI: TFloatField
      FieldName = 'MUADDEL_BIRIM_ORANI'
    end
  end
  object tblURETIMANA: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'urunana.DB'
    Left = 48
    Top = 129
    object tblURETIMANAURUNKODU: TStringField
      FieldName = 'URUNKODU'
      Size = 35
    end
    object tblURETIMANAMALZEMEKODU: TStringField
      FieldName = 'MALZEMEKODU'
      Size = 35
    end
    object tblURETIMANAMALZEMEMIKTARI: TFloatField
      FieldName = 'MALZEMEMIKTARI'
    end
  end
end
