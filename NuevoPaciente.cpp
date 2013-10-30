//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "NuevoPaciente.h"
#include "ClasesP.h"
#include "Inicio.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegPac *RegPac;
//---------------------------------------------------------------------------
__fastcall TRegPac::TRegPac(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegPac::Button2Click(TObject *Sender)
{
MaskEdit1->Clear();
Edit1->Clear();
Edit2->Clear();
Memo1->Clear();
MaskEdit2->Clear();
}
//---------------------------------------------------------------------------

