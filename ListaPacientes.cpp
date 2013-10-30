//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ListaPacientes.h"
#include "ClasesP.h"
#include "Inicio.h"
#include "NuevoPaciente.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TListPac *ListPac;
//---------------------------------------------------------------------------
__fastcall TListPac::TListPac(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
