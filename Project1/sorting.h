#pragma once
#include "sorting.h";
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for sorting
	/// </summary>
	public ref class sorting : public System::Windows::Forms::Form
	{
		int op = 0;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;
	private: System::Windows::Forms::Timer^  timer6;
	public:
		sorting(void)
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
		~sorting()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(63, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(56, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(153, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(56, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(237, 54);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(56, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(327, 54);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(56, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(417, 54);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(56, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(512, 54);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(56, 20);
			this->textBox6->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(109, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Ascending Sorting";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &sorting::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(299, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Descending Sorting";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &sorting::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(493, 106);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &sorting::button3_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				47.94521F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				52.05479F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				64)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				77)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				77)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(163, 417);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(423, 28);
			this->tableLayoutPanel1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(74, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"DATA 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(160, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"DATA 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(244, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"DATA 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(333, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"DATA 4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(425, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"DATA 5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(519, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"DATA 6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(541, 448);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"6";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(475, 448);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(399, 448);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"4";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(324, 448);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(255, 448);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 17;
			this->label11->Text = L"2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(181, 448);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(83, 57);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"6";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(181, 57);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 26;
			this->label14->Text = L"5";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(255, 57);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 25;
			this->label15->Text = L"4";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(347, 57);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"3";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(439, 57);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 23;
			this->label17->Text = L"2";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(532, 58);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 22;
			this->label18->Text = L"1";
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &sorting::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 10;
			this->timer2->Tick += gcnew System::EventHandler(this, &sorting::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 10;
			this->timer3->Tick += gcnew System::EventHandler(this, &sorting::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 10;
			this->timer4->Tick += gcnew System::EventHandler(this, &sorting::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 10;
			this->timer5->Tick += gcnew System::EventHandler(this, &sorting::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Interval = 10;
			this->timer6->Tick += gcnew System::EventHandler(this, &sorting::timer6_Tick);
			// 
			// sorting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 486);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"sorting";
			this->Text = L"sorting";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 int b[7];
				 label13->Text = "";
				 label14->Text = "";
				 label15->Text = "";
				 label16->Text = "";
				 label17->Text = "";
				 label18->Text = "";
				 b[0] = int::Parse(textBox1->Text);
				 b[1] = int ::Parse(textBox2->Text);
				 b[2] = int::Parse(textBox3->Text);
				 b[3] = int ::Parse(textBox4->Text);
				 b[4] = int::Parse(textBox5->Text);
				 b[5] = int ::Parse(textBox6->Text);
				 int temp = b[0];
				 for (int i = 0; i < 6; i++)
				 {
					 for (int j = 0; j < 5; j++)
					 {
						 if (b[j] < b[j + 1])
						 {
							 temp = b[j];
							 b[j] = b[j + 1];
							 b[j + 1] = temp;
						 }

					 }

				 }
				 label13->Text = b[0] + "";
				 label14->Text = b[1] + "";
				 label15->Text = b[2] + "";
				 label16->Text = b[3] + "";
				 label17->Text = b[4] + "";
				 label18->Text = b[5] + "";

				 timer1->Enabled = true;
				 timer2->Enabled = true;
				 timer3->Enabled = true;
				 timer4->Enabled = true;
				 timer5->Enabled = true;
				 timer6->Enabled = true;
				 op = 2;

	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a[6];
			 label13->Text =  "";
			 label14->Text = "";
			 label15->Text =  "";
			 label16->Text = "";
			 label17->Text = "";
			 label18->Text = "";
			 a[0] = int::Parse(textBox1->Text);
			 a[1] = int ::Parse(textBox2->Text);
			 a[2] = int::Parse(textBox3->Text);
			 a[3] = int ::Parse(textBox4->Text);
			 a[4] = int::Parse(textBox5->Text);
			 a[5] = int ::Parse(textBox6->Text);
			 int temp = a[0];
			 for (int i = 0; i < 6; i++)
			 {
				 for (int j = 0; j < 5; j++)
				 {
					 if (a[j]>a[j + 1])
					 {
						 temp = a[j];
						 a[j] = a[j + 1];
						 a[j + 1] = temp;
					 }

				 }
				 
			 }
			 label13->Text = a[0] + "";
			 label14->Text = a[1] + "";
			 label15->Text = a[2] + "";
			 label16->Text = a[3] + "";
			 label17->Text = a[4] + "";
			 label18->Text = a[5] + "";
			 
			 timer1->Enabled = true;
			 timer2->Enabled = true;
			 timer3->Enabled = true;
			 timer4->Enabled = true;
			 timer5->Enabled = true;
			 timer6->Enabled = true;
			 op = 1;
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int l;
			 if (op == 1)
			 {
				 l = 180;
			 }
			 if (op == 2)
			 {
				 l = 530;
			 }
			 if (label13->Left < l)
			 {
				label13->Left = label13->Left + 1;
			 }
			 if (label13->Left > l)
			 {
				 label13->Left = label13->Left - 1;
			 }

			 if (label13->Top < 420)
			 {
				 label13->Top = label13->Top + 1;
			 }

}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {

			 int l;
			 if (op == 1)
			 {
				 l = 250;
			 }
			 if (op == 2)
			 {
				 l = 440;
			 }
			 if (label14->Left < l)
			 {
				 label14->Left = label14->Left + 1;
			 }
			 if (label14->Left > l)
			 {
				 label14->Left = label14->Left - 1;
			 }

			 if (label14->Top < 420)
			 {
				 label14->Top = label14->Top + 1;
			 }
}


private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int l;
			 if (op == 1)
			 {
				 l = 310;
			 }
			 if (op == 2)
			 {
				 l = 360;
			 }
			 if (label15->Left < l)
			 {
				 label15->Left = label15->Left + 1;
			 }
			 if (label15->Left > l)
			 {
				 label15->Left = label15->Left - 1;
			 }

			 if (label15->Top < 420)
			 {
				 label15->Top = label15->Top + 1;
			 }

}
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int l;
			 if (op == 1)
			 {
				 l = 360;
			 }
			 if (op == 2)
			 {
				 l = 310;
			 }
			 if (label16->Left < l)
			 {
				 label16->Left = label16->Left + 1;
			 }
			 if (label16->Left > l)
			 {
				 label16->Left = label16->Left - 1;
			 }

			 if (label16->Top < 420)
			 {
				 label16->Top = label16->Top + 1;
			 }

}
private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int l;
			 if (op == 1)
			 {
				 l = 440;
			 }
			 if (op == 2)
			 {
				 l = 250;
			 }
			 if (label17->Left < l)
			 {
				 label17->Left = label17->Left + 1;
			 }
			 if (label17->Left > l)
			 {
				 label17->Left = label17->Left - 1;
			 }

			 if (label17->Top < 420)
			 {
				 label17->Top = label17->Top + 1;
			 }
}
private: System::Void timer6_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int l;
			 if (op == 1)
			 {
				 l = 530;
			 }
			 if (op == 2)
			 {
				 l = 180;
			 }
			 if (label18->Left < l)
			 {
				 label18->Left = label18->Left + 1;
			 }
			 if (label18->Left > l)
			 {
				 label18->Left = label18->Left - 1;
			 }

			 if (label18->Top < 420)
			 {
				 label18->Top = label18->Top + 1;
			 }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 sorting ^ sr = gcnew sorting();
			 sr->Show();
			 sr->Hide();
}
};
}
