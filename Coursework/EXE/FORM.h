#pragma once

namespace EXE {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Summary for FORM
/// </summary>
public ref class FORM: public System::Windows::Forms::Form {
public:
	FORM(void) {
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}

protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~FORM() {
		if(components) {
			delete components;
		}
	}
private: System::Windows::Forms::TextBox ^textBox1;
private: System::Windows::Forms::Button ^button1;
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
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(158, 49);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(100, 22);
		this->textBox1->TabIndex = 0;
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(158, 105);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(100, 209);
		this->button1->TabIndex = 1;
		this->button1->Text = L"Делает ЛОХА";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &FORM::button1_Click);
		// 
		// FORM
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(421, 409);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->textBox1);
		this->Name = L"FORM";
		this->Text = L"FORM";
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
private: System::Void button1_Click(System::Object ^sender, System::EventArgs ^e) {
	textBox1->Text = L"ЛОХ";
}
};
}
