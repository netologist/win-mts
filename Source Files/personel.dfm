object frmImzaYetkilileri: TfrmImzaYetkilileri
  Left = 244
  Top = 192
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Ýmza Yetkilisi Olan Personel Listesi'
  ClientHeight = 289
  ClientWidth = 412
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
    Width = 412
    Height = 289
    TabOrder = 0
    object DBNavigator1: TDBNavigator
      Left = 67
      Top = 15
      Width = 270
      Height = 25
      DataSource = dsrcPERSONEL
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 5
      Top = 147
      Width = 399
      Height = 136
      DataSource = dsrcPERSONEL
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'Oncelik'
          Title.Alignment = taCenter
          Title.Caption = 'Derecesi'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Rutbe'
          Title.Alignment = taCenter
          Title.Caption = 'Rütbesi'
          Width = 68
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'AdSoyad'
          Title.Alignment = taCenter
          Title.Caption = 'Adý Soyadý'
          Width = 100
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Gorevi'
          Title.Alignment = taCenter
          Title.Caption = 'Görevi'
          Width = 127
          Visible = True
        end>
    end
    object GroupBox2: TGroupBox
      Left = 5
      Top = 45
      Width = 400
      Height = 97
      TabOrder = 2
      object Label1: TLabel
        Left = 9
        Top = 12
        Width = 74
        Height = 13
        Caption = 'Rütbe Derecesi'
      end
      object Label2: TLabel
        Left = 9
        Top = 54
        Width = 36
        Height = 13
        Caption = 'Rütbesi'
      end
      object Label3: TLabel
        Left = 204
        Top = 12
        Width = 50
        Height = 13
        Caption = 'Adý Soyadý'
      end
      object Label4: TLabel
        Left = 204
        Top = 54
        Width = 31
        Height = 13
        Caption = 'Görevi'
      end
      object dbeditRUTBEDERECESI: TDBEdit
        Left = 9
        Top = 27
        Width = 187
        Height = 21
        DataField = 'Oncelik'
        DataSource = dsrcPERSONEL
        TabOrder = 0
      end
      object dbeditADISOYADI: TDBEdit
        Left = 204
        Top = 27
        Width = 187
        Height = 21
        DataField = 'AdSoyad'
        DataSource = dsrcPERSONEL
        TabOrder = 1
      end
      object dbeditRUTBESI: TDBEdit
        Left = 9
        Top = 69
        Width = 187
        Height = 21
        DataField = 'Rutbe'
        DataSource = dsrcPERSONEL
        TabOrder = 2
      end
      object dbeditGOREVI: TDBEdit
        Left = 204
        Top = 69
        Width = 187
        Height = 21
        DataField = 'Gorevi'
        DataSource = dsrcPERSONEL
        TabOrder = 3
      end
    end
  end
  object dsrcPERSONEL: TDataSource
    DataSet = tblPERSONEL
    Left = 318
    Top = 249
  end
  object tblPERSONEL: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'personel.db'
    Left = 351
    Top = 249
  end
end
