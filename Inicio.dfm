object Form1: TForm1
  Left = 312
  Top = 214
  Width = 979
  Height = 563
  Caption = 'Consultorio Odontol'#243'gico  ABC'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object MainMenu1: TMainMenu
    Left = 8
    Top = 8
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
      end
    end
    object Citas1: TMenuItem
      Caption = 'Citas'
      object Ingresar2: TMenuItem
        Caption = 'Ingresar'
      end
      object Buscar1: TMenuItem
        Caption = 'Buscar'
      end
    end
    object Reportes1: TMenuItem
      Caption = 'Reportes'
      object Citasdelda1: TMenuItem
        Caption = 'Citas del d'#237'a'
      end
      object Buscarcitas1: TMenuItem
        Caption = 'Buscar citas'
      end
      object Citaspormes1: TMenuItem
        Caption = 'Citas por mes'
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
