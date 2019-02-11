//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "LMDBaseControl"
#pragma link "LMDBaseEdit"
#pragma link "LMDBaseGraphicControl"
#pragma link "LMDBaseLabel"
#pragma link "LMDControl"
#pragma link "LMDCustomBevelPanel"
#pragma link "LMDCustomControl"
#pragma link "LMDCustomEdit"
#pragma link "LMDCustomLabel"
#pragma link "LMDCustomMemo"
#pragma link "LMDCustomPanel"
#pragma link "LMDEdit"
#pragma link "LMDLabel"
#pragma link "LMDMemo"
#pragma link "LMDButtonControl"
#pragma link "LMDCheckBox"
#pragma link "LMDCustomCheckBox"
#pragma resource "*.dfm"
TForm2 *Form2;

String sHtmFile2;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCreate(TObject *Sender)
{
 sHtmFile2 = Form1->IniCtrl1->ReadString("Http","File","index.htm");
 if(!sHtmFile2.IsEmpty() && FileExists(sHtmFile2)) {
  HtmFileEdit->Text = sHtmFile2;
  LMDMemo1->Lines->LoadFromFile(sHtmFile2);
 }       
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormDestroy(TObject *Sender)
{
 if(!HtmFileEdit->Text.IsEmpty()&& FileExists(HtmFileEdit->Text))
  Form1->IniCtrl1->WriteString("Http","File",HtmFileEdit->Text);
 if(!PicDirEdit->Text.IsEmpty()&& FileExists(PicDirEdit->Text))
  Form1->IniCtrl1->WriteString("Http","PicDir",PicDirEdit->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::LMDEdit1CustomButtons0Click(TObject *Sender, int index)
{
 if(HtmFileEdit->Text.IsEmpty() || ! FileExists(HtmFileEdit->Text))
	if(SaveTextFileDialog1->Execute())
		HtmFileEdit->Text = SaveTextFileDialog1->FileName;

 sHtmFile2 = HtmFileEdit->Text;
 if(!sHtmFile2.IsEmpty() && FileExists(sHtmFile2) ) LMDMemo1->Lines->LoadFromFile(sHtmFile2);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::LMDEdit1CustomButtons1Click(TObject *Sender, int index)
{
 if(!HtmFileEdit->Text.IsEmpty())
  LMDMemo1->Lines->SaveToFile(HtmFileEdit->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::LMDEdit2CustomButtons0Click(TObject *Sender, int index)
{
 SaveTextFileDialog1->Filter = "Folders only|*.FOLDER";
 SaveTextFileDialog1->FileName = "(Get Folder)";
 if(SaveTextFileDialog1->Execute()) {
  PicDirEdit->Text = ExtractFileDir(SaveTextFileDialog1->FileName);
 }
 SaveTextFileDialog1->Filter = "";
}
//---------------------------------------------------------------------------

