//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BuscarCitasDia.h"
#include "ClasesP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
Cita ct;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
  ct.citasDia(DateTimePicker1->Date);
  Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCreate(TObject *Sender)
{
DateTimePicker1->Date.CurrentDate();
}
//---------------------------------------------------------------------------
