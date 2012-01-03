object frmFiyatAyarlama: TfrmFiyatAyarlama
  Left = 348
  Top = 207
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Fiyat Ayarlama Modülü'
  ClientHeight = 265
  ClientWidth = 278
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
    Top = 159
    Width = 277
    Height = 106
    TabOrder = 0
    object SpeedButton1: TSpeedButton
      Left = 9
      Top = 51
      Width = 190
      Height = 46
      Caption = 'Fiyatlandýrmaya Baþla'
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000130B0000130B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333300000003
        33333333777777733333333330CCC03333333333F7777733F3333330330C0330
        33333337337773373333333333303333333333F33337333333F3303333333333
        3033373333333333373333333333333333333F3333333333333F033333333333
        3303733333333333337333333333333333333F3333333333333F033333333333
        3303733333333333FF7333333333333000333FFFFF33333777FF000003333307
        B70377777F333377777F09990333330BBB0377777F333377777F099903333307
        B70377777F3333777773099903333330003377777F3333377733000003333330
        3333777773F3F3F7333333333030303333333333373737333333}
      NumGlyphs = 2
      OnClick = SpeedButton1Click
    end
    object labelYUZDE: TLabel
      Left = 9
      Top = 33
      Width = 17
      Height = 13
      Caption = '% 0'
    end
    object Panel1: TPanel
      Left = 207
      Top = 36
      Width = 61
      Height = 61
      TabOrder = 0
      object Animate1: TAnimate
        Left = 6
        Top = 5
        Width = 48
        Height = 50
        Active = False
        CommonAVI = aviFindFile
        StopFrame = 23
      end
    end
    object ProgressBar1: TProgressBar
      Left = 9
      Top = 12
      Width = 259
      Height = 18
      Min = 0
      Max = 100
      Smooth = True
      Step = 100
      TabOrder = 1
    end
  end
  object GroupBox2: TGroupBox
    Left = 0
    Top = 51
    Width = 277
    Height = 115
    Color = clBtnFace
    ParentColor = False
    TabOrder = 1
    object Label1: TLabel
      Left = 9
      Top = 63
      Width = 50
      Height = 13
      Caption = 'Stok Kodu'
    end
    object Label2: TLabel
      Left = 19
      Top = 87
      Width = 40
      Height = 13
      Caption = 'Stok Adý'
    end
    object Label3: TLabel
      Left = 6
      Top = 12
      Width = 89
      Height = 13
      Caption = 'Departman Seçiniz'
    end
    object Bevel1: TBevel
      Left = 6
      Top = 54
      Width = 262
      Height = 4
    end
    object editStokKodu: TEdit
      Left = 69
      Top = 63
      Width = 199
      Height = 21
      Enabled = False
      TabOrder = 0
    end
    object editStokAdi: TEdit
      Left = 69
      Top = 87
      Width = 199
      Height = 21
      Enabled = False
      TabOrder = 1
    end
    object comboDepartman: TComboBox
      Left = 6
      Top = 27
      Width = 265
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 2
    end
  end
  object RadioGroup1: TRadioGroup
    Left = 0
    Top = 0
    Width = 277
    Height = 58
    ItemIndex = 0
    Items.Strings = (
      'Ýlk Giren Ýlk Çýkar Yöntemine Göre'
      'Son Giren Ýlk Çýkar Yöntemine Göre')
    TabOrder = 2
  end
  object querySTOKANA: TQuery
    DatabaseName = 'OKosMTS'
    SQL.Strings = (
      'SELECT * FROM STOKANA'
      'WHERE DEPARTMAN LIKE :DEPARTMAN AND CINSI_KUTUSU = "Malzeme"')
    Left = 282
    Top = 6
    ParamData = <
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end>
    object querySTOKANAINDEKS: TStringField
      FieldName = 'INDEKS'
      Origin = 'OKOSMTS."stokana.DB".INDEKS'
      Size = 35
    end
    object querySTOKANADEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Origin = 'OKOSMTS."stokana.DB".DEPARTMAN'
      Size = 25
    end
    object querySTOKANAKOD: TFloatField
      FieldName = 'KOD'
      Origin = 'OKOSMTS."stokana.DB".KOD'
    end
    object querySTOKANACINSI_KUTUSU: TStringField
      FieldName = 'CINSI_KUTUSU'
      Origin = 'OKOSMTS."stokana.DB".CINSI_KUTUSU'
      Size = 15
    end
    object querySTOKANACINSI: TStringField
      FieldName = 'CINSI'
      Origin = 'OKOSMTS."stokana.DB".CINSI'
      Size = 25
    end
    object querySTOKANAADI: TStringField
      FieldName = 'ADI'
      Origin = 'OKOSMTS."stokana.DB".ADI'
      Size = 30
    end
    object querySTOKANAOLCU_BIRIMI: TStringField
      FieldName = 'OLCU_BIRIMI'
      Origin = 'OKOSMTS."stokana.DB".OLCU_BIRIMI'
      Size = 10
    end
    object querySTOKANABIRIM_ORANI: TFloatField
      FieldName = 'BIRIM_ORANI'
      Origin = 'OKOSMTS."stokana.DB".BIRIM_ORANI'
    end
    object querySTOKANABIRIM_FIYATI: TFloatField
      FieldName = 'BIRIM_FIYATI'
      Origin = 'OKOSMTS."stokana.DB".BIRIM_FIYATI'
    end
    object querySTOKANAKDV_ORANI: TFloatField
      FieldName = 'KDV_ORANI'
      Origin = 'OKOSMTS."stokana.DB".KDV_ORANI'
    end
    object querySTOKANADEVIR_MIKTARI: TFloatField
      FieldName = 'DEVIR_MIKTARI'
      Origin = 'OKOSMTS."stokana.DB".DEVIR_MIKTARI'
    end
    object querySTOKANASON_DURUM: TFloatField
      FieldName = 'SON_DURUM'
      Origin = 'OKOSMTS."stokana.DB".SON_DURUM'
    end
    object querySTOKANAMALIYETI: TFloatField
      FieldName = 'MALIYETI'
      Origin = 'OKOSMTS."stokana.DB".MALIYETI'
    end
    object querySTOKANAISLETME_KARI: TFloatField
      FieldName = 'ISLETME_KARI'
      Origin = 'OKOSMTS."stokana.DB".ISLETME_KARI'
    end
    object querySTOKANAISLETME_GIDERI: TFloatField
      FieldName = 'ISLETME_GIDERI'
      Origin = 'OKOSMTS."stokana.DB".ISLETME_GIDERI'
    end
    object querySTOKANAARA_TOPLAM: TFloatField
      FieldName = 'ARA_TOPLAM'
      Origin = 'OKOSMTS."stokana.DB".ARA_TOPLAM'
    end
    object querySTOKANAKDV_TUTARI: TFloatField
      FieldName = 'KDV_TUTARI'
      Origin = 'OKOSMTS."stokana.DB".KDV_TUTARI'
    end
    object querySTOKANAGENEL_TOPLAM: TFloatField
      FieldName = 'GENEL_TOPLAM'
      Origin = 'OKOSMTS."stokana.DB".GENEL_TOPLAM'
    end
    object querySTOKANAYUVARLAMA: TFloatField
      FieldName = 'YUVARLAMA'
      Origin = 'OKOSMTS."stokana.DB".YUVARLAMA'
    end
    object querySTOKANATARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'OKOSMTS."stokana.DB".TARIH'
    end
    object querySTOKANASAAT: TTimeField
      FieldName = 'SAAT'
      Origin = 'OKOSMTS."stokana.DB".SAAT'
    end
  end
  object querySTOKGIRISI: TQuery
    DatabaseName = 'OkosMTS'
    SQL.Strings = (
      'SELECT * FROM STOKDURUMU'
      
        'WHERE HAREKETTURU=TRUE AND (DEPARTMAN=:DEPARTMAN AND STOKKODU=:K' +
        'OD)'
      'ORDER BY TARIH, SAAT')
    Left = 312
    Top = 6
    ParamData = <
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end
      item
        DataType = ftInteger
        Name = 'KOD'
        ParamType = ptUnknown
      end>
    object querySTOKGIRISIHAREKETINDEKS: TFloatField
      FieldName = 'HAREKETINDEKS'
      Origin = 'OKOSMTS."STOKDURUMU.DB".HAREKETINDEKS'
    end
    object querySTOKGIRISIHAREKETTURU: TBooleanField
      FieldName = 'HAREKETTURU'
      Origin = 'OKOSMTS."STOKDURUMU.DB".HAREKETTURU'
    end
    object querySTOKGIRISIBELGENO: TStringField
      FieldName = 'BELGENO'
      Origin = 'OKOSMTS."STOKDURUMU.DB".BELGENO'
      Size = 15
    end
    object querySTOKGIRISITARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'OKOSMTS."STOKDURUMU.DB".TARIH'
    end
    object querySTOKGIRISIDEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Origin = 'OKOSMTS."STOKDURUMU.DB".DEPARTMAN'
      Size = 35
    end
    object querySTOKGIRISISTOKKODU: TFloatField
      FieldName = 'STOKKODU'
      Origin = 'OKOSMTS."STOKDURUMU.DB".STOKKODU'
    end
    object querySTOKGIRISISTOKADI: TStringField
      FieldName = 'STOKADI'
      Origin = 'OKOSMTS."STOKDURUMU.DB".STOKADI'
      Size = 35
    end
    object querySTOKGIRISIBIRIMFIYATI: TFloatField
      FieldName = 'BIRIMFIYATI'
      Origin = 'OKOSMTS."STOKDURUMU.DB".BIRIMFIYATI'
    end
    object querySTOKGIRISIMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      Origin = 'OKOSMTS."STOKDURUMU.DB".MIKTAR'
    end
    object querySTOKGIRISITUTAR: TFloatField
      FieldName = 'TUTAR'
      Origin = 'OKOSMTS."STOKDURUMU.DB".TUTAR'
    end
    object querySTOKGIRISISAAT: TTimeField
      FieldName = 'SAAT'
      Origin = 'OKOSMTS."STOKDURUMU.DB".SAAT'
    end
  end
  object querySTOKCIKISI: TQuery
    DatabaseName = 'OkosMTS'
    SQL.Strings = (
      'SELECT SUM(MIKTAR) FROM STOKDURUMU'
      
        'WHERE HAREKETTURU=FALSE AND (DEPARTMAN=:DEPARTMAN AND STOKKODU=:' +
        'KOD)')
    Left = 342
    Top = 6
    ParamData = <
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end
      item
        DataType = ftFloat
        Name = 'KOD'
        ParamType = ptUnknown
      end>
    object querySTOKCIKISISUMOFMIKTAR: TFloatField
      FieldName = 'SUM OF MIKTAR'
      Origin = 'OKOSMTS."STOKDURUMU.DB".MIKTAR'
    end
  end
  object tblSTOKANA: TTable
    DatabaseName = 'OkosMTS'
    TableName = 'stokana.DB'
    Left = 372
    Top = 6
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
  end
end
