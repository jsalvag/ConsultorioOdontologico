//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BuscarCitasAnio.h"
#include "ClasesP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
Estadistica es;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
  String a = Edit1->Date;
  a=a.SubString(7,4);
  es.citasAnio(a);

}
//---------------------------------------------------------------------------
