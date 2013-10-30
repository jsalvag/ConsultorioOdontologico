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
//---------------------------------------------------------------------------
class TRegPac : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label2;
        TLabel *Label1;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TMaskEdit *MaskEdit1;
        TEdit *Edit1;
        TEdit *Edit2;
        TLabel *Label6;
        TRadioGroup *RadioGroup1;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TMemo *Memo1;
        TMaskEdit *MaskEdit2;
        TButton *Button1;
        TButton *Button2;
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TRegPac(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegPac *RegPac;
//---------------------------------------------------------------------------
#endif
