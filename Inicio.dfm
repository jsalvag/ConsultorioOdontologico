object Form1: TForm1
  Left = 222
  Top = 192
  BorderStyle = bsToolWindow
  Caption = 'Consultorio Odontol'#243'gico  ABC'
  ClientHeight = 504
  ClientWidth = 466
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel2: TPanel
    Left = 0
    Top = 288
    Width = 466
    Height = 216
    Align = alBottom
    Ctl3D = True
    ParentCtl3D = False
    TabOrder = 1
    Visible = False
    object Label6: TLabel
      Left = 16
      Top = 16
      Width = 36
      Height = 13
      Caption = 'C'#233'dula '
    end
    object MaskEdit1: TMaskEdit
      Left = 56
      Top = 16
      Width = 73
      Height = 21
      EditMask = '00\.000\.000;0;_'
      MaxLength = 10
      TabOrder = 0
    end
    object GroupBox1: TGroupBox
      Left = 1
      Top = 48
      Width = 193
      Height = 167
      Caption = 'Datos del Paciente'
      TabOrder = 2
      object Label8: TLabel
        Left = 8
        Top = 24
        Width = 37
        Height = 13
        Caption = 'Nombre'
      end
      object Label10: TLabel
        Left = 8
        Top = 40
        Width = 37
        Height = 13
        Caption = 'Apellido'
      end
      object Label12: TLabel
        Left = 8
        Top = 56
        Width = 25
        Height = 13
        Caption = 'Edad'
      end
      object Label14: TLabel
        Left = 8
        Top = 72
        Width = 24
        Height = 13
        Caption = 'Sexo'
      end
      object Label15: TLabel
        Left = 8
        Top = 88
        Width = 42
        Height = 13
        Caption = 'Telefono'
      end
      object Label16: TLabel
        Left = 8
        Top = 104
        Width = 45
        Height = 13
        Caption = 'Direccion'
      end
      object Label17: TLabel
        Left = 64
        Top = 24
        Width = 46
        Height = 13
        Caption = 'Label17'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label18: TLabel
        Left = 64
        Top = 40
        Width = 46
        Height = 13
        Caption = 'Label18'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label19: TLabel
        Left = 64
        Top = 56
        Width = 46
        Height = 13
        Caption = 'Label19'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label20: TLabel
        Left = 64
        Top = 72
        Width = 46
        Height = 13
        Caption = 'Label20'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label21: TLabel
        Left = 64
        Top = 88
        Width = 46
        Height = 13
        Caption = 'Label21'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Memo2: TMemo
        Left = 64
        Top = 104
        Width = 121
        Height = 49
        BorderStyle = bsNone
        TabOrder = 0
      end
    end
    object Button2: TButton
      Left = 136
      Top = 16
      Width = 73
      Height = 25
      Caption = 'Buscar'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      OnClick = Button2Click
    end
    object ListBox1: TListBox
      Left = 216
      Top = 48
      Width = 241
      Height = 161
      ItemHeight = 13
      TabOrder = 3
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 466
    Height = 289
    Align = alTop
    BiDiMode = bdLeftToRight
    Ctl3D = True
    ParentBiDiMode = False
    ParentCtl3D = False
    TabOrder = 0
    Visible = False
    object Label1: TLabel
      Left = 1
      Top = 1
      Width = 464
      Height = 20
      Align = alTop
      Alignment = taCenter
      Caption = 'Agregar Cita'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 16
      Top = 32
      Width = 108
      Height = 13
      Caption = 'Selecciones paciente: '
    end
    object Label3: TLabel
      Left = 16
      Top = 128
      Width = 83
      Height = 13
      Caption = 'Fecha de la Cita: '
    end
    object Label4: TLabel
      Left = 16
      Top = 160
      Width = 35
      Height = 13
      Caption = 'Motivo:'
    end
    object Label5: TLabel
      Left = 16
      Top = 64
      Width = 39
      Height = 13
      Caption = 'C'#233'dula: '
    end
    object ci: TLabel
      Left = 56
      Top = 64
      Width = 48
      Height = 13
      Caption = '________'
    end
    object Label7: TLabel
      Left = 112
      Top = 64
      Width = 31
      Height = 13
      Caption = 'Edad: '
    end
    object ed: TLabel
      Left = 144
      Top = 64
      Width = 18
      Height = 13
      Caption = '___'
    end
    object Label9: TLabel
      Left = 176
      Top = 64
      Width = 27
      Height = 13
      Caption = 'Sexo:'
    end
    object sex: TLabel
      Left = 208
      Top = 64
      Width = 48
      Height = 13
      Caption = '________'
    end
    object Label11: TLabel
      Left = 264
      Top = 64
      Width = 48
      Height = 13
      Caption = 'Tel'#233'fono: '
    end
    object tlf: TLabel
      Left = 312
      Top = 64
      Width = 66
      Height = 13
      Caption = '___________'
    end
    object Label13: TLabel
      Left = 16
      Top = 96
      Width = 51
      Height = 13
      Caption = 'Direcci'#243'n: '
    end
    object dir: TLabel
      Left = 72
      Top = 96
      Width = 186
      Height = 13
      Caption = '_______________________________'
    end
    object Button1: TButton
      Left = 192
      Top = 248
      Width = 75
      Height = 25
      Caption = 'Guardar'
      TabOrder = 0
      OnClick = Button1Click
    end
    object MonthCalendar1: TMonthCalendar
      Left = 280
      Top = 120
      Width = 169
      Height = 153
      CalColors.TextColor = clHighlight
      CalColors.TitleBackColor = clHighlight
      CalColors.TitleTextColor = cl3DLight
      CalColors.MonthBackColor = clInactiveBorder
      CalColors.TrailingTextColor = clBtnShadow
      Date = 41577.8062463773
      TabOrder = 1
      OnClick = MonthCalendar1Click
    end
    object ComboBox1: TComboBox
      Left = 128
      Top = 32
      Width = 321
      Height = 21
      ItemHeight = 13
      TabOrder = 2
      Text = 'Pacientes...'
      OnChange = ComboBox1Change
    end
    object Edit1: TEdit
      Left = 128
      Top = 120
      Width = 137
      Height = 21
      TabOrder = 3
    end
    object Memo1: TMemo
      Left = 128
      Top = 160
      Width = 137
      Height = 57
      Lines.Strings = (
        '')
      TabOrder = 4
    end
  end
  object MainMenu1: TMainMenu
    Left = 8
    object Archivo1: TMenuItem
      Caption = 'Archivo'
      object Salir1: TMenuItem
        Caption = 'Salir'
        OnClick = Salir1Click
      end
    end
    object Pcientes1: TMenuItem
      Caption = 'Pcientes'
      object Ingresar1: TMenuItem
        Caption = 'Ingresar'
        OnClick = Ingresar1Click
      end
      object Lista1: TMenuItem
        Caption = 'Lista'
        OnClick = Lista1Click
      end
    end
    object Citas1: TMenuItem
      Caption = 'Citas'
      object Ingresar2: TMenuItem
        Caption = 'Ingresar'
        OnClick = Ingresar2Click
      end
      object Buscar1: TMenuItem
        Caption = 'Buscar'
        OnClick = Buscar1Click
      end
    end
    object Reportes1: TMenuItem
      Caption = 'Reportes'
      object Citasdelda1: TMenuItem
        Caption = 'Citas del d'#237'a'
        OnClick = Citasdelda1Click
      end
      object Buscarcitas1: TMenuItem
        Caption = 'Buscar citas'
        OnClick = Buscarcitas1Click
      end
      object Citaspormes1: TMenuItem
        Caption = 'Citas por mes'
        OnClick = Citaspormes1Click
      end
      object Citasporedad1: TMenuItem
        Caption = 'Citas por edad'
      end
    end
    object Estadisticas1: TMenuItem
      Caption = 'Estadisticas'
      object Promedioanual1: TMenuItem
        Caption = 'Promedio anual'
      end
      object Promediosemanal1: TMenuItem
        Caption = 'Promedio semanal'
      end
    end
  end
end
