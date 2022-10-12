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
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
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

		   







	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
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
			this->SuspendLayout();
			// 
			// BtnCLose
			// 
			this->BtnCLose->Location = System::Drawing::Point(240, 202);
			this->BtnCLose->Name = L"BtnCLose";
			this->BtnCLose->Size = System::Drawing::Size(100, 30);
			this->BtnCLose->TabIndex = 0;
			this->BtnCLose->Text = L"Закрыть";
			this->BtnCLose->UseVisualStyleBackColor = true;
			this->BtnCLose->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// BtnReset
			// 
			this->BtnReset->Location = System::Drawing::Point(240, 166);
			this->BtnReset->Name = L"BtnReset";
			this->BtnReset->Size = System::Drawing::Size(100, 30);
			this->BtnReset->TabIndex = 1;
			this->BtnReset->Text = L"Сброс";
			this->BtnReset->UseVisualStyleBackColor = true;
			this->BtnReset->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// BtnAdd
			// 
			this->BtnAdd->Location = System::Drawing::Point(240, 10);
			this->BtnAdd->Name = L"BtnAdd";
			this->BtnAdd->Size = System::Drawing::Size(100, 30);
			this->BtnAdd->TabIndex = 2;
			this->BtnAdd->Text = L"Сложить";
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
			this->txt1->TextChanged += gcnew System::EventHandler(this, &Form1::lbl2_Click);
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txt1_KeyPress);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(10, 60);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(80, 13);
			this->lbl1->TabIndex = 7;
			this->lbl1->Text = L"Первое число:";
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
			this->lbl2->Text = L"Второе число:";
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl2->Click += gcnew System::EventHandler(this, &Form1::lbl2_Click);
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(10, 120);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(62, 13);
			this->lblResult->TabIndex = 9;
			this->lblResult->Text = L"Результат:";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(110, 90);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(90, 20);
			this->txt2->TabIndex = 10;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
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
			this->btnMult->Text = L"Умножить";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// btnDvd
			// 
			this->btnDvd->Location = System::Drawing::Point(240, 130);
			this->btnDvd->Name = L"btnDvd";
			this->btnDvd->Size = System::Drawing::Size(100, 30);
			this->btnDvd->TabIndex = 14;
			this->btnDvd->Text = L"Разделить";
			this->btnDvd->UseVisualStyleBackColor = true;
			this->btnDvd->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// BtnSub
			// 
			this->BtnSub->Location = System::Drawing::Point(240, 51);
			this->BtnSub->Name = L"BtnSub";
			this->BtnSub->Size = System::Drawing::Size(100, 30);
			this->BtnSub->TabIndex = 15;
			this->BtnSub->Text = L"Вычесть";
			this->BtnSub->UseVisualStyleBackColor = true;
			this->BtnSub->Click += gcnew System::EventHandler(this, &Form1::BtnMin_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 244);
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

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) { //ресет

		this->lblOper->Text = L"";
		this->txt1->Text = L"";
		this->txt2->Text = L"";
		this->txtResult->Text = L"";

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // сложение
		try {
			double i1, i2;
			// int i3;
			this->lblOper->Text = L"Сложение";
			this->txtResult->Clear();
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			// i3 = i1 + i2;
			this->txtResult->Text = Convert::ToString(i1 + i2);

		}
		catch (...) {

		}
		

	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) { 
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		double i1, i2;
		// int i3;
		this->lblOper->Text = L"Умножение";
		this->txtResult->Clear();
		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		// i3 = i1 + i2;
		this->txtResult->Text = Convert::ToString(i1 * i2);

	}
	catch (...) {

	}

}



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double i1, i2;
		// int i3;
		this->lblOper->Text = L"Деление";
		this->txtResult->Clear();
		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		// i3 = i1 + i2;
		if (i2 != 0) {
			this->txtResult->Text = Convert::ToString((round((i1 / i2) * 100000)) / 100000);

		}
		else {
			this->txtResult->Text = "Ошибка";
		}
		
	}
	catch (...) {

	}
	


	
	


}
private: System::Void BtnMin_Click(System::Object^ sender, System::EventArgs^ e) { 
	try {
		double i1, i2;
		// int i3;
		this->lblOper->Text = L"Вычитание";
		this->txtResult->Clear();
		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		// i3 = i1 + i2;
		this->txtResult->Text = Convert::ToString(i1 - i2);
	}
	catch (...) {

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
	   

private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // первое окно
	
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (e->KeyChar == ',' && this->txt1->TextLength == 0) {
		this->txt1->Text = "0,";
		txt1->SelectionStart = txt1->Text->Length;
	}
	if (e->KeyChar == ',') {
		String^ s = this->txt1->Text->ToString();
		int counter = 0;
		for (int x = 0; x < this->txt1->TextLength; x++) {
			if (s[x] == ',') { counter++; }
		}
		if (counter < 1) {
			this->txt1->Text += ",";
		}
		txt1->SelectionStart = txt1->Text->Length;
	}
	if (e->KeyChar == 45 && this->txt1->TextLength == 0) {
		String^ s = this->txt1->Text->ToString();
		int counter = 0;
		for (int x = 0; x < this->txt1->TextLength; x++) {
			if (s[x] == '-') { counter++; }
		}
		if (counter < 1) {
			this->txt1->Text += "-";
		}
		txt1->SelectionStart = txt1->Text->Length;
	}
}
private: System::Void txt2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // первое окно

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
	if (e->KeyChar == ',' && this->txt2->TextLength == 0) {
		this->txt2->Text = "0,";
		txt2->SelectionStart = txt2->Text->Length;
	}
	if (e->KeyChar == ',') {
		String^ s = this->txt2->Text->ToString();
		int counter = 0;
		for (int x = 0; x < this->txt2->TextLength; x++) {
			if (s[x] == ',') { counter++; }
		}
		if (counter < 1) {
			this->txt2->Text += ",";
		}
		txt2->SelectionStart = txt2->Text->Length;
	}
	if (e->KeyChar == 45 && this->txt2->TextLength == 0) {
		String^ s = this->txt2->Text->ToString();
		int counter = 0;
		for (int x = 0; x < this->txt2->TextLength; x++) {
			if (s[x] == '-') { counter++; }
		}
		if (counter < 1) {
			this->txt2->Text += "-";
		}
		txt2->SelectionStart = txt2->Text->Length;
	}
}
private: System::Void txtResult_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // третье окно
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
