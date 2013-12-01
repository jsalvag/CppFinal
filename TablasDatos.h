//---------------------------------------------------------------------------

#ifndef TablasDatosH
#define TablasDatosH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *Persona;
        TStringGrid *Reprecentante;
        TStringGrid *Empleado;
        TStringGrid *Historia;
        TEdit *Edit1;
        TButton *Button1;
        TStringGrid *Citas;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
