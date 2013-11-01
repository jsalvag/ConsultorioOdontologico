//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Inicio.cpp", Form1);
USEFORM("NuevoPaciente.cpp", RegPac);
USEFORM("ListaPacientes.cpp", ListPac);
USEFORM("ReportesF.cpp", Reportes);
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
