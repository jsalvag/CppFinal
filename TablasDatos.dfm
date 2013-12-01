object Form4: TForm4
  Left = 496
  Top = 14
  BorderStyle = bsSingle
  Caption = 'Datos'
  ClientHeight = 655
  ClientWidth = 809
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Persona: TStringGrid
    Left = 0
    Top = 0
    Width = 809
    Height = 161
    Align = alTop
    ColCount = 11
    RowCount = 2
    TabOrder = 0
    ColWidths = (
      64
      64
      64
      64
      64
      64
      64
      100
      103
      64
      79)
  end
  object Reprecentante: TStringGrid
    Left = 0
    Top = 161
    Width = 809
    Height = 144
    Align = alTop
    ColCount = 4
    RowCount = 2
    TabOrder = 1
    ColWidths = (
      64
      193
      139
      405)
  end
  object Empleado: TStringGrid
    Left = 0
    Top = 305
    Width = 809
    Height = 99
    Align = alTop
    ColCount = 8
    RowCount = 2
    TabOrder = 2
    ColWidths = (
      64
      89
      108
      126
      135
      121
      64
      91)
  end
  object Historia: TStringGrid
    Left = 0
    Top = 404
    Width = 809
    Height = 96
    Align = alTop
    ColCount = 8
    RowCount = 2
    TabOrder = 3
    ColWidths = (
      64
      49
      51
      163
      162
      149
      107
      52)
  end
  object Edit1: TEdit
    Left = 8
    Top = 627
    Width = 121
    Height = 21
    TabOrder = 4
  end
  object Button1: TButton
    Left = 136
    Top = 625
    Width = 75
    Height = 25
    Caption = 'Buscar'
    TabOrder = 5
    OnClick = Button1Click
  end
  object Citas: TStringGrid
    Left = 0
    Top = 500
    Width = 809
    Height = 120
    Align = alTop
    ColCount = 4
    RowCount = 2
    TabOrder = 6
    ColWidths = (
      64
      101
      100
      536)
  end
end
