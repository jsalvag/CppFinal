//---------------------------------------------------------------------------

#ifndef BuscarH
#define BuscarH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TMaskEdit *MaskEdit1;
        TButton *buscar_btn;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label6;
        TLabel *nom_lb;
        TLabel *ape_lb;
        TLabel *ed_lb;
        TLabel *dir_lb;
        TLabel *fNac_lb;
        TLabel *tlfF_lb;
        TLabel *tlfM_lb;
        TLabel *Label9;
        TLabel *rel_lb;
        TLabel *tipo_lb;
        TButton *historia_btn;
        void __fastcall buscar_btnClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
