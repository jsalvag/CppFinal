//---------------------------------------------------------------------------

#include <vcl.h>
#include <string.h>
#pragma hdrstop

#include "Clases.h"
#include "DLaborales.h"
#include "Inicio.h"
#include "Registro.h"
#include "TablasDatos.h"
#include "Buscar.h"
#include "CrearHistoria.h"
#include "Modificar.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
Persona::Persona()
{
        x=0;
}

Paciente::Paciente()
{
        codHist = 0;
}

Representante::Representante()
{
        y=0;
}

Empleado::Empleado()
{
        z=0;
}

void Persona::ingresarPersona(String tipo)
{
        while(Form4->Persona->RowCount<=x+1)
                Form4->Persona->RowCount++;

        x++;
        Form4->Persona->Cells[0][x]=x;
        Form4->Persona->Cells[1][x]=Form2->MaskEdit1->Text;
        Form4->Persona->Cells[2][x]=Form2->Edit1->Text;
        Form4->Persona->Cells[3][x]=Form2->Edit2->Text;
        Form4->Persona->Cells[4][x]=Form2->DateTimePicker1->Date.DateString();
        Form4->Persona->Cells[5][x]=Form2->Edit3->Text;
        Form4->Persona->Cells[6][x]=Form2->Edit4->Text;
        Form4->Persona->Cells[7][x]=Form2->MaskEdit2->Text;
        Form4->Persona->Cells[8][x]=Form2->MaskEdit3->Text;
        Form4->Persona->Cells[9][x]=tipo;

}

void Representante::listarRel()
{
        int i=1;
        int a = Form4->Persona->RowCount-1;
        while(i<=a)
        {
                Form2->ComboBox1->Items->Add(Form4->Persona->Cells[2][i]+" "+Form4->Persona->Cells[3][i]);
                i++;
        }
}

void Representante::ingresarRepresentate()
{
        while(Form4->Reprecentante->RowCount<=y+1)
                Form4->Reprecentante->RowCount++;
        y++;
        int a = Form4->Persona->RowCount-1;
        Form4->Persona->Cells[10][a]=Form4->Persona->Cells[1][Form2->ComboBox1->ItemIndex+1];

        Form4->Reprecentante->Cells[0][y]=Form2->MaskEdit1->Text;
        Form4->Reprecentante->Cells[1][y]=Form2->Edit7->Text;
        Form4->Reprecentante->Cells[2][y]=Form2->MaskEdit4->Text;
        Form4->Reprecentante->Cells[3][y]=Form2->Memo1->Text;
}

void Empleado::ingresarEmpleado()
{
        while(Form4->Empleado->RowCount<=z+1)
                Form4->Empleado->RowCount++;

        z++;
        Form4->Empleado->Cells[0][z]=Form2->MaskEdit1->Text;
        Form4->Empleado->Cells[1][z]=Form3->ComboBox1->ItemIndex;
        Form4->Empleado->Cells[2][z]=Form3->Edit1->Text;
        Form4->Empleado->Cells[3][z]=Form3->Edit2->Text;
        Form4->Empleado->Cells[4][z]=Form3->Memo1->Text;
        Form4->Empleado->Cells[5][z]=Form3->Memo2->Text;
        Form4->Empleado->Cells[6][z]=Form3->DateTimePicker1->Date.DateString();
        Form4->Empleado->Cells[7][z]=Form3->Edit3->Text;

}

void Limpiar::limpiarRegistro()
{
        Form2->MaskEdit1->Clear();
        Form2->MaskEdit2->Clear();
        Form2->MaskEdit3->Clear();
        Form2->MaskEdit4->Clear();
        Form2->Edit1->Clear();
        Form2->Edit2->Clear();
        Form2->Edit3->Clear();
        Form2->Edit4->Clear();
        Form2->Edit5->Clear();
        Form2->Edit6->Clear();
        Form2->Edit7->Clear();
        Form2->DateTimePicker1->Date=Date().CurrentDate();
        Form2->Memo1->Clear();

        Form3->ComboBox1->Clear();
        Form3->Edit1->Clear();
        Form3->Edit2->Clear();
        Form3->Edit3->Clear();
        Form3->Memo1->Clear();
        Form3->Memo2->Clear();
        Form3->DateTimePicker1->Date=Date().CurrentDate();

        Form2->Panel1->Visible=false;
        Form2->Panel2->Visible=false;
        Form2->Button3->Visible=false;

        Form2->MaskEdit1->SetFocus();
}

