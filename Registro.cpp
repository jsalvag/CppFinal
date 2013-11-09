//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Registro.h"
#include "DLaborales.h"
#include "Clases.h"
#include "TablasDatos.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
Persona ppl;
Reprecentante rep;
Limpiar l;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
        String tipo;
        if(Panel1->Visible==true)
        {
                tipo = "Paciente";
                ppl.ingresarPersona(tipo);
        }
        if(Panel2->Visible==true)
        {
                tipo = "Reprecentante";
                ppl.ingresarPersona(tipo);
                rep.ingresarReprecentate();
        }
        if(Button3->Visible==true)
        {
                tipo = "Empleado";
                ppl.ingresarPersona(tipo);
        }
        this->Close();
        l.limpiarRegistro();
}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button3Click(TObject *Sender)
{
        Form3->Show();
}
//---------------------------------------------------------------------------

