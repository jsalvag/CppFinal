//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Listas.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::FormClose(TObject *Sender, TCloseAction &Action)
{
        Memo1->Clear();        
}
//---------------------------------------------------------------------------
