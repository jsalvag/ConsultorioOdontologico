object ListPac: TListPac
  Left = 451
  Top = 98
  BorderStyle = bsDialog
  Caption = 'Lista de Pacientes'
  ClientHeight = 515
  ClientWidth = 756
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 128
    Top = 464
    Width = 13
    Height = 13
    Caption = 'X: '
  end
  object Label2: TLabel
    Left = 128
    Top = 480
    Width = 13
    Height = 13
    Caption = 'Y: '
  end
  object Label3: TLabel
    Left = 104
    Top = 464
    Width = 13
    Height = 13
    Caption = 'X: '
  end
  object Label4: TLabel
    Left = 104
    Top = 480
    Width = 13
    Height = 13
    Caption = 'Y: '
  end
  object listPac: TStringGrid
    Left = 0
    Top = 0
    Width = 756
    Height = 193
    Align = alTop
    ColCount = 8
    RowCount = 2
    TabOrder = 0
    ColWidths = (
      64
      72
      103
      107
      69
      157
      87
      84)
  end
  object Button1: TButton
    Left = 320
    Top = 488
    Width = 75
    Height = 25
    Caption = 'Cerrar lista'
    TabOrder = 1
    OnClick = Button1Click
  end
  object listCitas: TStringGrid
    Left = 0
    Top = 193
    Width = 756
    Height = 160
    Align = alTop
    ColCount = 4
    RowCount = 2
    TabOrder = 2
    ColWidths = (
      64
      64
      64
      556)
  end
  object Button2: TButton
    Left = 8
    Top = 472
    Width = 75
    Height = 25
    Caption = 'Ver X Y'
    TabOrder = 3
    OnClick = Button2Click
  end
end
