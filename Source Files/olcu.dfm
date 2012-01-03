object frmOlcuBirimi: TfrmOlcuBirimi
  Left = 191
  Top = 108
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Ölçü Birimi'
  ClientHeight = 244
  ClientWidth = 248
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
    Width = 247
    Height = 244
    TabOrder = 0
    object DBNavigator1: TDBNavigator
      Left = 6
      Top = 15
      Width = 230
      Height = 25
      DataSource = dsrcOLCU
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 6
      Top = 45
      Width = 235
      Height = 190
      DataSource = dsrcOLCU
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'TANIMLAMA'
          Title.Alignment = taCenter
          Title.Caption = 'Açýklama'
          Width = 130
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'BIRIM_ORANI'
          Title.Alignment = taCenter
          Title.Caption = 'Birim Oraný'
          Visible = True
        end>
    end
  end
  object dsrcOLCU: TDataSource
    DataSet = tblOLCU
    Left = 159
    Top = 198
  end
  object tblOLCU: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'olcu.db'
    Left = 189
    Top = 198
    object tblOLCUTANIMLAMA: TStringField
      FieldName = 'TANIMLAMA'
      Size = 30
    end
    object tblOLCUBIRIM_ORANI: TFloatField
      FieldName = 'BIRIM_ORANI'
    end
  end
end
