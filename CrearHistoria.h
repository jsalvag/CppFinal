//---------------------------------------------------------------------------

#ifndef CrearHistoriaH
#define CrearHistoriaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TComboBox *ComboBox1;
        TLabel *Label2;
        TLabel *cod_lb;
        TLabel *Label3;
        TMemo *Memo1;
        TLabel *Label4;
        TMemo *Memo2;
        TLabel *Label5;
        TMemo *Memo3;
        TLabel *Label6;
        TMemo *Memo4;
        TButton *Button2;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
