object Form6: TForm6
  Left = 959
  Top = 107
  Width = 370
  Height = 489
  Caption = 'Historia'
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
    Left = 224
    Top = 12
    Width = 62
    Height = 20
    Caption = 'C'#243'digo:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object cod_lb: TLabel
    Left = 296
    Top = 12
    Width = 41
    Height = 20
    Caption = '0000'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 52
    Width = 151
    Height = 20
    Caption = 'Motivo de consulta'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 132
    Width = 184
    Height = 20
    Caption = 'Antecedentes M'#233'dicos'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 8
    Top = 212
    Width = 88
    Height = 20
    Caption = 'Evaluaci'#243'n'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 8
    Top = 292
    Width = 66
    Height = 20
    Caption = 'Alergias'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object ComboBox1: TComboBox
    Left = 72
    Top = 8
    Width = 145
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ItemHeight = 20
    ParentFont = False
    TabOrder = 0
  end
  object Memo1: TMemo
    Left = 8
    Top = 72
    Width = 337
    Height = 57
    TabOrder = 1
  end
  object Memo2: TMemo
    Left = 8
    Top = 152
    Width = 337
    Height = 57
    TabOrder = 2
  end
  object Memo3: TMemo
    Left = 8
    Top = 232
    Width = 337
    Height = 57
    TabOrder = 3
  end
  object Memo4: TMemo
    Left = 8
    Top = 312
    Width = 337
    Height = 57
    TabOrder = 4
  end
  object Button2: TButton
    Left = 112
    Top = 400
    Width = 129
    Height = 25
    Caption = 'Guardar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
    OnClick = Button2Click
  end
end
