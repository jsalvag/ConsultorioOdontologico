//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BuscarCitasMes.h"
#include "BuscarCitasDia.h"
#include "ClasesP.h"
#include "Inicio.h"
#include "ListaPacientes.h"
#include "NuevoPaciente.h"
#include "ReportesF.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
Reporte r;
Paciente pac;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ComboBox1Change(TObject *Sender)
{
  String mes=r.numMes(this->ComboBox1->ItemIndex);
  r.organizarMes(mes);

  String mj=pac.contadorPorMes(mes);

  ShowMessage(mj);
}
//---------------------------------------------------------------------------
