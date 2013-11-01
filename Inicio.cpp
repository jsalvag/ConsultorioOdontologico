//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Inicio.h"
#include "ClasesP.h"
#include "NuevoPaciente.h"
#include "ListaPacientes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Paciente pac;
Cita ct;
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

void __fastcall TForm1::Lista1Click(TObject *Sender)
{
ListPac->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Ingresar2Click(TObject *Sender)
{
  Panel2->Hide();
  Panel1->Show();
  pac.listarPac();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  ct.ingresar(ci->Caption, Memo1->Text);
  Panel1->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MonthCalendar1Click(TObject *Sender)
{
  Edit1->Text=MonthCalendar1->Date;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
  pac.buscarPac(ComboBox1->ItemIndex+1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Buscar1Click(TObject *Sender)
{
  Panel1->Hide();
  Panel2->Show();
  Label17->Caption="";
  Label18->Caption="";
  Label19->Caption="";
  Label20->Caption="";
  Label21->Caption="";
  Memo2->Clear();
  ListBox1->Clear();
  MaskEdit1->Clear();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button2Click(TObject *Sender)
{
  ct.buscarCita(MaskEdit1->Text);
}
//---------------------------------------------------------------------------


