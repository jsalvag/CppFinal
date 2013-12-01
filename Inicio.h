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
#include <ComCtrls.hpp>
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
        TMenuItem *Empleado2;
        TMenuItem *ListadeEmpleados1;
        TMenuItem *ImprimirArchivodeEmpleado1;
        TMenuItem *Citas1;
        TMenuItem *Historia1;
        TPanel *Panel1;
        TLabel *Label1;
        TPanel *Panel2;
        TLabel *Label2;
        TComboBox *ComboBox1;
        TLabel *Label3;
        TLabel *nCita_lb;
        TPanel *Panel3;
        TGroupBox *GroupBox1;
        TListBox *ListBox1;
        TLabel *Label4;
        TLabel *nom_lb;
        TLabel *Label5;
        TEdit *Edit1;
        TLabel *Label6;
        TDateTimePicker *DateTimePicker1;
        TButton *Button1;
        TButton *Button2;
        TPanel *Panel4;
        TLabel *Label7;
        TButton *Button3;
        TComboBox *ComboBox2;
        void __fastcall Salir1Click(TObject *Sender);
        void __fastcall Nuevo1Click(TObject *Sender);
        void __fastcall Registrar1Click(TObject *Sender);
        void __fastcall Registrar2Click(TObject *Sender);
        void __fastcall Datos1Click(TObject *Sender);
        void __fastcall Buscar1Click(TObject *Sender);
        void __fastcall Buscar2Click(TObject *Sender);
        void __fastcall Buscar3Click(TObject *Sender);
        void __fastcall Modificar1Click(TObject *Sender);
        void __fastcall Modificar2Click(TObject *Sender);
        void __fastcall Modificar3Click(TObject *Sender);
        void __fastcall Historia1Click(TObject *Sender);
        void __fastcall Citas1Click(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall ListadePacientes1Click(TObject *Sender);
        void __fastcall ListadeEmpleados1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall ImprimirArchivodePaciente1Click(TObject *Sender);
        void __fastcall ImprimirArchivodeEmpleado1Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
