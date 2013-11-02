object ListPac: TListPac
  Left = 587
  Top = 120
  BorderStyle = bsDialog
  Caption = 'Lista de Pacientes'
  ClientHeight = 517
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
  object listPac: TStringGrid
    Left = 0
    Top = 0
    Width = 756
    Height = 161
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
    Top = 161
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
  object listMes: TStringGrid
    Left = 0
    Top = 321
    Width = 756
    Height = 144
    Align = alTop
    RowCount = 2
    TabOrder = 3
    ColWidths = (
      64
      97
      98
      105
      96)
  end
end
