#pragma once
#include "..//Coursework/Coursework.h"
#include <msclr\marshal_cppstd.h>

namespace EXE {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Summary for MyForm
/// </summary>
public ref class MyForm: public System::Windows::Forms::Form {
public:
	MyForm(void) {
		InitializeComponent();
	}

protected:
	~MyForm() {
		if(components) {
			delete components;
		}
		hr->Save();
		delete hr;
	}

private: System::Windows::Forms::ListBox ^listBox1;
private: System::Windows::Forms::DataGridView ^dataGridView1;
private: HR_department *hr = new HR_department(L"Start"); // СОЗДАЛИ КЛАСС БД
private: bool load = false;
private: String ^errorMessage = String::Empty;
private: String ^lastValue = String::Empty;
private: System::Windows::Forms::Button ^deleteRow;
private: System::Windows::Forms::Button ^enterRow;
private: int Cnt, //номер очередной строки
	EditIndex; //номер редактируемого элемента
private: TextBox ^textBox1; //текстовое поле
protected:

private:
	/// <summary>
	/// Required designer variable.
	/// </summary>
	System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void InitializeComponent(void) {
		System::Windows::Forms::DataGridViewCellStyle ^dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle ^dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle ^dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		this->listBox1 = (gcnew System::Windows::Forms::ListBox());
		this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
		this->deleteRow = (gcnew System::Windows::Forms::Button());
		this->enterRow = (gcnew System::Windows::Forms::Button());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->dataGridView1))->BeginInit();
		this->SuspendLayout();
		// 
		// listBox1
		// 
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(204)));
		this->listBox1->FormattingEnabled = true;
		this->listBox1->ItemHeight = 25;
		this->listBox1->Location = System::Drawing::Point(12, 472);
		this->listBox1->Name = L"listBox1";
		this->listBox1->Size = System::Drawing::Size(874, 229);
		this->listBox1->TabIndex = 0;
		this->listBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm::listBox1_DoubleClick);
		// 
		// dataGridView1
		// 
		this->dataGridView1->AllowUserToResizeColumns = false;
		this->dataGridView1->AllowUserToResizeRows = false;
		this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
																						 | System::Windows::Forms::AnchorStyles::Right));
		this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
		this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
																	System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
		this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
		dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(204)));
		dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
		dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
		this->dataGridView1->Location = System::Drawing::Point(12, 12);
		this->dataGridView1->Name = L"dataGridView1";
		dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
																	System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
		this->dataGridView1->RowHeadersWidth = 51;
		this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
		this->dataGridView1->RowTemplate->Height = 24;
		this->dataGridView1->Size = System::Drawing::Size(1033, 449);
		this->dataGridView1->TabIndex = 1;
		this->dataGridView1->CellBeginEdit += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &MyForm::dataGridView1_CellBeginEdit);
		this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
		this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellValueChanged);
		// 
		// deleteRow
		// 
		this->deleteRow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(204)));
		this->deleteRow->Location = System::Drawing::Point(892, 472);
		this->deleteRow->Name = L"deleteRow";
		this->deleteRow->Size = System::Drawing::Size(153, 38);
		this->deleteRow->TabIndex = 2;
		this->deleteRow->Text = L"Delete row";
		this->deleteRow->UseVisualStyleBackColor = true;
		this->deleteRow->Click += gcnew System::EventHandler(this, &MyForm::deleteRow_Click);
		// 
		// enterRow
		// 
		this->enterRow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(204)));
		this->enterRow->Location = System::Drawing::Point(892, 516);
		this->enterRow->Name = L"enterRow";
		this->enterRow->Size = System::Drawing::Size(153, 38);
		this->enterRow->TabIndex = 3;
		this->enterRow->Text = L"Enter rows";
		this->enterRow->UseVisualStyleBackColor = true;
		this->enterRow->Click += gcnew System::EventHandler(this, &MyForm::enterRow_Click);
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1057, 712);
		this->Controls->Add(this->enterRow);
		this->Controls->Add(this->deleteRow);
		this->Controls->Add(this->dataGridView1);
		this->Controls->Add(this->listBox1);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->MaximizeBox = false;
		this->MinimizeBox = false;
		this->Name = L"MyForm";
		this->Text = L"Data base";
		this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->dataGridView1))->EndInit();
		this->ResumeLayout(false);

	}
