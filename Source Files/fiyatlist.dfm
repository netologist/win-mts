object frmOzelFiyatListesi: TfrmOzelFiyatListesi
  Left = 298
  Top = 169
  BorderStyle = bsSingle
  Caption = 'Özel Fiyat Listesi Hazýrlama'
  ClientHeight = 346
  ClientWidth = 479
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 478
    Height = 343
    TabOrder = 0
    object Label1: TLabel
      Left = 297
      Top = 60
      Width = 72
      Height = 13
      Caption = 'Hasan ÖZGAN'
    end
    object Label2: TLabel
      Left = 300
      Top = 120
      Width = 32
      Height = 13
      Caption = 'Label2'
    end
    object DBGrid1: TDBGrid
      Left = 6
      Top = 177
      Width = 466
      Height = 159
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'Departman'
          Title.Alignment = taCenter
          Width = 75
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Stok Kodu'
          Title.Alignment = taCenter
          Width = 80
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Stok Adý'
          Title.Alignment = taCenter
          Width = 140
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Fiyatý'
          Title.Alignment = taCenter
          Width = 130
          Visible = True
        end>
    end
    object DBGrid2: TDBGrid
      Left = 6
      Top = 60
      Width = 280
      Height = 106
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
    end
    object Edit1: TEdit
      Left = 297
      Top = 84
      Width = 121
      Height = 21
      TabOrder = 2
      Text = 'Edit1'
    end
    object Edit2: TEdit
      Left = 291
      Top = 141
      Width = 121
      Height = 21
      TabOrder = 3
      Text = 'Edit2'
    end
  end
end
