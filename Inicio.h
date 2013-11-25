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
#include <Mask.hpp>
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
        TMenuItem *Buscar2;
        TMenuItem *Modificar2;
        TMenuItem *Buscar3;
        TMenuItem *Modificar3;
        TMenuItem *Reportes1;
        TMenuItem *Pacientes1;
        TMenuItem *ListadePacientes1;
        TMenuItem *ImprimirArchivodePaciente1;
        TMenuItem *ImprimirHistoria1;
        TMenuItem *Empleado2;
        TMenuItem *ListadeEmpleados1;
        TMenuItem *ImprimirArchivodeEmpleado1;
        TMenuItem *Estadisticas1;
        TMenuItem *Citas1;
        TMenuItem *CrearCita1;
        TMenuItem *VerCitas1;
        TMenuItem *PacientesporEdad1;
        TMenuItem *PromediodeCitas21;
        TMenuItem *Historias1;
        TMenuItem *Crear1;
        TMenuItem *Ver1;
        TMenuItem *Modificar4;
        void __fastcall Salir1Click(TObject *Sender);
        void __fastcall Nuevo1Click(TObject *Sender);
        void __fastcall Registrar1Click(TObject *Sender);
        void __fastcall Registrar2Click(TObject *Sender);
        void __fastcall Datos1Click(TObject *Sender);
        void __fastcall Buscar1Click(TObject *Sender);
        void __fastcall Buscar2Click(TObject *Sender);
        void __fastcall Buscar3Click(TObject *Sender);
        void __fastcall Crear1Click(TObject *Sender);
        void __fastcall Modificar1Click(TObject *Sender);
        void __fastcall Modificar2Click(TObject *Sender);
        void __fastcall Modificar3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
