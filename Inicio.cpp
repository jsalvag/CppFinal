//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Inicio.h"
#include "Registro.h"
#include "DLaborales.h"
#include "TablasDatos.h"
#include "Clases.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Reprecentante rep;
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
        Form2->Panel2->Visible=false;
        Form2->Button3->Visible=false;
        Form2->Panel1->Visible=true;
        Form2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Registrar1Click(TObject *Sender)
{
        rep.listarRel();
        Form2->Panel1->Visible=false;
        Form2->Button3->Visible=false;
        Form2->Panel2->Visible=true;
        Form2->Show();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Registrar2Click(TObject *Sender)
{
        Form2->Panel1->Visible=false;
        Form2->Panel2->Visible=false;
        Form2->Button3->Visible=true;
        Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Datos1Click(TObject *Sender)
{
        Form4->Show();        
}
//---------------------------------------------------------------------------
