object frmBirimOranDegistir: TfrmBirimOranDegistir
  Left = 272
  Top = 173
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Birim & Oran Deðiþtirme Modülü'
  ClientHeight = 291
  ClientWidth = 424
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
    Top = -3
    Width = 424
    Height = 271
    TabOrder = 0
    object Label1: TLabel
      Left = 54
      Top = 15
      Width = 52
      Height = 13
      Caption = 'Departman'
    end
    object Label2: TLabel
      Left = 87
      Top = 39
      Width = 19
      Height = 13
      Caption = 'Kod'
    end
    object Label3: TLabel
      Left = 91
      Top = 63
      Width = 15
      Height = 13
      Caption = 'Adý'
    end
    object Label4: TLabel
      Left = 35
      Top = 171
      Width = 68
      Height = 13
      Caption = 'Muaddel Birimi'
    end
    object Label5: TLabel
      Left = 9
      Top = 195
      Width = 94
      Height = 13
      Caption = 'Muaddel Birim Oraný'
    end
    object Label6: TLabel
      Left = 54
      Top = 123
      Width = 49
      Height = 13
      Caption = 'Ölçü Birimi'
    end
    object Label7: TLabel
      Left = 28
      Top = 147
      Width = 75
      Height = 13
      Caption = 'Ölçü Birim Oraný'
    end
    object Bevel1: TBevel
      Left = 6
      Top = 90
      Width = 412
      Height = 4
    end
    object SpeedButton1: TSpeedButton
      Left = 390
      Top = 15
      Width = 23
      Height = 22
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333303333
        333333333337F33333333333333033333333333333373F333333333333090333
        33333333337F7F33333333333309033333333333337373F33333333330999033
        3333333337F337F33333333330999033333333333733373F3333333309999903
        333333337F33337F33333333099999033333333373333373F333333099999990
        33333337FFFF3FF7F33333300009000033333337777F77773333333333090333
        33333333337F7F33333333333309033333333333337F7F333333333333090333
        33333333337F7F33333333333309033333333333337F7F333333333333090333
        33333333337F7F33333333333300033333333333337773333333}
      NumGlyphs = 2
      OnClick = SpeedButton1Click
    end
    object Label8: TLabel
      Left = 168
      Top = 219
      Width = 28
      Height = 13
      Alignment = taRightJustify
      AutoSize = False
      Caption = '% 0'
    end
    object SpeedButton2: TSpeedButton
      Left = 6
      Top = 12
      Width = 23
      Height = 22
      Hint = 'Ýçeriði Temizle'
      Glyph.Data = {
        36030000424D3603000000000000360000002800000010000000100000000100
        1800000000000003000000000000000000000000000000000000FF00FFFF00FF
        FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00
        FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF
        0000000000000000000000000000000000000000000000000000000000000000
        00FF00FFFF00FFFF00FFFF00FFFF00FF000000FFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFF000000FF00FFFF00FFFF00FFFF00FFFF00FF
        000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000
        00FF00FFFF00FFFF00FFFF00FFFF00FF000000FFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFDFFFFFFFFFF000000FF00FFFF00FFFF00FFFF00FFFF00FF
        000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000
        00FF00FFFF00FFFF00FFFF00FFFF00FF000000FFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFF000000FF00FFFF00FFFF00FFFF00FFFF00FF
        000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000
        00FF00FFFF00FFFF00FFFF00FFFF00FF000000FFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFF000000FF00FFFF00FFFF00FFFF00FFFF00FF
        000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000
        00FF00FFFF00FFFF00FFFF00FFFF00FF000000FFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFF000000000000000000000000FF00FFFF00FFFF00FFFF00FFFF00FF
        000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000FFFFFF000000FF00
        FFFF00FFFF00FFFF00FFFF00FFFF00FF000000FFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFF000000000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF
        000000000000000000000000000000000000000000000000FF00FFFF00FFFF00
        FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF}
      ParentShowHint = False
      ShowHint = True
      OnClick = SpeedButton2Click
    end
    object editDepartman: TEdit
      Left = 111
      Top = 15
      Width = 277
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 0
    end
    object editStokKodu: TEdit
      Left = 111
      Top = 39
      Width = 304
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 1
    end
    object editStokAdi: TEdit
      Left = 111
      Top = 63
      Width = 304
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 2
    end
    object editEskiMuaddelBirimi: TEdit
      Left = 111
      Top = 171
      Width = 151
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 3
    end
    object editEskiMuaddelBirimOrani: TEdit
      Left = 111
      Top = 195
      Width = 151
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 4
    end
    object editEskiOlcuBirimi: TEdit
      Left = 111
      Top = 123
      Width = 151
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 5
    end
    object editOlcuEskiBirimOrani: TEdit
      Left = 111
      Top = 147
      Width = 151
      Height = 21
      TabStop = False
      ReadOnly = True
      TabOrder = 6
    end
    object editYeniMuaddelBirimOrani: TEdit
      Left = 267
      Top = 195
      Width = 151
      Height = 21
      TabOrder = 10
    end
    object editYeniOlcuBirimOrani: TEdit
      Left = 267
      Top = 147
      Width = 151
      Height = 21
      TabOrder = 8
    end
    object comboYeniMuaddelBirimi: TComboBox
      Left = 267
      Top = 171
      Width = 151
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 9
      OnChange = comboYeniMuaddelBirimiChange
    end
    object comboYeniOlcuBirimi: TComboBox
      Left = 267
      Top = 123
      Width = 151
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 7
      OnChange = comboYeniOlcuBirimiChange
    end
    object StaticText1: TStaticText
      Left = 111
      Top = 102
      Width = 151
      Height = 17
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSingle
      Caption = 'Eski Birim && Oran'
      Color = clScrollBar
      ParentColor = False
      TabOrder = 11
    end
    object StaticText2: TStaticText
      Left = 267
      Top = 102
      Width = 148
      Height = 17
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSingle
      Caption = 'Yeni Birim && Oran'
      Color = clScrollBar
      ParentColor = False
      TabOrder = 12
    end
    object Animate1: TAnimate
      Left = 114
      Top = 219
      Width = 48
      Height = 45
      Active = False
      CommonAVI = aviFindComputer
      StopFrame = 8
    end
    object BitBtn1: TBitBtn
      Left = 261
      Top = 240
      Width = 75
      Height = 25
      Caption = 'Baþlat'
      TabOrder = 14
      OnClick = BitBtn1Click
      Kind = bkOK
    end
    object BitBtn2: TBitBtn
      Left = 342
      Top = 240
      Width = 75
      Height = 25
      Caption = 'Kapat'
      TabOrder = 15
      OnClick = BitBtn2Click
      Kind = bkCancel
    end
    object ProgressBar1: TProgressBar
      Left = 201
      Top = 219
      Width = 217
      Height = 16
      Min = 0
      Max = 100
      Smooth = True
      TabOrder = 16
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 269
    Width = 424
    Height = 22
    Panels = <
      item
        Width = 275
      end
      item
        Alignment = taRightJustify
        Text = 'Kalan Kayýt '
        Width = 80
      end
      item
        Width = 50
      end>
    SimplePanel = False
  end
  object Timer1: TTimer
    Interval = 500
    OnTimer = Timer1Timer
    Left = 6
    Top = 234
  end
  object queryDUZENLE: TQuery
    DatabaseName = 'OkosMTS'
    Left = 39
    Top = 234
  end
  object tblSTOKANA: TTable
    DatabaseName = 'OkosMTS'
    TableName = 'stokana.DB'
    Left = 72
    Top = 234
    object tblSTOKANAINDEKS: TStringField
      FieldName = 'INDEKS'
      Size = 35
    end
    object tblSTOKANADEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Size = 25
    end
    object tblSTOKANAKOD: TFloatField
      FieldName = 'KOD'
    end
    object tblSTOKANACINSI_KUTUSU: TStringField
      FieldName = 'CINSI_KUTUSU'
      Size = 15
    end
    object tblSTOKANACINSI: TStringField
      FieldName = 'CINSI'
      Size = 25
    end
    object tblSTOKANAADI: TStringField
      FieldName = 'ADI'
      Size = 30
    end
    object tblSTOKANAOLCU_BIRIMI: TStringField
      FieldName = 'OLCU_BIRIMI'
      Size = 10
    end
    object tblSTOKANABIRIM_ORANI: TFloatField
      FieldName = 'BIRIM_ORANI'
    end
    object tblSTOKANAMUADDEL_BIRIMI: TStringField
      FieldName = 'MUADDEL_BIRIMI'
      Size = 10
    end
    object tblSTOKANAMUADDEL_BIRIM_ORANI: TFloatField
      FieldName = 'MUADDEL_BIRIM_ORANI'
    end
    object tblSTOKANABIRIM_FIYATI: TFloatField
      FieldName = 'BIRIM_FIYATI'
    end
    object tblSTOKANAKDV_ORANI: TFloatField
      FieldName = 'KDV_ORANI'
    end
    object tblSTOKANADEVIR_MIKTARI: TFloatField
      FieldName = 'DEVIR_MIKTARI'
    end
    object tblSTOKANASON_DURUM: TFloatField
      FieldName = 'SON_DURUM'
    end
    object tblSTOKANAMALIYETI: TFloatField
      FieldName = 'MALIYETI'
    end
    object tblSTOKANAISLETME_KARI: TFloatField
      FieldName = 'ISLETME_KARI'
    end
    object tblSTOKANAISLETME_GIDERI: TFloatField
      FieldName = 'ISLETME_GIDERI'
    end
    object tblSTOKANAARA_TOPLAM: TFloatField
      FieldName = 'ARA_TOPLAM'
    end
    object tblSTOKANAKDV_TUTARI: TFloatField
      FieldName = 'KDV_TUTARI'
    end
    object tblSTOKANAGENEL_TOPLAM: TFloatField
      FieldName = 'GENEL_TOPLAM'
    end
    object tblSTOKANAYUVARLAMA: TFloatField
      FieldName = 'YUVARLAMA'
    end
    object tblSTOKANATARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblSTOKANASAAT: TTimeField
      FieldName = 'SAAT'
    end
  end
end
