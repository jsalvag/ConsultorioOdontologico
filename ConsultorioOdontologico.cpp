//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Inicio.cpp", Form1);
USEFORM("NuevoPaciente.cpp", RegPac);
USEFORM("ListaPacientes.cpp", ListPac);
USEFORM("ReportesF.cpp", Reportes);
USEFORM("BuscarCitasDia.cpp", Form2);
USEFORM("BuscarCitasMes.cpp", Form3);
USEFORM("BuscarCitasAnio.cpp", Form4);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TRegPac), &RegPac);
                 Application->CreateForm(__classid(TListPac), &ListPac);
                 Application->CreateForm(__classid(TReportes), &Reportes);
                 Application->CreateForm(__classid(TForm2), &Form2);
                 Application->CreateForm(__classid(TForm3), &Form3);
                 Application->CreateForm(__classid(TForm4), &Form4);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
