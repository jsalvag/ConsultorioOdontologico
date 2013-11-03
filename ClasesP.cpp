//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ClasesP.h"
#include "Inicio.h"
#include "NuevoPaciente.h"
#include "ListaPacientes.h"
#include "ReportesF.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

//----------------------------------------------------------------------------
//------------------------Paciente--------------------------------------------
//----------------------------------------------------------------------------

Paciente::Paciente(){
  x=0;
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

String Paciente::datosCita(int i, int j){
    return ListPac->listPac->Cells[i][j];
}


String Paciente::contadorPorMes(String mes)
{
  int i=1, j, may=0, cant=0;
  String ci, ci1, ci2, ci3="", nom;
  
  int a=ListPac->listPac->RowCount;
  int b=ListPac->listMes->RowCount;

  while(i<b){
    ci1=ListPac->listMes->Cells[1][i];
    if(ci1!=ci3){
      ci3=ci1;
      j=1;
      cant=0;
      while(j<b){
        ci2=ListPac->listMes->Cells[1][j];
        if(ci1==ci2){
          cant++;

        }
        j++;
      }
    }
    if(cant>may){
      may=cant;
      ci=ci3;
    }
    i++;
  }

  nom=datosPac(ci);

  String datos = "La persona con mas citas para el mes "+mes+" es: "+
        "\n  C.I.:\t\t"+ci+
        "\n  Nombre:\t"+nom+
        "\nCon #"+may+" citas";

  if(ci==""){
    return "No hay Registros para el mes "+mes;
  }else{
    return datos;
  }
}

//----------------------------------------------------------------------------
//-------------------------------------------Cita-----------------------------
//----------------------------------------------------------------------------

Cita::Cita(){
  y=0;
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
  String c1=ci;
  String c2;
  bool v=false;

  Form1->ListBox1->Clear();
  Form1->Memo2->Clear();
  Form1->MaskEdit1->Clear();

  while(j<ListPac->listPac->RowCount-1){
    j++;
    c2=ListPac->listPac->Cells[1][j];
    if(ci==c2){
      Form1->Label17->Caption=datosCita(ci,2,j);
      Form1->Label18->Caption=datosCita(ci,3,j);
      Form1->Label19->Caption=p.edad(TDateTime(datosCita(ci,7,j)));
      Form1->Label20->Caption=datosCita(ci,4,j);
      Form1->Label21->Caption=datosCita(ci,6,j);
      Form1->Memo2->Text=datosCita(ci,5,j);
      v=true;
    }
  }
  if(v){
   while(i<y){
     i++;
     c2=StrToInt(ListPac->listCitas->Cells[1][i]);
     if(c1==c2){
       Form1->ListBox1->Items->Add((ListPac->listCitas->Cells[2][i])+" - "+(ListPac->listCitas->Cells[3][i]));
     }
   }
  }else{
    ShowMessage("La cedula: "+ci+" no pertenece a ningun paciente registrado");
  }
}

void Cita::citasDia(int f){
  int i=1;
  int a=ListPac->listCitas->RowCount;
  int b=ListPac->listPac->RowCount;
  String ci;
  Reportes->Show();
  
  while(i<a){
    if(ListPac->listCitas->Cells[2][i]!=""){
    if(f==TDateTime(ListPac->listCitas->Cells[2][i])){
      ci=ListPac->listCitas->Cells[1][i];
      int j=1;
      while(j<b){
        if(ci==ListPac->listPac->Cells[1][j]){
          Reportes->ListBox1->Items->Add(
            IntToStr(i)+" - "+ci+" - "+datosCita(ci,3,j)+", "+datosCita(ci,2,j)
          );
        }else{
        }
        j++;
      }//fin while 2

    }else{
    }

    }else{
        ShowMessage("No hay citas");
    }
    i++;
  }//fin while 1

}

String Cita::datosCita(String ci, int i, int j){
    return ListPac->listPac->Cells[i][j];
}

//----------------------------------------------------------------------------
//-------------------------------------------Cita-----------------------------
//----------------------------------------------------------------------------
Reporte::Reporte(){
  z=0;
}

void Reporte::organizarMes(String mes){
  String fc;
  String ciC, ciP, nom, ape;
  int a=ListPac->listCitas->RowCount;
  int b=ListPac->listPac->RowCount;
  int j, i=1;
  int n=-1;
  
  limpiarM();

  while(i<a){
    fc=ListPac->listCitas->Cells[2][i];
    fc=fc.SubString(4,2);
    if(fc==mes){
      ciC=ListPac->listCitas->Cells[1][i];
      j=1;
      while(j<b){
        ciP=ListPac->listPac->Cells[1][j];
        if(ciP==ciC){
          nom=ListPac->listPac->Cells[2][j];
          ape=ListPac->listPac->Cells[3][j];
          n++;
          ingresarListMes(ciC, nom, ape, n);
        } 
        j++;
      }
    }
    i++;
  }
}

void Reporte::ingresarListMes(String ci, String nom, String ape, int n){
  z++;
  n++;
  if(ListPac->listMes->RowCount<=n)
    ListPac->listMes->RowCount++;

  ListPac->listMes->Cells[0][n]=n;
  ListPac->listMes->Cells[1][n]=ci;
  ListPac->listMes->Cells[2][n]=nom;
  ListPac->listMes->Cells[3][n]=ape;

}



String Paciente::datosPac(String ci){
  int i=1;
  String dato="";

  while(i<ListPac->listPac->RowCount){

    if(ci==ListPac->listPac->Cells[1][i]){
      dato = ListPac->listPac->Cells[3][i]+", "+ListPac->listPac->Cells[2][i];
    }
    i++;
  }
  return dato;
}

void Reporte::limpiarM()
{
        ListPac->listMes->RowCount=1;
        int a=ListPac->listMes->RowCount-1;
        int b=ListPac->listMes->ColCount-1;
        for(int i=1;i<a;i++){
                for(int j=1;j<b;j++){
                        ListPac->listMes->Rows[b][a].Clear();
                }
        }

}

String Reporte::numMes(int i)
{
        switch(i){
          case 0: return "01";break;
          case 1: return "02";break;
          case 2: return "03";break;
          case 3: return "04";break;
          case 4: return "05";break;
          case 5: return "06";break;
          case 6: return "07";break;
          case 7: return "08";break;
          case 8: return "09";break;
          case 9: return "10";break;
          case 10: return "11";break;
          case 11: return "12";break;
        }
}

String Reporte::datosPac(String ci){
  int i=1;
  String dato="";

  while(i<ListPac->listPac->RowCount){

    if(ci==ListPac->listPac->Cells[1][i]){
      dato = ListPac->listPac->Cells[3][i]+", "+ListPac->listPac->Cells[2][i];
    }
    i++;
  }
  return dato;
}

int Reporte::edad(int fNac){
  int f = Date().CurrentDate();
  return (f-fNac)/364.25 ;
}

String Reporte::mayorEdad(){
  int may=0, cont, i=1, j, e, cit=0;
  String ci, ci1, ci2, nom, dato;
  int a= ListPac->listPac->RowCount;
  int b= ListPac->listCitas->RowCount;
  if(ListPac->listPac->Cells[1][1]!=""){
    while(i<a){
      ci1 = ListPac->listPac->Cells[1][i];
      e = edad(TDateTime(ListPac->listPac->Cells[7][i]));
      j=1;
      cont=0;
      while(j<b){
        ci2 = ListPac->listCitas->Cells[1][j];
        if(ci2==ci1){
          cont++;
        }
        j++;
      }
      if(e>=may&&cont>cit){
        ci=ci1;
        nom=datosPac(ci);
        may=e;
        cit=cont;
      }
    i++;
    }
    dato = "La persona de mayor edad con mayor cantidad de citas es:\n  C.I.:\t\t"
          +ci+"\n  Nombre:\t"+nom+"\n  Edad:\t\t"+may+"\nCon un total de "+cit+" citas.";
  }else{
    dato = "No hay datos...";
  }
  return dato;
}