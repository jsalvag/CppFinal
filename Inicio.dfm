object Form1: TForm1
  Left = 446
  Top = 131
  Width = 415
  Height = 563
  Caption = 'Fundaci'#243'n "Esperanza de Luz" Centro Geri'#225'trico'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = Menu1
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 399
    Height = 249
    Align = alTop
    BiDiMode = bdLeftToRight
    BorderStyle = bsSingle
    ParentBiDiMode = False
    TabOrder = 0
    Visible = False
    object Label1: TLabel
      Left = 1
      Top = 1
      Width = 393
      Height = 24
      Align = alTop
      Alignment = taCenter
      Caption = 'Citas'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      Layout = tlCenter
    end
    object Panel2: TPanel
      Left = 1
      Top = 25
      Width = 393
      Height = 24
      Align = alTop
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 0
      object Label2: TLabel
        Left = 1
        Top = 1
        Width = 55
        Height = 22
        Align = alLeft
        Caption = 'Paciente:'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label3: TLabel
        Left = 303
        Top = 1
        Width = 53
        Height = 22
        Align = alRight
        BiDiMode = bdLeftToRight
        Caption = 'N'#186' Cita:  '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentBiDiMode = False
        ParentFont = False
      end
      object nCita_lb: TLabel
        Left = 356
        Top = 1
        Width = 36
        Height = 22
        Align = alRight
        Alignment = taCenter
        BiDiMode = bdLeftToRight
        Caption = '00000'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentBiDiMode = False
        ParentFont = False
      end
      object ComboBox1: TComboBox
        Left = 61
        Top = 1
        Width = 175
        Height = 21
        ItemHeight = 13
        TabOrder = 0
        OnChange = ComboBox1Change
      end
    end
    object Panel3: TPanel
      Left = 1
      Top = 49
      Width = 224
      Height = 195
      Align = alLeft
      TabOrder = 1
      object Label4: TLabel
        Left = 9
        Top = 8
        Width = 48
        Height = 13
        Caption = 'Nombre:'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object nom_lb: TLabel
        Left = 64
        Top = 8
        Width = 34
        Height = 13
        Caption = 'nom_lb'
      end
      object Label5: TLabel
        Left = 14
        Top = 28
        Width = 43
        Height = 13
        Caption = 'Motivo:'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label6: TLabel
        Left = 16
        Top = 48
        Width = 40
        Height = 13
        Caption = 'Fecha:'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Edit1: TEdit
        Left = 64
        Top = 28
        Width = 153
        Height = 21
        TabOrder = 0
      end
      object DateTimePicker1: TDateTimePicker
        Left = 64
        Top = 48
        Width = 153
        Height = 21
        CalAlignment = dtaLeft
        Date = 41608.7731055324
        Time = 41608.7731055324
        DateFormat = dfShort
        DateMode = dmComboBox
        Kind = dtkDate
        ParseInput = False
        TabOrder = 1
      end
      object Button1: TButton
        Left = 72
        Top = 136
        Width = 75
        Height = 25
        Caption = 'Guardar'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 72
        Top = 168
        Width = 75
        Height = 25
        Caption = 'Cerrar'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 3
        OnClick = Button2Click
      end
    end
    object GroupBox1: TGroupBox
      Left = 225
      Top = 49
      Width = 169
      Height = 195
      Align = alClient
      Caption = 'Lista de Citas'
      TabOrder = 2
      object ListBox1: TListBox
        Left = 2
        Top = 15
        Width = 165
        Height = 178
        Align = alClient
        ItemHeight = 13
        TabOrder = 0
      end
    end
  end
  object Panel4: TPanel
    Left = 0
    Top = 249
    Width = 399
    Height = 56
    Align = alTop
    TabOrder = 1
    Visible = False
    object Label7: TLabel
      Left = 1
      Top = 1
      Width = 55
      Height = 54
      Align = alLeft
      Caption = 'Paciente:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      Layout = tlCenter
    end
    object Button3: TButton
      Left = 272
      Top = 16
      Width = 75
      Height = 25
      Caption = 'Ver'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      OnClick = Button3Click
    end
    object ComboBox2: TComboBox
      Left = 80
      Top = 16
      Width = 145
      Height = 21
      ItemHeight = 13
      TabOrder = 1
    end
  end
  object Menu1: TMainMenu
    Left = 2
    Top = 474
    object Archivo1: TMenuItem
      Caption = 'Archivo'
      object Salir1: TMenuItem
        Caption = 'Salir'
        OnClick = Salir1Click
      end
    end
    object Registro1: TMenuItem
      Caption = 'Registro'
      object Paciente1: TMenuItem
        Caption = 'Paciente'
        object Nuevo1: TMenuItem
          Caption = 'Nuevo'
          OnClick = Nuevo1Click
        end
        object Buscar1: TMenuItem
          Caption = 'Buscar'
          OnClick = Buscar1Click
        end
        object Modificar1: TMenuItem
          Caption = 'Modificar'
          OnClick = Modificar1Click
        end
      end
      object Reprecentante1: TMenuItem
        Caption = 'Representante'
        object Registrar1: TMenuItem
          Caption = 'Registrar'
          OnClick = Registrar1Click
        end
        object Buscar2: TMenuItem
          Caption = 'Buscar'
          OnClick = Buscar2Click
        end
        object Modificar2: TMenuItem
          Caption = 'Modificar'
          OnClick = Modificar2Click
        end
      end
      object Empleado1: TMenuItem
        Caption = 'Empleado'
        object Registrar2: TMenuItem
          Caption = 'Registrar'
          OnClick = Registrar2Click
        end
        object Buscar3: TMenuItem
          Caption = 'Buscar'
          OnClick = Buscar3Click
        end
        object Modificar3: TMenuItem
          Caption = 'Modificar'
          OnClick = Modificar3Click
        end
      end
    end
    object Historia1: TMenuItem
      Caption = 'Historia'
      OnClick = Historia1Click
    end
    object Citas1: TMenuItem
      Caption = 'Citas'
      OnClick = Citas1Click
    end
    object Reportes1: TMenuItem
      Caption = 'Reportes'
      object Pacientes1: TMenuItem
        Caption = 'Pacientes'
        object ListadePacientes1: TMenuItem
          Caption = 'Lista de Pacientes'
          OnClick = ListadePacientes1Click
        end
        object ImprimirArchivodePaciente1: TMenuItem
          Caption = 'Archivo de Paciente'
          OnClick = ImprimirArchivodePaciente1Click
        end
      end
      object Empleado2: TMenuItem
        Caption = 'Empleado'
        object ListadeEmpleados1: TMenuItem
          Caption = 'Lista de Empleados'
          OnClick = ListadeEmpleados1Click
        end
        object ImprimirArchivodeEmpleado1: TMenuItem
          Caption = 'Archivo de Empleado'
          OnClick = ImprimirArchivodeEmpleado1Click
        end
      end
    end
    object Datos1: TMenuItem
      Caption = 'Datos'
      OnClick = Datos1Click
    end
  end
end