#pragma endregion
	/////////////////////////////// Функции старта формы
private: void LoadTable() {
	dataGridView1->ColumnCount = 7;
	dataGridView1->Columns[0]->Name = "ID";
	dataGridView1->Columns[0]->Width = 25;
	dataGridView1->Columns[1]->Name = "Фамилия";
	dataGridView1->Columns[2]->Name = "Имя";
	dataGridView1->Columns[3]->Name = "Отчество";
	dataGridView1->Columns[4]->Name = "Отдел";
	dataGridView1->Columns[4]->Width = 105;
	dataGridView1->Columns[5]->Name = "Должность";
	dataGridView1->Columns[5]->Width = 213;
	dataGridView1->Columns[6]->Name = "Зарп-та";
	dataGridView1->Columns[6]->Width = 60;
	int i = 0;
	if(hr->employees.size() == NULL) return;
	dataGridView1->Rows->Add(hr->employees.size());
	for(const auto &elem : hr->employees) {
		dataGridView1->Rows[i]->Cells[0]->Value = gcnew int(*elem.second->id_employee);
		dataGridView1->Rows[i]->Cells[1]->Value = gcnew String((elem.second->LastName)->c_str());
		dataGridView1->Rows[i]->Cells[2]->Value = gcnew String((elem.second->FirstName)->c_str());
		dataGridView1->Rows[i]->Cells[3]->Value = gcnew String((elem.second->MiddleName)->c_str());
		dataGridView1->Rows[i]->Cells[4]->Value = gcnew String((elem.second->Department)->c_str());
		dataGridView1->Rows[i]->Cells[5]->Value = gcnew String((elem.second->Position)->c_str());
		dataGridView1->Rows[i]->Cells[6]->Value = gcnew double(*elem.second->Salary);
		i++;
	}
	dataGridView1->Sort(dataGridView1->Columns[0], ListSortDirection::Ascending);
	load = true;
}

private: void Reload() {
	hr->Save();
	dataGridView1->Rows->Clear();
	load = false;
	LoadTable();
}

private: System::Void MyForm_Load(System::Object ^sender, System::EventArgs ^e) {
	LoadTable();
	Cnt = 0;	//номер очередной строки
	textBox1 = gcnew TextBox();
	textBox1->Location = System::Drawing::Point(0, 0);
	textBox1->Size = System::Drawing::Size(0, 0);
	textBox1->Parent = this;
	textBox1->Hide();
	textBox1->Text = "";
	textBox1->BackColor = Color::White;
	textBox1->ForeColor = Color::Blue;
	textBox1->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 11,
												 FontStyle::Regular | FontStyle::Regular, GraphicsUnit::Point);
	textBox1->BorderStyle = BorderStyle::FixedSingle;
	textBox1->LostFocus += gcnew System::EventHandler(this, &MyForm::textBox_LostFocus);
	this->Controls->Add(textBox1);
}

	   /////////////////////////////// Функции ListBox
private: System::Void textBox_LostFocus(System::Object ^sender, System::EventArgs ^e) {
	listBox1->Items[EditIndex] = textBox1->Text;
	hideTextEditor();
	listBox1->SelectedIndex = -1; // При нажатии в пустое место снять фокус
}

private: System::Void listBox1_DoubleClick(System::Object ^sender, System::EventArgs ^e) { // Дабл клик в листе создает строку
	CreateEditBox(sender);
}

	   //private: System::Void listBox1_ButtonClick(System::Object ^sender, System::EventArgs ^e) { // Дабл клик в листе создает строку
	   //	CreateEditBox(sender);
	   //}

private: System::Void CreateEditBox(System::Object ^sender) {
	ListBox ^listBox1 = (ListBox ^)sender;
	int n = listBox1->SelectedIndex;
	if(n < 0 || n == -1) {
		n = listBox1->Items->Count;
		String ^Str = gcnew String(n + " Фамилия Имя Отчество Отдел Должность Зарплата");
		listBox1->Items->Add(Str);
	}
	System::Drawing::Rectangle ^r = listBox1->GetItemRectangle(n);
	String ^itemText = (String ^)listBox1->Items[n];
	int delta = 2; //Смещение от позиции элемента списка
	textBox1->Location = System::Drawing::Point(listBox1->Location.X + r->X + delta, listBox1->Location.Y + r->Y + delta);
	textBox1->Size = System::Drawing::Size(r->Width, r->Height - 3);
	showTextEditor();
	if(textBox1->Text->ToString() == String::Empty) textBox1->Text = n + " Фамилия Имя Отчество Отдел Должность Зарплата";
	textBox1->Text = listBox1->Items[n]->ToString();
	textBox1->Focus();
	textBox1->SelectAll();
	EditIndex = n;
}

