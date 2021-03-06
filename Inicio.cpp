//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Inicio.h"
#include "Registro.h"
#include "DLaborales.h"
#include "TablasDatos.h"
#include "Clases.h"
#include "Buscar.h"
#include "CrearHistoria.h"
#include "Modificar.h"
#include "ReprteListas.h"
#include "ReporteArchivo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Representante rep;
Paciente pac;
Empleado emp;
Limpiar l;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Salir1Click(TObject *Sender)
{
        this->Close();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nuevo1Click(TObject *Sender)
{
        Form2->Show();
        l.limpiarRegistro();
        Form2->Panel1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Registrar1Click(TObject *Sender)
{
        Form2->Show();
        l.limpiarRegistro();
        rep.listarRel();
        Form2->Panel2->Visible=true;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Registrar2Click(TObject *Sender)
{                                     
        Form2->Show();                 
        l.limpiarRegistro();  
        Form2->Button3->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Datos1Click(TObject *Sender)
{
        Form4->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Buscar1Click(TObject *Sender)
{
        Form5->Show();
        l.LimpiarBuscar();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Buscar2Click(TObject *Sender)
{
        Form5->Show();
        l.LimpiarBuscar();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Buscar3Click(TObject *Sender)
{
        Form5->Show();
        l.LimpiarBuscar();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Modificar1Click(TObject *Sender)
{
        Form7->Show();
        l.LimpiarModificar();
        pac.ListarModificar("Paciente");
        Form7->Panel1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Modificar2Click(TObject *Sender)
{                   
        Form7->Show();
        l.LimpiarModificar();
        rep.ListarModificar("Representante");
        Form7->Panel2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Modificar3Click(TObject *Sender)
{
        Form7->Show();
        l.LimpiarModificar();
        emp.ListarModificar("Empleado");
        Form7->Button3->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Historia1Click(TObject *Sender)
{
        Form6->Show();
        l.LimpiarHistoria();
        pac.listar();
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Citas1Click(TObject *Sender)
{
        l.LimpiarCita();
        pac.ListarC();
        Panel1->Visible=true;
        Panel4->Visible=false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
        pac.DatosCita(ComboBox1->Text.SubString(0,8));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if(!pac.buscarRepetido(ComboBox1->Text.SubString(0,8)))
                pac.IngresarCita();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListadePacientes1Click(TObject *Sender)
{
        Form9->lista_memo->Lines->Clear();
        Form9->Caption = "Lista de Pacientes";
        Form9->nomLista_lb->Caption = "Lista de Pacientes";
        pac.ListarRepo();
        Form9->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListadeEmpleados1Click(TObject *Sender)
{
        Form9->lista_memo->Lines->Clear();
        Form9->Caption = "Lista de Empleados";
        Form9->nomLista_lb->Caption = "Lista de Empleados";
        emp.ListarRepo();
        Form9->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        l.LimpiarCita();
        Panel1->Visible=false;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ImprimirArchivodePaciente1Click(TObject *Sender)
{
        ComboBox2->Clear();
        pac.ListarVer("Paciente");
        Panel1->Visible=false;
        Panel4->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ImprimirArchivodeEmpleado1Click(TObject *Sender)
{
        ComboBox2->Clear();
        emp.ListarVer("Empleado");
        Panel1->Visible=false;
        Panel4->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        Panel4->Hide();
        pac.RepoArchivo(ComboBox2->Text.SubString(0,8));
        Form10->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

