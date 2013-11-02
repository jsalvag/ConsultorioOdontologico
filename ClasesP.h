//---------------------------------------------------------------------------

#ifndef ClasesPH
#define ClasesPH
class Paciente{
  public:
    int x;

    Paciente();
    void ingresar(String ci, String nom, String ape, bool sex, String dir, String telf, TDateTime fNac);
    void listarPac();
    void buscarPac(int index);
    void buscarCI(String ci);
    int edad(int fNac);
    String contadorPorMes();

  private:
    String auxNom, auxApe, auxInd;
};

class Cita{
  public:
    int y;
    Paciente p;

    Cita();
    void ingresar(String ci, String mot);
    void buscarCita(String ci);
    void citasDia(int f);
    String datosCita(String ci, int i, int );
};

class Reporte{


public:
        int z;
        void organizarMes(String f);
        void ingresarListMes(String ci, String nom, String ape);
        Reporte();

private:
        Paciente p;
        Cita c;
};
//---------------------------------------------------------------------------
#endif
