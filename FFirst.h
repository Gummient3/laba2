#pragma once
#include <cmath>


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		void zeroFormat(System::Windows::Forms::TextBox^ txt) {
			if (txt->Text->Contains("00") && txt->TextLength == 2) {
				txt->Text = "0";
				txt->SelectionStart = txt->Text->Length;
			}
		}
		void formatfunc(System::Windows::Forms::KeyPressEventArgs^ e, System::Windows::Forms::TextBox^ txt) {

			if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
			{
				e->Handled = true;
			}
			if (e->KeyChar == ',' && txt->TextLength == 0) {
				txt->Text = "0,";
				//txt->SelectionStart = txt->Text->Length;
			}
			if (e->KeyChar == ',') {
				String^ s = txt->Text->ToString();
				int counter = 0;
				for (int x = 0; x < txt->TextLength; x++) {
					if (s[x] == ',') { counter++; }
				}
				if (counter < 1) {
					txt->Text += ",";
				}
				//txt->SelectionStart = txt->Text->Length;
				
			}
			try {
				if (txt->Text->ToString()[0] != '-' && txt->TextLength >= 1 && e->KeyChar == '-') {
					txt->Text = "-" + txt->Text;
					txt->SelectionStart = txt->Text->Length;


				}
				else if (txt->Text->ToString()[0] == '-' && txt->TextLength >= 1 && e->KeyChar == '-') {
					String^ tmptxt = "";

					for (int i = 1;;) {
						tmptxt += txt->Text[i];
						i++;
						if (i == txt->TextLength) {
							txt->Text = tmptxt;
							break;
						}
					}
					//txt->SelectionStart = txt->Text->Length;


				}
			}
			catch (...) {

			}

			


			

			if (e->KeyChar == 45 && txt->TextLength == 0) {
				String^ s = txt->Text->ToString();
				int counter = 0;
				for (int x = 0; x < txt->TextLength; x++) {
					if (s[x] == '-') { counter++; }
				}
				if (counter < 1) {
					txt->Text += "-";
				}
				//txt->SelectionStart = txt->Text->Length;
			}
			if (txt->Text == "-," && txt->TextLength == 2) {
				txt->Text = "-0,";
				//txt->SelectionStart = txt->Text->Length;
			}

			

			

			
			txt->SelectionStart = txt->Text->Length;

		}



		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf?gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		/// 
		
		//bool commaFunc(String str) {
			//if (str[0] == ',') {
				//this->txt1->Text = "0, "->ToString + str;
			//}

		//}

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnCLose;
	private: System::Windows::Forms::Button^ BtnReset;

	private: System::Windows::Forms::Button^ BtnAdd;
	private: System::Windows::Forms::Label^ lblOper;
	private: System::Windows::Forms::TextBox^ txt1;



	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::TextBox^ txt2;

	private: System::Windows::Forms::TextBox^ txtResult;

	private: System::Windows::Forms::Button^ btnMult;
	private: System::Windows::Forms::Button^ btnDvd;
	private: System::Windows::Forms::Button^ BtnSub;
