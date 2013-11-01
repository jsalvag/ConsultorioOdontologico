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
    int getX();

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
    String citasDia(int f);
    String datosCita(String ci, int i, int );
};
//---------------------------------------------------------------------------
#endif
