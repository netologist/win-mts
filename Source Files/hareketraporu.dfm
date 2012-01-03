object frmHareketRaporu: TfrmHareketRaporu
  Left = 193
  Top = 78
  Width = 690
  Height = 508
  Caption = 'HareketRaporu'
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
    Left = 0
    Top = 0
    Width = 674
    Height = 476
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
      'REPORTTITLE')
    Functions.DATA = (
      '0'
      '0'
      #39#39)
    Options = [FirstPageHeader, LastPageFooter]
    Page.Columns = 1
    Page.Orientation = poLandscape
    Page.PaperSize = A4
    Page.Values = (
      127
      2100
      127
      2970
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
    Zoom = 60
    object PageHeaderBand1: TQRBand
      Left = 29
      Top = 29
      Width = 616
      Height = 38
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
        167.569444444444
        2716.38888888889)
      BandType = rbPageHeader
      object QRLabel12: TQRLabel
        Left = 235
        Top = 20
        Width = 145
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          1036.28472222222
          88.1944444444444
          639.409722222222)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'STOK HAREKET RAPORU'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelDEPARTMAN: TQRLabel
        Left = 235
        Top = 5
        Width = 145
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          1036.28472222222
          22.0486111111111
          639.409722222222)
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
      object QRSysData1: TQRSysData
        Left = 582
        Top = 24
        Width = 28
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          2566.45833333333
          105.833333333333
          123.472222222222)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        Color = clWhite
        Data = qrsPageNumber
        Transparent = False
        FontSize = 10
      end
      object QRLabel13: TQRLabel
        Left = 555
        Top = 24
        Width = 25
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          2447.39583333333
          105.833333333333
          110.243055555556)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Sayfa -'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
    object ColumnHeaderBand1: TQRBand
      Left = 29
      Top = 67
      Width = 616
      Height = 21
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = True
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        92.6041666666667
        2716.38888888889)
      BandType = rbColumnHeader
      object QRLabel1: TQRLabel
        Left = 4
        Top = 4
        Width = 51
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          16.5364583333333
          16.5364583333333
          224.895833333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Stok Kodu'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel2: TQRLabel
        Left = 58
        Top = 4
        Width = 91
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          254.661458333333
          16.5364583333333
          403.489583333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Stok Adý'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel3: TQRLabel
        Left = 152
        Top = 4
        Width = 40
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          671.380208333333
          16.5364583333333
          175.286458333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Son Durum'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel4: TQRLabel
        Left = 194
        Top = 4
        Width = 36
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          856.588541666667
          16.5364583333333
          158.75)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Birimi'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel5: TQRLabel
        Left = 232
        Top = 4
        Width = 71
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1021.953125
          16.5364583333333
          310.885416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Birim Fiyatý'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel6: TQRLabel
        Left = 308
        Top = 4
        Width = 28
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1358.19444444444
          17.6388888888889
          123.472222222222)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Hr.Türü'
        Color = clWhite
        Transparent = False
        WordWrap = False
        FontSize = 10
      end
      object QRLabel7: TQRLabel
        Left = 342
        Top = 4
        Width = 44
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1508.125
          17.6388888888889
          194.027777777778)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Tarih'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel8: TQRLabel
        Left = 391
        Top = 4
        Width = 48
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1724.20138888889
          17.6388888888889
          211.666666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Belge No'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel9: TQRLabel
        Left = 443
        Top = 4
        Width = 41
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1954.609375
          19.84375
          181.901041666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Miktar'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel10: TQRLabel
        Left = 487
        Top = 4
        Width = 60
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          2149.73958333333
          19.84375
          264.583333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Birim Fiyatý'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel11: TQRLabel
        Left = 552
        Top = 4
        Width = 60
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          2434.16666666667
          17.6388888888889
          264.583333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Tutar'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
    object DetailBand1: TQRBand
      Left = 29
      Top = 88
      Width = 616
      Height = 15
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
        66.1458333333333
        2716.38888888889)
      BandType = rbDetail
      object QRDBText1: TQRDBText
        Left = 5
        Top = 2
        Width = 50
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          21.1666666666667
          10.5833333333333
          222.25)
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
      object QRDBText2: TQRDBText
        Left = 56
        Top = 2
        Width = 93
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          248.708333333333
          10.5833333333333
          410.104166666667)
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
      object QRDBText3: TQRDBText
        Left = 153
        Top = 2
        Width = 41
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          674.6875
          10.5833333333333
          182.5625)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKANA
        DataField = 'SON_DURUM'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText4: TQRDBText
        Left = 196
        Top = 2
        Width = 37
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          862.541666666667
          10.5833333333333
          161.395833333333)
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
      object QRDBText5: TQRDBText
        Left = 234
        Top = 2
        Width = 71
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1031.875
          10.5833333333333
          312.208333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKANA
        DataField = 'BIRIM_FIYATI'
        Mask = '###,###,###.###'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
    object QRSubDetail1: TQRSubDetail
      Left = 29
      Top = 103
      Width = 616
      Height = 17
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
        74.9652777777778
        2716.38888888889)
      Master = QuickRep1
      DataSet = querySTOKDURUMU
      PrintBefore = False
      PrintIfEmpty = True
      object QRDBText6: TQRDBText
        Left = 308
        Top = 2
        Width = 28
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          1358.19444444444
          8.81944444444444
          123.472222222222)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKDURUMU
        DataField = 'HAREKETTURU'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText7: TQRDBText
        Left = 342
        Top = 2
        Width = 44
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          1508.125
          8.81944444444444
          194.027777777778)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKDURUMU
        DataField = 'TARIH'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText8: TQRDBText
        Left = 391
        Top = 2
        Width = 48
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          1724.20138888889
          8.81944444444444
          211.666666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKDURUMU
        DataField = 'BELGENO'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText9: TQRDBText
        Left = 443
        Top = 2
        Width = 41
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          1953.50694444444
          8.81944444444444
          180.798611111111)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKDURUMU
        DataField = 'MIKTAR'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText10: TQRDBText
        Left = 488
        Top = 2
        Width = 60
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          2151.94444444444
          8.81944444444444
          264.583333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKDURUMU
        DataField = 'BIRIMFIYATI'
        Mask = '###,###,###.###'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText11: TQRDBText
        Left = 552
        Top = 2
        Width = 60
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          2434.16666666667
          8.81944444444444
          264.583333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKDURUMU
        DataField = 'TUTAR'
        Mask = '###,###,###.###'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
  end
  object querySTOKANA: TQuery
    DatabaseName = 'OkosMTS'
    SQL.Strings = (
      'SELECT * FROM STOKANA'
      
        'WHERE (DEPARTMAN=:DEPARTMAN AND CINSI LIKE :CINSI) AND (KOD >= :' +
        'BASLANGICKODU AND KOD <= :BITISKODU)'
      'ORDER BY KOD')
    Left = 33
    Top = 384
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
        Name = 'BASLANGICKODU'
        ParamType = ptUnknown
      end
      item
        DataType = ftFloat
        Name = 'BITISKODU'
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
  object querySTOKDURUMU: TQuery
    DatabaseName = 'OkosMTS'
    DataSource = dsrcSTOKANA
    SQL.Strings = (
      'SELECT * FROM STOKDURUMU'
      'WHERE (DEPARTMAN=:DEPARTMAN AND STOKKODU=:KOD)')
    Left = 63
    Top = 384
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
    object querySTOKDURUMUHAREKETINDEKS: TFloatField
      FieldName = 'HAREKETINDEKS'
      Origin = 'OKOSMTS."STOKDURUMU.DB".HAREKETINDEKS'
    end
    object querySTOKDURUMUHAREKETTURU: TBooleanField
      FieldName = 'HAREKETTURU'
      Origin = 'OKOSMTS."STOKDURUMU.DB".HAREKETTURU'
    end
    object querySTOKDURUMUBELGENO: TStringField
      FieldName = 'BELGENO'
      Origin = 'OKOSMTS."STOKDURUMU.DB".BELGENO'
      Size = 15
    end
    object querySTOKDURUMUTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'OKOSMTS."STOKDURUMU.DB".TARIH'
    end
    object querySTOKDURUMUSAAT: TTimeField
      FieldName = 'SAAT'
      Origin = 'OKOSMTS."STOKDURUMU.DB".SAAT'
    end
    object querySTOKDURUMUDEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Origin = 'OKOSMTS."STOKDURUMU.DB".DEPARTMAN'
      Size = 35
    end
    object querySTOKDURUMUSTOKKODU: TFloatField
      FieldName = 'STOKKODU'
      Origin = 'OKOSMTS."STOKDURUMU.DB".STOKKODU'
    end
    object querySTOKDURUMUSTOKADI: TStringField
      FieldName = 'STOKADI'
      Origin = 'OKOSMTS."STOKDURUMU.DB".STOKADI'
      Size = 35
    end
    object querySTOKDURUMUBIRIMFIYATI: TFloatField
      FieldName = 'BIRIMFIYATI'
      Origin = 'OKOSMTS."STOKDURUMU.DB".BIRIMFIYATI'
    end
    object querySTOKDURUMUMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      Origin = 'OKOSMTS."STOKDURUMU.DB".MIKTAR'
    end
    object querySTOKDURUMUTUTAR: TFloatField
      FieldName = 'TUTAR'
      Origin = 'OKOSMTS."STOKDURUMU.DB".TUTAR'
    end
  end
  object dsrcSTOKANA: TDataSource
    DataSet = querySTOKANA
    Left = 33
    Top = 414
  end
  object dsrcSTOKDURUMU: TDataSource
    DataSet = querySTOKDURUMU
    Left = 63
    Top = 414
  end
end
