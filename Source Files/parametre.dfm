object frmParametreler: TfrmParametreler
  Left = 338
  Top = 352
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Parametreler'
  ClientHeight = 94
  ClientWidth = 346
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
    Top = 0
    Width = 346
    Height = 94
    TabOrder = 0
    object Label1: TLabel
      Left = 9
      Top = 63
      Width = 89
      Height = 13
      Caption = 'Ýþletme Gider Oraný'
    end
    object Label2: TLabel
      Left = 9
      Top = 39
      Width = 80
      Height = 13
      Caption = 'Ýþletme Kar Oraný'
    end
    object Label3: TLabel
      Left = 9
      Top = 15
      Width = 51
      Height = 13
      Caption = 'Tanýmlama'
    end
    object DBEdit1: TDBEdit
      Left = 114
      Top = 15
      Width = 226
      Height = 21
      DataField = 'TANIMLAMA'
      DataSource = dsrcPARAMETRE
      TabOrder = 0
    end
    object DBEdit2: TDBEdit
      Left = 114
      Top = 39
      Width = 82
      Height = 21
      DataField = 'KAR_ORANI'
      DataSource = dsrcPARAMETRE
      TabOrder = 1
    end
    object DBEdit3: TDBEdit
      Left = 114
      Top = 63
      Width = 82
      Height = 21
      DataField = 'ISLETME_ORANI'
      DataSource = dsrcPARAMETRE
      TabOrder = 2
    end
    object BitBtn1: TBitBtn
      Left = 264
      Top = 57
      Width = 75
      Height = 25
      Caption = 'Tamam'
      TabOrder = 3
      OnClick = BitBtn1Click
      Kind = bkOK
    end
  end
  object dsrcPARAMETRE: TDataSource
    DataSet = tblPARAMETRE
    Left = 198
    Top = 57
  end
  object tblPARAMETRE: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'parametre.db'
    Left = 228
    Top = 57
    object tblPARAMETRETANIMLAMA: TStringField
      FieldName = 'TANIMLAMA'
      Size = 255
    end
    object tblPARAMETREISLETME_ORANI: TFloatField
      FieldName = 'ISLETME_ORANI'
    end
    object tblPARAMETREKAR_ORANI: TFloatField
      FieldName = 'KAR_ORANI'
    end
    object tblPARAMETREISLETME_GIDERI: TFloatField
      FieldName = 'ISLETME_GIDERI'
    end
  end
end