private: System::Windows::Forms::Label^ label1;

		   







	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f?r die Designerunterst?tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge?ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BtnCLose = (gcnew System::Windows::Forms::Button());
			this->BtnReset = (gcnew System::Windows::Forms::Button());
			this->BtnAdd = (gcnew System::Windows::Forms::Button());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnDvd = (gcnew System::Windows::Forms::Button());
			this->BtnSub = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnCLose
			// 
			this->BtnCLose->Location = System::Drawing::Point(240, 202);
			this->BtnCLose->Name = L"BtnCLose";
			this->BtnCLose->Size = System::Drawing::Size(100, 30);
			this->BtnCLose->TabIndex = 0;
			this->BtnCLose->Text = L"???????";
			this->BtnCLose->UseVisualStyleBackColor = true;
			this->BtnCLose->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// BtnReset
			// 
			this->BtnReset->Location = System::Drawing::Point(240, 166);
			this->BtnReset->Name = L"BtnReset";
			this->BtnReset->Size = System::Drawing::Size(100, 30);
			this->BtnReset->TabIndex = 1;
			this->BtnReset->Text = L"?????";
			this->BtnReset->UseVisualStyleBackColor = true;
			this->BtnReset->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// BtnAdd
			// 
			this->BtnAdd->Location = System::Drawing::Point(240, 10);
			this->BtnAdd->Name = L"BtnAdd";
			this->BtnAdd->Size = System::Drawing::Size(100, 30);
			this->BtnAdd->TabIndex = 2;
			this->BtnAdd->Text = L"???????";
			this->BtnAdd->UseVisualStyleBackColor = true;
			this->BtnAdd->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(110, 10);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 16);
			this->lblOper->TabIndex = 3;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(110, 60);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(90, 20);
			this->txt1->TabIndex = 4;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->TextChanged += gcnew System::EventHandler(this, &Form1::txt1_text_changed);
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txt1_KeyPress);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(10, 60);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(80, 13);
			this->lbl1->TabIndex = 7;
			this->lbl1->Text = L"?????? ?????:";
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(10, 90);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(78, 13);
			this->lbl2->TabIndex = 8;
			this->lbl2->Text = L"?????? ?????:";
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl2->Click += gcnew System::EventHandler(this, &Form1::txt1_text_changed);
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(10, 120);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(62, 13);
			this->lblResult->TabIndex = 9;
			this->lblResult->Text = L"?????????:";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(110, 90);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(90, 20);
			this->txt2->TabIndex = 10;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->TextChanged += gcnew System::EventHandler(this, &Form1::txt2_text_changed);
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txt2_KeyPress);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(110, 120);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(90, 20);
			this->txtResult->TabIndex = 11;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtResult->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtResult_KeyPress);
			// 
			// btnMult
			// 
			this->btnMult->Location = System::Drawing::Point(240, 90);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(100, 30);
			this->btnMult->TabIndex = 13;
			this->btnMult->Text = L"????????";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// btnDvd
			// 
			this->btnDvd->Location = System::Drawing::Point(240, 130);
			this->btnDvd->Name = L"btnDvd";
			this->btnDvd->Size = System::Drawing::Size(100, 30);
			this->btnDvd->TabIndex = 14;
			this->btnDvd->Text = L"?????????";
			this->btnDvd->UseVisualStyleBackColor = true;
			this->btnDvd->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// BtnSub
			// 
			this->BtnSub->Location = System::Drawing::Point(240, 50);
			this->BtnSub->Name = L"BtnSub";
			this->BtnSub->Size = System::Drawing::Size(100, 30);
			this->BtnSub->TabIndex = 15;
			this->BtnSub->Text = L"???????";
			this->BtnSub->UseVisualStyleBackColor = true;
			this->BtnSub->Click += gcnew System::EventHandler(this, &Form1::BtnMin_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(75, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 16;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 244);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnSub);
			this->Controls->Add(this->btnDvd);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->BtnAdd);
			this->Controls->Add(this->BtnReset);
			this->Controls->Add(this->BtnCLose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) { //?????
		this->label1->Text = L"";
		this->lblOper->Text = L"";
		this->txt1->Text = L"";
		this->txt2->Text = L"";
		this->txtResult->Text = L"";

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // ????????
		try {
			this->label1->Text = "";
			double i1, i2;
			// int i3;
			this->lblOper->Text = L"????????";
			this->txtResult->Clear();
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			// i3 = i1 + i2;
			this->txtResult->Text = Convert::ToString(i1 + i2);

		}
		catch (...) {
			this->label1->Text = "??? ???? ??????\n ???? ?????????";
		}
		

	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) { 
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt1_text_changed(System::Object^ sender, System::EventArgs^ e) {

	if (txt1->Text == "") {
		this->label1->Text = "";
	}

	/*if (txt1->TextLength >= 3 && txt1->Text->ToString()[0] == '0' && txt1->Text->Contains(",")) {
		String^ tmptxt = "";

		for (int i = 1;;) {
			tmptxt += txt1->Text[i];
			i++;
			if (i == txt1->TextLength) {
				txt1->Text = tmptxt;
				break;
			}
		}
	}
	*/

	zeroFormat(this->txt1);
	
		
	}
private: System::Void txt2_text_changed(System::Object^ sender, System::EventArgs^ e) {
	if (txt1->Text == "") {
		this->label1->Text = "";
	}
	
	zeroFormat(this->txt2);
	

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		this->label1->Text = "";
		double i1, i2;
		// int i3;
		this->lblOper->Text = L"?????????";
		this->txtResult->Clear();
		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		// i3 = i1 + i2;
		this->txtResult->Text = Convert::ToString(i1 * i2);

	}
	catch (...) {
		this->label1->Text = "??? ???? ??????\n ???? ?????????";

	}

}



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		this->label1->Text = "";
		double i1, i2;
		// int i3;
		this->lblOper->Text = L"???????";
		this->txtResult->Clear(); 
		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		// i3 = i1 + i2;
		if (i2 != 0) {
			this->txtResult->Text = Convert::ToString((round((i1 / i2) * 100000)) / 100000);

		}
		else {
			this->label1->Text = "??????, ?????? \n?????? ?? ????";
		}
		
	}
	catch (...) {
		this->label1->Text = "??? ???? ??????\n ???? ?????????";
	}
	


	
	


}
private: System::Void BtnMin_Click(System::Object^ sender, System::EventArgs^ e) { 
	try {
		this->label1->Text = "";
		double i1, i2;
		// int i3;
		this->lblOper->Text = L"?????????";
		this->txtResult->Clear();
		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		// i3 = i1 + i2;
		this->txtResult->Text = Convert::ToString(i1 - i2);
	}
	catch (...) {
		this->label1->Text = "??? ???? ??????\n ???? ?????????";
	}
	
} /*
  int comp_11(String^ s) {
		   int counter = 0;
		   for (int x = 0; x < s.Length; x++) {
			   if (s[x] == ',') { counter++; }
			}
		   return counter;
	   }
  */
	   

private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // ?????? ????
	formatfunc(e, this->txt1);

	
	
}
private: System::Void txt2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // ?????? ????

	formatfunc(e, this->txt2);
}
private: System::Void txtResult_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // ?????? ????
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8 && e->KeyChar != 44)
	{
		e->Handled = true;
	}
	
}

};
}

//
//
//if (!(this->txt1->Text->Contains(","))) {
//		this->txt1->Text += ",";
//
//	}
//
//
//
