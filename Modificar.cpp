//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Modificar.h"
#include "Inicio.h"
#include "Clases.h"
#include "DLaborales.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
Persona ppl;
Paciente pac;
Representante rep;
Empleado emp;
Limpiar l;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button2Click(TObject *Sender)
{
        String ci = ComboBox2->Text.SubString(0,8);
        //ppl.Modificar(ci);
        if(Panel1->Visible==true)
        {
                pac.ModificarP(ci);
        }
        if(Panel2->Visible==true)
        {
                rep.ModificarR(ci);
        }
        if(Button3->Visible==true)
        {
                emp.ModificarE(ci);
        }
        this->Close();
        l.LimpiarDatosLaborales();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::ComboBox2Change(TObject *Sender)
{
        pac.listarM();
        ppl.VerParaModificar(ComboBox2->Text.SubString(0,8));
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button3Click(TObject *Sender)
{
        emp.DatosParaModificar(ComboBox2->Text.SubString(0,8));
        Form3->Show();
}
//---------------------------------------------------------------------------



