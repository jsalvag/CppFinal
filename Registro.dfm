object Form2: TForm2
  Left = 1068
  Top = 356
  BorderStyle = bsToolWindow
  Caption = 'Registro'
  ClientHeight = 456
  ClientWidth = 353
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 120
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
    Left = 114
    Top = 42
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
    Left = 112
    Top = 72
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
    Left = 7
    Top = 102
    Width = 175
    Height = 20
    Caption = 'Fecha de Nacimiento:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 11
    Top = 133
    Width = 171
    Height = 20
    Caption = 'Lugar de Nacimiento:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 101
    Top = 163
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
    Left = 72
    Top = 193
    Width = 110
    Height = 20
    Caption = 'Tel'#233'fono Fijo:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label8: TLabel
    Left = 61
    Top = 224
    Width = 121
    Height = 20
    Caption = 'Tel'#233'fono M'#243'vil:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object MaskEdit1: TMaskEdit
    Left = 192
    Top = 8
    Width = 145
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
  object Edit1: TEdit
    Left = 192
    Top = 38
    Width = 145
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 192
    Top = 68
    Width = 145
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
  object Edit3: TEdit
    Left = 192
    Top = 129
    Width = 145
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
  end
  object Edit4: TEdit
    Left = 192
    Top = 159
    Width = 145
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
  end
  object DateTimePicker1: TDateTimePicker
    Left = 192
    Top = 98
    Width = 145
    Height = 28
    CalAlignment = dtaLeft
    Date = 41585.757921412
    Time = 41585.757921412
    DateFormat = dfShort
    DateMode = dmComboBox
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    Kind = dtkDate
    ParseInput = False
    ParentFont = False
    TabOrder = 3
  end
  object MaskEdit2: TMaskEdit
    Left = 192
    Top = 189
    Width = 145
    Height = 28
    EditMask = '!\(9999\)000-0000;1;_'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    MaxLength = 14
    ParentFont = False
    TabOrder = 6
    Text = '(    )   -    '
  end
  object MaskEdit3: TMaskEdit
    Left = 192
    Top = 220
    Width = 145
    Height = 28
    EditMask = '!\(9999\)000-0000;1;_'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    MaxLength = 14
    ParentFont = False
    TabOrder = 7
    Text = '(    )   -    '
  end
  object Panel1: TPanel
    Left = 8
    Top = 248
    Width = 337
    Height = 73
    TabOrder = 8
    Visible = False
    object Label9: TLabel
      Left = 37
      Top = 29
      Width = 138
      Height = 20
      Caption = 'N'#250'mero de Hijos:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label10: TLabel
      Left = 197
      Top = 17
      Width = 68
      Height = 13
      Caption = 'Masculinos:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label11: TLabel
      Left = 197
      Top = 45
      Width = 65
      Height = 13
      Caption = 'Femeninos:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Edit5: TEdit
      Left = 272
      Top = 9
      Width = 57
      Height = 28
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
    end
    object Edit6: TEdit
      Left = 272
      Top = 37
      Width = 57
      Height = 28
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
    end
  end
  object Panel2: TPanel
    Left = 8
    Top = 248
    Width = 337
    Height = 169
    TabOrder = 9
    Visible = False
    object Label12: TLabel
      Left = 29
      Top = 9
      Width = 142
      Height = 20
      Caption = 'Direcci'#243'n Oficina:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label13: TLabel
      Left = 37
      Top = 37
      Width = 133
      Height = 20
      Caption = 'Te'#233'fono Oficina:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label14: TLabel
      Left = 117
      Top = 61
      Width = 50
      Height = 20
      Caption = 'Otros:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label15: TLabel
      Left = 21
      Top = 140
      Width = 151
      Height = 20
      Caption = 'Reprecentante de:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Edit7: TEdit
      Left = 184
      Top = 5
      Width = 145
      Height = 28
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
    end
    object MaskEdit4: TMaskEdit
      Left = 184
      Top = 33
      Width = 145
      Height = 28
      EditMask = '!\(9999\)000-0000;1;_'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      MaxLength = 14
      ParentFont = False
      TabOrder = 1
      Text = '(    )   -    '
    end
    object Memo1: TMemo
      Left = 184
      Top = 61
      Width = 145
      Height = 73
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
    end
    object ComboBox1: TComboBox
      Left = 184
      Top = 136
      Width = 145
      Height = 28
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ItemHeight = 20
      ParentFont = False
      TabOrder = 3
    end
  end
  object Button2: TButton
    Left = 112
    Top = 424
    Width = 129
    Height = 25
    Caption = 'Guardar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 11
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 112
    Top = 320
    Width = 129
    Height = 25
    Caption = 'Informaci'#243'n Laboral'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 10
    Visible = False
    OnClick = Button3Click
  end
end
