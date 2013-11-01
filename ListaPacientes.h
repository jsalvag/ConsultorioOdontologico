//---------------------------------------------------------------------------

#ifndef ListaPacientesH
#define ListaPacientesH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TListPac : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *listPac;
        TButton *Button1;
        TStringGrid *listCitas;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button2;
        TLabel *Label3;
        TLabel *Label4;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TListPac(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TListPac *ListPac;
//---------------------------------------------------------------------------
#endif
