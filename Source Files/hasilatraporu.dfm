object frmGunlukSatisCizelgesi: TfrmGunlukSatisCizelgesi
  Left = 214
  Top = 137
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Günlük Satýþ Çizelgesi'
  ClientHeight = 412
  ClientWidth = 644
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Icon.Data = {
    0000010001002020100000000000E80200001600000028000000200000004000
    0000010004000000000080020000000000000000000000000000000000000000
    000000008000008000000080800080000000800080008080000080808000C0C0
    C0000000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF000000
    0000000000000000000000000000000000000000000000000000000000000000
    000B3B3B3B33330000BB3B3000000000B3B3B3B3333333030BB3303300000003
    3330000000000030BB0B3B3330000003333B8B8383333033BBBB333330000000
    3333333333330B3B3BB33B3B3B0000000B3B3B3333330B3B33B3BBB3330000B3
    B3B3B3B333330B3B333BBB333B0003333000000000000B3B33BBBBB3B3000300
    000B3B3B33330B3B333BB0B33B000030B3B3B3B3B3330B3B333BBBB3B3000303
    3333333333330B33333BBB3B3B000003000B888383830BB33333333BB0000000
    33330000000000B33B3333BB300000033000B3B3B3B3B0BB33330BBB00000000
    0B3B3B3B3B3B3B0BB33B3BB00000000033333333333333300B33330000000000
    3000BBB838383830003000000000000003333380000000000000000000000000
    3338000B3B3B3B3B3B000000000000000330B3B3B3B3B3B3B3B3300000000000
    0003333FFFFFF33333333300000000000003088BBBB3B3B3B300030000000000
    000033333BBBBB3B3B33300000000000000333B3B3BBBBB3B3B3330000000000
    0000333B3BBBBBBB333330000000000000000003B3B3BFFFFB00000000000000
    0000000000000000000000000000000000000000000000000000000000000000
    000000000000000000000000000000000000000000000000000000000000FFFF
    FFFFFE003C1FF000000FE0000007C0000003C0000003C0000001C00000018000
    00010000000100000001000000010000000180000003C0000003C0000007E000
    000FE000001FE00000FFE00000FFE000007FF000003FF800001FFC00001FFC00
    001FFC00001FFE00003FFF00007FFFE003FFFFFFFFFFFFFFFFFFFFFFFFFF}
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  Scaled = False
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 0
    Top = 27
    Width = 643
    Height = 364
    DataSource = dsrcSATIS_CETVELI
    PopupMenu = PopupMenu1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    OnKeyPress = DBGrid1KeyPress
    Columns = <
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'TARIH'
        Title.Alignment = taCenter
        Title.Caption = 'Tarih'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'STOK_KODU'
        Title.Alignment = taCenter
        Title.Caption = 'Kod'
        Width = 45
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'STOK_ADI'
        Title.Alignment = taCenter
        Title.Caption = 'Stok Adý'
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'MIKTAR'
        Title.Alignment = taCenter
        Title.Caption = 'Miktar'
        Width = 60
        Visible = True
      end
      item
        Alignment = taRightJustify
        Expanded = False
        FieldName = 'OLCU_BIRIMI'
        Title.Alignment = taCenter
        Title.Caption = 'Birim'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'BIRIM_FIYATI'
        Title.Alignment = taCenter
        Title.Caption = 'Birim Fiyatý'
        Width = 116
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'TUTAR'
        ReadOnly = True
        Title.Alignment = taCenter
        Title.Caption = 'Tutar'
        Width = 116
        Visible = True
      end>
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 392
    Width = 644
    Height = 20
    Panels = <
      item
        Width = 415
      end
      item
        Alignment = taCenter
        Text = 'Genel Toplam'
        Width = 90
      end
      item
        Alignment = taRightJustify
        Width = 117
      end
      item
        Width = 50
      end>
    SimplePanel = False
    SizeGrip = False
  end
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 644
    Height = 25
    Caption = 'ToolBar1'
    Flat = True
    Images = ImageList1
    TabOrder = 2
    object ToolButton1: TToolButton
      Left = 0
      Top = 0
      Caption = 'Yeni'
      ImageIndex = 0
      MenuItem = Yeni1
    end
    object ToolButton2: TToolButton
      Left = 23
      Top = 0
      Caption = 'Kaydet'
      ImageIndex = 1
      MenuItem = Kaydet1
    end
    object ToolButton3: TToolButton
      Left = 46
      Top = 0
      Caption = 'Sil'
      ImageIndex = 2
      MenuItem = Sil1
    end
    object ToolButton5: TToolButton
      Left = 69
      Top = 0
      Width = 8
      Caption = 'ToolButton5'
      ImageIndex = 4
      Style = tbsSeparator
    end
    object ToolButton4: TToolButton
      Left = 77
      Top = 0
      Caption = 'Aç'
      ImageIndex = 3
      MenuItem = A1
    end
    object ToolButton8: TToolButton
      Left = 100
      Top = 0
      Caption = 'Günlüþ Satýþ Çizelgesi'
      ImageIndex = 4
      MenuItem = rnSat1
    end
    object ToolButton6: TToolButton
      Left = 123
      Top = 0
      Width = 8
      Caption = 'ToolButton6'
      ImageIndex = 4
      Style = tbsSeparator
    end
    object comboDepartman: TComboBox
      Left = 131
      Top = 0
      Width = 121
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 1
      OnChange = comboDepartmanChange
    end
    object ToolButton7: TToolButton
      Left = 252
      Top = 0
      Width = 8
      Caption = 'ToolButton7'
      ImageIndex = 5
      Style = tbsSeparator
    end
    object ToolButton9: TToolButton
      Left = 260
      Top = 0
      Caption = 'ToolButton9'
      ImageIndex = 6
      OnClick = ToolButton9Click
    end
    object DateTimePicker1: TDateTimePicker
      Left = 283
      Top = 0
      Width = 108
      Height = 22
      CalAlignment = dtaLeft
      Date = 37315.5825674768
      Time = 37315.5825674768
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 0
      OnChange = DateTimePicker1Change
    end
  end
  object QuickRep1: TQuickRep
    Left = 48
    Top = 492
    Width = 898
    Height = 635
    Frame.Color = clBlack
    Frame.DrawTop = False
    Frame.DrawBottom = False
    Frame.DrawLeft = False
    Frame.DrawRight = False
    DataSet = tblSATIS_CETVELI
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
      70
      2100
      70
      2970
      70
      70
      0)
    PrinterSettings.Copies = 1
    PrinterSettings.Duplex = False
    PrinterSettings.FirstPage = 0
    PrinterSettings.LastPage = 0
    PrinterSettings.OutputBin = Auto
    PrintIfEmpty = True
    SnapToGrid = True
    Units = MM
    Zoom = 80
    object PageHeaderBand1: TQRBand
      Left = 21
      Top = 21
      Width = 856
      Height = 65
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
        214.973958333333
        2831.04166666667)
      BandType = rbPageHeader
      object qrlabelTARIH: TQRLabel
        Left = 401
        Top = 16
        Width = 52
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1326.22395833333
          52.9166666666667
          171.979166666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = '02.03.2002'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelISLETME_ADI: TQRLabel
        Left = 289
        Top = 30
        Width = 277
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          955.807291666667
          99.21875
          916.119791666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'LOKANTA GÜNLÜK SATIÞ LÝSTESÝ'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel22: TQRLabel
        Left = 771
        Top = 6
        Width = 37
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2549.921875
          19.84375
          122.369791666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Sayfa - '
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRSysData1: TQRSysData
        Left = 813
        Top = 6
        Width = 37
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2688.828125
          19.84375
          122.369791666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        Color = clWhite
        Data = qrsPageNumber
        Transparent = False
        FontSize = 10
      end
    end
    object ColumnHeaderBand1: TQRBand
      Left = 21
      Top = 86
      Width = 856
      Height = 24
      Frame.Color = clBlack
      Frame.DrawTop = True
      Frame.DrawBottom = True
      Frame.DrawLeft = True
      Frame.DrawRight = True
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        79.375
        2831.04166666667)
      BandType = rbColumnHeader
      object QRLabel4: TQRLabel
        Left = 264
        Top = 7
        Width = 121
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          873.125
          23.1510416666667
          400.182291666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Ýmal Edilen Porsiyon'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel5: TQRLabel
        Left = 399
        Top = 7
        Width = 97
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1319.609375
          23.1510416666667
          320.807291666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Dünden Kalan Porsiyon'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel6: TQRLabel
        Left = 504
        Top = 7
        Width = 103
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1666.875
          23.1510416666667
          340.651041666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Toplam'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel7: TQRLabel
        Left = 615
        Top = 7
        Width = 124
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2033.984375
          23.1510416666667
          410.104166666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Satýlan Porsiyon'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel8: TQRLabel
        Left = 756
        Top = 6
        Width = 91
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2500.3125
          19.84375
          300.963541666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Yarýna Devir'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRShape1: TQRShape
        Left = 252
        Top = 0
        Width = 2
        Height = 24
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          79.375
          833.4375
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape2: TQRShape
        Left = 609
        Top = 0
        Width = 2
        Height = 24
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          79.375
          2014.140625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape3: TQRShape
        Left = 498
        Top = 0
        Width = 2
        Height = 24
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          79.375
          1647.03125
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape4: TQRShape
        Left = 393
        Top = 0
        Width = 2
        Height = 24
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          79.375
          1299.765625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape5: TQRShape
        Left = 747
        Top = 0
        Width = 2
        Height = 24
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          79.375
          2470.546875
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
    end
    object ChildBand1: TQRChildBand
      Left = 21
      Top = 110
      Width = 856
      Height = 21
      Frame.Color = clBlack
      Frame.DrawTop = True
      Frame.DrawBottom = True
      Frame.DrawLeft = True
      Frame.DrawRight = True
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        69.453125
        2831.04166666667)
      ParentBand = ColumnHeaderBand1
      object QRLabel9: TQRLabel
        Left = 5
        Top = 4
        Width = 39
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          16.5364583333333
          13.2291666666667
          128.984375)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Ürün Adý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel10: TQRLabel
        Left = 135
        Top = 4
        Width = 31
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          446.484375
          13.2291666666667
          102.526041666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Ürün No'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel11: TQRLabel
        Left = 171
        Top = 4
        Width = 79
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          565.546875
          13.2291666666667
          261.276041666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Birim Fiyatý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel12: TQRLabel
        Left = 258
        Top = 4
        Width = 37
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          853.28125
          13.2291666666667
          122.369791666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Miktarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel13: TQRLabel
        Left = 363
        Top = 4
        Width = 27
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1200.546875
          13.2291666666667
          89.296875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Tutarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel14: TQRLabel
        Left = 397
        Top = 4
        Width = 39
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1312.99479166667
          13.2291666666667
          128.984375)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Miktarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel15: TQRLabel
        Left = 468
        Top = 4
        Width = 27
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1547.8125
          13.2291666666667
          89.296875)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Tutarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel16: TQRLabel
        Left = 504
        Top = 4
        Width = 43
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1666.875
          13.2291666666667
          142.213541666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Miktarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel17: TQRLabel
        Left = 579
        Top = 4
        Width = 27
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1914.921875
          13.2291666666667
          89.296875)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Tutarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel18: TQRLabel
        Left = 615
        Top = 4
        Width = 32
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2033.984375
          13.2291666666667
          105.833333333333)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Miktarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel19: TQRLabel
        Left = 717
        Top = 4
        Width = 27
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2371.328125
          13.2291666666667
          89.296875)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Tutarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel20: TQRLabel
        Left = 750
        Top = 4
        Width = 37
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2480.46875
          13.2291666666667
          122.369791666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Miktarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRLabel21: TQRLabel
        Left = 822
        Top = 4
        Width = 27
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2718.59375
          13.2291666666667
          89.296875)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Tutarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 9
      end
      object QRShape6: TQRShape
        Left = 132
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          436.5625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape7: TQRShape
        Left = 168
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          555.625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape8: TQRShape
        Left = 252
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          833.4375
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape9: TQRShape
        Left = 297
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          982.265625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape10: TQRShape
        Left = 393
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          1299.765625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape11: TQRShape
        Left = 609
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          2014.140625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape12: TQRShape
        Left = 438
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          1448.59375
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape13: TQRShape
        Left = 498
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          1647.03125
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape14: TQRShape
        Left = 549
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          1815.703125
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape17: TQRShape
        Left = 649
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          2146.43229166667
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape18: TQRShape
        Left = 789
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          2609.453125
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape19: TQRShape
        Left = 747
        Top = 0
        Width = 2
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          2470.546875
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
    end
    object DetailBand1: TQRBand
      Left = 21
      Top = 131
      Width = 856
      Height = 18
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = True
      Frame.DrawLeft = True
      Frame.DrawRight = True
      AlignToBottom = False
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 20
      Font.Name = 'Arial'
      Font.Style = []
      ForceNewColumn = False
      ForceNewPage = False
      ParentFont = False
      Size.Values = (
        59.53125
        2831.04166666667)
      BandType = rbDetail
      object QRDBText1: TQRDBText
        Left = 3
        Top = 1
        Width = 127
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          9.921875
          3.30729166666667
          420.026041666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = tblSATIS_CETVELI
        DataField = 'STOK_ADI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRDBText2: TQRDBText
        Left = 135
        Top = 1
        Width = 31
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          446.484375
          3.30729166666667
          102.526041666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = tblSATIS_CETVELI
        DataField = 'STOK_KODU'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRDBText3: TQRDBText
        Left = 174
        Top = 1
        Width = 76
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          575.46875
          3.30729166666667
          251.354166666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = tblSATIS_CETVELI
        DataField = 'BIRIM_FIYATI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRDBText4: TQRDBText
        Left = 258
        Top = 1
        Width = 37
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          853.28125
          3.30729166666667
          122.369791666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = tblSATIS_CETVELI
        DataField = 'MIKTAR'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRDBText5: TQRDBText
        Left = 300
        Top = 1
        Width = 91
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          992.1875
          3.30729166666667
          300.963541666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = tblSATIS_CETVELI
        DataField = 'TUTAR'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRDBText6: TQRDBText
        Left = 615
        Top = 1
        Width = 31
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          2033.984375
          3.30729166666667
          102.526041666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = tblSATIS_CETVELI
        DataField = 'MIKTAR'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRDBText7: TQRDBText
        Left = 654
        Top = 1
        Width = 91
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          2162.96875
          3.30729166666667
          300.963541666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = tblSATIS_CETVELI
        DataField = 'TUTAR'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape15: TQRShape
        Left = 132
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          436.5625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape16: TQRShape
        Left = 168
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          555.625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape20: TQRShape
        Left = 252
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          833.4375
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape21: TQRShape
        Left = 297
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          982.265625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape22: TQRShape
        Left = 393
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          1299.765625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape23: TQRShape
        Left = 609
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          2014.140625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape24: TQRShape
        Left = 649
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          2146.43229166667
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape25: TQRShape
        Left = 747
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          2470.546875
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape26: TQRShape
        Left = 438
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          1448.59375
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape27: TQRShape
        Left = 498
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          1647.03125
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape28: TQRShape
        Left = 549
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          1815.703125
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRShape29: TQRShape
        Left = 789
        Top = 0
        Width = 2
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          2609.453125
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
    end
    object SummaryBand1: TQRBand
      Left = 21
      Top = 149
      Width = 856
      Height = 206
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
        681.302083333333
        2831.04166666667)
      BandType = rbSummary
      object qrlabelONAY: TQRLabel
        Left = 365
        Top = 119
        Width = 50
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1207.16145833333
          393.567708333333
          165.364583333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'O  N  A  Y'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI1ADI: TQRLabel
        Left = 69
        Top = 54
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          228.203125
          178.59375
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI1ADI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI1RUTBE: TQRLabel
        Left = 69
        Top = 67
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          228.203125
          221.588541666667
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI1RUTBE'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI1GOREVI: TQRLabel
        Left = 69
        Top = 80
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          228.203125
          264.583333333333
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI1GOREVI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI2ADI: TQRLabel
        Left = 261
        Top = 54
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          863.203125
          178.59375
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI2ADI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI2RUTBE: TQRLabel
        Left = 261
        Top = 67
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          863.203125
          221.588541666667
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI2RUTBE'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI2GOREVI: TQRLabel
        Left = 261
        Top = 80
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          863.203125
          264.583333333333
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI2GOREVI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI3ADI: TQRLabel
        Left = 462
        Top = 54
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1527.96875
          178.59375
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI3ADI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI3RUTBE: TQRLabel
        Left = 462
        Top = 67
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1527.96875
          221.588541666667
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI3RUTBE'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI3GOREVI: TQRLabel
        Left = 462
        Top = 80
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1527.96875
          264.583333333333
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI3GOREVI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI4ADI: TQRLabel
        Left = 657
        Top = 54
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          2172.890625
          178.59375
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI4ADI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI4RUTBE: TQRLabel
        Left = 657
        Top = 67
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          2172.890625
          221.588541666667
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI4RUTBE'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI4GOREVI: TQRLabel
        Left = 657
        Top = 80
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          2172.890625
          264.583333333333
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI4GOREVI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI5ADI: TQRLabel
        Left = 363
        Top = 162
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1200.546875
          535.78125
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI5ADI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI5RUTBE: TQRLabel
        Left = 363
        Top = 175
        Width = 132
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1200.546875
          578.776041666667
          436.5625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI5RUTBE'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelYETKILI5GOREVI: TQRLabel
        Left = 363
        Top = 188
        Width = 263
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1200.546875
          621.770833333333
          869.817708333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelYETKILI5GOREVI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape30: TQRShape
        Left = 0
        Top = 0
        Width = 856
        Height = 22
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          72.7604166666667
          0
          0
          2831.04166666667)
        Shape = qrsRectangle
      end
      object QRLabel2: TQRLabel
        Left = 255
        Top = 3
        Width = 38
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          843.359375
          9.921875
          125.677083333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'TOPLAM'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape31: TQRShape
        Left = 297
        Top = 0
        Width = 2
        Height = 22
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          72.7604166666667
          982.265625
          0
          6.61458333333333)
        Shape = qrsVertLine
      end
      object QRLabel3: TQRLabel
        Left = 609
        Top = 3
        Width = 38
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2014.140625
          9.921875
          125.677083333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'TOPLAM'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape32: TQRShape
        Left = 650
        Top = 0
        Width = 1
        Height = 22
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          72.7604166666667
          2149.73958333333
          0
          3.30729166666667)
        Shape = qrsRectangle
      end
      object QRExpr1: TQRExpr
        Left = 300
        Top = 3
        Width = 91
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          992.1875
          9.921875
          300.963541666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        Color = clWhite
        ParentFont = False
        ResetAfterPrint = False
        Transparent = False
        WordWrap = True
        Expression = 'SUM(tblSATIS_CETVELI.TUTAR)'
        Mask = '###,###,###,### TL'
        FontSize = 8
      end
      object QRExpr2: TQRExpr
        Left = 657
        Top = 3
        Width = 91
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2172.890625
          9.921875
          300.963541666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        Color = clWhite
        ParentFont = False
        ResetAfterPrint = False
        Transparent = False
        WordWrap = True
        Expression = 'SUM(tblSATIS_CETVELI.TUTAR)'
        Mask = '###,###,###,### TL'
        FontSize = 8
      end
    end
  end
  object MainMenu1: TMainMenu
    Images = ImageList1
    Left = 39
    Top = 354
    object Dosya1: TMenuItem
      Caption = 'Dosya'
      object Yeni1: TMenuItem
        Caption = 'Yeni'
        ImageIndex = 0
        ShortCut = 16462
        OnClick = Yeni1Click
      end
      object Kaydet1: TMenuItem
        Caption = 'Kaydet'
        ImageIndex = 1
        ShortCut = 16467
        OnClick = Kaydet1Click
      end
      object Sil1: TMenuItem
        Caption = 'Sil'
        ImageIndex = 2
        ShortCut = 16452
        OnClick = Sil1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object A1: TMenuItem
        Caption = 'Aç'
        ImageIndex = 3
        ShortCut = 16463
        OnClick = A1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object k1: TMenuItem
        Caption = 'Çýkýþ'
      end
    end
    object Rapor1: TMenuItem
      Caption = 'Rapor'
      object rnSat1: TMenuItem
        Caption = 'Günlüþ Satýþ Çizelgesi'
        ImageIndex = 4
        ShortCut = 16464
        OnClick = rnSat1Click
      end
    end
  end
  object ImageList1: TImageList
    Left = 9
    Top = 354
    Bitmap = {
      494C010107000900040010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000003000000001001000000000000018
      000000000000000000000000000000000000FF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7F38679B733867386738673867386738673867
      386738673867386738673867386738673867386738673867386738672F460000
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FB329B225D329B225B329B2253867
      9B73386738673867386738679B73386738672F460000FF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FB2253867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      2F460000FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F3867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      386738673867386738672F469B73386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      386738673867386738673867386738673867FF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F38679B73
      3867386738673867386738673867386738673867386738673867386738673867
      386738673867386738673867386738673867FF7FFF7FFF7FFF7FFF7FFF7F3867
      9B73386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738672F460000FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F386738673867386738679B733867
      38672F460000FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      B325B325B329B225B325B325B32938679B733867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      386738673867386738673867386738672F460000FF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F3867386738673867386738673867
      38673867386738673867386738673867386738673867386738672F469B733867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      00000000000000000000000000000000FF7F0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000007C007C
      007C007C007C000000000000000000000000FF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000000000
      0000000000000000000000000000000000000000FF7F00000000000000000000
      0000000000000000FF7F0000000000000000000000000000007C007CF75EFF7F
      FF7FFF7FF75E007C007C0000000000000000FF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7F38679B730000000000000000000000000000
      E07FE07FE07F0000000000000000000000000000FF7F00000000000000000000
      0000000000000000FF7F000000000000000000000000007C007CFF7FFF7FFF7F
      1F00FF7FFF7FFF7F007C007C000000000000D329B225B329B225D329B2253867
      9B73386738673867386738679B73386738670000000000000000000000000000
      1042104210420000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000007CFF7FFF7FFF7FFF7F
      FF7FFF7FFF7F1F00FF7F007C000000000000FF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F0000000000000000000000000000007CF75EFF7FFF7F0000FF7F
      FF7FFF7FFF7FFF7FFF7FF75E007C000000003867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F0000000000000000000000000000007CFF7FFF7FFF7FFF7F0000
      FF7FFF7FFF7FFF7FFF7FFF7F007C000000003867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F0000000000000000000000000000007CFF7F1F00FF7FFF7FFF7F
      007C0000000000000000FF7F007C000000003867386738673867386738673867
      386738673867386738673867386738673867000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000007CFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7F007C000000003867386738673867386738673867
      3867386738673867386738673867386738670000000000000000FF7F00000000
      000000000000FF7F00000000000000000000000000000000FF7F000000000000
      00000000FF7F0000000000000000000000000000007CF75EFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FF75E007C000000003867386738673867386738673867
      3867386738673867386738673867386738670000000000000000FF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000007CFF7F1F00FF7FFF7F
      FF7FFF7FFF7F1F00FF7F007C000000000000FF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F00000000000000000000FF7F0000
      0000000000000000FF7F00000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000007C007CFF7FFF7FFF7F
      1F00FF7FFF7FFF7F007C007C000000000000FF7FFF7FFF7FFF7FFF7FFF7F3867
      9B733867386738673867386738673867386700000000000000000000FF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000000000FF7F00000000
      000000000000FF7F00000000000000000000000000000000007C007CF75EFF7F
      1F00FF7FF75E007C007C0000000000000000386738673867386738679B733867
      38672F460000FF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000007C007C
      007C007C007C000000000000000000000000FF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000420042004200420042
      004200420042004200000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07F00000042004200420042
      004200420042004200420000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000FF7FE07F0000004200420042
      004200420042004200420042000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042004200420042
      0042004200420042004200420042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FFF7FE07F000000420042
      004200420042004200420042004200000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000420042000000000000000000000000000000000000
      0000000000000000000000000000000000000000FF7FE07FFF7FE07F00000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FFF7FE07FFF7FE07FFF7F
      E07FFF7FE07F000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000FF7FE07FFF7FE07FFF7FE07F
      FF7FE07FFF7F000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FFF7FE07F000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F00000000000000000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F0000FF7F000000000000000000000000000000420000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F00000000000000000000000000000000000000420000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000300000000100010000000000800100000000000000000000
      000000000000000000000000FFFFFF0000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000FFFEFFFFFFFF0000C007FFFFF83F0000
      BFEB07C1E00F0000000507C1C00700007E3107C1800300007E35010180030000
      00060001000100007FEA0201000100008014020100010000C00A800300010000
      E001C10700010000E007C10780030000F007E38F80030000F003E38FC0070000
      F803E38FE00F0000FFFFFFFFF83F0000FFFFFFFFFFFFFFFFFFFFC001FFFFFFFF
      C0078031EFFD001FC0078031C7FF000FC0078031C3FB0007C0078001E3F70003
      C0078001F1E70001C0078001F8CF0000C0078FF1FC1F001FC0078FF1FE3F001F
      C0078FF1FC1F001FC0078FF1F8CF8FF1C00F8FF1E1E7FFF9C01F8FF5C3F3FF75
      C03F8001C7FDFF8FFFFFFFFFFFFFFFFF00000000000000000000000000000000
      000000000000}
  end
  object dsrcSATIS_CETVELI: TDataSource
    DataSet = tblSATIS_CETVELI
    Left = 9
    Top = 324
  end
  object tblSATIS_CETVELI: TTable
    AfterInsert = tblSATIS_CETVELIAfterInsert
    DatabaseName = 'OkosMTS'
    FieldDefs = <
      item
        Name = 'TARIH'
        DataType = ftDate
      end
      item
        Name = 'DEPARTMAN'
        DataType = ftString
        Size = 25
      end
      item
        Name = 'STOK_KODU'
        DataType = ftFloat
      end
      item
        Name = 'STOK_ADI'
        DataType = ftString
        Size = 30
      end
      item
        Name = 'MIKTAR'
        DataType = ftFloat
      end
      item
        Name = 'OLCU_BIRIMI'
        DataType = ftString
        Size = 10
      end
      item
        Name = 'BIRIM_FIYATI'
        DataType = ftFloat
      end
      item
        Name = 'TUTAR'
        DataType = ftFloat
      end>
    StoreDefs = True
    TableName = 'satiscetveli.db'
    Left = 39
    Top = 324
    object tblSATIS_CETVELITARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblSATIS_CETVELIDEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Size = 25
    end
    object tblSATIS_CETVELISTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      OnChange = tblSATIS_CETVELISTOK_KODUChange
    end
    object tblSATIS_CETVELISTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Size = 30
    end
    object tblSATIS_CETVELIMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      OnChange = tblSATIS_CETVELIMIKTARChange
    end
    object tblSATIS_CETVELIOLCU_BIRIMI: TStringField
      FieldName = 'OLCU_BIRIMI'
      Size = 10
    end
    object tblSATIS_CETVELIBIRIM_FIYATI: TFloatField
      FieldName = 'BIRIM_FIYATI'
      OnChange = tblSATIS_CETVELIBIRIM_FIYATIChange
      currency = True
    end
    object tblSATIS_CETVELITUTAR: TFloatField
      FieldName = 'TUTAR'
      currency = True
    end
  end
  object Timer1: TTimer
    Interval = 500
    OnTimer = Timer1Timer
    Left = 9
    Top = 297
  end
  object PopupMenu1: TPopupMenu
    Images = ImageList1
    Left = 69
    Top = 354
    object Sil2: TMenuItem
      Caption = 'Sil'
      ImageIndex = 2
      ShortCut = 16452
      OnClick = Sil2Click
    end
  end
  object tblSTOKANA: TTable
    Active = True
    DatabaseName = 'OkosMTS'
    TableName = 'stokana.DB'
    Left = 39
    Top = 297
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
  object querySATISCETVELI: TQuery
    DatabaseName = 'OkosMTS'
    SQL.Strings = (
      'SELECT SUM(TUTAR) FROM SATISCETVELI'
      'WHERE (DEPARTMAN=:DEPARTMAN AND TARIH=:TARIH)')
    Left = 69
    Top = 324
    ParamData = <
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end
      item
        DataType = ftDate
        Name = 'TARIH'
        ParamType = ptUnknown
      end>
    object querySATISCETVELISUMOFTUTAR: TFloatField
      FieldName = 'SUM OF TUTAR'
      Origin = 'OKOSMTS."satiscetveli.DB".TUTAR'
      currency = True
    end
  end
end
