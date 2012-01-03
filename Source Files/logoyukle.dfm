object frmLogo: TfrmLogo
  Left = 392
  Top = 498
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Logo Yükle'
  ClientHeight = 237
  ClientWidth = 178
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
  object SpeedButton1: TSpeedButton
    Left = 90
    Top = 213
    Width = 83
    Height = 22
    Caption = 'Kaydet'
    OnClick = SpeedButton1Click
  end
  object SpeedButton2: TSpeedButton
    Left = 6
    Top = 213
    Width = 83
    Height = 22
    Caption = 'Logo Seç'
    OnClick = SpeedButton2Click
  end
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 178
    Height = 208
    Caption = ' Önizleme '
    TabOrder = 0
    object Bevel1: TBevel
      Left = 12
      Top = 15
      Width = 154
      Height = 181
    end
    object Image1: TImage
      Left = 41
      Top = 30
      Width = 100
      Height = 149
      Stretch = True
    end
  end
  object OpenPictureDialog1: TOpenPictureDialog
    Left = 18
    Top = 159
  end
end
