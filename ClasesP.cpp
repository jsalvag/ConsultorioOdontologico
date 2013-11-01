//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ClasesP.h"
#include "Inicio.h"
#include "NuevoPaciente.h"
#include "ListaPacientes.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

//----------------------------------------------------------------------------
//------------------------Paciente--------------------------------------------
//----------------------------------------------------------------------------

Paciente::Paciente(){
  x=0;
}

int Paciente::getX(){
  return x;
}


void Paciente::ingresar(String ci, String nom, String ape, bool sex, String dir, String telf, TDateTime fNac){
  x++;
  String sexo;
  if(sex){
    sexo="Masculino";
  }else{
    sexo="Femenino";
  }
  if(ListPac->listPac->RowCount <= x)
    ListPac->listPac->RowCount++;
  ListPac->listPac->Cells[0][x]=x;
  ListPac->listPac->Cells[1][x]=ci;
  ListPac->listPac->Cells[2][x]=nom;
  ListPac->listPac->Cells[3][x]=ape;
  ListPac->listPac->Cells[4][x]=sexo;
  ListPac->listPac->Cells[5][x]=dir;
  ListPac->listPac->Cells[6][x]=telf;
  ListPac->listPac->Cells[7][x]=fNac;
}

void Paciente::listarPac(){
  int i = 1;

  Form1->ComboBox1->Clear();

  while(ListPac->listPac->Cells[0][i]!=""){

    auxInd = ListPac->listPac->Cells[0][i];
    auxNom = ListPac->listPac->Cells[2][i];
    auxApe = ListPac->listPac->Cells[3][i];

    String datos = auxInd+"-"+auxApe+", "+auxNom+"";

    Form1->ComboBox1->Items->Add(datos);

    i++;
  }
  //ShowMessage(IntToStr(i-1)+" Pacientes");
}

void Paciente::buscarPac(int index){


  Form1->ci->Caption = ListPac->listPac->Cells[1][index];
  Form1->sex->Caption = ListPac->listPac->Cells[4][index];
  Form1->tlf->Caption = ListPac->listPac->Cells[6][index];
  Form1->dir->Caption = ListPac->listPac->Cells[5][index];

  TDateTime fn = ListPac->listPac->Cells[7][index];

  Form1->ed->Caption = edad(fn);
}

void Paciente::buscarCI(String ci){
  int i=1;
  while(i<=x){
    if(ListPac->listCitas->Cells[1][i]==ci){

    }
  }
}

int Paciente::edad(int fNac){
  int f = Date().CurrentDate();
  return (f-fNac)/365.25 ;
}

//----------------------------------------------------------------------------
//-------------------------------------------Cita-----------------------------
//----------------------------------------------------------------------------

Cita::Cita(){
  y=0;
}

int Cita::getY(){
  return y;
}

void Cita::ingresar(String ci, String mot){
  y++;

  if(ListPac->listCitas->RowCount <= y)
    ListPac->listCitas->RowCount++;

  ListPac->listCitas->Cells[0][y] =y;
  ListPac->listCitas->Cells[1][y] =Form1->ci->Caption;
  ListPac->listCitas->Cells[2][y] =Form1->Edit1->Text;
  ListPac->listCitas->Cells[3][y] =Form1->Memo1->Text;
}

void Cita::buscarCita(String ci){
  int i=0;
  int j=0;
  int c1=StrToInt(ci);
  int c2;
  bool v=false;

  Form1->ListBox1->Clear();
  Form1->Label17->Caption="";
  Form1->Label18->Caption="";
  Form1->Label19->Caption="";
  Form1->Label20->Caption="";
  Form1->Label21->Caption="";
  Form1->Memo2->Clear();
  Form1->ListBox1->Clear();
  Form1->MaskEdit1->Clear();

  while(j<ListPac->listPac->RowCount-1){
    j++;
    c2=StrToInt(ListPac->listPac->Cells[1][j]);
    if(ci==c2){
      Form1->Label17->Caption=ListPac->listPac->Cells[2][j];
      Form1->Label18->Caption=ListPac->listPac->Cells[3][j];
      Form1->Label19->Caption=p.edad(TDateTime(ListPac->listPac->Cells[7][j]));
      Form1->Label20->Caption=ListPac->listPac->Cells[4][j];
      Form1->Label21->Caption=ListPac->listPac->Cells[6][j];
      Form1->Memo2->Text=ListPac->listPac->Cells[5][j];
      v=true;
    }
  }
  if(v){
   while(i<y){
     i++;
     c2=StrToInt(ListPac->listCitas->Cells[1][i]);
     if(c1==c2){
       Form1->ListBox1->Items->Add((ListPac->listCitas->Cells[2][i])+" - "+(ListPac->listCitas->Cells[2][i]));
     }
   }
  }else{
    ShowMessage("La cedula: "+ci+" no pertenece a ningun paciente registrado");
  }
}

