//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ReportesF.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TReportes *Reportes;
//---------------------------------------------------------------------------
__fastcall TReportes::TReportes(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TReportes::FormClose(TObject *Sender, TCloseAction &Action)
{
 ListBox1->Clear();        
}
//---------------------------------------------------------------------------

