//---------------------------------------------------------------------------

#ifndef InicioH
#define InicioH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Archivo1;
        TMenuItem *Salir1;
        TMenuItem *Pcientes1;
        TMenuItem *Ingresar1;
        TMenuItem *Lista1;
        TMenuItem *Citas1;
        TMenuItem *Ingresar2;
        TMenuItem *Buscar1;
        TMenuItem *Reportes1;
        TMenuItem *Citasdelda1;
        TMenuItem *Buscarcitas1;
        TMenuItem *Citaspormes1;
        TMenuItem *Citasporedad1;
        TMenuItem *Estadisticas1;
        TMenuItem *Promedioanual1;
        TMenuItem *Promediosemanal1;
        TPanel *Panel1;
        TButton *Button1;
        TLabel *Label1;
        TMonthCalendar *MonthCalendar1;
        TLabel *Label2;
        TComboBox *ComboBox1;
        TLabel *Label3;
        TEdit *Edit1;
        TLabel *Label4;
        TMemo *Memo1;
        TLabel *Label5;
        TLabel *ci;
        TLabel *Label7;
        TLabel *ed;
        TLabel *Label9;
        TLabel *sex;
        TLabel *Label11;
        TLabel *tlf;
        TLabel *Label13;
        TLabel *dir;
        TPanel *Panel2;
        TLabel *Label6;
        TGroupBox *GroupBox1;
        TLabel *Label8;
        TButton *Button2;
        TLabel *Label10;
        TLabel *Label12;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TMemo *Memo2;
        TListBox *ListBox1;
        TEdit *MaskEdit1;
        void __fastcall Salir1Click(TObject *Sender);
        void __fastcall Ingresar1Click(TObject *Sender);
        void __fastcall Lista1Click(TObject *Sender);
        void __fastcall Ingresar2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall MonthCalendar1Click(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall Buscar1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Citasdelda1Click(TObject *Sender);
        void __fastcall Buscarcitas1Click(TObject *Sender);
        void __fastcall Citaspormes1Click(TObject *Sender);
        void __fastcall Citasporedad1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
