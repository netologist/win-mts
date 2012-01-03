object frmSayimRaporu: TfrmSayimRaporu
  Left = 205
  Top = 147
  Width = 822
  Height = 525
  Caption = 'Sayým Raporu'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object QuickRep1: TQuickRep
    Tag = 1
    Left = -3
    Top = -3
    Width = 794
    Height = 1123
    Frame.Color = clBlack
    Frame.DrawTop = False
    Frame.DrawBottom = False
    Frame.DrawLeft = False
    Frame.DrawRight = False
    DataSet = querySTOKANA
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    Functions.Strings = (
      'PAGENUMBER'
      'COLUMNNUMBER'
      'REPORTTITLE'
      'QRSTRINGSBAND1')
    Functions.DATA = (
      '0'
      '0'
      #39#39
      #39#39)
    Options = [FirstPageHeader, LastPageFooter]
    Page.Columns = 1
    Page.Orientation = poPortrait
    Page.PaperSize = A4
    Page.Values = (
      127
      2970
      127
      2100
      127
      127
      0)
    PrinterSettings.Copies = 1
    PrinterSettings.Duplex = False
    PrinterSettings.FirstPage = 0
    PrinterSettings.LastPage = 0
    PrinterSettings.OutputBin = Auto
    PrintIfEmpty = True
    SnapToGrid = True
    Units = Inches
    Zoom = 100
    object DetailBand1: TQRBand
      Left = 48
      Top = 157
      Width = 698
      Height = 21
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        55.5625
        1846.79166666667)
      BandType = rbDetail
      object QRDBText1: TQRDBText
        Left = 54
        Top = 1
        Width = 217
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          142.875
          2.64583333333333
          574.145833333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKANA
        DataField = 'ADI'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrdbtextSON_DURUM: TQRDBText
        Left = 276
        Top = 1
        Width = 67
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          730.25
          2.64583333333333
          177.270833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKANA
        DataField = 'SON_DURUM'
        Mask = '##,###.###'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrdbtextOLCU_BIRIMI: TQRDBText
        Left = 348
        Top = 1
        Width = 49
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          920.75
          2.64583333333333
          129.645833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKANA
        DataField = 'OLCU_BIRIMI'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrexprTUTAR: TQRExpr
        Left = 549
        Top = 1
        Width = 142
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1452.5625
          2.64583333333333
          375.708333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        ResetAfterPrint = False
        Transparent = True
        WordWrap = True
        Expression = 'querySTOKANA.SON_DURUM * querySTOKANA.BIRIM_FIYATI'
        Mask = '###,###,###,###'
        FontSize = 10
      end
      object qrdbtextBIRIM_FIYATI: TQRDBText
        Left = 402
        Top = 1
        Width = 142
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1063.625
          2.64583333333333
          375.708333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKANA
        DataField = 'BIRIM_FIYATI'
        Mask = '###,###,###,###'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText5: TQRDBText
        Left = 6
        Top = 1
        Width = 40
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          15.875
          2.64583333333333
          105.833333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKANA
        DataField = 'KOD'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
    object PageHeaderBand1: TQRBand
      Left = 48
      Top = 48
      Width = 698
      Height = 58
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        153.458333333333
        1846.79166666667)
      BandType = rbPageHeader
      object QRLabel2: TQRLabel
        Left = 22272
        Top = 5472
        Width = 233
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          58928
          14478
          616.479166666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'DÖNEM SONU "MAL SAYIM" CETVELÝ'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelISLETMEADI: TQRLabel
        Left = 217
        Top = 2
        Width = 270
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          574.145833333333
          5.29166666666667
          714.375)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ÝÞLETME ADI'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel4: TQRLabel
        Left = 561
        Top = 15
        Width = 47
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1484.3125
          39.6875
          124.354166666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Sayfa  -'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel5: TQRLabel
        Left = 561
        Top = 36
        Width = 46
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1484.3125
          95.25
          121.708333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Tarih   -'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRSysData2: TQRSysData
        Left = 618
        Top = 15
        Width = 46
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1635.125
          39.6875
          121.708333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        Color = clWhite
        Data = qrsPageNumber
        Transparent = False
        FontSize = 10
      end
      object qrlabelTARIH: TQRLabel
        Left = 618
        Top = 36
        Width = 76
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1635.125
          95.25
          201.083333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'qrlabelTARIH'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel13: TQRLabel
        Left = 217
        Top = 21
        Width = 270
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          574.145833333333
          55.5625
          714.375)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'DÖNEM SONU "MAL SAYIM" CETVELÝ'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
    object ColumnHeaderBand1: TQRBand
      Left = 48
      Top = 106
      Width = 698
      Height = 24
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        63.5
        1846.79166666667)
      BandType = rbColumnHeader
      object QRLabel6: TQRLabel
        Left = 54
        Top = 3
        Width = 217
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          142.875
          7.9375
          574.145833333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Stok Adý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel7: TQRLabel
        Left = 276
        Top = 3
        Width = 67
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          730.25
          7.9375
          177.270833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Miktarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel8: TQRLabel
        Left = 348
        Top = 3
        Width = 49
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          920.75
          7.9375
          129.645833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Birimi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel9: TQRLabel
        Left = 402
        Top = 3
        Width = 142
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1063.625
          7.9375
          375.708333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Birim Fiyatý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel10: TQRLabel
        Left = 549
        Top = 3
        Width = 142
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1452.5625
          7.9375
          375.708333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Tutar'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel12: TQRLabel
        Left = 6
        Top = 3
        Width = 43
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          15.875
          7.9375
          113.770833333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'St.Kod'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
    object PageFooterBand1: TQRBand
      Left = 48
      Top = 178
      Width = 698
      Height = 24
      Frame.Color = clBlack
      Frame.DrawTop = True
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        63.5
        1846.79166666667)
      BandType = rbPageFooter
      object QRLabel3: TQRLabel
        Left = 501
        Top = 4
        Width = 43
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1325.5625
          10.5833333333333
          113.770833333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Toplam'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrexprTUTAR_TOPLAMI: TQRExpr
        Left = 549
        Top = 4
        Width = 143
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1452.5625
          10.5833333333333
          378.354166666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        ResetAfterPrint = False
        Transparent = False
        WordWrap = True
        Expression = 'SUM(querySTOKANA.SON_DURUM * querySTOKANA.BIRIM_FIYATI)'
        Mask = '###,###,###,###'
        FontSize = 10
      end
    end
    object ChildBand1: TQRChildBand
      Left = 48
      Top = 130
      Width = 698
      Height = 27
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        71.4375
        1846.79166666667)
      ParentBand = ColumnHeaderBand1
      object QRLabel11: TQRLabel
        Left = 402
        Top = 3
        Width = 142
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1063.625
          7.9375
          375.708333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Önceki Sayfadan Devir'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrexprONCEKI_SAYFA_TUTARI: TQRExpr
        Left = 549
        Top = 3
        Width = 143
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1452.5625
          7.9375
          378.354166666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        ResetAfterPrint = False
        Transparent = False
        WordWrap = True
        Expression = 'SUM(querySTOKANA.SON_DURUM * querySTOKANA.BIRIM_FIYATI)'
        Mask = '###,###,###,###'
        FontSize = 10
      end
    end
  end
  object querySTOKANA: TQuery
    DatabaseName = 'OkosMTS'
    SQL.Strings = (
      'SELECT * FROM STOKANA'
      
        'WHERE (DEPARTMAN=:DEPARTMAN AND CINSI LIKE :CINSI) AND (KOD >= :' +
        'BASLANGIC_KOD AND KOD <= :BITIS_KOD) AND CINSI_KUTUSU='#39'Malzeme'#39
      'ORDER BY ADI')
    Left = 9
    Top = 3
    ParamData = <
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'CINSI'
        ParamType = ptUnknown
      end
      item
        DataType = ftFloat
        Name = 'BASLANGIC_KOD'
        ParamType = ptUnknown
      end
      item
        DataType = ftFloat
        Name = 'BITIS_KOD'
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
  object querySTOKDURUMGIRISI: TQuery
    DatabaseName = 'OKosMTS'
    SQL.Strings = (
      'SELECT SUM(MIKTAR) FROM STOKDURUMU'
      
        'WHERE HAREKETTURU=TRUE AND DEPARTMAN=:DEPARTMAN AND STOKKODU=:KO' +
        'D')
    Left = 40
    Top = 3
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
    object querySTOKDURUMGIRISISUMOFMIKTAR: TFloatField
      FieldName = 'SUM OF MIKTAR'
      Origin = 'OKOSMTS."STOKDURUMU.DB".MIKTAR'
    end
  end
  object querySTOKDURUMCIKISI: TQuery
    DatabaseName = 'OKosMTS'
    SQL.Strings = (
      'SELECT SUM(MIKTAR) FROM STOKDURUMU'
      
        'WHERE HAREKETTURU=FALSE AND DEPARTMAN=:DEPARTMAN AND STOKKODU=:K' +
        'OD'
      '')
    Left = 70
    Top = 3
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
    object querySTOKDURUMCIKISISUMOFMIKTAR: TFloatField
      FieldName = 'SUM OF MIKTAR'
      Origin = 'OKOSMTS."STOKDURUMU.DB".MIKTAR'
    end
  end
  object tblSTOKANA: TTable
    DatabaseName = 'OkosMTS'
    TableName = 'stokana.DB'
    Left = 102
    Top = 3
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
end
