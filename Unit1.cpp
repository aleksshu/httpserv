//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "LMDBaseControl"
#pragma link "LMDBaseEdit"
#pragma link "LMDBaseGraphicControl"
#pragma link "LMDBaseLabel"
#pragma link "LMDButton"
#pragma link "LMDButtonControl"
#pragma link "LMDCheckBox"
#pragma link "LMDControl"
#pragma link "LMDCustomBevelPanel"
#pragma link "LMDCustomButton"
#pragma link "LMDCustomCheckBox"
#pragma link "LMDCustomControl"
#pragma link "LMDCustomEdit"
#pragma link "LMDCustomLabel"
#pragma link "LMDCustomPanel"
#pragma link "LMDCustomScrollBox"
#pragma link "LMDEdit"
#pragma link "LMDLabel"
#pragma link "LMDListBox"
//#pragma link "idCGIRunner"
#pragma link "LMDCustomComponent"
#pragma link "LMDIniCtrl"
#pragma link "LMDBaseControl"
#pragma link "LMDBaseEdit"
#pragma link "LMDBaseGraphicControl"
#pragma link "LMDBaseLabel"
#pragma link "LMDButton"
#pragma link "LMDButtonControl"
#pragma link "LMDCheckBox"
#pragma link "LMDControl"
#pragma link "LMDCustomBevelPanel"
#pragma link "LMDCustomButton"
#pragma link "LMDCustomCheckBox"
#pragma link "LMDCustomControl"
#pragma link "LMDCustomEdit"
#pragma link "LMDCustomLabel"
#pragma link "LMDCustomPanel"
#pragma link "LMDCustomScrollBox"
#pragma link "LMDEdit"
#pragma link "LMDLabel"
#pragma link "LMDListBox"
#pragma link "idCGIRunner"
#pragma resource "*.dfm"
TForm1 *Form1;
String sLocalDoc;
TidCGIRunner *idCGIRunner1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IdHTTPServer1AfterBind(TObject *Sender)
{
 Add2("AfterBind ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1BeforeBind(TIdSocketHandle *AHandle)
{
 Add2("BeforeBind ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1BeforeListenerRun(TIdThread *AThread)
{
 Add2("BeforeListenerRun ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1CommandError(TIdContext *AContext, TIdHTTPRequestInfo *ARequestInfo,
          TIdHTTPResponseInfo *AResponseInfo, Exception *AException)

{
 Add2("CommandError ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1CommandGet(TIdContext *AContext, TIdHTTPRequestInfo *ARequestInfo,
          TIdHTTPResponseInfo *AResponseInfo)
{
 int ByteSent;

 Add2("Command " + ARequestInfo->Command +" "+ ARequestInfo->Document +
  " from " + AContext->Connection->Socket->Binding->PeerIP +":"+
   AContext->Connection->Socket->Binding->PeerPort +	" ; "+TimeToStr(Now()));



 // если ответ ИЗ текстового редактора
 if(Form2->ReqFromTextChkBox->Checked) {
  AResponseInfo->CharSet = "utf-16";
  AResponseInfo->ContentText = Form2->LMDMemo1->Text;
 }

 //  ответ из файла
 else {

  sLocalDoc = ARequestInfo->Document;
  while(sLocalDoc.Pos("/")) sLocalDoc[sLocalDoc.Pos("/")] = '\\';

  sLocalDoc = RootDirEdit->Text + sLocalDoc;

  TStringList *HtmList = new TStringList();
  try {

  if(!FileExists(sLocalDoc)) {
   sLocalDoc = RootDirEdit->Text + "\\index.html";
  }

  if(!FileExists(sLocalDoc)) {
   sLocalDoc = RootDirEdit->Text + "\\index.htm";
  }

  // если запрос .htm файла
  if(sLocalDoc.Pos(".htm")!=0) {

    if(FileExists(sLocalDoc)) {
    HtmList->LoadFromFile(sLocalDoc);  // Invalid pointer operation if sLocalDoc = other *.htm
    AResponseInfo->CharSet = "utf-16";
    AResponseInfo->ContentText = HtmList->Text;
   }
   else {
    AResponseInfo->ResponseNo = 404; // Not found
    AResponseInfo->ContentText = "<html><head><title>Error</title></head><body><h1>"
   	+ AResponseInfo->ResponseText + "</h1></body></html>";
   }

  }

  }__finally { delete HtmList; }

  // если запрос не .htm файла и не ответ из текст.редактора

  if(sLocalDoc.Pos(".htm")==0 && !Form2->ReqFromTextChkBox->Checked) {

   // если запрос на вып-е php скрипта
   if(sLocalDoc.Pos(".php")!=0 ) {
    AResponseInfo->CharSet = "utf-16";
    sLocalDoc = PHPEdit->Text;
    if(FileExists(sLocalDoc))  {
     idCGIRunner1 = new TidCGIRunner(Application);
     idCGIRunner1->InitComponent();


     AResponseInfo->ContentLength = idCGIRunner1->Execute(sLocalDoc, AContext, ARequestInfo, AResponseInfo, RootDirEdit->Text, NULL);
    } // >>>> before:   sLocalDoc = { u"C:\\Progr\\PHP\\php-cgi.exe" }
    // ARequestInfo->FRawHTTPCommand = { u"GET /test.php HTTP/1.1" }
   //AResponseInfo->CharSet = "utf-16";
   //Add2(Format("ContentLength %d", OPENARRAY(TVarRec, ((int)AResponseInfo->ContentLength))));
   }// ARequestInfo->FDocument = { u"/test.php" }
 // RootDirEdit->Text = { u"C:\\Progr\\HTTP_Server\\HTTP_Server_xe\\.\\Win32\\Debug\\htm" }
 // >>>>> after:   AResponseInfo->FContentText = { u"?" } (hex 53 45 00 00 'SE')

   // если в запросе не php файл
   else if(FileExists(sLocalDoc)) {
    ByteSent = AResponseInfo->ServeFile(AContext, sLocalDoc);

    Add2(Format("Serving file %s (%d bytes / %d bytes sent) to %s:%d",
		OPENARRAY(TVarRec, (
		sLocalDoc, ByteSent, (int)FileSizeByName(sLocalDoc),
		AContext->Connection->Socket->Binding->PeerIP,
		AContext->Connection->Socket->Binding->PeerPort )) ));
   }

   else {
    AResponseInfo->ResponseNo = 404; // Not found
    AResponseInfo->ContentText = "<html><head><title>Error</title></head><body><h1>"
	 + AResponseInfo->ResponseText + "</h1></body></html>";
   }

  }

 }  // конец если ответ из файла

}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1CommandOther(TIdContext *AContext,
  	TIdHTTPRequestInfo *ARequestInfo, TIdHTTPResponseInfo *AResponseInfo)
{
 Add2("CommandOther ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1Connect(TIdContext *AContext)
{
 Add2("Connect ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1ContextCreated(TIdContext *AContext)
{
 Add2("ContextCreated ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1CreatePostStream(TIdContext *AContext, TIdHeaderList *AHeaders,
          TStream *&VPostStream)
{
 Add2("CreatePostStream ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1CreateSession(TIdContext *ASender, TIdHTTPSession *&VHTTPSession)

{
 Add2("CreateSession ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1Disconnect(TIdContext *AContext)
{
  Add2("Disconnect ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1DoneWithPostStream(TIdContext *AContext, TIdHTTPRequestInfo *ARequestInfo,
          bool &VCanFree)
{
  Add2("DoneWithPostStream ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1Exception(TIdContext *AContext, Exception *AException)

{
  Add2("Exception ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1HeaderExpectations(TIdContext *AContext, const UnicodeString AExpectations,
          bool &VContinueProcessing)
{
  Add2("HeaderExpectations ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1HeadersAvailable(TIdContext *AContext, const UnicodeString AUri,
          TIdHeaderList *AHeaders, bool &VContinueProcessing)
{
  Add2("AfterCommandHandler ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1HeadersBlocked(TIdContext *AContext, TIdHeaderList *AHeaders,
          int &VResponseNo, UnicodeString &VResponseText, UnicodeString &VContentText)

{
 Add2("AfterCommandHandler ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1InvalidSession(TIdContext *AContext, TIdHTTPRequestInfo *ARequestInfo,
          TIdHTTPResponseInfo *AResponseInfo, bool &VContinueProcessing,
          const UnicodeString AInvalidSessionID)
{
  Add2("AfterCommandHandler ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1ListenException(TIdListenerThread *AThread, Exception *AException)

{
 Add2("AfterCommandHandler ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1ParseAuthentication(TIdContext *AContext, const UnicodeString AAuthType,
          const UnicodeString AAuthData, UnicodeString &VUsername,
          UnicodeString &VPassword, bool &VHandled)
{
  Add2("AfterCommandHandler ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1QuerySSLPort(WORD APort, bool &VUseSSL)
{
  Add2("AfterCommandHandler ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1SessionEnd(TIdHTTPSession *Sender)
{
  Add2("AfterCommandHandler ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1SessionStart(TIdHTTPSession *Sender)
{
 Add2("AfterCommandHandler ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IdHTTPServer1Status(TObject *ASender, const TIdStatus AStatus,
          const UnicodeString AStatusText)
{
  Add2("AfterCommandHandler ; "+TimeToStr(Now()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LMDButton1Click(TObject *Sender)
{
  Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LMDEdit1CustomButtons0Click(TObject *Sender, int index)
{
 if(Form2->SaveTextFileDialog1->Execute())
  LogEdit->Text = Form2->SaveTextFileDialog1->FileName;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LMDEdit1CustomButtons1Click(TObject *Sender, int index)
{
  if(!LogEdit->Text.IsEmpty()) LogListBox->Items->SaveToFile(LogEdit->Text);
}
//---------------------------------------------------------------------------

void __fastcall Add2(AnsiString sStr)
{
 Form1->LogListBox->Items->Add(sStr);		// Автопрокрутка
 if(Form1->AutoScrChkBox->Checked) Form1->LogListBox->ItemIndex =
   Form1->LogListBox->Count-1;
}

void __fastcall TForm1::FormCreate(TObject *Sender)
{
 int hndl;

 PortEdit->Text = IniCtrl1->ReadString("Server", "Port", "5996");
 IdHTTPServer1->DefaultPort = StrToInt(PortEdit->Text);
 IdHTTPServer1->Active = true;
 PortEdit->Enabled = false;
 IniCtrl1->IniFile = Application->ExeName;
 if(!FileExists(IniCtrl1->IniFile)) {
  hndl = FileCreate(IniCtrl1->IniFile);
  FileClose(hndl);
 }
 // корневой каталог
 RootDirEdit->Text = IniCtrl1->ReadString("Server", "Root",
	ExtractFileDir(Application->ExeName));
 PHPEdit->Text = IniCtrl1->ReadString("Server", "PHPExe", "C:\\PHP\\php-cgi.exe");


}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormDestroy(TObject *Sender)
{
 IdHTTPServer1->Active = false;
 IniCtrl1->WriteString("Server", "Port", PortEdit->Text);
 if(RootDirEdit->Text.IsEmpty())
	RootDirEdit->Text = ExtractFileDir(Application->ExeName);
 IniCtrl1->WriteString("Server", "Root", RootDirEdit->Text);
 IniCtrl1->WriteString("Server", "PHPExe", PHPEdit->Text);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::HttpServActClick(TObject *Sender)
{
 if(!IdHTTPServer1->Active) {
  IdHTTPServer1->Bindings->Clear();
  IdHTTPServer1->Active = false;
 }
 IdHTTPServer1->DefaultPort = StrToInt(PortEdit->Text);
 IdHTTPServer1->Active = HttpServAct->Checked;
 PortEdit->Enabled = !HttpServAct->Checked;
}
//---------------------------------------------------------------------------




