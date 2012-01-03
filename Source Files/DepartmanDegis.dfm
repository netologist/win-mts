object frmDepartmanAdiDegistir: TfrmDepartmanAdiDegistir
  Left = 364
  Top = 394
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Departman Adý Deðiþtirme Modülü'
  ClientHeight = 164
  ClientWidth = 364
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
    Width = 364
    Height = 145
    TabOrder = 0
    object SpeedButton1: TSpeedButton
      Left = 285
      Top = 12
      Width = 70
      Height = 61
      Caption = 'Ýþlemi Baþlat'
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00555555555555
        555555555555555555555555555555555555555555FF55555555555559055555
        55555555577FF5555555555599905555555555557777F5555555555599905555
        555555557777FF5555555559999905555555555777777F555555559999990555
        5555557777777FF5555557990599905555555777757777F55555790555599055
        55557775555777FF5555555555599905555555555557777F5555555555559905
        555555555555777FF5555555555559905555555555555777FF55555555555579
        05555555555555777FF5555555555557905555555555555777FF555555555555
        5990555555555555577755555555555555555555555555555555}
      Layout = blGlyphTop
      NumGlyphs = 2
      OnClick = SpeedButton1Click
    end
    object Animate1: TAnimate
      Left = 9
      Top = 12
      Width = 272
      Height = 60
      Active = False
      CommonAVI = aviCopyFiles
      StopFrame = 34
    end
    object GroupBox2: TGroupBox
      Left = 9
      Top = 75
      Width = 346
      Height = 64
      TabOrder = 1
      object StaticText1: TStaticText
        Left = 6
        Top = 13
        Width = 163
        Height = 16
        Alignment = taCenter
        AutoSize = False
        BorderStyle = sbsSingle
        Caption = 'Eski Departman'
        Color = clScrollBar
        ParentColor = False
        TabOrder = 0
      end
      object comboEskiDepartman: TComboBox
        Left = 6
        Top = 36
        Width = 163
        Height = 21
        Style = csDropDownList
        ItemHeight = 13
        TabOrder = 1
      end
      object StaticText2: TStaticText
        Left = 175
        Top = 13
        Width = 163
        Height = 16
        Alignment = taCenter
        AutoSize = False
        BorderStyle = sbsSingle
        Caption = 'Yeni Departman'
        Color = clScrollBar
        ParentColor = False
        TabOrder = 2
      end
      object editYeniDepartman: TEdit
        Left = 175
        Top = 36
        Width = 163
        Height = 21
        TabOrder = 3
      end
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 145
    Width = 364
    Height = 19
    Panels = <
      item
        Alignment = taCenter
        Text = 'Kalan Kayýt'
        Width = 75
      end
      item
        Alignment = taRightJustify
        Width = 40
      end
      item
        Alignment = taCenter
        BiDiMode = bdLeftToRight
        ParentBiDiMode = False
        Text = 'Yapýlan Ýþlem'
        Width = 80
      end
      item
        Width = 50
      end>
    SimplePanel = False
  end
  object tblSTOKANA: TTable
    DatabaseName = 'OkosMTS'
    TableName = 'stokana.DB'
    Left = 531
    Top = 99
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
    object tblSTOKANAMUADDEL_BIRIMI: TStringField
      FieldName = 'MUADDEL_BIRIMI'
      Size = 10
    end
    object tblSTOKANAMUADDEL_BIRIM_ORANI: TFloatField
      FieldName = 'MUADDEL_BIRIM_ORANI'
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
  object querySTOKANA: TQuery
    DatabaseName = 'OkosMTS'
    SQL.Strings = (
      'SELECT * FROM STOKANA'
      'WHERE DEPARTMAN=:DEPARTMAN'
      'ORDER BY CINSI_KUTUSU')
    Left = 501
    Top = 99
    ParamData = <
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end>
    object querySTOKANAINDEKS: TStringField
      FieldName = 'INDEKS'
      Origin = 'OKOSMTS."STOKANA.DB".INDEKS'
      Size = 35
    end
    object querySTOKANADEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Origin = 'OKOSMTS."STOKANA.DB".DEPARTMAN'
      Size = 25
    end
    object querySTOKANAKOD: TFloatField
      FieldName = 'KOD'
      Origin = 'OKOSMTS."STOKANA.DB".KOD'
    end
    object querySTOKANACINSI_KUTUSU: TStringField
      FieldName = 'CINSI_KUTUSU'
      Origin = 'OKOSMTS."STOKANA.DB".CINSI_KUTUSU'
      Size = 15
    end
    object querySTOKANACINSI: TStringField
      FieldName = 'CINSI'
      Origin = 'OKOSMTS."STOKANA.DB".CINSI'
      Size = 25
    end
    object querySTOKANAADI: TStringField
      FieldName = 'ADI'
      Origin = 'OKOSMTS."STOKANA.DB".ADI'
      Size = 30
    end
    object querySTOKANAOLCU_BIRIMI: TStringField
      FieldName = 'OLCU_BIRIMI'
      Origin = 'OKOSMTS."STOKANA.DB".OLCU_BIRIMI'
      Size = 10
    end
    object querySTOKANABIRIM_ORANI: TFloatField
      FieldName = 'BIRIM_ORANI'
      Origin = 'OKOSMTS."STOKANA.DB".BIRIM_ORANI'
    end
    object querySTOKANAMUADDEL_BIRIMI: TStringField
      FieldName = 'MUADDEL_BIRIMI'
      Origin = 'OKOSMTS."STOKANA.DB".MUADDEL_BIRIMI'
      Size = 10
    end
    object querySTOKANAMUADDEL_BIRIM_ORANI: TFloatField
      FieldName = 'MUADDEL_BIRIM_ORANI'
      Origin = 'OKOSMTS."STOKANA.DB".MUADDEL_BIRIM_ORANI'
    end
    object querySTOKANABIRIM_FIYATI: TFloatField
      FieldName = 'BIRIM_FIYATI'
      Origin = 'OKOSMTS."STOKANA.DB".BIRIM_FIYATI'
    end
    object querySTOKANAKDV_ORANI: TFloatField
      FieldName = 'KDV_ORANI'
      Origin = 'OKOSMTS."STOKANA.DB".KDV_ORANI'
    end
    object querySTOKANADEVIR_MIKTARI: TFloatField
      FieldName = 'DEVIR_MIKTARI'
      Origin = 'OKOSMTS."STOKANA.DB".DEVIR_MIKTARI'
    end
    object querySTOKANASON_DURUM: TFloatField
      FieldName = 'SON_DURUM'
      Origin = 'OKOSMTS."STOKANA.DB".SON_DURUM'
    end
    object querySTOKANAMALIYETI: TFloatField
      FieldName = 'MALIYETI'
      Origin = 'OKOSMTS."STOKANA.DB".MALIYETI'
    end
    object querySTOKANAISLETME_KARI: TFloatField
      FieldName = 'ISLETME_KARI'
      Origin = 'OKOSMTS."STOKANA.DB".ISLETME_KARI'
    end
    object querySTOKANAISLETME_GIDERI: TFloatField
      FieldName = 'ISLETME_GIDERI'
      Origin = 'OKOSMTS."STOKANA.DB".ISLETME_GIDERI'
    end
    object querySTOKANAARA_TOPLAM: TFloatField
      FieldName = 'ARA_TOPLAM'
      Origin = 'OKOSMTS."STOKANA.DB".ARA_TOPLAM'
    end
    object querySTOKANAKDV_TUTARI: TFloatField
      FieldName = 'KDV_TUTARI'
      Origin = 'OKOSMTS."STOKANA.DB".KDV_TUTARI'
    end
    object querySTOKANAGENEL_TOPLAM: TFloatField
      FieldName = 'GENEL_TOPLAM'
      Origin = 'OKOSMTS."STOKANA.DB".GENEL_TOPLAM'
    end
    object querySTOKANAYUVARLAMA: TFloatField
      FieldName = 'YUVARLAMA'
      Origin = 'OKOSMTS."STOKANA.DB".YUVARLAMA'
    end
    object querySTOKANATARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'OKOSMTS."STOKANA.DB".TARIH'
    end
    object querySTOKANASAAT: TTimeField
      FieldName = 'SAAT'
      Origin = 'OKOSMTS."STOKANA.DB".SAAT'
    end
  end
  object queryURUNANA: TQuery
    DatabaseName = 'OkosMTS'
    SQL.Strings = (
      'SELECT * FROM URUNANA')
    Left = 411
    Top = 99
  end
  object queryFIYATGECMISI: TQuery
    DatabaseName = 'OkosMTS'
    SQL.Strings = (
      'SELECT * FROM FIYATGECMISI')
    Left = 441
    Top = 99
  end
  object querySTOKHAR: TQuery
    DatabaseName = 'OkosMTS'
    SQL.Strings = (
      'SELECT * FROM STOKHAR')
    Left = 471
    Top = 99
  end
  object querySTOKDURUMU: TQuery
    DatabaseName = 'OkosMTS'
    SQL.Strings = (
      'SELECT * FROM STOKDURUMU')
    Left = 381
    Top = 99
  end
  object querySATISCETVELI: TQuery
    DatabaseName = 'OKosMTS'
    SQL.Strings = (
      'SELECT * FROM SATISCETVELI')
    Left = 384
    Top = 66
  end
  object tblDEPARTMAN: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'departman.db'
    Left = 417
    Top = 66
    object tblDEPARTMANDEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Size = 40
    end
  end
end
