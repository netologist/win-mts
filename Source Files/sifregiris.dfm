object frmSifre: TfrmSifre
  Left = 487
  Top = 159
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Kullanýcý Giriþi'
  ClientHeight = 105
  ClientWidth = 216
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
    Left = 2
    Top = -3
    Width = 214
    Height = 79
    TabOrder = 0
    object Label1: TLabel
      Left = 33
      Top = 15
      Width = 45
      Height = 15
      Caption = 'Kullanýcý'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Comic Sans MS'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 45
      Top = 45
      Width = 32
      Height = 15
      Caption = 'Parola'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Comic Sans MS'
      Font.Style = []
      ParentFont = False
    end
    object sbtnKILIT: TSpeedButton
      Left = 9
      Top = 36
      Width = 25
      Height = 25
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333000003
        333333333F777773FF333333008888800333333377333F3773F3333077870787
        7033333733337F33373F3308888707888803337F33337F33337F330777880887
        7703337F33337FF3337F3308888000888803337F333777F3337F330777700077
        7703337F33377733337FB3088888888888033373FFFFFFFFFF733B3000000000
        0033333777777777773333BBBB3333080333333333F3337F7F33BBBB707BB308
        03333333373F337F7F3333BB08033308033333337F7F337F7F333B3B08033308
        033333337F73FF737F33B33B778000877333333373F777337333333B30888880
        33333333373FFFF73333333B3300000333333333337777733333}
      NumGlyphs = 2
    end
    object editKULLANICI: TEdit
      Left = 84
      Top = 15
      Width = 124
      Height = 26
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Comic Sans MS'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
    object editPAROLA: TEdit
      Left = 84
      Top = 45
      Width = 124
      Height = 26
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Comic Sans MS'
      Font.Style = []
      ParentFont = False
      PasswordChar = '*'
      TabOrder = 1
    end
  end
  object BitBtn1: TBitBtn
    Left = 62
    Top = 79
    Width = 75
    Height = 25
    Caption = 'Tamam'
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 140
    Top = 79
    Width = 75
    Height = 25
    Caption = 'Ýptal'
    TabOrder = 2
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object querySIFREKONTROL: TQuery
    DatabaseName = 'OKosMTS'
    Filtered = True
    FilterOptions = [foCaseInsensitive]
    SQL.Strings = (
      'SELECT * FROM YONETIM')
    Left = 2
    Top = 75
    object querySIFREKONTROLKULLANICI: TStringField
      FieldName = 'KULLANICI'
      Origin = 'OKOSMTS."yonetim.DB".KULLANICI'
      Size = 35
    end
    object querySIFREKONTROLPAROLA: TStringField
      FieldName = 'PAROLA'
      Origin = 'OKOSMTS."yonetim.DB".PAROLA'
      Size = 30
    end
    object querySIFREKONTROLPAROLA_ONAY: TStringField
      FieldName = 'PAROLA_ONAY'
      Origin = 'OKOSMTS."yonetim.DB".PAROLA_ONAY'
      Size = 30
    end
    object querySIFREKONTROLSTOK_KARTI: TStringField
      FieldName = 'STOK_KARTI'
      Origin = 'OKOSMTS."yonetim.DB".STOK_KARTI'
      Size = 10
    end
    object querySIFREKONTROLIC_DAGITIM_GIRISI: TStringField
      FieldName = 'IC_DAGITIM_GIRISI'
      Origin = 'OKOSMTS."yonetim.DB".IC_DAGITIM_GIRISI'
      Size = 10
    end
    object querySIFREKONTROLURUN_HIZMET_CIKISI: TStringField
      FieldName = 'URUN_HIZMET_CIKISI'
      Origin = 'OKOSMTS."yonetim.DB".URUN_HIZMET_CIKISI'
      Size = 10
    end
    object querySIFREKONTROLGUNLUK_SATIS_CIZELGESI: TStringField
      FieldName = 'GUNLUK_SATIS_CIZELGESI'
      Origin = 'OKOSMTS."yonetim.DB".GUNLUK_SATIS_CIZELGESI'
      Size = 10
    end
    object querySIFREKONTROLRAPOR_SECIMI: TStringField
      FieldName = 'RAPOR_SECIMI'
      Origin = 'OKOSMTS."yonetim.DB".RAPOR_SECIMI'
      Size = 10
    end
    object querySIFREKONTROLIMZA_YETKILILERI: TStringField
      FieldName = 'IMZA_YETKILILERI'
      Origin = 'OKOSMTS."yonetim.DB".IMZA_YETKILILERI'
      Size = 10
    end
    object querySIFREKONTROLURUN_CINSI: TStringField
      FieldName = 'URUN_CINSI'
      Origin = 'OKOSMTS."yonetim.DB".URUN_CINSI'
      Size = 10
    end
    object querySIFREKONTROLDEPARTMAN_TANIMLAMA: TStringField
      FieldName = 'DEPARTMAN_TANIMLAMA'
      Origin = 'OKOSMTS."yonetim.DB".DEPARTMAN_TANIMLAMA'
      Size = 10
    end
    object querySIFREKONTROLBIRIM_ORAN_TANIMLAMA: TStringField
      FieldName = 'BIRIM_ORAN_TANIMLAMA'
      Origin = 'OKOSMTS."yonetim.DB".BIRIM_ORAN_TANIMLAMA'
      Size = 10
    end
    object querySIFREKONTROLSABIT_TANIM_PARAMETRELER: TStringField
      FieldName = 'SABIT_TANIM_PARAMETRELER'
      Origin = 'OKOSMTS."yonetim.DB".SABIT_TANIM_PARAMETRELER'
      Size = 10
    end
    object querySIFREKONTROLFIYAT_AYARLAMA: TStringField
      FieldName = 'FIYAT_AYARLAMA'
      Origin = 'OKOSMTS."yonetim.DB".FIYAT_AYARLAMA'
      Size = 10
    end
    object querySIFREKONTROLBIRIM_ORAN_DEGISTIRME: TStringField
      FieldName = 'BIRIM_ORAN_DEGISTIRME'
      Origin = 'OKOSMTS."yonetim.DB".BIRIM_ORAN_DEGISTIRME'
      Size = 10
    end
    object querySIFREKONTROLDEPARTMAN_ADI_DEGISTIRME: TStringField
      FieldName = 'DEPARTMAN_ADI_DEGISTIRME'
      Origin = 'OKOSMTS."yonetim.DB".DEPARTMAN_ADI_DEGISTIRME'
      Size = 10
    end
    object querySIFREKONTROLYONETICI_MODULU: TStringField
      FieldName = 'YONETICI_MODULU'
      Origin = 'OKOSMTS."yonetim.DB".YONETICI_MODULU'
      Size = 10
    end
  end
  object tblPARAMETRE: TTable
    DatabaseName = 'OKosMTS'
    TableName = 'parametre.db'
    Left = 30
    Top = 75
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
