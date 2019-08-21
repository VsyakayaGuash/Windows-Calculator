#pragma once

namespace калькул€тор {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Label^  lblm;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->lblm = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->Location = System::Drawing::Point(163, 49);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(13, 13);
			this->lbl->TabIndex = 0;
			this->lbl->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(238, 77);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"9";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(182, 77);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"8";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(182, 133);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"5";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(126, 133);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 5;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(126, 189);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 6;
			this->button6->Text = L"1";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(238, 133);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 7;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(238, 189);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 8;
			this->button8->Text = L"3";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(182, 189);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 9;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(238, 245);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 10;
			this->button10->Text = L",";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::btnt_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(126, 245);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(106, 50);
			this->button11->TabIndex = 11;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(14, 133);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(106, 50);
			this->button12->TabIndex = 12;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::btnminus_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(14, 77);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(106, 50);
			this->button13->TabIndex = 13;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::btnplus_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(14, 245);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(106, 50);
			this->button14->TabIndex = 14;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::btndel_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(14, 189);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(106, 50);
			this->button15->TabIndex = 15;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::btnumn_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(294, 133);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(106, 50);
			this->button16->TabIndex = 16;
			this->button16->Text = L"CE";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::btnce_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(294, 77);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(106, 50);
			this->button17->TabIndex = 17;
			this->button17->Text = L"C";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::btnc_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(294, 189);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(106, 50);
			this->button18->TabIndex = 18;
			this->button18->Text = L"+ -";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::btnplusminus_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(294, 245);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(106, 50);
			this->button19->TabIndex = 19;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::btnravn_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(406, 133);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(106, 50);
			this->button20->TabIndex = 20;
			this->button20->Text = L"MR";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::btnmr_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(406, 77);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(106, 50);
			this->button21->TabIndex = 21;
			this->button21->Text = L"MS";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::btnms_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(406, 189);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(106, 50);
			this->button22->TabIndex = 22;
			this->button22->Text = L"MC";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::btnmc_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(406, 245);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(50, 50);
			this->button23->TabIndex = 23;
			this->button23->Text = L"M+";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::btnmplus_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(462, 245);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(50, 50);
			this->button24->TabIndex = 24;
			this->button24->Text = L"M-";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::btnmminus_Click);
			// 
			// lblm
			// 
			this->lblm->AutoSize = true;
			this->lblm->Location = System::Drawing::Point(403, 49);
			this->lblm->Name = L"lblm";
			this->lblm->Size = System::Drawing::Size(0, 13);
			this->lblm->TabIndex = 25;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(547, 343);
			this->Controls->Add(this->lblm);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbl);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int f1, f2, f3, f4 ;
		float b, z, save;
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				f1 = 0;
				b = 0;
				f2 = 0;
				f3 = 0;
				f4 = 0;
				z = 0;
				save = 0;
			 }
	private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if ((lbl->Text == "0") || (f3 != 0))
		{
			lbl->Text = ((Button^)sender)->Text;
			f3 = 0;
		}
		else
		{
			if ((f4 != 0) && (f4 != f2))
			{
				lbl->Text = ((Button^)sender)->Text;
				f4 = 0;
				z = 0;
			}
			else
				lbl->Text = lbl->Text + ((Button^)sender)->Text;
		}
	}
	private: System::Void btnc_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		lbl->Text = "0";
		f1 = 0;
		b = 0;
		f2 = 0;
		f3 = 0;
		f4 = 0;
		z = 0;
	}
	private: System::Void btnce_Click(System::Object^  sender, System::EventArgs^  e)
	{
		lbl->Text = "0";
		f1 = 0;
	}
	private: System::Void btnt_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if ((f1 ==0) || !(lbl->Text->Contains(",")))
		{
			lbl->Text = lbl->Text + ",";
			f1 = 1;
		}
	}
	private: System::Void btnplusminus_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String^ s="";
		if (lbl->Text->Contains("-"))
		{
			s=lbl->Text;
			 lbl->Text= s->Substring (1);
		}
		else
			lbl->Text = "-" + lbl->Text;
	}
	private: System::Void btnplus_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (f2 == 0)
		{
			f1 = 0;
			f2 = 1;
			f4 = f2;
			f3 = 1;
			b = Convert::ToSingle(lbl->Text);
		}
		else
		{
			switch (f2)
			{
				case 1:
					b += Convert::ToSingle(lbl->Text);
					lbl->Text = Convert::ToString(b);
					break;
				case 2:
					b = b - Convert::ToSingle(lbl->Text);
					lbl->Text = Convert::ToString(b);
					break;
				case 3:
					b = b * Convert::ToSingle(lbl->Text);
					lbl->Text = Convert::ToString(b);
					break;
				case 4:
					b = b / Convert::ToSingle(lbl->Text);
					lbl->Text = Convert::ToString(b);
					break;
			}
			f2 = 1;
			f3 = 1;
			f1 = 0;
			f4 = f2;
		}
	}
	private: System::Void btnminus_Click(System::Object^  sender, System::EventArgs^  e)
	{

		if (f2 == 0)
		{
			f1 = 0;
			f2 = 2;
			f3 = 1;
			f4 = f2;
			b = Convert::ToSingle(lbl->Text);
		}
		else
		{
			switch (f2)
			{
			case 1:
				b += Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			case 2:
				b = b - Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			case 3:
				b = b * Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			case 4:
				b = b / Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			}
			f2 = 2;
			f3 = 1;
			f1 = 0;
			f4 = f2;
		}
	}
	private: System::Void btnumn_Click(System::Object^  sender, System::EventArgs^  e) 
	{

		if (f2 == 0)
		{
			f1 = 0;
			f2 = 3;
			f3 = 1;
			f4 = f2;
			b = Convert::ToSingle(lbl->Text);
		}
		else
		{
			switch (f2)
			{
			case 1:
				b += Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			case 2:
				b = b - Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			case 3:
				b = b * Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			case 4:
				b = b / Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			}
			f2 = 3;
			f3 = 1;
			f1 = 0;
			f4 = f2;
		}
	}
	private: System::Void btndel_Click(System::Object^  sender, System::EventArgs^  e) 
	{

		if (f2 == 0)
		{
			f1 = 0;
			f2 = 4;
			f3 = 1;
			f4 = f2;
			b = Convert::ToSingle(lbl->Text);
		}
		else
		{
			switch (f2)
			{
			case 1:
				b += Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			case 2:
				b = b - Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			case 3:
				b = b * Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			case 4:
				b = b / Convert::ToSingle(lbl->Text);
				lbl->Text = Convert::ToString(b);
				break;
			}
			f2 = 4;
			f3 = 1;
			f1 = 0;
			f4 = f2;
		}
	}
	private: System::Void btnravn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (f2 != 0)
		{
			f2 = 0;
			z = Convert::ToSingle(lbl->Text);
		}
		switch (f4)
		{
			case 1:
				b = b + z;
				lbl->Text = Convert::ToString(b);
				break;
			case 2:
				b = b - z;
				lbl->Text = Convert::ToString(b);
				break;
			case 3:
				b = b * z;
				lbl->Text = Convert::ToString(b);
				break;
			case 4:
				b = b / z;
				lbl->Text = Convert::ToString(b);
				break;
		}

	}
	private: System::Void btnms_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		save = Convert::ToSingle(lbl->Text);
		if (save != 0)
			lblm->Text = "M";
		else
			lblm->Text = "";
	}
	private: System::Void btnmc_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		save = 0;
		lblm->Text = "";
	}
	private: System::Void btnmr_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		lbl->Text = Convert::ToString(save);
		f1 = 1;
		f3 = 1;
	}
	private: System::Void btnmplus_Click(System::Object^  sender, System::EventArgs^  e)
	{
		save += Convert::ToSingle(lbl->Text);
		if (save != 0)
			lblm->Text = "M";
		else
			lblm->Text = "";
	}
	private: System::Void btnmminus_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		save -= Convert::ToSingle(lbl->Text);
		if (save != 0)
			lblm->Text = "M";
		else
			lblm->Text = "";
	}

	};
}

