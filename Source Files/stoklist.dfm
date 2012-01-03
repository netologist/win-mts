object frmStokListesi: TfrmStokListesi
  Left = 351
  Top = 252
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Stok Listesi'
  ClientHeight = 325
  ClientWidth = 442
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 99
    Width = 442
    Height = 226
    TabOrder = 2
    object DBGrid1: TDBGrid
      Left = 6
      Top = 12
      Width = 430
      Height = 208
      DataSource = dsrcSTOKLISTESI
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnCellClick = DBGrid1CellClick
      OnKeyPress = DBGrid1KeyPress
      Columns = <
        item
          Expanded = False
          FieldName = 'DEPARTMAN'
          Title.Alignment = taCenter
          Title.Caption = 'Departman'
          Width = 78
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'KOD'
          Title.Alignment = taCenter
          Title.Caption = 'Stok Kodu'
          Width = 59
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ADI'
          Title.Alignment = taCenter
          Title.Caption = 'Stok Ad'#305
          Width = 140
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'CINSI'
          Title.Alignment = taCenter
          Title.Caption = 'Cinsi'
          Width = 110
          Visible = True
        end>
    end
  end
  object GroupBox2: TGroupBox
    Left = 0
    Top = 48
    Width = 442
    Height = 58
    TabOrder = 1
    object Label1: TLabel
      Left = 9
      Top = 12
      Width = 50
      Height = 13
      Caption = 'Stok Kodu'
    end
    object Label2: TLabel
      Left = 225
      Top = 12
      Width = 40
      Height = 13
      Caption = 'Stok Ad'#305
    end
    object editSTOKKODU: TEdit
      Left = 9
      Top = 27
      Width = 211
      Height = 21
      Color = clScrollBar
      TabOrder = 0
      OnChange = editSTOKKODUChange
      OnClick = editSTOKKODUClick
    end
    object editSTOKADI: TEdit
      Left = 225
      Top = 27
      Width = 211
      Height = 21
      TabOrder = 1
      OnChange = editSTOKADIChange
      OnClick = editSTOKADIClick
    end
  end
  object GroupBox3: TGroupBox
    Left = 0
    Top = 0
    Width = 442
    Height = 55
    TabOrder = 0
    object Label3: TLabel
      Left = 6
      Top = 9
      Width = 55
      Height = 13
      Caption = ' Departman'
    end
    object Label4: TLabel
      Left = 231
      Top = 9
      Width = 22
      Height = 13
      Caption = 'Cinsi'
    end
    object comboDepartman: TComboBox
      Left = 6
      Top = 25
      Width = 217
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 0
      OnChange = comboDepartmanChange
    end
    object comboCinsi: TComboBox
      Left = 228
      Top = 24
      Width = 208
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 1
      OnChange = dbcomboCinsiChange
    end
  end
  object dsrcSTOKLISTESI: TDataSource
    DataSet = querySTOKLISTESI
    Left = 54
    Top = 240
  end
  object querySTOKLISTESI: TQuery
    DatabaseName = 'OKosMTS'
    FilterOptions = [foCaseInsensitive]
    SQL.Strings = (
      'SELECT * FROM STOKANA'
      
        'WHERE (DEPARTMAN LIKE :DEPARTMAN AND CINSI LIKE :CINSI) AND (ADI' +
        ' LIKE :ADI OR KOD=:KOD)'
      'ORDER BY KOD')
    Left = 18
    Top = 240
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
        DataType = ftString
        Name = 'ADI'
        ParamType = ptUnknown
      end
      item
        DataType = ftInteger
        Name = 'KOD'
        ParamType = ptUnknown
      end>
    object querySTOKLISTESIINDEKS: TStringField
      FieldName = 'INDEKS'
      Origin = 'OKOSMTS."STOKANA.DB".INDEKS'
      Size = 35
    end
    object querySTOKLISTESIDEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Origin = 'OKOSMTS."STOKANA.DB".DEPARTMAN'
      Size = 25
    end
    object querySTOKLISTESIKOD: TFloatField
      FieldName = 'KOD'
      Origin = 'OKOSMTS."STOKANA.DB".KOD'
    end
    object querySTOKLISTESICINSI_KUTUSU: TStringField
      FieldName = 'CINSI_KUTUSU'
      Origin = 'OKOSMTS."STOKANA.DB".CINSI_KUTUSU'
      Size = 15
    end
    object querySTOKLISTESICINSI: TStringField
      FieldName = 'CINSI'
      Origin = 'OKOSMTS."STOKANA.DB".CINSI'
      Size = 25
    end
    object querySTOKLISTESIADI: TStringField
      FieldName = 'ADI'
      Origin = 'OKOSMTS."STOKANA.DB".ADI'
      Size = 30
    end
    object querySTOKLISTESIOLCU_BIRIMI: TStringField
      FieldName = 'OLCU_BIRIMI'
      Origin = 'OKOSMTS."STOKANA.DB".OLCU_BIRIMI'
      Size = 10
    end
    object querySTOKLISTESIBIRIM_ORANI: TFloatField
      FieldName = 'BIRIM_ORANI'
      Origin = 'OKOSMTS."STOKANA.DB".BIRIM_ORANI'
    end
    object querySTOKLISTESIBIRIM_FIYATI: TFloatField
      FieldName = 'BIRIM_FIYATI'
      Origin = 'OKOSMTS."STOKANA.DB".BIRIM_FIYATI'
    end
    object querySTOKLISTESIKDV_ORANI: TFloatField
      FieldName = 'KDV_ORANI'
      Origin = 'OKOSMTS."STOKANA.DB".KDV_ORANI'
    end
    object querySTOKLISTESIDEVIR_MIKTARI: TFloatField
      FieldName = 'DEVIR_MIKTARI'
      Origin = 'OKOSMTS."STOKANA.DB".DEVIR_MIKTARI'
    end
    object querySTOKLISTESISON_DURUM: TFloatField
      FieldName = 'SON_DURUM'
      Origin = 'OKOSMTS."STOKANA.DB".SON_DURUM'
    end
    object querySTOKLISTESIMALIYETI: TFloatField
      FieldName = 'MALIYETI'
      Origin = 'OKOSMTS."STOKANA.DB".MALIYETI'
    end
    object querySTOKLISTESIISLETME_KARI: TFloatField
      FieldName = 'ISLETME_KARI'
      Origin = 'OKOSMTS."STOKANA.DB".ISLETME_KARI'
    end
    object querySTOKLISTESIISLETME_GIDERI: TFloatField
      FieldName = 'ISLETME_GIDERI'
      Origin = 'OKOSMTS."STOKANA.DB".ISLETME_GIDERI'
    end
    object querySTOKLISTESIARA_TOPLAM: TFloatField
      FieldName = 'ARA_TOPLAM'
      Origin = 'OKOSMTS."STOKANA.DB".ARA_TOPLAM'
    end
    object querySTOKLISTESIKDV_TUTARI: TFloatField
      FieldName = 'KDV_TUTARI'
      Origin = 'OKOSMTS."STOKANA.DB".KDV_TUTARI'
    end
    object querySTOKLISTESIGENEL_TOPLAM: TFloatField
      FieldName = 'GENEL_TOPLAM'
      Origin = 'OKOSMTS."STOKANA.DB".GENEL_TOPLAM'
    end
    object querySTOKLISTESIYUVARLAMA: TFloatField
      FieldName = 'YUVARLAMA'
      Origin = 'OKOSMTS."STOKANA.DB".YUVARLAMA'
    end
    object querySTOKLISTESIMUADDEL_BIRIMI: TStringField
      FieldName = 'MUADDEL_BIRIMI'
      Origin = 'OKOSMTS."STOKANA.DB".MUADDEL_BIRIMI'
      Size = 10
    end
    object querySTOKLISTESIMUADDEL_BIRIM_ORANI: TFloatField
      FieldName = 'MUADDEL_BIRIM_ORANI'
      Origin = 'OKOSMTS."STOKANA.DB".MUADDEL_BIRIM_ORANI'
    end
    object querySTOKLISTESITARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'OKOSMTS."STOKANA.DB".TARIH'
    end
    object querySTOKLISTESISAAT: TTimeField
      FieldName = 'SAAT'
      Origin = 'OKOSMTS."STOKANA.DB".SAAT'
    end
  end
end
