//---------------------------------------------------------------------------

#ifndef ModificarH
#define ModificarH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TDateTimePicker *DateTimePicker1;
        TMaskEdit *MaskEdit2;
        TMaskEdit *MaskEdit3;
        TPanel *Panel1;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TEdit *Edit5;
        TEdit *Edit6;
        TPanel *Panel2;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TEdit *Edit7;
        TMaskEdit *MaskEdit4;
        TMemo *Memo1;
        TComboBox *ComboBox1;
        TButton *Button2;
        TButton *Button3;
        TComboBox *ComboBox2;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall ComboBox2Change(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
