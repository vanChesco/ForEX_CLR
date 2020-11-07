#pragma once
#include <fstream>

namespace ForEXCLR 
{
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

	private: System::Windows::Forms::NumericUpDown^ c_zak_1;
	private: System::Windows::Forms::NumericUpDown^ c_zak_2;
	private: System::Windows::Forms::NumericUpDown^ inwest_1;
	private: System::Windows::Forms::NumericUpDown^ inwest_2;
	private: System::Windows::Forms::NumericUpDown^ c_sp;
	private: System::Windows::Forms::NumericUpDown^ w_walucie_1;
	private: System::Windows::Forms::NumericUpDown^ w_walucie_2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ c_k_label;
	private: System::Windows::Forms::Label^ c_s_label;
	private: System::Windows::Forms::Label^ lb_Inwestycja;
	private: System::Windows::Forms::Label^ lb_Wartosc;
	private: System::Windows::Forms::Label^ lb_Procent;


	private: System::Windows::Forms::Label^ lb_PLN;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ w_Wartosc;
	private: System::Windows::Forms::Label^ w_Zysk;
	private: System::Windows::Forms::GroupBox^ gr_ZS;

	private: System::Windows::Forms::Label^ lb_SumaUSD;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lb_SumaPLN;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lb_Srednia;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ lb_prc;
	private: System::Windows::Forms::TabControl^ tb_Karty;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::NumericUpDown^ c_USDEUR;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::NumericUpDown^ c_EURPLN;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ wart_PLN;
	private: System::Windows::Forms::Label^ wart_EUR;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::GroupBox^ groupBox3;


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
			this->c_zak_1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->c_k_label = (gcnew System::Windows::Forms::Label());
			this->c_s_label = (gcnew System::Windows::Forms::Label());
			this->c_sp = (gcnew System::Windows::Forms::NumericUpDown());
			this->lb_Inwestycja = (gcnew System::Windows::Forms::Label());
			this->lb_Wartosc = (gcnew System::Windows::Forms::Label());
			this->inwest_1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->w_Wartosc = (gcnew System::Windows::Forms::Label());
			this->w_Zysk = (gcnew System::Windows::Forms::Label());
			this->lb_PLN = (gcnew System::Windows::Forms::Label());
			this->lb_Procent = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->w_walucie_1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->w_walucie_2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->c_zak_2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->inwest_2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->gr_ZS = (gcnew System::Windows::Forms::GroupBox());
			this->lb_prc = (gcnew System::Windows::Forms::Label());
			this->lb_Srednia = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lb_SumaUSD = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lb_SumaPLN = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tb_Karty = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->wart_EUR = (gcnew System::Windows::Forms::Label());
			this->wart_PLN = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->c_EURPLN = (gcnew System::Windows::Forms::NumericUpDown());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->c_USDEUR = (gcnew System::Windows::Forms::NumericUpDown());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_zak_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_sp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inwest_1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->w_walucie_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->w_walucie_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_zak_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inwest_2))->BeginInit();
			this->gr_ZS->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tb_Karty->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_EURPLN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_USDEUR))->BeginInit();
			this->SuspendLayout();
			// 
			// c_zak_1
			// 
			this->c_zak_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->c_zak_1->DecimalPlaces = 4;
			this->c_zak_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(238)));
			this->c_zak_1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->c_zak_1->Location = System::Drawing::Point(97, 61);
			this->c_zak_1->Name = L"c_zak_1";
			this->c_zak_1->Size = System::Drawing::Size(80, 20);
			this->c_zak_1->TabIndex = 3;
			this->c_zak_1->Tag = L"";
			this->c_zak_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->c_zak_1->ValueChanged += gcnew System::EventHandler(this, &MyForm::c_zak_1_ValueChanged);
			// 
			// c_k_label
			// 
			this->c_k_label->AutoSize = true;
			this->c_k_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(238)));
			this->c_k_label->Location = System::Drawing::Point(6, 62);
			this->c_k_label->Name = L"c_k_label";
			this->c_k_label->Size = System::Drawing::Size(73, 13);
			this->c_k_label->TabIndex = 1;
			this->c_k_label->Text = L"Cena zakupu:";
			// 
			// c_s_label
			// 
			this->c_s_label->AutoSize = true;
			this->c_s_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(238)));
			this->c_s_label->Location = System::Drawing::Point(6, 21);
			this->c_s_label->Name = L"c_s_label";
			this->c_s_label->Size = System::Drawing::Size(85, 13);
			this->c_s_label->TabIndex = 2;
			this->c_s_label->Text = L"Cena sprzedaży:";
			this->c_s_label->Click += gcnew System::EventHandler(this, &MyForm::lb_Srednia_Click);
			// 
			// c_sp
			// 
			this->c_sp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->c_sp->DecimalPlaces = 4;
			this->c_sp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(238)));
			this->c_sp->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->c_sp->Location = System::Drawing::Point(103, 19);
			this->c_sp->Name = L"c_sp";
			this->c_sp->Size = System::Drawing::Size(65, 20);
			this->c_sp->TabIndex = 5;
			this->c_sp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->c_sp->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 38, 0, 0, 65536 });
			this->c_sp->ValueChanged += gcnew System::EventHandler(this, &MyForm::c_sp_1_ValueChanged);
			// 
			// lb_Inwestycja
			// 
			this->lb_Inwestycja->AutoSize = true;
			this->lb_Inwestycja->Location = System::Drawing::Point(6, 31);
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
			this->lb_Wartosc->Location = System::Drawing::Point(6, 53);
			this->lb_Wartosc->Name = L"lb_Wartosc";
			this->lb_Wartosc->Size = System::Drawing::Size(50, 13);
			this->lb_Wartosc->TabIndex = 5;
			this->lb_Wartosc->Text = L"Wartość:";
			// 
			// inwest_1
			// 
			this->inwest_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inwest_1->DecimalPlaces = 2;
			this->inwest_1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->inwest_1->Location = System::Drawing::Point(97, 30);
			this->inwest_1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->inwest_1->Name = L"inwest_1";
			this->inwest_1->Size = System::Drawing::Size(80, 20);
			this->inwest_1->TabIndex = 1;
			this->inwest_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inwest_1->ThousandsSeparator = true;
			this->inwest_1->ValueChanged += gcnew System::EventHandler(this, &MyForm::inwest_1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(168, 22);
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
			this->label1->Location = System::Drawing::Point(269, 62);
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
			this->label3->Location = System::Drawing::Point(166, 53);
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
			this->label4->Location = System::Drawing::Point(269, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"PLN";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->c_sp);
			this->groupBox2->Controls->Add(this->c_s_label);
			this->groupBox2->Controls->Add(this->w_Wartosc);
			this->groupBox2->Controls->Add(this->lb_Wartosc);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(9, 128);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(202, 81);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Po sprzedaży";
			// 
			// w_Wartosc
			// 
			this->w_Wartosc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(238)));
			this->w_Wartosc->Location = System::Drawing::Point(100, 53);
			this->w_Wartosc->Name = L"w_Wartosc";
			this->w_Wartosc->Size = System::Drawing::Size(66, 13);
			this->w_Wartosc->TabIndex = 13;
			this->w_Wartosc->Text = L"0";
			this->w_Wartosc->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// w_Zysk
			// 
			this->w_Zysk->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->w_Zysk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->w_Zysk->Location = System::Drawing::Point(51, 46);
			this->w_Zysk->Name = L"w_Zysk";
			this->w_Zysk->Size = System::Drawing::Size(68, 20);
			this->w_Zysk->TabIndex = 14;
			this->w_Zysk->Text = L"0";
			this->w_Zysk->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lb_PLN
			// 
			this->lb_PLN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_PLN->AutoSize = true;
			this->lb_PLN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->lb_PLN->Location = System::Drawing::Point(117, 46);
			this->lb_PLN->Name = L"lb_PLN";
			this->lb_PLN->Size = System::Drawing::Size(42, 20);
			this->lb_PLN->TabIndex = 11;
			this->lb_PLN->Text = L"PLN";
			// 
			// lb_Procent
			// 
			this->lb_Procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(238)));
			this->lb_Procent->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lb_Procent->Location = System::Drawing::Point(39, 21);
			this->lb_Procent->Name = L"lb_Procent";
			this->lb_Procent->Size = System::Drawing::Size(80, 20);
			this->lb_Procent->TabIndex = 5;
			this->lb_Procent->Text = L"0";
			this->lb_Procent->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// linkLabel1
			// 
			this->linkLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel1->Location = System::Drawing::Point(359, 260);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(103, 13);
			this->linkLabel1->TabIndex = 12;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"2020 ® vanChesco";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(269, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"USD";
			// 
			// w_walucie_1
			// 
			this->w_walucie_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->w_walucie_1->DecimalPlaces = 2;
			this->w_walucie_1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->w_walucie_1->Location = System::Drawing::Point(97, 94);
			this->w_walucie_1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->w_walucie_1->Name = L"w_walucie_1";
			this->w_walucie_1->Size = System::Drawing::Size(80, 20);
			this->w_walucie_1->TabIndex = 6;
			this->w_walucie_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->w_walucie_1->ThousandsSeparator = true;
			this->w_walucie_1->ValueChanged += gcnew System::EventHandler(this, &MyForm::w_walucie_1_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"W walucie:";
			// 
			// w_walucie_2
			// 
			this->w_walucie_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->w_walucie_2->DecimalPlaces = 2;
			this->w_walucie_2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->w_walucie_2->Location = System::Drawing::Point(183, 93);
			this->w_walucie_2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->w_walucie_2->Name = L"w_walucie_2";
			this->w_walucie_2->Size = System::Drawing::Size(80, 20);
			this->w_walucie_2->TabIndex = 7;
			this->w_walucie_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->w_walucie_2->ThousandsSeparator = true;
			this->w_walucie_2->ValueChanged += gcnew System::EventHandler(this, &MyForm::w_walucie_2_ValueChanged);
			// 
			// c_zak_2
			// 
			this->c_zak_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->c_zak_2->DecimalPlaces = 4;
			this->c_zak_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(238)));
			this->c_zak_2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->c_zak_2->Location = System::Drawing::Point(183, 60);
			this->c_zak_2->Name = L"c_zak_2";
			this->c_zak_2->Size = System::Drawing::Size(80, 20);
			this->c_zak_2->TabIndex = 4;
			this->c_zak_2->Tag = L"";
			this->c_zak_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->c_zak_2->ValueChanged += gcnew System::EventHandler(this, &MyForm::c_zak_2_ValueChanged);
			// 
			// inwest_2
			// 
			this->inwest_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inwest_2->DecimalPlaces = 2;
			this->inwest_2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->inwest_2->Location = System::Drawing::Point(183, 29);
			this->inwest_2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->inwest_2->Name = L"inwest_2";
			this->inwest_2->Size = System::Drawing::Size(80, 20);
			this->inwest_2->TabIndex = 2;
			this->inwest_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inwest_2->ThousandsSeparator = true;
			this->inwest_2->ValueChanged += gcnew System::EventHandler(this, &MyForm::inwest_2_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(128, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(220, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"2";
			// 
			// gr_ZS
			// 
			this->gr_ZS->Controls->Add(this->lb_prc);
			this->gr_ZS->Controls->Add(this->lb_PLN);
			this->gr_ZS->Controls->Add(this->lb_Procent);
			this->gr_ZS->Controls->Add(this->w_Zysk);
			this->gr_ZS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(0)));
			this->gr_ZS->Location = System::Drawing::Point(217, 128);
			this->gr_ZS->Name = L"gr_ZS";
			this->gr_ZS->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gr_ZS->Size = System::Drawing::Size(219, 81);
			this->gr_ZS->TabIndex = 21;
			this->gr_ZS->TabStop = false;
			this->gr_ZS->Text = L"Zysk lub strata";
			// 
			// lb_prc
			// 
			this->lb_prc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_prc->AutoSize = true;
			this->lb_prc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(238)));
			this->lb_prc->Location = System::Drawing::Point(117, 23);
			this->lb_prc->Name = L"lb_prc";
			this->lb_prc->Size = System::Drawing::Size(20, 16);
			this->lb_prc->TabIndex = 11;
			this->lb_prc->Text = L"%";
			// 
			// lb_Srednia
			// 
			this->lb_Srednia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->lb_Srednia->Location = System::Drawing::Point(45, 36);
			this->lb_Srednia->Name = L"lb_Srednia";
			this->lb_Srednia->Size = System::Drawing::Size(47, 18);
			this->lb_Srednia->TabIndex = 11;
			this->lb_Srednia->Text = L"0";
			this->lb_Srednia->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 69);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 13);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Suma:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 5);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 13);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Suma:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(32, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Próg:";
			// 
			// lb_SumaUSD
			// 
			this->lb_SumaUSD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->lb_SumaUSD->Location = System::Drawing::Point(30, 69);
			this->lb_SumaUSD->Name = L"lb_SumaUSD";
			this->lb_SumaUSD->Size = System::Drawing::Size(62, 15);
			this->lb_SumaUSD->TabIndex = 0;
			this->lb_SumaUSD->Text = L"0";
			this->lb_SumaUSD->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(91, 69);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(30, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"USD";
			// 
			// lb_SumaPLN
			// 
			this->lb_SumaPLN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->lb_SumaPLN->Location = System::Drawing::Point(27, 5);
			this->lb_SumaPLN->Name = L"lb_SumaPLN";
			this->lb_SumaPLN->Size = System::Drawing::Size(65, 18);
			this->lb_SumaPLN->TabIndex = 0;
			this->lb_SumaPLN->Text = L"0";
			this->lb_SumaPLN->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(238)));
			this->label14->Location = System::Drawing::Point(93, 36);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 13);
			this->label14->TabIndex = 9;
			this->label14->Text = L"PLN";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(93, 5);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"PLN";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->lb_Srednia);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->lb_SumaPLN);
			this->panel1->Controls->Add(this->lb_SumaUSD);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Location = System::Drawing::Point(305, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(131, 91);
			this->panel1->TabIndex = 22;
			// 
			// tb_Karty
			// 
			this->tb_Karty->Controls->Add(this->tabPage1);
			this->tb_Karty->Controls->Add(this->tabPage2);
			this->tb_Karty->Location = System::Drawing::Point(12, 12);
			this->tb_Karty->Name = L"tb_Karty";
			this->tb_Karty->SelectedIndex = 0;
			this->tb_Karty->Size = System::Drawing::Size(453, 244);
			this->tb_Karty->TabIndex = 23;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->lb_Inwestycja);
			this->tabPage1->Controls->Add(this->gr_ZS);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->inwest_1);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->w_walucie_2);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->c_zak_1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->c_zak_2);
			this->tabPage1->Controls->Add(this->c_k_label);
			this->tabPage1->Controls->Add(this->w_walucie_1);
			this->tabPage1->Controls->Add(this->inwest_2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(445, 218);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"PLN->USD->PLN";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(445, 218);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"PLN->USD->EUR->PLN";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->wart_EUR);
			this->groupBox3->Controls->Add(this->wart_PLN);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Location = System::Drawing::Point(197, 7);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(119, 75);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Po konwersji";
			// 
			// wart_EUR
			// 
			this->wart_EUR->Location = System::Drawing::Point(6, 19);
			this->wart_EUR->Name = L"wart_EUR";
			this->wart_EUR->Size = System::Drawing::Size(80, 14);
			this->wart_EUR->TabIndex = 2;
			this->wart_EUR->Text = L"0";
			this->wart_EUR->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// wart_PLN
			// 
			this->wart_PLN->Location = System::Drawing::Point(6, 46);
			this->wart_PLN->Name = L"wart_PLN";
			this->wart_PLN->Size = System::Drawing::Size(80, 13);
			this->wart_PLN->TabIndex = 3;
			this->wart_PLN->Text = L"0";
			this->wart_PLN->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label22
			// 
			this->label22->Location = System::Drawing::Point(85, 20);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(30, 13);
			this->label22->TabIndex = 2;
			this->label22->Text = L"EUR";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label23
			// 
			this->label23->Location = System::Drawing::Point(85, 46);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(28, 13);
			this->label23->TabIndex = 2;
			this->label23->Text = L"PLN";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->c_EURPLN);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->c_USDEUR);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Location = System::Drawing::Point(7, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(184, 75);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Spread USD/EUR";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(150, 46);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 13);
			this->label17->TabIndex = 5;
			this->label17->Text = L"PLN";
			// 
			// c_EURPLN
			// 
			this->c_EURPLN->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->c_EURPLN->DecimalPlaces = 4;
			this->c_EURPLN->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->c_EURPLN->Location = System::Drawing::Point(75, 44);
			this->c_EURPLN->Name = L"c_EURPLN";
			this->c_EURPLN->Size = System::Drawing::Size(69, 20);
			this->c_EURPLN->TabIndex = 4;
			this->c_EURPLN->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->c_EURPLN->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 44872, 0, 0, 262144 });
			this->c_EURPLN->ValueChanged += gcnew System::EventHandler(this, &MyForm::c_EURPLN_ValueChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(7, 46);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 13);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Sprzedaż";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(150, 20);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(30, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"USD";
			// 
			// c_USDEUR
			// 
			this->c_USDEUR->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->c_USDEUR->DecimalPlaces = 4;
			this->c_USDEUR->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->c_USDEUR->Location = System::Drawing::Point(75, 18);
			this->c_USDEUR->Name = L"c_USDEUR";
			this->c_USDEUR->Size = System::Drawing::Size(69, 20);
			this->c_USDEUR->TabIndex = 1;
			this->c_USDEUR->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->c_USDEUR->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8379, 0, 0, 262144 });
			this->c_USDEUR->ValueChanged += gcnew System::EventHandler(this, &MyForm::c_USDEUR_ValueChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(7, 20);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(62, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"USD->EUR";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(474, 282);
			this->Controls->Add(this->tb_Karty);
			this->Controls->Add(this->linkLabel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->Text = L"Waluty";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_zak_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_sp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inwest_1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->w_walucie_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->w_walucie_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_zak_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inwest_2))->EndInit();
			this->gr_ZS->ResumeLayout(false);
			this->gr_ZS->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tb_Karty->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_EURPLN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_USDEUR))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	System::Decimal prog;
	System::Decimal wartosc;
	System::Decimal sumaPLN;
	System::Decimal sumaUSD;
	System::Decimal zysk;

	private: System::Void oblicz()
	{

		if (c_zak_1->Value != 0)
		{
			w_walucie_1->Value = inwest_1->Value / c_zak_1->Value;
		}
		else w_walucie_1->Value = 0;

		if (c_zak_2->Value != 0)
		{
			w_walucie_2->Value = inwest_2->Value / c_zak_2->Value;
		}
		else w_walucie_2->Value = 0;

		wartosc = c_sp->Value * System::Decimal::operator+(w_walucie_1->Value, w_walucie_2->Value);
		sumaPLN = System::Decimal::operator+(inwest_1->Value, inwest_2->Value);
		sumaUSD = System::Decimal::operator+(w_walucie_1->Value, w_walucie_2->Value);
		zysk = System::Decimal::operator-(wartosc, sumaPLN);

		if		(c_zak_1->Value == 0)	prog = c_zak_2->Value;
		else if (c_zak_2->Value == 0)	prog = c_zak_1->Value;
		else							prog = (c_zak_1->Value * c_zak_2->Value) * System::Decimal::operator+(inwest_1->Value, inwest_2->Value) / System::Decimal::operator+(inwest_1->Value * c_zak_2->Value, inwest_2->Value * c_zak_1->Value);

		if (zysk > 0)
		{
			lb_Procent->ForeColor = Color::Green;
			lb_prc->ForeColor = Color::Green;
			w_Zysk->ForeColor = Color::Green;
			lb_PLN->ForeColor = Color::Green;
			gr_ZS->Text = "Zysk";
		}
		else if (zysk == 0)
		{
			lb_Procent->ForeColor = Color::Black;
			lb_prc->ForeColor = Color::Black;
			w_Zysk->ForeColor = Color::Black;
			lb_PLN->ForeColor = Color::Black;
			gr_ZS->Text = "===";
		}
		else
		{
			lb_Procent->ForeColor = Color::Red;
			lb_prc->ForeColor = Color::Red;
			w_Zysk->ForeColor = Color::Red;
			lb_PLN->ForeColor = Color::Red;
			gr_ZS->Text = "Strata";
		}

		if (sumaPLN != 0)
		{
			lb_Procent->Text = System::Convert::ToString(System::Decimal::Ceiling(10000 * zysk / sumaPLN) / 100);
		}
		else lb_Procent->Text = L"0";

		w_Wartosc->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * wartosc) / 100);
		w_Zysk->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * zysk) / 100);
		lb_SumaPLN->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * sumaPLN) / 100);
		lb_SumaUSD->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * sumaUSD) / 100);
		lb_Srednia->Text = System::Convert::ToString(System::Decimal::Ceiling(10000 * prog) / 10000);

		wart_EUR->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * sumaUSD * c_USDEUR->Value) / 100);
		wart_PLN->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * sumaUSD * c_USDEUR->Value * c_EURPLN->Value) / 100);

		std::ofstream stan;

		stan.open("stan", std::ios_base::binary);

		if (!stan.is_open())
		{
			System::Windows::Forms::MessageBox::Show(L"Wystapił problem z otwarciem pliku ostatniego stanu", L"Błąd", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			stan.write((const char*)&inwest_1->Value, sizeof(inwest_1->Value));
			stan.write((const char*)&inwest_2->Value, sizeof(inwest_2->Value));
			stan.write((const char*)&c_zak_1->Value, sizeof(c_zak_1->Value));
			stan.write((const char*)&c_zak_2->Value, sizeof(c_zak_2->Value));
			stan.write((const char*)&c_sp->Value, sizeof(c_sp->Value));
			stan.write((const char*)&c_USDEUR->Value, sizeof(c_USDEUR->Value));
			stan.write((const char*)&c_EURPLN->Value, sizeof(c_EURPLN->Value));
		//	System::Windows::Forms::MessageBox::Show("Stan zaktualizowany", "Zapis", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		stan.close();
	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{

		std::ifstream stan;
		stan.open("stan", std::ios_base::binary);

		if (!stan.is_open())
		{
			System::Windows::Forms::MessageBox::Show(L"Wystapił problem z otwarciem pliku ostatniego stanu", L"Błąd", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			System::Decimal temp;
			stan.read((char*)&temp, sizeof(temp));
			inwest_1->Value = temp;
			stan.read((char*)&temp, sizeof(temp)); 
			inwest_2->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			c_zak_1->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			c_zak_2->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			c_sp->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			c_USDEUR->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			c_EURPLN->Value = temp;
	
			//System::Windows::Forms::MessageBox::Show(L"Stan został wczytany", L"Odczyt stanu", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		stan.close();
		
		oblicz();
	}

	private: System::Void c_zak_1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}

	private: System::Void c_zak_2_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}

	private: System::Void c_sp_1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}

	private: System::Void inwest_1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}

	private: System::Void inwest_2_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}

	private: System::Void w_walucie_1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		inwest_1->Value = c_zak_1->Value * w_walucie_1->Value;
	}

	private: System::Void w_walucie_2_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		inwest_2->Value = c_zak_2->Value * w_walucie_2->Value;
	}

	private: System::Void lb_Srednia_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		c_sp->Value = System::Decimal::operator+(prog, System::Decimal::operator-(prog, c_sp->Value));
	}

	private: System::Void c_USDEUR_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}


	private: System::Void c_EURPLN_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
	}
};
}