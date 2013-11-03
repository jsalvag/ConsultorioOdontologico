//---------------------------------------------------------------------------

#include <vcl.h>
#include <string.h>
#include <stdio.h>
#pragma hdrstop

#include "Inicio.h"
#include "ClasesP.h"
#include "NuevoPaciente.h"
#include "ListaPacientes.h"
#include "ReportesF.h"
#include "BuscarCitasDia.h"
#include "BuscarCitasMes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Paciente pac;
Cita ct;
Reporte r;
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
  RegPac->Memo1->Clear();
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
  Memo1->Clear();
  pac.listarPac();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{

  if(ci->Caption=="________"){
    ShowMessage("Seleccione un Paciente");
  }else{
    if(Edit1->Text.IsEmpty()){
      ShowMessage("Seleccione una fecha para la cita");
    }else{
      if(TDateTime(Edit1->Text)<Date().CurrentDate()){
        ShowMessage("La fecha de la cita debe ser futura...");
      }else{
        ct.ingresar(ci->Caption, Memo1->Text);
        Panel1->Hide();
      }
    }
  }
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
  Memo1->Clear();
  Memo2->Clear();
  RegPac->Memo1->Clear();
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
  MaskEdit1->SetFocus();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button2Click(TObject *Sender)
{
  ct.buscarCita(MaskEdit1->Text);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Citasdelda1Click(TObject *Sender)
{
  ct.citasDia(Date().CurrentDate());
  Panel1->Hide();
  Panel2->Hide();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Buscarcitas1Click(TObject *Sender)
{
  Panel1->Hide();
  Panel2->Hide();

  Form2->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Citaspormes1Click(TObject *Sender)
{
  Form3->Show();
}
//---------------------------------------------------------------------------

