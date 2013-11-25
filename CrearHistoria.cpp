//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "CrearHistoria.h"
#include "Clases.h"
#include "TablasDatos.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
Paciente pac;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
        pac.GuardarHistoria(ComboBox1->Text.SubString(0,8));
        this->Close();        
}
//---------------------------------------------------------------------------