bool Persona::validarCI(String ci)
{
        if(ci.Length()==0){
                ShowMessage("La Cédula es obligatoria, no puede estar vacia...");
                return 0;
        }
        if(ci.Length()<6||ci.Length()>8){
                ShowMessage("El campo Cédula admite entre 6 y 8 digitos");
                return 0;
        }
        char *a=ci.c_str();
        for(int i=0;i<=ci.Length()-1;i++){
                if(!IsCharAlphaNumericA(a[i])){
                        ShowMessage("El campo Cédula admite solo números entre 0 y 9");
                        return 0;
                }
        }
        return 1;
}
bool Persona::validarNombre(String nom)
{
        if(nom.Length()==0){
                ShowMessage("El Nombre y Apellido son obligarotios, no pueden estar vacios...");
                return 0;
        }
        char *a=nom.c_str();
        for(int i=0;i<=nom.Length()-1;i++){
                if(!IsCharAlphaA(a[i])){
                        ShowMessage("El nombre debe contener solo letras");
                        return 0;
                }
        }
        return 1;
}
bool Persona::validarFechaNac(String f)
{
        TDateTime fecha = f;
        if(fecha>Date().CurrentDate()){
                ShowMessage("La fecha de nacimiento no puede estar en el futuro");
                return false;
        }
        return 1;
}

bool Persona::buscarRepetido(String ci)
{       char *b = ci.c_str();
        for(int i=1;i<Form4->Persona->RowCount;i++)
        {
                char *a = Form4->Persona->Cells[1][i].c_str();
                if (StrComp(a,b)==0)
                {
                        return false;
                }
        }
        return true;
}

int Persona::calcularEdad(String fecha)
{
        int f=StrToDate(fecha);
        int fa=Date().CurrentDate();
        return (fa-f)/365.25;
}

void Persona::buscarDatos(String ci)
{
        for(int i=1;i<Form4->Persona->RowCount;i++)
        {
                if (Form4->Persona->Cells[1][i]==ci)
                {
                        Form5->tipo_lb->Caption=Form4->Persona->Cells[9][i];
                        Form5->nom_lb->Caption=Form4->Persona->Cells[2][i];
                        Form5->ape_lb->Caption=Form4->Persona->Cells[3][i];
                        Form5->ed_lb->Caption=calcularEdad(Form4->Persona->Cells[4][i]);
                        Form5->dir_lb->Caption=Form4->Persona->Cells[6][i];
                        Form5->fNac_lb->Caption=Form4->Persona->Cells[5][i];
                        Form5->tlfF_lb->Caption=Form4->Persona->Cells[7][i];
                        Form5->tlfM_lb->Caption=Form4->Persona->Cells[8][i];
                        
                        if(Form4->Persona->Cells[9][i]=="Paciente")
                        {
                        }
                        
                        if(Form4->Persona->Cells[9][i]=="Representante")
                        {
                                Form5->Label9->Visible=true;
                                Form5->rel_lb->Visible=true;
                                Form5->rel_lb->Caption=Form4->Persona->Cells[10][i];
                        }
                        
                        if(Form4->Persona->Cells[9][i]=="Empleado")
                        {
                        }       
                }
        }
}


void Paciente::listar()
{
        for(int i=1;i<Form4->Persona->RowCount;i++)
        {
                Form6->ComboBox1->Items->Add(Form4->Persona->Cells[1][i]+" - "+Form4->Persona->Cells[3][i]+", "+Form4->Persona->Cells[2][i]);
        }
}

