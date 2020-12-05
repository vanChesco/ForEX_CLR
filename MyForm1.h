﻿#pragma once
#include <fstream>
#include <math.h>
#include "curl/curl.h"
#include "curl/easy.h"
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
	private: System::Windows::Forms::TabPage^ tabSpread;

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
	private: System::Windows::Forms::TabPage^ tabStopLoss;


	private: System::Windows::Forms::Label^ sl_stopLoss;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::NumericUpDown^ sl_prog;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::NumericUpDown^ sl_cena;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TabPage^ tabSwing;

	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::NumericUpDown^ num_prowizja;


	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::NumericUpDown^ num_cenaWyjscia;

	private: System::Windows::Forms::Label^ label29;


	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::NumericUpDown^ num_cenaWejscia;
private: System::Windows::Forms::NumericUpDown^ num_kwotaWejscia;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ lb_jednKupione;

private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ lb_progWyjscia;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ lb_kwotaWyjscia;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ lb_swingWynik;
private: System::Windows::Forms::Label^ lb_swingLabel;
private: System::Windows::Forms::Label^ lb_swingPLN;
private: System::Windows::Forms::Panel^ panel2;




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
			this->tabSwing = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lb_swingWynik = (gcnew System::Windows::Forms::Label());
			this->lb_swingPLN = (gcnew System::Windows::Forms::Label());
			this->lb_swingLabel = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->lb_progWyjscia = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->lb_jednKupione = (gcnew System::Windows::Forms::Label());
			this->num_prowizja = (gcnew System::Windows::Forms::NumericUpDown());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->lb_kwotaWyjscia = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->num_cenaWyjscia = (gcnew System::Windows::Forms::NumericUpDown());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->num_cenaWejscia = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_kwotaWejscia = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabSpread = (gcnew System::Windows::Forms::TabPage());
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
			this->tabStopLoss = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->sl_cena = (gcnew System::Windows::Forms::NumericUpDown());
			this->sl_prog = (gcnew System::Windows::Forms::NumericUpDown());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->sl_stopLoss = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
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
			this->tabSwing->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_prowizja))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_cenaWyjscia))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_cenaWejscia))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_kwotaWejscia))->BeginInit();
			this->tabSpread->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_EURPLN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_USDEUR))->BeginInit();
			this->tabStopLoss->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sl_cena))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sl_prog))->BeginInit();
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
			this->tb_Karty->Controls->Add(this->tabSwing);
			this->tb_Karty->Controls->Add(this->tabSpread);
			this->tb_Karty->Controls->Add(this->tabPage2);
			this->tb_Karty->Controls->Add(this->tabStopLoss);
			this->tb_Karty->Location = System::Drawing::Point(12, 12);
			this->tb_Karty->Name = L"tb_Karty";
			this->tb_Karty->SelectedIndex = 0;
			this->tb_Karty->Size = System::Drawing::Size(453, 244);
			this->tb_Karty->TabIndex = 23;
			// 
			// tabSwing
			// 
			this->tabSwing->Controls->Add(this->panel2);
			this->tabSwing->Controls->Add(this->label38);
			this->tabSwing->Controls->Add(this->lb_progWyjscia);
			this->tabSwing->Controls->Add(this->label37);
			this->tabSwing->Controls->Add(this->label36);
			this->tabSwing->Controls->Add(this->lb_jednKupione);
			this->tabSwing->Controls->Add(this->num_prowizja);
			this->tabSwing->Controls->Add(this->label30);
			this->tabSwing->Controls->Add(this->groupBox6);
			this->tabSwing->Controls->Add(this->groupBox5);
			this->tabSwing->Location = System::Drawing::Point(4, 22);
			this->tabSwing->Name = L"tabSwing";
			this->tabSwing->Size = System::Drawing::Size(445, 218);
			this->tabSwing->TabIndex = 3;
			this->tabSwing->Text = L"Short Swing";
			this->tabSwing->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gainsboro;
			this->panel2->Controls->Add(this->lb_swingWynik);
			this->panel2->Controls->Add(this->lb_swingPLN);
			this->panel2->Controls->Add(this->lb_swingLabel);
			this->panel2->Location = System::Drawing::Point(229, 164);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 39);
			this->panel2->TabIndex = 16;
			// 
			// lb_swingWynik
			// 
			this->lb_swingWynik->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_swingWynik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(0)));
			this->lb_swingWynik->Location = System::Drawing::Point(79, 9);
			this->lb_swingWynik->Name = L"lb_swingWynik";
			this->lb_swingWynik->Size = System::Drawing::Size(78, 20);
			this->lb_swingWynik->TabIndex = 14;
			this->lb_swingWynik->Text = L"0";
			this->lb_swingWynik->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// lb_swingPLN
			// 
			this->lb_swingPLN->AutoSize = true;
			this->lb_swingPLN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->lb_swingPLN->Location = System::Drawing::Point(154, 9);
			this->lb_swingPLN->Name = L"lb_swingPLN";
			this->lb_swingPLN->Size = System::Drawing::Size(39, 20);
			this->lb_swingPLN->TabIndex = 15;
			this->lb_swingPLN->Text = L"PLN";
			// 
			// lb_swingLabel
			// 
			this->lb_swingLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_swingLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(0)));
			this->lb_swingLabel->Location = System::Drawing::Point(3, 9);
			this->lb_swingLabel->Name = L"lb_swingLabel";
			this->lb_swingLabel->Size = System::Drawing::Size(82, 20);
			this->lb_swingLabel->TabIndex = 13;
			this->lb_swingLabel->Text = L"-";
			this->lb_swingLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(209, 134);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(35, 17);
			this->label38->TabIndex = 12;
			this->label38->Text = L"PLN";
			// 
			// lb_progWyjscia
			// 
			this->lb_progWyjscia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	  static_cast<System::Byte>(0)));
			this->lb_progWyjscia->Location = System::Drawing::Point(149, 134);
			this->lb_progWyjscia->Name = L"lb_progWyjscia";
			this->lb_progWyjscia->Size = System::Drawing::Size(61, 20);
			this->lb_progWyjscia->TabIndex = 11;
			this->lb_progWyjscia->Text = L"0";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(8, 134);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(94, 17);
			this->label37->TabIndex = 10;
			this->label37->Text = L"Próg wyjścia: ";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(8, 108);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(142, 17);
			this->label36->TabIndex = 9;
			this->label36->Text = L"Jednostek nabytych: ";
			// 
			// lb_jednKupione
			// 
			this->lb_jednKupione->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	  static_cast<System::Byte>(0)));
			this->lb_jednKupione->Location = System::Drawing::Point(149, 108);
			this->lb_jednKupione->Name = L"lb_jednKupione";
			this->lb_jednKupione->Size = System::Drawing::Size(122, 20);
			this->lb_jednKupione->TabIndex = 9;
			this->lb_jednKupione->Text = L"0";
			// 
			// num_prowizja
			// 
			this->num_prowizja->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_prowizja->DecimalPlaces = 2;
			this->num_prowizja->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_prowizja->Location = System::Drawing::Point(190, 50);
			this->num_prowizja->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_prowizja->Name = L"num_prowizja";
			this->num_prowizja->Size = System::Drawing::Size(63, 20);
			this->num_prowizja->TabIndex = 8;
			this->num_prowizja->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_prowizja->ThousandsSeparator = true;
			this->num_prowizja->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_prowizja_ValueChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(198, 73);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(46, 13);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Prowizja";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->lb_kwotaWyjscia);
			this->groupBox6->Controls->Add(this->label35);
			this->groupBox6->Controls->Add(this->label34);
			this->groupBox6->Controls->Add(this->label32);
			this->groupBox6->Controls->Add(this->label28);
			this->groupBox6->Controls->Add(this->num_cenaWyjscia);
			this->groupBox6->Controls->Add(this->label29);
			this->groupBox6->Location = System::Drawing::Point(282, 19);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(160, 78);
			this->groupBox6->TabIndex = 0;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Wyjście";
			// 
			// lb_kwotaWyjscia
			// 
			this->lb_kwotaWyjscia->Location = System::Drawing::Point(49, 47);
			this->lb_kwotaWyjscia->Name = L"lb_kwotaWyjscia";
			this->lb_kwotaWyjscia->Size = System::Drawing::Size(75, 18);
			this->lb_kwotaWyjscia->TabIndex = 10;
			this->lb_kwotaWyjscia->Text = L"0";
			this->lb_kwotaWyjscia->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(32, 118);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(15, 13);
			this->label35->TabIndex = 9;
			this->label35->Text = L"%";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(130, 47);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(28, 13);
			this->label34->TabIndex = 9;
			this->label34->Text = L"PLN";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(130, 21);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(28, 13);
			this->label32->TabIndex = 7;
			this->label32->Text = L"PLN";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(6, 21);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(32, 13);
			this->label28->TabIndex = 7;
			this->label28->Text = L"Cena";
			// 
			// num_cenaWyjscia
			// 
			this->num_cenaWyjscia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_cenaWyjscia->DecimalPlaces = 2;
			this->num_cenaWyjscia->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_cenaWyjscia->Location = System::Drawing::Point(44, 19);
			this->num_cenaWyjscia->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_cenaWyjscia->Name = L"num_cenaWyjscia";
			this->num_cenaWyjscia->Size = System::Drawing::Size(80, 20);
			this->num_cenaWyjscia->TabIndex = 5;
			this->num_cenaWyjscia->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_cenaWyjscia->ThousandsSeparator = true;
			this->num_cenaWyjscia->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_cenaWyjscia_ValueChanged);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(6, 47);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(37, 13);
			this->label29->TabIndex = 6;
			this->label29->Text = L"Kwota";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label33);
			this->groupBox5->Controls->Add(this->label31);
			this->groupBox5->Controls->Add(this->label27);
			this->groupBox5->Controls->Add(this->label26);
			this->groupBox5->Controls->Add(this->num_cenaWejscia);
			this->groupBox5->Controls->Add(this->num_kwotaWejscia);
			this->groupBox5->Location = System::Drawing::Point(3, 19);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(164, 78);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Wejście";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(130, 47);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(28, 13);
			this->label33->TabIndex = 8;
			this->label33->Text = L"PLN";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(130, 21);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(28, 13);
			this->label31->TabIndex = 6;
			this->label31->Text = L"PLN";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(6, 21);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(32, 13);
			this->label27->TabIndex = 5;
			this->label27->Text = L"Cena";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(6, 47);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(37, 13);
			this->label26->TabIndex = 4;
			this->label26->Text = L"Kwota";
			// 
			// num_cenaWejscia
			// 
			this->num_cenaWejscia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_cenaWejscia->DecimalPlaces = 2;
			this->num_cenaWejscia->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_cenaWejscia->Location = System::Drawing::Point(44, 19);
			this->num_cenaWejscia->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_cenaWejscia->Name = L"num_cenaWejscia";
			this->num_cenaWejscia->Size = System::Drawing::Size(80, 20);
			this->num_cenaWejscia->TabIndex = 3;
			this->num_cenaWejscia->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_cenaWejscia->ThousandsSeparator = true;
			this->num_cenaWejscia->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_cenaWejscia_ValueChanged);
			// 
			// num_kwotaWejscia
			// 
			this->num_kwotaWejscia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_kwotaWejscia->DecimalPlaces = 2;
			this->num_kwotaWejscia->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_kwotaWejscia->Location = System::Drawing::Point(44, 45);
			this->num_kwotaWejscia->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_kwotaWejscia->Name = L"num_kwotaWejscia";
			this->num_kwotaWejscia->Size = System::Drawing::Size(80, 20);
			this->num_kwotaWejscia->TabIndex = 2;
			this->num_kwotaWejscia->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_kwotaWejscia->ThousandsSeparator = true;
			this->num_kwotaWejscia->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_kwotaWejscia_ValueChanged);
			// 
			// tabSpread
			// 
			this->tabSpread->Controls->Add(this->lb_Inwestycja);
			this->tabSpread->Controls->Add(this->gr_ZS);
			this->tabSpread->Controls->Add(this->panel1);
			this->tabSpread->Controls->Add(this->label8);
			this->tabSpread->Controls->Add(this->inwest_1);
			this->tabSpread->Controls->Add(this->label6);
			this->tabSpread->Controls->Add(this->label4);
			this->tabSpread->Controls->Add(this->w_walucie_2);
			this->tabSpread->Controls->Add(this->groupBox2);
			this->tabSpread->Controls->Add(this->label5);
			this->tabSpread->Controls->Add(this->c_zak_1);
			this->tabSpread->Controls->Add(this->label1);
			this->tabSpread->Controls->Add(this->label7);
			this->tabSpread->Controls->Add(this->c_zak_2);
			this->tabSpread->Controls->Add(this->c_k_label);
			this->tabSpread->Controls->Add(this->w_walucie_1);
			this->tabSpread->Controls->Add(this->inwest_2);
			this->tabSpread->Location = System::Drawing::Point(4, 22);
			this->tabSpread->Name = L"tabSpread";
			this->tabSpread->Padding = System::Windows::Forms::Padding(3);
			this->tabSpread->Size = System::Drawing::Size(445, 218);
			this->tabSpread->TabIndex = 0;
			this->tabSpread->Text = L"Bezpośrednio";
			this->tabSpread->UseVisualStyleBackColor = true;
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
			this->tabPage2->Text = L"Pośrednio";
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
			this->wart_PLN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
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
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
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
			// tabStopLoss
			// 
			this->tabStopLoss->Controls->Add(this->groupBox4);
			this->tabStopLoss->Controls->Add(this->sl_stopLoss);
			this->tabStopLoss->Controls->Add(this->label25);
			this->tabStopLoss->Location = System::Drawing::Point(4, 22);
			this->tabStopLoss->Name = L"tabStopLoss";
			this->tabStopLoss->Padding = System::Windows::Forms::Padding(3);
			this->tabStopLoss->Size = System::Drawing::Size(445, 218);
			this->tabStopLoss->TabIndex = 2;
			this->tabStopLoss->Text = L"Stop Loss";
			this->tabStopLoss->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->sl_cena);
			this->groupBox4->Controls->Add(this->sl_prog);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Location = System::Drawing::Point(6, 6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(235, 79);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Stop Loss";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 21);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(73, 13);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Cena wejścia:";
			// 
			// sl_cena
			// 
			this->sl_cena->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->sl_cena->DecimalPlaces = 4;
			this->sl_cena->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->sl_cena->Location = System::Drawing::Point(85, 19);
			this->sl_cena->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->sl_cena->Name = L"sl_cena";
			this->sl_cena->Size = System::Drawing::Size(85, 20);
			this->sl_cena->TabIndex = 0;
			this->sl_cena->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->sl_cena->ValueChanged += gcnew System::EventHandler(this, &MyForm::sl_cena_ValueChanged);
			// 
			// sl_prog
			// 
			this->sl_prog->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->sl_prog->Location = System::Drawing::Point(85, 45);
			this->sl_prog->Name = L"sl_prog";
			this->sl_prog->Size = System::Drawing::Size(85, 20);
			this->sl_prog->TabIndex = 0;
			this->sl_prog->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->sl_prog->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->sl_prog->ValueChanged += gcnew System::EventHandler(this, &MyForm::sl_prog_ValueChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(176, 21);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(53, 13);
			this->label24->TabIndex = 3;
			this->label24->Text = L"jednostek";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 47);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(32, 13);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Próg:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(176, 47);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(15, 13);
			this->label21->TabIndex = 2;
			this->label21->Text = L"%";
			// 
			// sl_stopLoss
			// 
			this->sl_stopLoss->AutoSize = true;
			this->sl_stopLoss->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->sl_stopLoss->Location = System::Drawing::Point(102, 101);
			this->sl_stopLoss->Name = L"sl_stopLoss";
			this->sl_stopLoss->Size = System::Drawing::Size(18, 20);
			this->sl_stopLoss->TabIndex = 5;
			this->sl_stopLoss->Text = L"0";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(11, 101);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(85, 20);
			this->label25->TabIndex = 4;
			this->label25->Text = L"Stop Loss:";
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
			this->tabSwing->ResumeLayout(false);
			this->tabSwing->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_prowizja))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_cenaWyjscia))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_cenaWejscia))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_kwotaWejscia))->EndInit();
			this->tabSpread->ResumeLayout(false);
			this->tabSpread->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_EURPLN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_USDEUR))->EndInit();
			this->tabStopLoss->ResumeLayout(false);
			this->tabStopLoss->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sl_cena))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sl_prog))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	System::Decimal prog;
	System::Decimal wartosc;
	System::Decimal sumaPLN;
	System::Decimal sumaUSD;
	System::Decimal zysk;
	System::Decimal jednostkiKupione;
	double swingWynik;

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
	}

	private: System::Void swing()
	{
		jednostkiKupione = (num_kwotaWejscia->Value / num_cenaWejscia->Value) * (1 - num_prowizja->Value / 100);
		lb_jednKupione->Text = System::Convert::ToString(System::Decimal::Ceiling(100000000 * jednostkiKupione) / 100000000);
		System::Decimal kwotaWyjscia = jednostkiKupione * num_cenaWyjscia->Value;
		lb_kwotaWyjscia->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * kwotaWyjscia) / 100);
		lb_progWyjscia->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * num_cenaWejscia->Value / ((1 - num_prowizja->Value / 100) * (1 - num_prowizja->Value / 100))) / 100);
		swingWynik = double(kwotaWyjscia) - double(num_kwotaWejscia->Value);

		if (kwotaWyjscia > num_kwotaWejscia->Value)
		{
			lb_kwotaWyjscia->ForeColor = Color::Green;
			label34->ForeColor = Color::Green;
			lb_swingLabel->Text = L"Zysk:";
			lb_swingLabel->ForeColor = Color::Green;
			lb_swingWynik->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * System::Decimal(swingWynik)) / 100);
			lb_swingWynik->ForeColor = Color::Green;
			lb_swingPLN->ForeColor = Color::Green;
		}
		
		else if (kwotaWyjscia < num_kwotaWejscia->Value)
		{
			lb_kwotaWyjscia->ForeColor = Color::Red;
			label34->ForeColor = Color::Red;
			lb_swingLabel->Text = L"Strata:";
			lb_swingLabel->ForeColor = Color::Red;
			lb_swingWynik->Text = System::Convert::ToString(System::Decimal::Ceiling(100 * System::Decimal(swingWynik)) / 100);
			lb_swingWynik->ForeColor = Color::Red;
			lb_swingPLN->ForeColor = Color::Red;
		}
		else
		{
			lb_kwotaWyjscia->ForeColor = Color::Black;
			label34->ForeColor = Color::Black;
		}
	}

	private: System::Void stopLoss()
	{
		sl_stopLoss->Text = System::Convert::ToString(sl_cena->Value * (1 - sl_prog->Value / 100)) + " jednostek";
	}

	private: System::Void zapiszStan()
	{
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
			stan.write((const char*)&sl_cena->Value, sizeof(sl_cena->Value));
			stan.write((const char*)&sl_prog->Value, sizeof(sl_prog->Value));
			stan.write((const char*)&num_cenaWejscia->Value, sizeof(num_cenaWejscia->Value));
			stan.write((const char*)&num_cenaWyjscia->Value, sizeof(num_cenaWyjscia->Value));
			stan.write((const char*)&num_kwotaWejscia->Value, sizeof(num_kwotaWejscia->Value));
			stan.write((const char*)&num_prowizja->Value, sizeof(num_prowizja->Value));
		//		System::Windows::Forms::MessageBox::Show("Stan zaktualizowany", "Zapis", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		stan.close();
	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
//		CURL* curl = curl_easy_init();
//		if (!curl)
//		{
//			System::Windows::Forms::MessageBox::Show(L"Inicjalizacja CURL nie powiodła się", L"Błąd!", MessageBoxButtons::OK, MessageBoxIcon::Error);
//			return;
//		}
//
//		CURLcode res = CURLE_OK;
//		if ((curl_easy_setopt(curl, CURLOPT_URL, "http://api.nbp.pl/api/exchangerates/rates/c/usd/2020-11-03")) != CURLE_OK)
//		{
//			System::Windows::Forms::MessageBox::Show(L"Problem z systemem cURL", L"Błąd!", MessageBoxButtons::OK);
//		};

//		curl_easy_cleanup(curl);
		

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
			stan.read((char*)&temp, sizeof(temp));
			sl_cena->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			sl_prog->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_cenaWejscia->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_cenaWyjscia->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_kwotaWejscia->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_prowizja->Value = temp;
	
			//System::Windows::Forms::MessageBox::Show(L"Stan został wczytany", L"Odczyt stanu", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		stan.close();
		
		oblicz();
	}

	private: System::Void c_zak_1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
		zapiszStan();
	}

	private: System::Void c_zak_2_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
		zapiszStan();
	}

	private: System::Void c_sp_1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
		zapiszStan();
	}

	private: System::Void inwest_1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
		zapiszStan();
	}

	private: System::Void inwest_2_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
		zapiszStan();
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
		zapiszStan();
	}


	private: System::Void c_EURPLN_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		oblicz();
		zapiszStan();
	}


	private: System::Void sl_cena_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		stopLoss();
		zapiszStan();
	}


	private: System::Void sl_prog_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		stopLoss();
		zapiszStan();
	}


	private: System::Void num_cenaWejscia_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		swing();
		zapiszStan();
	}


	private: System::Void num_kwotaWejscia_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		swing();
		zapiszStan();
	}


	private: System::Void num_prowizja_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		swing();
		zapiszStan();
	}
	private: System::Void num_cenaWyjscia_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		swing();
		zapiszStan();
	}
};
}