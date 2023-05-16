//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *addTaskButton;
	TEdit *taskInputField;
	TListBox *tasksListBox;
	TLabel *taskLabel;
	TButton *deleteTaskButton;
	TButton *completeTaskButton;
	void __fastcall addTaskButtonClick(TObject *Sender);
	void __fastcall tasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item);
	void __fastcall completeTaskButtonClick(TObject *Sender);
	void __fastcall deleteTaskButtonClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
