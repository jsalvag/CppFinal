object Form5: TForm5
  Left = 198
  Top = 127
  Width = 369
  Height = 495
  Caption = 'Buscar'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 12
    Width = 62
    Height = 20
    Caption = 'C'#233'dula:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 32
    Top = 76
    Width = 68
    Height = 20
    Caption = 'Nombre:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 30
    Top = 99
    Width = 70
    Height = 20
    Caption = 'Apellido:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 52
    Top = 122
    Width = 48
    Height = 20
    Caption = 'Edad:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 19
    Top = 146
    Width = 81
    Height = 20
    Caption = 'Direcci'#243'n:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 40
    Top = 192
    Width = 60
    Height = 20
    Caption = 'Tlf Fijo:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label8: TLabel
    Left = 29
    Top = 216
    Width = 71
    Height = 20
    Caption = 'Tlf M'#243'vil:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 12
    Top = 169
    Width = 88
    Height = 20
    Caption = 'Lugar Nac:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object nom_lb: TLabel
    Left = 104
    Top = 76
    Width = 35
    Height = 20
    Caption = 'nom'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object ape_lb: TLabel
    Left = 104
    Top = 99
    Width = 31
    Height = 20
    Caption = 'ape'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object ed_lb: TLabel
    Left = 104
    Top = 122
    Width = 21
    Height = 20
    Caption = 'ed'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object dir_lb: TLabel
    Left = 104
    Top = 146
    Width = 21
    Height = 20
    Caption = 'dir'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object fNac_lb: TLabel
    Left = 104
    Top = 169
    Width = 38
    Height = 20
    Caption = 'fNac'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object tlfF_lb: TLabel
    Left = 104
    Top = 192
    Width = 28
    Height = 20
    Caption = 'tlfF'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object tlfM_lb: TLabel
    Left = 104
    Top = 216
    Width = 31
    Height = 20
    Caption = 'tlfM'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label9: TLabel
    Left = 4
    Top = 240
    Width = 96
    Height = 20
    Caption = 'Relacinado:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object rel_lb: TLabel
    Left = 104
    Top = 240
    Width = 21
    Height = 20
    Caption = 'rel'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
  end
  object tipo_lb: TLabel
    Left = 144
    Top = 52
    Width = 31
    Height = 20
    Caption = 'tipo'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object MaskEdit1: TMaskEdit
    Left = 80
    Top = 8
    Width = 142
    Height = 28
    EditMask = '00\.000\.000;0;_'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    MaxLength = 10
    ParentFont = False
    TabOrder = 0
  end
  object buscar_btn: TButton
    Left = 232
    Top = 10
    Width = 73
    Height = 25
    Caption = 'Buscar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = buscar_btnClick
  end
  object historia_btn: TButton
    Left = 136
    Top = 288
    Width = 75
    Height = 25
    Caption = 'Ver Historia'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    Visible = False
  end
  object Button1: TButton
    Left = 120
    Top = 304
    Width = 105
    Height = 25
    Caption = 'Datos Laborales'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    Visible = False
  end
end
