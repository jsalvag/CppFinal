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
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Representante rep;
Paciente pac;
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


void __fastcall TForm1::Crear1Click(TObject *Sender)
{
        Form6->Show();
        l.LimpiarHistoria();
        pac.listar();
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
        pac.ListarModificar("Representante");
        Form7->Panel2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Modificar3Click(TObject *Sender)
{                       
        Form7->Show();
        l.LimpiarModificar();
        pac.ListarModificar("Empleado");
        Form7->Button3->Show();
}
//---------------------------------------------------------------------------

