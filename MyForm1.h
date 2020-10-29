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
	private: System::Windows::Forms::Label^ lb_Inwestycja;

	private: System::Windows::Forms::Label^ lb_Wartosc;

	private: System::Windows::Forms::NumericUpDown^ inwestycja;

	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ lb_Zysk;



	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ w_Wartosc;

	private: System::Windows::Forms::Label^ w_Zysk;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ w_walucie;

	private: System::Windows::Forms::Label^ label7;





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
			this->lb_Inwestycja = (gcnew System::Windows::Forms::Label());
			this->lb_Wartosc = (gcnew System::Windows::Forms::Label());
			this->inwestycja = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->w_Zysk = (gcnew System::Windows::Forms::Label());
			this->w_Wartosc = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lb_Zysk = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->w_walucie = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_zak))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_sp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inwestycja))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->w_walucie))->BeginInit();
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
			// lb_Inwestycja
			// 
			this->lb_Inwestycja->AutoSize = true;
			this->lb_Inwestycja->Location = System::Drawing::Point(11, 20);
			this->lb_Inwestycja->Name = L"lb_Inwestycja";
			this->lb_Inwestycja->Size = System::Drawing::Size(85, 13);
			this->lb_Inwestycja->TabIndex = 4;
			this->lb_Inwestycja->Text = L"Zainwestowano:";
			// 
			// lb_Wartosc
			// 
			this->lb_Wartosc->AutoSize = true;
			this->lb_Wartosc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->lb_Wartosc->Location = System::Drawing::Point(6, 22);
			this->lb_Wartosc->Name = L"lb_Wartosc";
			this->lb_Wartosc->Size = System::Drawing::Size(47, 13);
			this->lb_Wartosc->TabIndex = 5;
			this->lb_Wartosc->Text = L"Wartość";
			// 
			// inwestycja
			// 
			this->inwestycja->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inwestycja->ForeColor = System::Drawing::SystemColors::WindowText;
			this->inwestycja->Location = System::Drawing::Point(102, 18);
			this->inwestycja->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->inwestycja->Name = L"inwestycja";
			this->inwestycja->Size = System::Drawing::Size(80, 20);
			this->inwestycja->TabIndex = 6;
			this->inwestycja->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inwestycja->ThousandsSeparator = true;
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
			this->groupBox1->Location = System::Drawing::Point(14, 73);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox1->Size = System::Drawing::Size(199, 69);
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
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(159, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
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
			this->groupBox2->Controls->Add(this->w_Zysk);
			this->groupBox2->Controls->Add(this->w_Wartosc);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->lb_Zysk);
			this->groupBox2->Controls->Add(this->lb_Wartosc);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(14, 148);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(199, 78);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Po sprzedaży";
			// 
			// w_Zysk
			// 
			this->w_Zysk->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->w_Zysk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->w_Zysk->Location = System::Drawing::Point(82, 46);
			this->w_Zysk->Name = L"w_Zysk";
			this->w_Zysk->Size = System::Drawing::Size(68, 20);
			this->w_Zysk->TabIndex = 14;
			this->w_Zysk->Text = L"0";
			this->w_Zysk->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// w_Wartosc
			// 
			this->w_Wartosc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->w_Wartosc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(238)));
			this->w_Wartosc->Location = System::Drawing::Point(93, 22);
			this->w_Wartosc->Name = L"w_Wartosc";
			this->w_Wartosc->Size = System::Drawing::Size(68, 13);
			this->w_Wartosc->TabIndex = 13;
			this->w_Wartosc->Text = L"0";
			this->w_Wartosc->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(148, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"PLN";
			// 
			// lb_Zysk
			// 
			this->lb_Zysk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->lb_Zysk->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lb_Zysk->Location = System::Drawing::Point(6, 46);
			this->lb_Zysk->Name = L"lb_Zysk";
			this->lb_Zysk->Size = System::Drawing::Size(67, 20);
			this->lb_Zysk->TabIndex = 5;
			this->lb_Zysk->Text = L"Zysk";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(109, 229);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(99, 13);
			this->linkLabel1->TabIndex = 12;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"2020 ® vanChesco";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(183, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"USD";
			// 
			// w_walucie
			// 
			this->w_walucie->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->w_walucie->ForeColor = System::Drawing::SystemColors::WindowText;
			this->w_walucie->Location = System::Drawing::Point(102, 47);
			this->w_walucie->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->w_walucie->Name = L"w_walucie";
			this->w_walucie->Size = System::Drawing::Size(80, 20);
			this->w_walucie->TabIndex = 14;
			this->w_walucie->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->w_walucie->ThousandsSeparator = true;
			this->w_walucie->ValueChanged += gcnew System::EventHandler(this, &MyForm::w_walucie_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"W walucie:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(224, 249);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->w_walucie);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->inwestycja);
			this->Controls->Add(this->lb_Inwestycja);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->w_walucie))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void oblicz()
		{
			System::Decimal wartosc = inwestycja->Value * (c_sp->Value / c_zak->Value);
			System::Decimal zysk = System::Decimal::operator-(inwestycja->Value * (c_sp->Value / c_zak->Value), inwestycja->Value);
			w_walucie->Value = inwestycja->Value / c_zak->Value;

			if (zysk > 0)
			{
				lb_Zysk->Text = "Zysk";
				lb_Zysk->ForeColor = Color::Green;
				w_Zysk->ForeColor = Color::Green;
				label6->ForeColor = Color::Green;
			}
			else
			{
				lb_Zysk->Text = "Strata";
				lb_Zysk->ForeColor = Color::Red;
				w_Zysk->ForeColor = Color::Red;
				label6->ForeColor = Color::Red;
			}
			w_Wartosc->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * wartosc) / 100);
			w_Zysk->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * zysk) / 100);
		}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}

	private: System::Void c_sp_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}
	private: System::Void inwestycja_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}

private: System::Void w_walucie_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	inwestycja->Value = c_zak->Value * w_walucie->Value;
}
};
}