//---------------------------------------------------------------------------

#ifndef ReportesFH
#define ReportesFH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TReportes : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TListBox *ListBox1;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TReportes(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TReportes *Reportes;
//---------------------------------------------------------------------------
#endif
