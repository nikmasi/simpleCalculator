#pragma once

namespace firstGuiApp {

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
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress); //onemogucavanje unosa preko tastature

			// Onemoguæi promenu velièine prozora
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonAdd;

	protected:



	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;










	private: System::Windows::Forms::Button^ buttonSub;

	private: System::Windows::Forms::Button^ buttonMul;

	private: System::Windows::Forms::Button^ buttonDiv;

	private: System::Windows::Forms::Button^ buttonComma;

	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonEql;
	private: System::Windows::Forms::Button^ button00;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonSub = (gcnew System::Windows::Forms::Button());
			this->buttonMul = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->buttonComma = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonEql = (gcnew System::Windows::Forms::Button());
			this->button00 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->Location = System::Drawing::Point(43, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 41);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonAdd->Location = System::Drawing::Point(280, 215);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(73, 66);
			this->buttonAdd->TabIndex = 3;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button0->Location = System::Drawing::Point(43, 431);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(73, 66);
			this->button0->TabIndex = 4;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(43, 359);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 66);
			this->button1->TabIndex = 5;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Location = System::Drawing::Point(122, 359);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 66);
			this->button2->TabIndex = 6;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_2);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button3->Location = System::Drawing::Point(201, 359);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 66);
			this->button3->TabIndex = 7;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button4->Location = System::Drawing::Point(43, 287);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 66);
			this->button4->TabIndex = 8;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button5->Location = System::Drawing::Point(122, 287);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 66);
			this->button5->TabIndex = 9;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button6->Location = System::Drawing::Point(201, 287);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 66);
			this->button6->TabIndex = 10;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button7->Location = System::Drawing::Point(43, 215);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(73, 66);
			this->button7->TabIndex = 11;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button8->Location = System::Drawing::Point(122, 215);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(73, 66);
			this->button8->TabIndex = 12;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button9->Location = System::Drawing::Point(201, 215);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(73, 66);
			this->button9->TabIndex = 13;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// buttonSub
			// 
			this->buttonSub->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSub->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonSub->Location = System::Drawing::Point(280, 287);
			this->buttonSub->Name = L"buttonSub";
			this->buttonSub->Size = System::Drawing::Size(73, 66);
			this->buttonSub->TabIndex = 14;
			this->buttonSub->Text = L"-";
			this->buttonSub->UseVisualStyleBackColor = true;
			this->buttonSub->Click += gcnew System::EventHandler(this, &MyForm::buttonSub_Click);
			// 
			// buttonMul
			// 
			this->buttonMul->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMul->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonMul->Location = System::Drawing::Point(280, 359);
			this->buttonMul->Name = L"buttonMul";
			this->buttonMul->Size = System::Drawing::Size(73, 66);
			this->buttonMul->TabIndex = 15;
			this->buttonMul->Text = L"*";
			this->buttonMul->UseVisualStyleBackColor = true;
			this->buttonMul->Click += gcnew System::EventHandler(this, &MyForm::buttonMul_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDiv->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonDiv->Location = System::Drawing::Point(280, 143);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(73, 66);
			this->buttonDiv->TabIndex = 16;
			this->buttonDiv->Text = L"/";
			this->buttonDiv->UseVisualStyleBackColor = true;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &MyForm::buttonDiv_Click);
			// 
			// buttonComma
			// 
			this->buttonComma->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonComma->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonComma->Location = System::Drawing::Point(201, 431);
			this->buttonComma->Name = L"buttonComma";
			this->buttonComma->Size = System::Drawing::Size(73, 66);
			this->buttonComma->TabIndex = 17;
			this->buttonComma->Text = L",";
			this->buttonComma->UseVisualStyleBackColor = true;
			this->buttonComma->Click += gcnew System::EventHandler(this, &MyForm::buttonComma_Click);
			// 
			// buttonC
			// 
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonC->Location = System::Drawing::Point(43, 143);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(231, 66);
			this->buttonC->TabIndex = 18;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// buttonEql
			// 
			this->buttonEql->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEql->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonEql->Location = System::Drawing::Point(280, 431);
			this->buttonEql->Name = L"buttonEql";
			this->buttonEql->Size = System::Drawing::Size(73, 66);
			this->buttonEql->TabIndex = 19;
			this->buttonEql->Text = L"=";
			this->buttonEql->UseVisualStyleBackColor = true;
			this->buttonEql->Click += gcnew System::EventHandler(this, &MyForm::buttonEql_Click);
			// 
			// button00
			// 
			this->button00->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button00->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button00->Location = System::Drawing::Point(122, 431);
			this->button00->Name = L"button00";
			this->button00->Size = System::Drawing::Size(73, 66);
			this->button00->TabIndex = 20;
			this->button00->Text = L"00";
			this->button00->UseVisualStyleBackColor = true;
			this->button00->Click += gcnew System::EventHandler(this, &MyForm::button00_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(396, 529);
			this->Controls->Add(this->button00);
			this->Controls->Add(this->buttonEql);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonComma);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonMul);
			this->Controls->Add(this->buttonSub);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"simpleCalculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double first = 0;
		double second = 0;
		char oper;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Onemoguæi unos sa tastature
		e->Handled = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text=="" || (textBox1->Text!="0" && textBox1->Text!="-"))
		textBox1->Text += "0";
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += "1";
}
private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += "3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += "9";
}
private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		first = second = 0;
		oper = ' ';
}
private: System::Void buttonComma_Click(System::Object^ sender, System::EventArgs^ e) {
	int flag = true;
	String^ str = textBox1->Text;
	for (int i = 0; i < str->Length; i++) {
		if (str[i] == '-') {
			flag = false;
			break;
		}
	}
	if (textBox1->Text != "" && !textBox1->Text->Contains(".") && flag)
		textBox1->Text += ".";
}
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "-")
		textBox1->Clear();
	else if (textBox1->Text != "") {
		first = double::Parse(textBox1->Text);
		oper='+';
		textBox1->Clear();
	}

}
private: System::Void buttonSub_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" && !textBox1->Text->Contains("-") )
		textBox1->Text += "-";
	else if (textBox1->Text != "" && textBox1->Text!="-") {
		first = double::Parse(textBox1->Text);
		oper = '-';
		textBox1->Clear();
	}
}
private: System::Void buttonMul_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "-")
		textBox1->Clear();
	else if (textBox1->Text != "") {
		first = double::Parse(textBox1->Text);
		oper = '*';
		textBox1->Clear();
	}
}
private: System::Void buttonDiv_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "-")
		textBox1->Clear();
	else if (textBox1->Text != "") {
		first = double::Parse(textBox1->Text);
		oper = '/';
		textBox1->Clear();
	}
}

private: System::Void buttonEql_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox1->Text != "-")
		second = double::Parse(textBox1->Text);
	if (oper == '+')
		textBox1->Text = System::Convert::ToString(first + second);
	else if (oper=='-') 
		textBox1->Text = System::Convert::ToString(first - second);
	else if(oper=='*')
		textBox1->Text = System::Convert::ToString(first * second);
	else if (oper== '/')
		textBox1->Text = System::Convert::ToString(first / second);
	oper = ' ';
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button00_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || (textBox1->Text != "00" && textBox1->Text != "0" && textBox1->Text != "-")) {
		if(textBox1->Text=="")textBox1->Text += "0";
		else textBox1->Text += "00";
	}
}
};
}
