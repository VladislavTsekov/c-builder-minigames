//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OpenGame(TObject *Sender)
{

	GamePanel->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CloseGame(TObject *Sender)
{
	GamePanel->Visible=false;
}
//---------------------------------------------------------------------------

