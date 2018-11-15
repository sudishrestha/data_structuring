#pragma once
#include "tree.h";
#include "stacks.h";
#include "queue.h";
#include "sorting.h";
#include "linkList.h";
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

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
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(146, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Stack";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(572, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Queue";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(146, 297);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 48);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Tree";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(572, 297);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(135, 48);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Sorting";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(358, 211);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(135, 48);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Linked  List";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 498);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Name = L"MyForm";
			this->Text = L"INDEX PAGE";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 stacks ^ frm1 = gcnew stacks();
				 frm1->Show();
				// this->Hide();


	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 tree ^ frm2 = gcnew tree();
			 frm2->Show();
			// this->Hide();

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 queue ^ frm2 = gcnew queue();
			 frm2->Show();
			// this->Hide();

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 sorting ^ sor = gcnew sorting();
			 sor->Show();
			 //this->Hide();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 linkList ^ ll = gcnew linkList();
			 ll->Show();
			 //this->Hide();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
