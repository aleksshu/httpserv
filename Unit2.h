//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "LMDBaseControl.hpp"
#include "LMDBaseEdit.hpp"
#include "LMDBaseGraphicControl.hpp"
#include "LMDBaseLabel.hpp"
#include "LMDButtonControl.hpp"
#include "LMDCheckBox.hpp"
#include "LMDControl.hpp"
#include "LMDCustomBevelPanel.hpp"
#include "LMDCustomCheckBox.hpp"
#include "LMDCustomControl.hpp"
#include "LMDCustomEdit.hpp"
#include "LMDCustomLabel.hpp"
#include "LMDCustomMemo.hpp"
#include "LMDCustomPanel.hpp"
#include "LMDEdit.hpp"
#include "LMDLabel.hpp"
#include "LMDMemo.hpp"
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ExtDlgs.hpp>
#include "LMDBaseControl.hpp"
#include "LMDBaseEdit.hpp"
#include "LMDBaseGraphicControl.hpp"
#include "LMDBaseLabel.hpp"
#include "LMDControl.hpp"
#include "LMDCustomBevelPanel.hpp"
#include "LMDCustomControl.hpp"
#include "LMDCustomEdit.hpp"
#include "LMDCustomLabel.hpp"
#include "LMDCustomMemo.hpp"
#include "LMDCustomPanel.hpp"
#include "LMDEdit.hpp"
#include "LMDLabel.hpp"
#include "LMDMemo.hpp"
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
#include "LMDButtonControl.hpp"
#include "LMDCheckBox.hpp"
#include "LMDCustomCheckBox.hpp"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TLMDEdit *HtmFileEdit;
	TSaveTextFileDialog *SaveTextFileDialog1;
	TLMDMemo *LMDMemo1;
	TLMDCheckBox *ReqFromTextChkBox;
	TPanel *Panel1;
	TLMDLabel *LMDLabel1;
	TLMDEdit *PicDirEdit;
	TLMDLabel *LMDLabel2;
	TLMDEdit *LMDEdit3;
	TLMDLabel *LMDLabel3;
        void __fastcall LMDEdit1CustomButtons0Click(TObject *Sender, int index);
	void __fastcall LMDEdit1CustomButtons1Click(TObject *Sender, int index);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall LMDEdit2CustomButtons0Click(TObject *Sender, int index);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;

//---------------------------------------------------------------------------
#endif