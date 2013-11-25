//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Modificar.h"
#include "Inicio.h"
#include "Clases.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
Paciente pac;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button2Click(TObject *Sender)
{
        this->Close();        
}
//---------------------------------------------------------------------------
void __fastcall TForm7::ComboBox2Change(TObject *Sender)
{
        pac.DatosModificar(ComboBox2->Text.SubString(0,8));
}
//---------------------------------------------------------------------------
