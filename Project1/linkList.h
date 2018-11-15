#pragma once

#include "linkList.h";
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for linkList
	/// </summary>
	public ref class linkList : public System::Windows::Forms::Form
	{
	public: int count = 0;
			int chk1 = 1;
			int chk2 = 1;
			int chk3 = 1;
	public:
		linkList(void)
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
		~linkList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(38, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(276, 27);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(174, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &linkList::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(409, 23);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &linkList::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(562, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"RESET";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &linkList::button3_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				67.70834F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				32.29167F)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(38, 387);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(98, 32);
			this->tableLayoutPanel1->TabIndex = 5;
			this->tableLayoutPanel1->Visible = false;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &linkList::tableLayoutPanel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"       1";
			this->label1->Visible = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				74.10714F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.89286F)));
			this->tableLayoutPanel2->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(196, 387);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(98, 32);
			this->tableLayoutPanel2->TabIndex = 6;
			this->tableLayoutPanel2->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 26);
			this->label2->TabIndex = 10;
			this->label2->Text = L"   1";
			this->label2->Visible = false;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				74.10714F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.89286F)));
			this->tableLayoutPanel3->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(366, 387);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(98, 32);
			this->tableLayoutPanel3->TabIndex = 7;
			this->tableLayoutPanel3->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(75, 2);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 26);
			this->label3->TabIndex = 11;
			this->label3->Text = L"   1";
			this->label3->Visible = false;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tableLayoutPanel4->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				74.10714F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.89286F)));
			this->tableLayoutPanel4->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(530, 387);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(98, 32);
			this->tableLayoutPanel4->TabIndex = 8;
			this->tableLayoutPanel4->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(75, 2);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 26);
			this->label4->TabIndex = 10;
			this->label4->Text = L"   1";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(52, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(79, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(51, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(94, 33);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"label8";
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &linkList::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 10;
			this->timer2->Tick += gcnew System::EventHandler(this, &linkList::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 10;
			this->timer3->Tick += gcnew System::EventHandler(this, &linkList::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 10;
			this->timer4->Tick += gcnew System::EventHandler(this, &linkList::timer4_Tick);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(52, 441);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Position 0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(207, 441);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Position 1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(392, 441);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Position 2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(562, 439);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Position 3";
			// 
			// linkList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 485);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Name = L"linkList";
			this->Text = L"linkList";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 switch (count)
			 {
			 case 0 :
				 label5->Text = textBox1->Text;
				 timer1->Enabled = true;

				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 break;
			 case 1:
				 label6->Text = textBox1->Text;
				 timer2->Enabled = true;

				 timer1->Enabled = false;
				 timer3->Enabled = false;
				 timer4->Enabled = false;
				 chk1 = 0;
				 break;

			 case 2:
				 label7->Text = textBox1->Text;
				 timer3->Enabled = true;
				 chk2 = 0;
				 timer1->Enabled = false;
				 timer4->Enabled = false;
				 timer2->Enabled = false;
				 break;
			 case 3:
				 label8->Text = textBox1->Text;
				 timer4->Enabled = true;
				 chk3 = 0;
				 timer2->Enabled = false;
				 timer3->Enabled = false;
				 timer1->Enabled = false;
				 break;

			 default:
				
					 break;
			
			 }
			 count = count + 1;

}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 tableLayoutPanel1->Visible = true;
			 
			 if (label5->Left < 60){
				 label5->Left = label5->Left + 5;
			 }
			 if (label5->Top < 387)
			 {
				 label5->Top = label5->Top + 5;
			 }
			 label1->Visible = true;
			 label1->Text = "null";
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 tableLayoutPanel2->Visible = true;

			 if (label6->Left < 210){
				 label6->Left = label6->Left + 5;
			 }
			 if (label6->Top < 387)
			 {
				 label6->Top = label6->Top + 5;
			 }
			 label2->Visible = true;
			 label1->Text = "1";
			 label2->Text = "null";
}
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 tableLayoutPanel3->Visible = true;

			 if (label7->Left < 380){
				 label7->Left = label7->Left + 5;
			 }
			 if (label7->Top < 387)
			 {
				 label7->Top = label7->Top + 5;
			 }
			 label3->Visible = true;
			 label1->Text = "1";
			 label2->Text = "2";
			 label3->Text = "null";
}
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
			 tableLayoutPanel4->Visible = true;

			 if (label8->Left < 550){
				 label8->Left = label8->Left + 5;
			 }
			 if (label8->Top < 387)
			 {
				 label8->Top = label8->Top + 5;
			 }
			 label4->Visible = true;
			 label1->Text = "1";
			 label2->Text = "2";
			 label3->Text = "3";
			 label4->Text = "null";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			int a = int::Parse(textBox2->Text);
			switch (a)
			{
			case 0:

				timer1->Enabled = false;
				tableLayoutPanel1->Visible = false;
				label1->Visible = false;
				label9->Visible = false;
				label5->Text = "";
				break;
			case 1:

				timer2->Enabled = false;
				tableLayoutPanel2->Visible = false;
				label2->Visible = false;
				label6->Text = "";
				label10->Visible = false;
				if (chk2 == 1 && chk3 == 1)
				{
					label1->Text = "null";
				}
				else if (chk2 == 1 && chk3 ==0)
				{

					label1->Text = "3";
				}
				else if (chk2 ==  0)
				{
					
					label1->Text = "2";
				}
				
				
				chk1 = 1;
				break;
			case 2:

				timer3->Enabled = false;
				label7->Text = "";
				tableLayoutPanel3->Visible = false;
				label3->Visible = false;
				label11->Visible = false;
				if (chk1 == 1 && chk3 ==1)
				{
					label1->Text = "null";
				}
				else if (chk1 == 0 && chk3 == 1)
				{
					label2->Text = "null";
				}
				else if (chk1 == 0 && chk3 == 0)
				{
					label2->Text = "3";
				}

				else if (chk1 == 1 )
				{
					label1->Text = "3";
				}
				chk2 = 1;

				break;
			case 3 :

				timer4->Enabled = false;
				label8->Text = "";
				tableLayoutPanel4->Visible = false;
				label4->Visible = false;
				label12->Visible = false;
				if (chk1 == 1 && chk2 == 1)
				{
					label1->Text = "null";
				}
				else if (chk2 == 1)
				{

					label2->Text = "null";
				}
				else {
					label3->Text = "null";
				}
				chk3 = 1;
				break;
			}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 linkList ^ ll = gcnew linkList();
			 ll->Show();
			 this->Hide();
}
};
}
