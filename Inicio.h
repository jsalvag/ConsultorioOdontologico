//---------------------------------------------------------------------------

#ifndef InicioH
#define InicioH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Archivo1;
        TMenuItem *Salir1;
        TMenuItem *Pcientes1;
        TMenuItem *Ingresar1;
        TMenuItem *Lista1;
        TMenuItem *Citas1;
        TMenuItem *Ingresar2;
        TMenuItem *Buscar1;
        TMenuItem *Reportes1;
        TMenuItem *Citasdelda1;
        TMenuItem *Buscarcitas1;
        TMenuItem *Citaspormes1;
        TMenuItem *Citasporedad1;
        TMenuItem *Estadisticas1;
        TMenuItem *Promedioanual1;
        TMenuItem *Promediosemanal1;
        void __fastcall Salir1Click(TObject *Sender);
        void __fastcall Ingresar1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
