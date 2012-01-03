object frmDepartman: TfrmDepartman
  Left = 233
  Top = 118
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Departman Tanýmlamalarý'
  ClientHeight = 254
  ClientWidth = 271
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
    Width = 271
    Height = 253
    TabOrder = 0
    object DBNavigator1: TDBNavigator
      Left = 12
      Top = 15
      Width = 240
      Height = 25
      DataSource = dsrcDEPARTMAN
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 6
      Top = 48
      Width = 259
      Height = 199
      DataSource = dsrcDEPARTMAN
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'DEPARTMAN'
          Title.Alignment = taCenter
          Title.Caption = 'Departmanýn Adý'
          Width = 220
          Visible = True
        end>
    end
  end
  object dsrcDEPARTMAN: TDataSource
    DataSet = tblDEPARTMAN
    Left = 186
    Top = 213
  end
  object tblDEPARTMAN: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'departman.db'
    Left = 216
    Top = 213
    object tblDEPARTMANDEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Size = 40
    end
  end
end
