//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Buscar.h"
#include "Clases.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
Persona ppl;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::buscar_btnClick(TObject *Sender)
{
        if(!ppl.buscarRepetido(MaskEdit1->Text))
                ppl.buscarDatos(MaskEdit1->Text);
        else
        {
                ShowMessage("El numero de cédula "+MaskEdit1->Text+" no está en los registros");
                MaskEdit1->Clear();
                MaskEdit1->SetFocus();
        }
}
//---------------------------------------------------------------------------

