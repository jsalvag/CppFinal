//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TablasDatos.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormCreate(TObject *Sender)
{
        Persona->Cells[0][0]="Personas";//indice
        Persona->Cells[1][0]="Cédula";
        Persona->Cells[2][0]="Nombre";
        Persona->Cells[3][0]="Apellido";
        Persona->Cells[4][0]="Fecha Nac";
        Persona->Cells[5][0]="Lugar Nac";
        Persona->Cells[6][0]="Dirección";
        Persona->Cells[7][0]="Teléfono Fijo";
        Persona->Cells[8][0]="Teléfono Móvil";
        Persona->Cells[9][0]="Tipo";
        Persona->Cells[10][0]="Relación";

        Reprecentante->Cells[0][0]="Reprecentante";//cedula del reprecentante en la tabla persona para la relacion
        Reprecentante->Cells[1][0]="Dir Oficina";
        Reprecentante->Cells[2][0]="Tlf Oficina";
        Reprecentante->Cells[3][0]="Otros";

        Empleado->Cells[0][0]="Empleados";
        Empleado->Cells[1][0]="Niv Educativo";
        Empleado->Cells[2][0]="Institución";
        Empleado->Cells[3][0]="Título";
        Empleado->Cells[4][0]="Expe Laboral";
        Empleado->Cells[5][0]="Cursos";
        Empleado->Cells[6][0]="Fecha Ingreso";
        Empleado->Cells[7][0]="Cargo";
}
//---------------------------------------------------------------------------
