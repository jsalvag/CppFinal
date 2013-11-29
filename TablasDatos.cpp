//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TablasDatos.h"
#include "Clases.h"
#include "Buscar.h"
#include "CrearHistoria.h"
#include "Inicio.h"
#include "Modificar.h"
#include "Registro.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
Persona ppl;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormCreate(TObject *Sender)
{
        Persona->Cells[0][0]="Personas";//indice
        Persona->Cells[1][0]="C�dula";
        Persona->Cells[2][0]="Nombre";
        Persona->Cells[3][0]="Apellido";
        Persona->Cells[4][0]="Fecha Nac";
        Persona->Cells[5][0]="Lugar Nac";
        Persona->Cells[6][0]="Direcci�n";
        Persona->Cells[7][0]="Tel�fono Fijo";
        Persona->Cells[8][0]="Tel�fono M�vil";
        Persona->Cells[9][0]="Tipo";
        Persona->Cells[10][0]="Relaci�n";

        Reprecentante->Cells[0][0]="Representante";//cedula del reprecentante en la tabla persona para la relacion
        Reprecentante->Cells[1][0]="Dir Oficina";
        Reprecentante->Cells[2][0]="Tlf Oficina";
        Reprecentante->Cells[3][0]="Otros";

        Empleado->Cells[0][0]="Empleados";
        Empleado->Cells[1][0]="Niv Educativo";
        Empleado->Cells[2][0]="Instituci�n";
        Empleado->Cells[3][0]="T�tulo";
        Empleado->Cells[4][0]="Expe Laboral";
        Empleado->Cells[5][0]="Cursos";
        Empleado->Cells[6][0]="Fecha Ingreso";
        Empleado->Cells[7][0]="Cargo";

        Historia->Cells[0][0]="C�dula";
        Historia->Cells[1][0]="Hijos M";
        Historia->Cells[2][0]="Hijos F";
        Historia->Cells[3][0]="Motivo";
        Historia->Cells[4][0]="Antecedentes";
        Historia->Cells[5][0]="Evaluaci�n";
        Historia->Cells[6][0]="Alergias";
        Historia->Cells[7][0]="C�digo";
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
        String* datos = ppl.buscarDatos(Edit1->Text);
        ShowMessage(
                "Tipo:\t"+datos[1]+
                "\nNombre:\t"+datos[2]+
                "\nApellido:\t"+datos[3]+
                "\nF Nac:\t"+datos[4]+
                "\nEdad:\t"+datos[5]+
                "\nL Nac:\t"+datos[6]+
                "\nDirecc:\t"+datos[7]+
                "\nTlf Fijo:\t"+datos[8]+
                "\nTlf Movl:\t"+datos[9]
                );
}
//---------------------------------------------------------------------------

