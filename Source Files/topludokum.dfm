object frmTopluRapor: TfrmTopluRapor
  Left = 260
  Top = 166
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Malzeme & Ürün Ýnceleme Modülü'
  ClientHeight = 366
  ClientWidth = 550
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  Scaled = False
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object TGroupBox
    Left = 0
    Top = 0
    Width = 550
    Height = 157
    TabOrder = 0
    object Label18: TLabel
      Left = 381
      Top = 80
      Width = 78
      Height = 13
      Caption = 'Stok Adýna Göre'
    end
    object Label19: TLabel
      Left = 381
      Top = 115
      Width = 88
      Height = 13
      Caption = 'Stok Koduna Göre'
    end
    object Label1: TLabel
      Left = 381
      Top = 45
      Width = 52
      Height = 13
      Caption = 'Departman'
    end
    object Label3: TLabel
      Left = 381
      Top = 12
      Width = 22
      Height = 13
      Caption = 'Cinsi'
    end
    object DBGrid4: TDBGrid
      Left = 6
      Top = 39
      Width = 370
      Height = 112
      DataSource = dsrcSTOKLIST
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnDblClick = DBGrid4DblClick
      Columns = <
        item
          Expanded = False
          FieldName = 'KOD'
          Title.Alignment = taCenter
          Title.Caption = 'Kod'
          Width = 43
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ADI'
          Title.Alignment = taCenter
          Title.Caption = 'Stok Adý'
          Width = 160
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'CINSI'
          Title.Alignment = taCenter
          Title.Caption = 'Cinsi'
          Width = 130
          Visible = True
        end>
    end
    object editAdaGore: TEdit
      Left = 381
      Top = 94
      Width = 160
      Height = 21
      TabOrder = 1
      OnChange = editAdaGoreChange
      OnClick = editAdaGoreClick
    end
    object editKodaGore: TEdit
      Left = 381
      Top = 129
      Width = 160
      Height = 21
      Color = clScrollBar
      TabOrder = 2
      OnChange = editKodaGoreChange
      OnClick = editKodaGoreClick
    end
    object comboDepartman: TComboBox
      Left = 381
      Top = 60
      Width = 160
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 3
      OnChange = comboDepartmanChange
    end
    object comboCinsi: TComboBox
      Left = 381
      Top = 24
      Width = 160
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 4
      OnChange = comboCinsiChange
    end
    object RadioGroup1: TRadioGroup
      Left = 0
      Top = 0
      Width = 376
      Height = 34
      Columns = 2
      ItemIndex = 0
      Items.Strings = (
        'Malzemelerin kullanýldýðý ürünler'
        'Ürünler de kullanýlan malzemeler')
      TabOrder = 5
      OnClick = RadioGroup1Click
    end
  end
  object GroupBox1: TGroupBox
    Left = 0
    Top = 156
    Width = 550
    Height = 211
    TabOrder = 1
    object SpeedButton1: TSpeedButton
      Left = 279
      Top = 156
      Width = 181
      Height = 49
      Caption = 'Arama  ve  Aktarma  Ýþlemini  Baþlat'
      Flat = True
      Glyph.Data = {
        F6000000424DF600000000000000760000002800000010000000100000000100
        0400000000008000000000000000000000001000000000000000000000000000
        8000008000000080800080000000800080008080000080808000C0C0C0000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00888888888888
        8888888888888888888800000888880000080F000888880F00080F000888880F
        0008000000080000000800F000000F00000800F000800F00000800F000800F00
        00088000000000000088880F00080F0008888800000800000888888000888000
        88888880F08880F0888888800088800088888888888888888888}
      Layout = blGlyphTop
      OnClick = SpeedButton1Click
    end
    object Label2: TLabel
      Left = 111
      Top = 189
      Width = 3
      Height = 13
    end
    object SpeedButton2: TSpeedButton
      Left = 465
      Top = 156
      Width = 76
      Height = 49
      Caption = 'Text'#39'e Kaydet'
      Flat = True
      Glyph.Data = {
        36030000424D3603000000000000360000002800000010000000100000000100
        1800000000000003000000000000000000000000000000000000FF00FFFF00FF
        FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00
        FFFF00FFFF00FFFF00FFFF00FFFF00FF00000000000000000000000000000000
        0000000000000000000000000000000000000000000000FF00FFFF00FF000000
        008080008080000000000000000000000000000000000000FF00FFFF00FF0000
        00008080000000FF00FFFF00FF00000000808000808000000000000000000000
        0000000000000000FF00FFFF00FF000000008080000000FF00FFFF00FF000000
        008080008080000000000000000000000000000000000000FF00FFFF00FF0000
        00008080000000FF00FFFF00FF00000000808000808000000000000000000000
        0000000000000000000000000000000000008080000000FF00FFFF00FF000000
        0080800080800080800080800080800080800080800080800080800080800080
        80008080000000FF00FFFF00FF00000000808000808000000000000000000000
        0000000000000000000000000000008080008080000000FF00FFFF00FF000000
        008080000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF0000
        00008080000000FF00FFFF00FF000000008080000000FF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FF000000008080000000FF00FFFF00FF000000
        008080000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF0000
        00008080000000FF00FFFF00FF000000008080000000FF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FF000000008080000000FF00FFFF00FF000000
        008080000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF0000
        00000000000000FF00FFFF00FF000000008080000000FF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FF000000FF00FF000000FF00FFFF00FF000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF}
      Layout = blGlyphTop
      OnClick = SpeedButton2Click
    end
    object DBGrid1: TDBGrid
      Left = 6
      Top = 33
      Width = 265
      Height = 120
      DataSource = dsrcMALZEMELIST
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      PopupMenu = popupMALZEME
      ReadOnly = True
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'KOD'
          Title.Alignment = taCenter
          Title.Caption = 'Malzeme Kodu'
          Width = 82
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'AD'
          Title.Alignment = taCenter
          Title.Caption = 'Malzeme Adý'
          Width = 145
          Visible = True
        end>
    end
    object StaticText1: TStaticText
      Left = 9
      Top = 12
      Width = 262
      Height = 17
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSunken
      Caption = 'Malzeme Listesi'
      Color = clBtnFace
      ParentColor = False
      TabOrder = 1
    end
    object DBGrid2: TDBGrid
      Left = 276
      Top = 33
      Width = 265
      Height = 120
      DataSource = dsrcURUNLISTESI
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      PopupMenu = popupURUN
      TabOrder = 2
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'KOD'
          Title.Alignment = taCenter
          Title.Caption = 'Ürün Kodu'
          Width = 82
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'AD'
          Title.Alignment = taCenter
          Title.Caption = 'Ürün Adý'
          Width = 145
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'FIYATI'
          Title.Alignment = taCenter
          Title.Caption = 'Fiyatý'
          Width = 100
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ETIN_TURU'
          Title.Alignment = taCenter
          Title.Caption = 'Et'
          Width = 150
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'GRAMAJI'
          Title.Alignment = taCenter
          Title.Caption = 'Gramaj'
          Visible = True
        end>
    end
    object StaticText2: TStaticText
      Left = 276
      Top = 12
      Width = 265
      Height = 17
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSunken
      Caption = 'Ürün Listesi'
      TabOrder = 3
    end
    object Animate1: TAnimate
      Left = 57
      Top = 155
      Width = 48
      Height = 50
      Active = False
      CommonAVI = aviFindFile
      StopFrame = 23
    end
  end
  object querySTOKLIST: TQuery
    DatabaseName = 'OKosMTS'
    SQL.Strings = (
      'SELECT * FROM STOKANA'
      
        'WHERE (DEPARTMAN LIKE :DEPARTMAN AND CINSI_KUTUSU=:CINSI_KUTUSU ' +
        'AND CINSI LIKE :CINSI) AND (ADI LIKE :ADI OR KOD=:KOD)')
    Left = 46
    Top = 117
    ParamData = <
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'CINSI_KUTUSU'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'CINSI'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'ADI'
        ParamType = ptUnknown
      end
      item
        DataType = ftFloat
        Name = 'KOD'
        ParamType = ptUnknown
      end>
    object querySTOKLISTINDEKS: TStringField
      FieldName = 'INDEKS'
      Origin = 'OKOSMTS."STOKANA.DB".INDEKS'
      Size = 35
    end
    object querySTOKLISTDEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Origin = 'OKOSMTS."STOKANA.DB".DEPARTMAN'
      Size = 25
    end
    object querySTOKLISTKOD: TFloatField
      FieldName = 'KOD'
      Origin = 'OKOSMTS."STOKANA.DB".KOD'
    end
    object querySTOKLISTCINSI_KUTUSU: TStringField
      FieldName = 'CINSI_KUTUSU'
      Origin = 'OKOSMTS."STOKANA.DB".CINSI_KUTUSU'
      Size = 15
    end
    object querySTOKLISTCINSI: TStringField
      FieldName = 'CINSI'
      Origin = 'OKOSMTS."STOKANA.DB".CINSI'
      Size = 25
    end
    object querySTOKLISTADI: TStringField
      FieldName = 'ADI'
      Origin = 'OKOSMTS."STOKANA.DB".ADI'
      Size = 30
    end
    object querySTOKLISTOLCU_BIRIMI: TStringField
      FieldName = 'OLCU_BIRIMI'
      Origin = 'OKOSMTS."STOKANA.DB".OLCU_BIRIMI'
      Size = 10
    end
    object querySTOKLISTBIRIM_ORANI: TFloatField
      FieldName = 'BIRIM_ORANI'
      Origin = 'OKOSMTS."STOKANA.DB".BIRIM_ORANI'
    end
    object querySTOKLISTBIRIM_FIYATI: TFloatField
      FieldName = 'BIRIM_FIYATI'
      Origin = 'OKOSMTS."STOKANA.DB".BIRIM_FIYATI'
    end
    object querySTOKLISTKDV_ORANI: TFloatField
      FieldName = 'KDV_ORANI'
      Origin = 'OKOSMTS."STOKANA.DB".KDV_ORANI'
    end
    object querySTOKLISTDEVIR_MIKTARI: TFloatField
      FieldName = 'DEVIR_MIKTARI'
      Origin = 'OKOSMTS."STOKANA.DB".DEVIR_MIKTARI'
    end
    object querySTOKLISTSON_DURUM: TFloatField
      FieldName = 'SON_DURUM'
      Origin = 'OKOSMTS."STOKANA.DB".SON_DURUM'
    end
    object querySTOKLISTMALIYETI: TFloatField
      FieldName = 'MALIYETI'
      Origin = 'OKOSMTS."STOKANA.DB".MALIYETI'
    end
    object querySTOKLISTISLETME_KARI: TFloatField
      FieldName = 'ISLETME_KARI'
      Origin = 'OKOSMTS."STOKANA.DB".ISLETME_KARI'
    end
    object querySTOKLISTISLETME_GIDERI: TFloatField
      FieldName = 'ISLETME_GIDERI'
      Origin = 'OKOSMTS."STOKANA.DB".ISLETME_GIDERI'
    end
    object querySTOKLISTARA_TOPLAM: TFloatField
      FieldName = 'ARA_TOPLAM'
      Origin = 'OKOSMTS."STOKANA.DB".ARA_TOPLAM'
    end
    object querySTOKLISTKDV_TUTARI: TFloatField
      FieldName = 'KDV_TUTARI'
      Origin = 'OKOSMTS."STOKANA.DB".KDV_TUTARI'
    end
    object querySTOKLISTGENEL_TOPLAM: TFloatField
      FieldName = 'GENEL_TOPLAM'
      Origin = 'OKOSMTS."STOKANA.DB".GENEL_TOPLAM'
    end
    object querySTOKLISTYUVARLAMA: TFloatField
      FieldName = 'YUVARLAMA'
      Origin = 'OKOSMTS."STOKANA.DB".YUVARLAMA'
    end
  end
  object dsrcSTOKLIST: TDataSource
    DataSet = querySTOKLIST
    Left = 13
    Top = 117
  end
  object dsrcMALZEMELIST: TDataSource
    DataSet = tblMALZEMELIST
    Left = 12
    Top = 273
  end
  object tblMALZEMELIST: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'malzemelist.db'
    Left = 45
    Top = 273
    object tblMALZEMELISTINDEKS: TStringField
      FieldName = 'INDEKS'
      Size = 40
    end
    object tblMALZEMELISTKOD: TFloatField
      FieldName = 'KOD'
    end
    object tblMALZEMELISTAD: TStringField
      FieldName = 'AD'
      Size = 35
    end
  end
  object Timer1: TTimer
    Interval = 10
    OnTimer = Timer1Timer
    Left = 180
    Top = 312
  end
  object popupMALZEME: TPopupMenu
    Images = ImageList1
    Left = 147
    Top = 312
    object Sil1: TMenuItem
      Caption = 'Sil'
      ImageIndex = 0
      OnClick = Sil1Click
    end
    object TabloyuBoalt1: TMenuItem
      Caption = 'Tabloyu Boþalt'
      OnClick = TabloyuBoalt1Click
    end
  end
  object ImageList1: TImageList
    Left = 114
    Top = 312
    Bitmap = {
      494C010101000400040010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000001000000001001000000000000008
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      386738673867386738673867386738672F460000386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000009B739B739B739B739B739B733867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000009B739B739B739B739B739B739B73
      9B739B739B739B739B739B739B739B739B739B739B739B739B739B739B739B73
      9B739B739B739B739B739B739B739B739B739B739B739B739B739B739B739B73
      9B739B739B739B739B739B739B739B739B730000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738670000000000000000000000000000
      0000000000000000000000000000000000003867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      3867386738673867386738673867386738673867386738673867386738673867
      386738673867386738673867386738673867424D3E000000000000003E000000
      2800000040000000100000000100010000000000800000000000000000000000
      000000000000000000000000FFFFFF00FFFF697A65640040FFFF5F7370656369
      EFFD747324662540C7FF7269635F6C69C3FB746440256E75E3F76C697A656400
      F1E7735F73706563F8CF697473246625FC1F657269635F6CFE3F73746440256E
      FC1F616C697A6564F8CF69735F737065E1E7000044493353C3F3000064067720
      C7FD3F0300000000FFFF7E2000433F0300000000000000000000000000000000
      000000000000}
  end
  object dsrcURUNLISTESI: TDataSource
    DataSet = tblURUNLISTESI
    Left = 285
    Top = 276
  end
  object queryURUNLISTESI: TQuery
    DatabaseName = 'OKosMTS'
    SQL.Strings = (
      'SELECT DISTINCT * FROM URUNLIST'
      'ORDER BY KOD')
    Left = 315
    Top = 276
    object queryURUNLISTESIINDEKS: TStringField
      FieldName = 'INDEKS'
      Size = 40
    end
    object queryURUNLISTESIKOD: TFloatField
      FieldName = 'KOD'
    end
    object queryURUNLISTESIAD: TStringField
      FieldName = 'AD'
      Size = 35
    end
    object queryURUNLISTESIFIYATI: TFloatField
      FieldName = 'FIYATI'
      currency = True
    end
    object queryURUNLISTESIETIN_TURU: TStringField
      FieldName = 'ETIN_TURU'
      Size = 40
    end
    object queryURUNLISTESIGRAMAJI: TFloatField
      FieldName = 'GRAMAJI'
    end
  end
  object tblURUNLISTESI: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'urunlist.db'
    Left = 348
    Top = 276
    object tblURUNLISTESIINDEKS: TStringField
      FieldName = 'INDEKS'
      Size = 40
    end
    object tblURUNLISTESIKOD: TFloatField
      FieldName = 'KOD'
    end
    object tblURUNLISTESIAD: TStringField
      FieldName = 'AD'
      Size = 35
    end
    object tblURUNLISTESIFIYATI: TFloatField
      FieldName = 'FIYATI'
      currency = True
    end
    object tblURUNLISTESIETIN_TURU: TStringField
      FieldName = 'ETIN_TURU'
      Size = 40
    end
    object tblURUNLISTESIGRAMAJI: TFloatField
      FieldName = 'GRAMAJI'
    end
  end
  object queryURETIMANA: TQuery
    DatabaseName = 'OKosMTS'
    SQL.Strings = (
      'SELECT * FROM URUNANA'
      'WHERE MALZEMEKODU =:MALZEMEKODU')
    Left = 315
    Top = 246
    ParamData = <
      item
        DataType = ftString
        Name = 'MALZEMEKODU'
        ParamType = ptUnknown
      end>
    object queryURETIMANAURUNKODU: TStringField
      FieldName = 'URUNKODU'
      Origin = 'OKOSMTS."URUNANA.DB".URUNKODU'
      Size = 35
    end
    object queryURETIMANAMALZEMEKODU: TStringField
      FieldName = 'MALZEMEKODU'
      Origin = 'OKOSMTS."URUNANA.DB".MALZEMEKODU'
      Size = 35
    end
    object queryURETIMANAMALZEMEMIKTARI: TFloatField
      FieldName = 'MALZEMEMIKTARI'
      Origin = 'OKOSMTS."URUNANA.DB".MALZEMEMIKTARI'
    end
  end
  object tblSTOKANA: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'stokana.DB'
    Left = 78
    Top = 117
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
  object popupURUN: TPopupMenu
    Images = ImageList1
    Left = 213
    Top = 312
    object Sil2: TMenuItem
      Caption = 'Sil'
      ImageIndex = 0
      OnClick = Sil2Click
    end
    object TabloyuBosalt2: TMenuItem
      Caption = 'Tabloyu Boþalt'
      OnClick = TabloyuBosalt2Click
    end
  end
  object queryMALZEMELIST: TQuery
    DatabaseName = 'OKosMTS'
    SQL.Strings = (
      'SELECT DISTINCT * FROM MALZEMELIST'
      'ORDER BY KOD')
    Left = 45
    Top = 243
  end
  object queryURETIMANA2: TQuery
    DatabaseName = 'OKosMTS'
    SQL.Strings = (
      'SELECT DISTINCT MALZEMEKODU FROM URUNANA'
      'WHERE  URUNKODU=:URUNKODU ')
    Left = 75
    Top = 273
    ParamData = <
      item
        DataType = ftString
        Name = 'URUNKODU'
        ParamType = ptUnknown
      end>
    object queryURETIMANA2MALZEMEKODU: TStringField
      FieldName = 'MALZEMEKODU'
      Origin = 'OKOSMTS."URUNANA.DB".MALZEMEKODU'
      Size = 35
    end
  end
end
