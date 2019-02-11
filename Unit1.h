//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>


#include <Vcl.ExtCtrls.hpp>
//#include "idCGIRunner.hpp"
#include "LMDCustomComponent.hpp"
#include "LMDIniCtrl.hpp"
#include "LMDBaseControl.hpp"
#include "LMDBaseEdit.hpp"
#include "LMDBaseGraphicControl.hpp"
#include "LMDBaseLabel.hpp"
#include "LMDButton.hpp"
#include "LMDButtonControl.hpp"
#include "LMDCheckBox.hpp"
#include "LMDControl.hpp"
#include "LMDCustomBevelPanel.hpp"
#include "LMDCustomButton.hpp"
#include "LMDCustomCheckBox.hpp"
#include "LMDCustomControl.hpp"
#include "LMDCustomEdit.hpp"
#include "LMDCustomLabel.hpp"
#include "LMDCustomPanel.hpp"
#include "LMDCustomScrollBox.hpp"
#include "LMDEdit.hpp"
#include "LMDLabel.hpp"
#include "LMDListBox.hpp"
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdCustomHTTPServer.hpp>
#include <IdCustomTCPServer.hpp>
#include <IdHTTPServer.hpp>
#include "idCGIRunner.hpp"

//#include "idCGIRunner.hpp"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLMDIniCtrl *IniCtrl1;
	TLMDListBox *LogListBox;
	TLMDEdit *PortEdit;
	TLMDCheckBox *HttpServAct;
	TIdHTTPServer *IdHTTPServer1;
	TLMDButton *LMDButton1;
	TLMDCheckBox *AutoScrChkBox;
	TLMDEdit *LogEdit;
	TLMDCheckBox *OnlyTextChkBox;
	TPanel *Panel1;
	TLMDLabel *LMDLabel1;
	TLMDLabel *LMDLabel2;
	TLMDEdit *RootDirEdit;
	TLMDLabel *LMDLabel3;
	TLMDCheckBox *AutoChkBox;

	TLMDEdit *PHPEdit;
	TLMDLabel *LMDLabel4;
	TidCGIRunner *idCGIRunner1;
	void __fastcall IdHTTPServer1AfterBind(TObject *Sender);
	void __fastcall IdHTTPServer1BeforeBind(TIdSocketHandle *AHandle);
	void __fastcall IdHTTPServer1BeforeListenerRun(TIdThread *AThread);
	void __fastcall IdHTTPServer1CommandError(TIdContext *AContext, TIdHTTPRequestInfo *ARequestInfo,
          TIdHTTPResponseInfo *AResponseInfo, Exception *AException);
	void __fastcall IdHTTPServer1CommandGet(TIdContext *AContext, TIdHTTPRequestInfo *ARequestInfo,
          TIdHTTPResponseInfo *AResponseInfo);
	void __fastcall IdHTTPServer1CommandOther(TIdContext *AContext, TIdHTTPRequestInfo *ARequestInfo,
          TIdHTTPResponseInfo *AResponseInfo);
	void __fastcall IdHTTPServer1Connect(TIdContext *AContext);
	void __fastcall IdHTTPServer1ContextCreated(TIdContext *AContext);
	void __fastcall IdHTTPServer1CreatePostStream(TIdContext *AContext, TIdHeaderList *AHeaders,
          TStream *&VPostStream);
	void __fastcall IdHTTPServer1CreateSession(TIdContext *ASender, TIdHTTPSession *&VHTTPSession);
	void __fastcall IdHTTPServer1Disconnect(TIdContext *AContext);
	void __fastcall IdHTTPServer1DoneWithPostStream(TIdContext *AContext, TIdHTTPRequestInfo *ARequestInfo,
          bool &VCanFree);
	void __fastcall IdHTTPServer1Exception(TIdContext *AContext, Exception *AException);
	void __fastcall IdHTTPServer1HeaderExpectations(TIdContext *AContext, const UnicodeString AExpectations,
          bool &VContinueProcessing);
	void __fastcall IdHTTPServer1HeadersAvailable(TIdContext *AContext, const UnicodeString AUri,
          TIdHeaderList *AHeaders, bool &VContinueProcessing);
	void __fastcall IdHTTPServer1HeadersBlocked(TIdContext *AContext, TIdHeaderList *AHeaders,
          int &VResponseNo, UnicodeString &VResponseText, UnicodeString &VContentText);
	void __fastcall IdHTTPServer1InvalidSession(TIdContext *AContext, TIdHTTPRequestInfo *ARequestInfo,
          TIdHTTPResponseInfo *AResponseInfo, bool &VContinueProcessing,
          const UnicodeString AInvalidSessionID);
	void __fastcall IdHTTPServer1ListenException(TIdListenerThread *AThread, Exception *AException);
	void __fastcall IdHTTPServer1ParseAuthentication(TIdContext *AContext, const UnicodeString AAuthType,
          const UnicodeString AAuthData, UnicodeString &VUsername,
          UnicodeString &VPassword, bool &VHandled);
	void __fastcall IdHTTPServer1QuerySSLPort(WORD APort, bool &VUseSSL);
	void __fastcall IdHTTPServer1SessionEnd(TIdHTTPSession *Sender);
	void __fastcall IdHTTPServer1SessionStart(TIdHTTPSession *Sender);
	void __fastcall IdHTTPServer1Status(TObject *ASender, const TIdStatus AStatus, const UnicodeString AStatusText);
	void __fastcall LMDButton1Click(TObject *Sender);
	void __fastcall LMDEdit1CustomButtons0Click(TObject *Sender, int index);
	void __fastcall LMDEdit1CustomButtons1Click(TObject *Sender, int index);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall HttpServActClick(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
void __fastcall Add2(AnsiString sStr);

//---------------------------------------------------------------------------
#endif
