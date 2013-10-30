//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Inicio.h"
#include "ClasesP.h"
#include "NuevoPaciente.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Salir1Click(TObject *Sender)
{
this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Ingresar1Click(TObject *Sender)
{
RegPac->Show();
}
//---------------------------------------------------------------------------

