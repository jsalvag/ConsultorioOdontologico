//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "NuevoPaciente.h"
#include "ClasesP.h"
#include "Inicio.h"
#include "ListaPacientes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegPac *RegPac;
Paciente nuevo;
bool sexo;
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

void __fastcall TRegPac::Button1Click(TObject *Sender)
{
  if(MaskEdit1->Text.IsEmpty()||Edit1->Text.IsEmpty()||Edit2->Text.IsEmpty()||Memo1->Text.IsEmpty()||MaskEdit2->Text.IsEmpty()){
    ShowMessage("LLene todos los campos...");
  }else{
    if (fechNac->Date>Date().CurrentDate()-364.25)
    {
      ShowMessage("La fecha de nacimiento no puede ser menor a 1 año");
    }else{
      if(Masc->Checked){
        sexo=true;
      }else{
        sexo=false;
      }
      nuevo.ingresar(MaskEdit1->Text, Edit1->Text, Edit2->Text, sexo, Memo1->Text, MaskEdit2->Text, fechNac->Date.DateString());

      this->Close();
      Button2Click(Sender);
    }
  }
}
//---------------------------------------------------------------------------


void __fastcall TRegPac::FormCreate(TObject *Sender)
{
        fechNac->Date=Date()-366;        
}
//---------------------------------------------------------------------------