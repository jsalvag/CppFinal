//---------------------------------------------------------------------------

#ifndef InicioH
#define InicioH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *Menu1;
        TMenuItem *Archivo1;
        TMenuItem *Salir1;
        TMenuItem *Registro1;
        TMenuItem *Paciente1;
        TMenuItem *Nuevo1;
        TMenuItem *Buscar1;
        TMenuItem *Modificar1;
        TMenuItem *Reprecentante1;
        TMenuItem *Registrar1;
        TMenuItem *Empleado1;
        TMenuItem *Registrar2;
        TMenuItem *Datos1;
        void __fastcall Salir1Click(TObject *Sender);
        void __fastcall Nuevo1Click(TObject *Sender);
        void __fastcall Registrar1Click(TObject *Sender);
        void __fastcall Registrar2Click(TObject *Sender);
        void __fastcall Datos1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
