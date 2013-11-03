object RegPac: TRegPac
  Left = 198
  Top = 131
  BorderStyle = bsSingle
  Caption = 'Ingresar Paciente'
  ClientHeight = 276
  ClientWidth = 218
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 16
    Top = 48
    Width = 43
    Height = 13
    Caption = 'Nombre: '
  end
  object Label1: TLabel
    Left = 16
    Top = 24
    Width = 39
    Height = 13
    Caption = 'C'#233'dula: '
  end
  object Label3: TLabel
    Left = 16
    Top = 72
    Width = 43
    Height = 13
    Caption = 'Apellido: '
  end
  object Label4: TLabel
    Left = 16
    Top = 176
    Width = 51
    Height = 13
    Caption = 'Direcci'#243'n: '
  end
  object Label5: TLabel
    Left = 16
    Top = 216
    Width = 48
    Height = 13
    Caption = 'Tel'#233'fono: '
  end
  object Label6: TLabel
    Left = 16
    Top = 96
    Width = 27
    Height = 13
    Caption = 'Sexo:'
  end
  object Label7: TLabel
    Left = 16
    Top = 136
    Width = 53
    Height = 13
    Caption = 'F. de Nac: '
  end
  object Edit1: TEdit
    Left = 80
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 80
    Top = 64
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object RadioGroup1: TRadioGroup
    Left = 80
    Top = 88
    Width = 121
    Height = 33
    TabOrder = 3
  end
  object Masc: TRadioButton
    Left = 96
    Top = 96
    Width = 33
    Height = 17
    Caption = 'M'
    Checked = True
    TabOrder = 4
    TabStop = True
  end
  object Fem: TRadioButton
    Left = 152
    Top = 96
    Width = 33
    Height = 17
    Caption = 'F'
    TabOrder = 5
  end
  object Memo1: TMemo
    Left = 80
    Top = 160
    Width = 121
    Height = 41
    Lines.Strings = (
      '')
    TabOrder = 7
  end
  object MaskEdit2: TMaskEdit
    Left = 80
    Top = 208
    Width = 107
    Height = 21
    EditMask = '!\(9999\)000-0000;0;_'
    MaxLength = 14
    TabOrder = 8
  end
  object Button1: TButton
    Left = 128
    Top = 240
    Width = 75
    Height = 25
    Caption = 'Guardar'
    TabOrder = 9
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 16
    Top = 240
    Width = 75
    Height = 25
    Caption = 'Limpiar'
    TabOrder = 10
    OnClick = Button2Click
  end
  object fechNac: TDateTimePicker
    Left = 80
    Top = 128
    Width = 121
    Height = 21
    CalAlignment = dtaLeft
    Date = 41577.7552488889
    Time = 41577.7552488889
    DateFormat = dfShort
    DateMode = dmComboBox
    Kind = dtkDate
    ParseInput = False
    TabOrder = 6
  end
  object MaskEdit1: TEdit
    Left = 80
    Top = 16
    Width = 121
    Height = 21
    TabOrder = 0
  end
end
