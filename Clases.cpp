//---------------------------------------------------------------------------

 
#include <vcl.h>
#pragma hdrstop

#include "Clases.h"
#include "DLaborales.h"
#include "Inicio.h"
#include "Registro.h"
#include "TablasDatos.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
Persona::Persona()
{
        x=0;
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

void Reprecentante::listarRel()
{
        int i=1;
        int a = Form4->Persona->RowCount-1;
        while(i<=a)
        {
                Form2->ComboBox1->Items->Add(Form4->Persona->Cells[2][i]+" "+Form4->Persona->Cells[3][i]);
                i++;
        }
}
Reprecentante::Reprecentante()
{
        y=0;
}
void Reprecentante::ingresarReprecentate()
{
        while(Form4->Reprecentante->RowCount<=y+1)
                Form4->Reprecentante->RowCount++;

        y++;
        int a = Form4->Persona->RowCount-1;
        ShowMessage("ItemIndex="+IntToStr(Form2->ComboBox1->ItemIndex+1));
        Form4->Persona->Cells[10][a]=Form4->Persona->Cells[1][Form2->ComboBox1->ItemIndex+1];

        Form4->Reprecentante->Cells[0][y]=Form2->MaskEdit1->Text;
        Form4->Reprecentante->Cells[1][y]=Form2->Edit7->Text;
        Form4->Reprecentante->Cells[2][y]=Form2->MaskEdit4->Text;
        Form4->Reprecentante->Cells[3][y]=Form2->Memo1->Text;

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

        Form2->Panel1->Visible=false;
        Form2->Panel2->Visible=false;
        Form2->Button3->Visible=false;
}