void Limpiar::LimpiarModificar()
{
        Form7->ComboBox1->Clear();
        Form7->ComboBox2->Clear();
        Form7->Edit1->Clear();
        Form7->Edit2->Clear();
        Form7->Edit3->Clear();
        Form7->Edit4->Clear();
        Form7->Edit5->Clear();
        Form7->Edit6->Clear();
        Form7->Edit7->Clear();
        Form7->MaskEdit2->Clear();
        Form7->MaskEdit3->Clear();
        Form7->MaskEdit4->Clear();
        Form7->DateTimePicker1->Date=Date().CurrentDate();

        Form7->Panel1->Hide();
        Form7->Panel2->Hide();
        Form7->Button3->Hide();

        Form7->ComboBox2->SetFocus();

}

void Paciente::ListarModificar(String tipo)
{
        int a = Form4->Persona->RowCount;

        for(int i=1;i<a;i++)
        {
                if(Form4->Persona->Cells[9][i]==tipo)
                {
                        Form7->ComboBox2->Items->Add(
                                Form4->Persona->Cells[1][i]+"-"+Form4->Persona->Cells[3][i]+", "+Form4->Persona->Cells[2][i]
                        );
                }
        }
}

String* Paciente::DatosModificar(String ci)
{
        String *datos;
        int a=Form4->Persona->RowCount;
        int b=Form4->Reprecentante->RowCount;
        int c=Form4->Empleado->RowCount;

        for(int i=1;i<a;i++)
        {
                if(Form4->Persona->Cells[1][i]==ci)
                {
                        Form7->Edit1->Text=Form4->Persona->Cells[2][i];
                        Form7->Edit2->Text=Form4->Persona->Cells[3][i];
                        Form7->Edit3->Text=Form4->Persona->Cells[5][i];
                        Form7->Edit4->Text=Form4->Persona->Cells[6][i];
                        Form7->MaskEdit2->Text=Form4->Persona->Cells[7][i];
                        Form7->MaskEdit3->Text=Form4->Persona->Cells[8][i];
                        Form7->DateTimePicker1->Date=StrToDate(Form4->Persona->Cells[4][i]);
                        if(Form4->Persona->Cells[9][i]=="Paciente")
                        {
                        }
                        if(Form4->Persona->Cells[9][i]=="Representante")
                        {
                                for(int j=1;j<b;j++)
                                {
                                        if(Form4->Reprecentante->Cells[0][j]==ci)
                                        {
                                                Form7->Edit7->Text=Form4->Reprecentante->Cells[1][i];
                                                Form7->MaskEdit4->Text=Form4->Reprecentante->Cells[2][i];
                                                Form7->Memo1->Text=Form4->Reprecentante->Cells[3][i];
                                        }
                                }
                        }
                        if(Form4->Persona->Cells[9][i]=="Empleado")
                        {
                        }

                }
        }
        return datos;
}

void Paciente::GuardarHistoria(String ci)
{
        ShowMessage(ci);
        bool a = false;
        for(int i = 1;i<Form4->Historia->RowCount;i++)
        {
                if(Form4->Historia->Cells[0][i]==ci)
                {
                        a = true;
                        ShowMessage("Encontrado en el indice "+IntToStr(i));
                        Form4->Historia->Cells[3][i]+="-"+Form6->Memo1->Text;
                        Form4->Historia->Cells[4][i]+="-"+Form6->Memo2->Text;
                        Form4->Historia->Cells[5][i]+="-"+Form6->Memo3->Text;
                        Form4->Historia->Cells[6][i]+="-"+Form6->Memo4->Text;
                }
        }
        if(!a)
        {
                codHist++;
                if(Form4->Historia->RowCount<=codHist)
                        Form4->Historia->RowCount++;
                Form4->Historia->Cells[0][codHist]=ci;
                Form4->Historia->Cells[3][codHist]=Form6->Memo1->Text;
                Form4->Historia->Cells[4][codHist]=Form6->Memo2->Text;
                Form4->Historia->Cells[5][codHist]=Form6->Memo3->Text;
                Form4->Historia->Cells[6][codHist]=Form6->Memo4->Text;
                Form4->Historia->Cells[7][codHist]=codHist;
        }
}
