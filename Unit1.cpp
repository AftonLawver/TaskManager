//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::addTaskButtonClick(TObject *Sender)
{
	String taskText = taskInputField->Text;
	tasksListBox->Items->Add(taskText);
	taskInputField->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::tasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	completeTaskButton->Visible = true;
	deleteTaskButton->Visible = true;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm1::completeTaskButtonClick(TObject *Sender)
{
	tasksListBox->Items->Delete(tasksListBox->ItemIndex);
	completeTaskButton->Visible = false;
    deleteTaskButton->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::deleteTaskButtonClick(TObject *Sender)
{
	tasksListBox->Items->Delete(tasksListBox->ItemIndex);
	deleteTaskButton->Visible = false;
	completeTaskButton->Visible = false;
}
//---------------------------------------------------------------------------

