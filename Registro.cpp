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
Representante rep;
Empleado emp;
Limpiar l;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
        MaskEdit1->SetFocus();
        if(ppl.validarCI(MaskEdit1->Text) && ppl.validarNombre(Edit1->Text) && ppl.validarNombre(Edit2->Text)&& ppl.validarFechaNac(DateTimePicker1->Date.DateString()))
        {
                if (ppl.buscarRepetido(MaskEdit1->Text))
                {
                        if(Panel1->Visible==true)
                        {
                                ppl.ingresarPersona("Paciente");
                        }
                        if(Panel2->Visible==true)
                        {
                                ppl.ingresarPersona("Representante");
                                rep.ingresarRepresentate();
                        }
                        if(Button3->Visible==true)
                        {
                                ppl.ingresarPersona("Empleado");
                                emp.ingresarEmpleado();
                        }
                        this->Close();
                }
                else
                {
                        ShowMessage("El número de cédula introducido ya se enecuentra el los registros");
                }
        }
        else
        {
                ShowMessage("Debe llenar todos los campos correctamente");
        }
}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button3Click(TObject *Sender)
{
        Form3->Show();
}
//---------------------------------------------------------------------------



void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
        l.LimpiarDatosLaborales();
        l.limpiarRegistro();        
}
//---------------------------------------------------------------------------

