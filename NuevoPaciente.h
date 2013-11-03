//---------------------------------------------------------------------------

#ifndef NuevoPacienteH
#define NuevoPacienteH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TRegPac : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label2;
        TLabel *Label1;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TEdit *Edit1;
        TEdit *Edit2;
        TLabel *Label6;
        TRadioGroup *RadioGroup1;
        TRadioButton *Masc;
        TRadioButton *Fem;
        TMemo *Memo1;
        TMaskEdit *MaskEdit2;
        TButton *Button1;
        TButton *Button2;
        TLabel *Label7;
        TDateTimePicker *fechNac;
        TEdit *MaskEdit1;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TRegPac(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegPac *RegPac;
//---------------------------------------------------------------------------
#endif
