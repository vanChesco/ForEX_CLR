#pragma once

namespace ForEXCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ c_zak;
	private: System::Windows::Forms::Label^ c_k_label;
	private: System::Windows::Forms::Label^ c_s_label;
	private: System::Windows::Forms::NumericUpDown^ c_sp;
	private: System::Windows::Forms::Label^ inw_label;
	private: System::Windows::Forms::Label^ Wynik_label;
	private: System::Windows::Forms::NumericUpDown^ inwestycja;

	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ zysk;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ wartosc;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;




	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->c_zak = (gcnew System::Windows::Forms::NumericUpDown());
			this->c_k_label = (gcnew System::Windows::Forms::Label());
			this->c_s_label = (gcnew System::Windows::Forms::Label());
			this->c_sp = (gcnew System::Windows::Forms::NumericUpDown());
			this->inw_label = (gcnew System::Windows::Forms::Label());
			this->Wynik_label = (gcnew System::Windows::Forms::Label());
			this->inwestycja = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->wartosc = (gcnew System::Windows::Forms::NumericUpDown());
			this->zysk = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_zak))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_sp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inwestycja))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wartosc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zysk))->BeginInit();
			this->SuspendLayout();
			// 
			// c_zak
			// 
			this->c_zak->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->c_zak->DecimalPlaces = 4;
			this->c_zak->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(238)));
			this->c_zak->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->c_zak->Location = System::Drawing::Point(9, 39);
			this->c_zak->Name = L"c_zak";
			this->c_zak->Size = System::Drawing::Size(65, 20);
			this->c_zak->TabIndex = 0;
			this->c_zak->Tag = L"";
			this->c_zak->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->c_zak->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 38858, 0, 0, 262144 });
			this->c_zak->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// c_k_label
			// 
			this->c_k_label->AutoSize = true;
			this->c_k_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(238)));
			this->c_k_label->Location = System::Drawing::Point(8, 21);
			this->c_k_label->Name = L"c_k_label";
			this->c_k_label->Size = System::Drawing::Size(70, 13);
			this->c_k_label->TabIndex = 1;
			this->c_k_label->Text = L"Cena zakupu";
			// 
			// c_s_label
			// 
			this->c_s_label->AutoSize = true;
			this->c_s_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(238)));
			this->c_s_label->Location = System::Drawing::Point(101, 20);
			this->c_s_label->Name = L"c_s_label";
			this->c_s_label->Size = System::Drawing::Size(82, 13);
			this->c_s_label->TabIndex = 2;
			this->c_s_label->Text = L"Cena sprzedaży";
			// 
			// c_sp
			// 
			this->c_sp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->c_sp->DecimalPlaces = 4;
			this->c_sp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(238)));
			this->c_sp->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->c_sp->Location = System::Drawing::Point(102, 38);
			this->c_sp->Name = L"c_sp";
			this->c_sp->Size = System::Drawing::Size(65, 20);
			this->c_sp->TabIndex = 3;
			this->c_sp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->c_sp->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 39, 0, 0, 65536 });
			this->c_sp->ValueChanged += gcnew System::EventHandler(this, &MyForm::c_sp_ValueChanged);
			// 
			// inw_label
			// 
			this->inw_label->AutoSize = true;
			this->inw_label->Location = System::Drawing::Point(11, 20);
			this->inw_label->Name = L"inw_label";
			this->inw_label->Size = System::Drawing::Size(85, 13);
			this->inw_label->TabIndex = 4;
			this->inw_label->Text = L"Zainwestowano:";
			this->inw_label->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Wynik_label
			// 
			this->Wynik_label->AutoSize = true;
			this->Wynik_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->Wynik_label->Location = System::Drawing::Point(6, 22);
			this->Wynik_label->Name = L"Wynik_label";
			this->Wynik_label->Size = System::Drawing::Size(47, 13);
			this->Wynik_label->TabIndex = 5;
			this->Wynik_label->Text = L"Wartość";
			// 
			// inwestycja
			// 
			this->inwestycja->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inwestycja->Location = System::Drawing::Point(102, 18);
			this->inwestycja->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->inwestycja->Name = L"inwestycja";
			this->inwestycja->Size = System::Drawing::Size(80, 20);
			this->inwestycja->TabIndex = 6;
			this->inwestycja->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inwestycja->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150000, 0, 0, 0 });
			this->inwestycja->ValueChanged += gcnew System::EventHandler(this, &MyForm::inwestycja_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->c_k_label);
			this->groupBox1->Controls->Add(this->c_zak);
			this->groupBox1->Controls->Add(this->c_s_label);
			this->groupBox1->Controls->Add(this->c_sp);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(14, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox1->Size = System::Drawing::Size(195, 69);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Spread";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(167, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"PLN";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(74, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PLN";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(162, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"PLN";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(183, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"PLN";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->wartosc);
			this->groupBox2->Controls->Add(this->zysk);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->Wynik_label);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(14, 127);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(194, 82);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Po sprzedaży";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(162, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"PLN";
			// 
			// wartosc
			// 
			this->wartosc->BackColor = System::Drawing::SystemColors::Menu;
			this->wartosc->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->wartosc->DecimalPlaces = 2;
			this->wartosc->InterceptArrowKeys = false;
			this->wartosc->Location = System::Drawing::Point(59, 20);
			this->wartosc->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->wartosc->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, System::Int32::MinValue });
			this->wartosc->Name = L"wartosc";
			this->wartosc->ReadOnly = true;
			this->wartosc->Size = System::Drawing::Size(101, 16);
			this->wartosc->TabIndex = 10;
			this->wartosc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->wartosc->ThousandsSeparator = true;
			// 
			// zysk
			// 
			this->zysk->BackColor = System::Drawing::SystemColors::Menu;
			this->zysk->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->zysk->DecimalPlaces = 2;
			this->zysk->InterceptArrowKeys = false;
			this->zysk->Location = System::Drawing::Point(59, 48);
			this->zysk->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->zysk->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, System::Int32::MinValue });
			this->zysk->Name = L"zysk";
			this->zysk->ReadOnly = true;
			this->zysk->Size = System::Drawing::Size(101, 16);
			this->zysk->TabIndex = 9;
			this->zysk->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->zysk->ThousandsSeparator = true;
			this->zysk->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Zysk";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(110, 216);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(99, 13);
			this->linkLabel1->TabIndex = 12;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"2020 ® vanChesco";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(224, 238);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->inwestycja);
			this->Controls->Add(this->inw_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->Text = L"Forex";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_zak))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_sp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inwestycja))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wartosc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zysk))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		zysk->Value = System::Decimal::operator-(inwestycja->Value * (c_sp->Value / c_zak->Value), inwestycja->Value);
		wartosc->Value = inwestycja->Value * (c_sp->Value / c_zak->Value);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{}
	private: System::Void wartosc_po_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//		wartosc_po->Text = c_zak->Value;
	}

	private: System::Void c_sp_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		double z, w;

		z = double(System::Decimal::operator-(inwestycja->Value * (c_sp->Value / c_zak->Value))) - double(inwestycja->Value);
		w = double(inwestycja->Value * (c_sp->Value / c_zak->Value));

		wartosc->Value = (System::Decimal)w;
		zysk->Value = (System::Decimal)z;
	}
	private: System::Void inwestycja_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		zysk->Value = System::Decimal::operator-(inwestycja->Value * (c_sp->Value / c_zak->Value), inwestycja->Value);
		wartosc->Value = inwestycja->Value * (c_sp->Value / c_zak->Value);
	}
};
}