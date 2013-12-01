//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Buscar.h"
#include "Clases.h"
#include "CrearHistoria.h"
#include "Listas.h"
#include "TablasDatos.h"
#include "Inicio.h"
#include "DLaborales.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
Persona ppl;
Representante rep;
Paciente pac;
Empleado emp;
Limpiar l;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::buscar_btnClick(TObject *Sender)
{
        String ci = MaskEdit1->Text;
        if(ci!="")
        {
                if(!ppl.buscarRepetido(ci))
                        ppl.Ver(ci);
                else
                {
                        ShowMessage("El numero de cédula "+MaskEdit1->Text+" no está en los registros");
                        MaskEdit1->Clear();
                        MaskEdit1->SetFocus();
                }
        }
        else
        {
                ShowMessage("Escriba un numero de cédula para realizar la busqueda!");
        }
        
}
//---------------------------------------------------------------------------


void __fastcall TForm5::historia_btnClick(TObject *Sender)
{
        pac.VerHistoria(MaskEdit1->Text, true);
        Form6->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::listRep_btnClick(TObject *Sender)
{
        if(MaskEdit1->Text!="")
        {
                rep.ListarReprePresentantes(MaskEdit1->Text);
                Form8->Show();
        }
        else
        {
                ShowMessage("Debe realizar una busqueda para ver los datos...");
                MaskEdit1->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
        historia_btn->Visible=false;
        datLab_btn->Visible=false;
        listRep_btn->Visible=false;
        l.LimpiarDatosLaborales();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::datLab_btnClick(TObject *Sender)
{
        emp.DatosParaModificar(MaskEdit1->Text);
        Form3->Show();
        Form3->ComboBox1->Enabled=false;
        Form3->Edit1->Enabled=false;
        Form3->Edit2->Enabled=false;
        Form3->Edit3->Enabled=false;
        Form3->Memo1->Enabled=false;
        Form3->Memo2->Enabled=false;
        Form3->DateTimePicker1->Enabled=false;
}
//---------------------------------------------------------------------------

