object frmParolaDegistir: TfrmParolaDegistir
  Left = 372
  Top = 294
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Parola Deðiþikliði'
  ClientHeight = 156
  ClientWidth = 290
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 199
    Height = 154
    TabOrder = 0
    object Label1: TLabel
      Left = 9
      Top = 15
      Width = 92
      Height = 13
      Caption = 'Eski Parolanýzý Girin'
    end
    object Label2: TLabel
      Left = 9
      Top = 69
      Width = 93
      Height = 13
      Caption = 'Yeni Parolanýzý Girin'
    end
    object Label3: TLabel
      Left = 9
      Top = 108
      Width = 118
      Height = 13
      Caption = 'Yeni Parolanýzý Onaylayýn'
    end
    object Bevel1: TBevel
      Left = 9
      Top = 60
      Width = 178
      Height = 4
    end
    object editESKIPAROLA: TEdit
      Left = 9
      Top = 30
      Width = 181
      Height = 21
      PasswordChar = '*'
      TabOrder = 0
    end
    object editYENIPAROLA: TEdit
      Left = 9
      Top = 84
      Width = 181
      Height = 21
      PasswordChar = '*'
      TabOrder = 1
    end
    object editYENIPAROLAONAY: TEdit
      Left = 9
      Top = 123
      Width = 181
      Height = 21
      PasswordChar = '*'
      TabOrder = 2
    end
  end
  object BitBtn1: TBitBtn
    Left = 204
    Top = 3
    Width = 84
    Height = 25
    Caption = '&Tamam'
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 204
    Top = 33
    Width = 84
    Height = 25
    Caption = 'Ý&ptal'
    TabOrder = 2
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
end
