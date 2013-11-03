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
Paciente p;
Cita c;


//---------------------------------------------------------------------------
__fastcall TListPac::TListPac(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TListPac::FormCreate(TObject *Sender)
{
listPac->Cells[0][0]="Pacientes";
listPac->Cells[1][0]="Cédula";
listPac->Cells[2][0]="Nombre";
listPac->Cells[3][0]="Apellido";
listPac->Cells[4][0]="Sexo";
listPac->Cells[5][0]="Dierección";
listPac->Cells[6][0]="Teléfono";
listPac->Cells[7][0]="F. Nac.";

listCitas->Cells[0][0]="Citas";
listCitas->Cells[1][0]="Cédula";
listCitas->Cells[2][0]="Fecha";
listCitas->Cells[3][0]="Motivo";

listMes->Cells[1][0]="Cédula";
listMes->Cells[2][0]="Nombre";
listMes->Cells[3][0]="Apellido";

}
//---------------------------------------------------------------------------
void __fastcall TListPac::Button1Click(TObject *Sender)
{
this->Close();
}
//---------------------------------------------------------------------------
