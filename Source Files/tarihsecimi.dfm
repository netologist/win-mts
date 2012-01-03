object frmTarihSecimi: TfrmTarihSecimi
  Left = 502
  Top = 231
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Tarih Giriniz . . .'
  ClientHeight = 94
  ClientWidth = 185
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
    Top = -3
    Width = 184
    Height = 97
    TabOrder = 0
    object Label1: TLabel
      Left = 6
      Top = 12
      Width = 31
      Height = 16
      Caption = 'Tarih'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object DateTimePicker1: TDateTimePicker
      Left = 6
      Top = 30
      Width = 172
      Height = 24
      CalAlignment = dtaLeft
      Date = 37332.6666511574
      Time = 37332.6666511574
      DateFormat = dfShort
      DateMode = dmComboBox
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 0
    end
    object BitBtn1: TBitBtn
      Left = 6
      Top = 60
      Width = 85
      Height = 31
      Caption = 'Tamam'
      TabOrder = 1
      OnClick = BitBtn1Click
      Kind = bkOK
    end
    object BitBtn2: TBitBtn
      Left = 93
      Top = 60
      Width = 85
      Height = 31
      Caption = 'Ýptal'
      TabOrder = 2
      OnClick = BitBtn2Click
      Kind = bkCancel
    end
  end
  object tblFIYATGECMISI: TTable
    DatabaseName = 'OkosMTS'
    TableName = 'fiyatgecmisi.db'
    Left = 319
    Top = 9
    object tblFIYATGECMISIINDEKS: TStringField
      FieldName = 'INDEKS'
      Size = 35
    end
    object tblFIYATGECMISITARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblFIYATGECMISIFIYAT: TFloatField
      FieldName = 'FIYAT'
    end
  end
end