private: System::Void showTextEditor(System::Void) {
	listBox1->SendToBack();
	textBox1->BringToFront();
	textBox1->Show();
}

private: System::Void hideTextEditor() {
	textBox1->Hide();
	textBox1->SendToBack();
	listBox1->BringToFront();
}

	   /////////////////////////////// Функции GridView
private: System::Void dataGridView1_CellValueChanged(System::Object ^sender, System::Windows::Forms::DataGridViewCellEventArgs ^e) {
	if(!load) return;
	if(dataGridView1->Rows[e->RowIndex]->Cells[0]->FormattedValue->ToString() == String::Empty) {
		dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = lastValue;
		errorMessage = "Необходимо задать ID сотрудника";
		return;
	}
	if(dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->FormattedValue->ToString() == String::Empty) {
		dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = lastValue;
		errorMessage = "Нельзя создать пустую строку";
		return;
	}
	msclr::interop::marshal_context context;
	String ^check = dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
	std::wstring Val = context.marshal_as<std::wstring>(check);
	int col = e->ColumnIndex;
	if(col == 0 && lastValue != String::Empty) {
		dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = lastValue;
		errorMessage = "Нельзя изменить id";
		return;
	}
	int id;
	try {
		id = stoi(context.marshal_as<std::wstring>(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString()));
	}
	catch(...) {
		id = hr->employees.end()->first + 1;

	}
	bool test;
	hr->Add(Val, id, col, test);
	if(test) {
		dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = lastValue;
		errorMessage = "Неудалось создать строку";
		return;
	}
	hr->Save();
}
private: System::Void dataGridView1_CellBeginEdit(System::Object ^sender, System::Windows::Forms::DataGridViewCellCancelEventArgs ^e) {
	if(dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->FormattedValue->ToString() == String::Empty) {
		return;
	}
	lastValue = dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
}
private: System::Void dataGridView1_CellEndEdit(System::Object ^sender, System::Windows::Forms::DataGridViewCellEventArgs ^e) {
	dataGridView1->ClearSelection();
	if(errorMessage != String::Empty) {
		dataGridView1->CancelEdit();
		MessageBox::Show(errorMessage);
	}
	lastValue = String::Empty;
	errorMessage = String::Empty;
}
	   /////////////////////////////// Функции кнопок

private: System::Void deleteRow_Click(System::Object ^sender, System::EventArgs ^e) {
	if(!dataGridView1->RowCount) { MessageBox::Show("В таблице нет строк!"); dataGridView1->ClearSelection(); return; }
	if(dataGridView1->SelectedRows->Count > 0) {
		for(int i = dataGridView1->SelectedRows->Count - 1; i >= 0; i--) {
			int index = dataGridView1->SelectedRows[i]->Index;
			msclr::interop::marshal_context context;
			if(dataGridView1->Rows[index]->Cells[0]->FormattedValue->ToString() == String::Empty) {
				MessageBox::Show("Не могу удалить строку с индексом " + index);
				continue;
			}
			int id = stoi(context.marshal_as<std::wstring>(dataGridView1->Rows[index]->Cells[0]->Value->ToString()));
			delete hr->employees.at(id);
			hr->employees.erase(id);
			dataGridView1->Rows->RemoveAt(index);
		}
	}
	else MessageBox::Show("Выберите строки/ячейку для удаления");
	hr->Save();
	dataGridView1->ClearSelection();
}

private: System::Void enterRow_Click(System::Object ^sender, System::EventArgs ^e) {
	msclr::interop::marshal_context context;
	HR_department *NewHR = new HR_department();
	for(int i = 0; i < listBox1->Items->Count; i++) {
		wstring text = context.marshal_as<std::wstring>(listBox1->Items[i]->ToString());
		NewHR->set_diff(text);
	}
	*hr = *NewHR;
	listBox1->Items->Clear();
	Reload();
}


};
}
