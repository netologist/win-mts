object frmUrunCinsi: TfrmUrunCinsi
  Left = 308
  Top = 172
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Ürün Cinsi Tanýmlarý'
  ClientHeight = 256
  ClientWidth = 253
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
    Width = 253
    Height = 256
    TabOrder = 0
    object DBNavigator1: TDBNavigator
      Left = 6
      Top = 15
      Width = 240
      Height = 25
      DataSource = dsrcURUNCINSI
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 6
      Top = 45
      Width = 241
      Height = 205
      DataSource = dsrcURUNCINSI
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'URUNCINSI'
          Title.Alignment = taCenter
          Title.Caption = 'Ürün Cinsi'
          Width = 205
          Visible = True
        end>
    end
  end
  object dsrcURUNCINSI: TDataSource
    DataSet = tblURUNCINSI
    Left = 12
    Top = 183
  end
  object tblURUNCINSI: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'uruncinsi.db'
    Left = 12
    Top = 216
    object tblURUNCINSIURUNCINSI: TStringField
      FieldName = 'URUNCINSI'
      Size = 40
    end
  end
end
