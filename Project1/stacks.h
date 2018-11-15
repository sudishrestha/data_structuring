#pragma once
#include "stacks.h";
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for stacks
	/// </summary>
	public ref class stacks : public System::Windows::Forms::Form
	{
	public: int count = 0;
	public:
		stacks(void)
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
		~stacks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
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
	private: System::Windows::Forms::Timer^  timer5;
	private: System::Windows::Forms::Timer^  timer6;
	private: System::Windows::Forms::Timer^  timer7;
	private: System::Windows::Forms::Timer^  timer8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer7 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer8 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(81, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"DATA";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"PUSH";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &stacks::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(207, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"POP";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &stacks::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(336, 93);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"RESET";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &stacks::button3_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(700, 93);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.42268F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 52.57732F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 51)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 44)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 43)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(47, 308);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(753, 376);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(753, 330);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(753, 287);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(753, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(753, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(753, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"6";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(753, 103);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"7";
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &stacks::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 50;
			this->timer2->Tick += gcnew System::EventHandler(this, &stacks::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 50;
			this->timer3->Tick += gcnew System::EventHandler(this, &stacks::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 50;
			this->timer4->Tick += gcnew System::EventHandler(this, &stacks::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 50;
			this->timer5->Tick += gcnew System::EventHandler(this, &stacks::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Interval = 50;
			this->timer6->Tick += gcnew System::EventHandler(this, &stacks::timer6_Tick);
			// 
			// timer7
			// 
			this->timer7->Interval = 50;
			this->timer7->Tick += gcnew System::EventHandler(this, &stacks::timer7_Tick);
			// 
			// timer8
			// 
			this->timer8->Interval = 50;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(89, 41);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(130, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(130, 43);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(130, 43);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(138, 43);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 17;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(130, 38);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 18;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(130, 38);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 19;
			this->label15->Text = L"label15";
			// 
			// stacks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(786, 470);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"stacks";
			this->Text = L"stacks";
			this->Load += gcnew System::EventHandler(this, &stacks::stacks_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void stacks_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 switch (count)
			 {
			 case 0:
				 timer1->Enabled = true;
				 label9->Text = textBox1->Text;
				 break;
			 case 1:
				 timer2->Enabled = true;
				 label10->Text = textBox1->Text;
				 break;
			 case 2:
				 timer3->Enabled = true;
				 label11->Text = textBox1->Text;
				 break;
			 case 3:
		 		 timer4->Enabled = true;
				 label12->Text = textBox1->Text;
				 break;
			 case 4:
				 timer5->Enabled = true;
				 label13->Text = textBox1->Text;
				 break;
			 case 5:
				 timer6->Enabled = true;
				 label14->Text = textBox1->Text;
				 break;
			 case 6:
				 timer7->Enabled = true;
				 label15->Text = textBox1->Text;
				 break;
			 default:
				 break;
			 }
			// textBox1->Text = "";
			 if (count < 7)
			 {
				 count = count + 1;
			 }

}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (label9->Left < 715){
				 label9->Left = label9->Left + 5;
			 }
			 if (label9->Top < 370)
			 {
				 label9->Top = label9->Top + 5;
			 }
			 
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 switch (count)
			 {
			 case 0:
				 timer1->Enabled = false;
				 label9->Text ="";
				 label9->Left = 110;
				 label9->Top = 50;
				 
				 break;
			 case 1:
				 timer2->Enabled = false;
				 label10->Text = "";
				 label10->Left = 110;
				 label10->Top = 50;
				 break;
			 case 2:
				 timer3->Enabled = false;
				 label11->Text = "";
				 label11->Left = 110;
				 label11->Top = 50;
				 break;
			 case 3:
				 timer4->Enabled = false;
				 label12->Text = "";
				 label12->Left = 110;
				 label12->Top = 50;
				 break;
			 case 4:
				 timer5->Enabled = false;
				 label13->Text = "";
				 label13->Left = 110;
				 label13->Top = 50;
				 break;
			 case 5:
				 timer6->Enabled = false;
				 label14->Text = "";
				 label14->Left = 110;
				 label14->Top = 50;
				 break;
			 case 6:
				 timer7->Enabled = false;
				 label15->Text = "";
				 label15->Left = 110;
				 label15->Top = 50;
				 break;
			 default:
				 break;
			 }
			 // textBox1->Text = "";
			 if (count > 0)
			 {
				 count = count - 1;
			 }
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (label10->Left < 715){
				 label10->Left = label10->Left + 5;
			 }
			 if (label10->Top < 320)
			 {
				 label10->Top = label10->Top + 5;
			 }


}
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (label11->Left < 715){
				 label11->Left = label11->Left + 5;
			 }
			 if (label11->Top < 280)
			 {
				 label11->Top = label11->Top + 5;
			 }
}
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (label12->Left < 715){
				 label12->Left = label12->Left + 5;
			 }
			 if (label12->Top < 240)
			 {
				 label12->Top = label12->Top + 5;
			 }
}
private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (label13->Left < 715){
				 label13->Left = label13->Left + 5;
			 }
			 if (label13->Top < 190)
			 {
				 label13->Top = label13->Top + 5;
			 }

}
private: System::Void timer6_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (label14->Left < 715){
				 label14->Left = label14->Left + 5;
			 }
			 if (label14->Top < 140)
			 {
				 label14->Top = label14->Top + 5;
			 }

}
private: System::Void timer7_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (label15->Left < 715){
				 label15->Left = label15->Left + 5;
			 }
			 if (label15->Top < 110)
			 {
				 label15->Top = label15->Top + 5;
			 }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 stacks ^ss = gcnew stacks();
			 ss->Show();
			 ss->Hide();
}
};
}
