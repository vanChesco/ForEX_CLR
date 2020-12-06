#pragma once
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
	private: System::Windows::Forms::ComboBox^ Box1;
	private: System::Windows::Forms::ComboBox^ Box4;
	private: System::Windows::Forms::ComboBox^ Box3;
	private: System::Windows::Forms::ComboBox^ Box2;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::NumericUpDown^ num_ZRXcena;
	private: System::Windows::Forms::NumericUpDown^ num_LSKcena;
	private: System::Windows::Forms::NumericUpDown^ num_XRPcena;
	private: System::Windows::Forms::NumericUpDown^ num_ETHcena;
	private: System::Windows::Forms::NumericUpDown^ num_ZRXkwota;
	private: System::Windows::Forms::NumericUpDown^ num_LSKkwota;
	private: System::Windows::Forms::NumericUpDown^ num_XRPkwota;
	private: System::Windows::Forms::NumericUpDown^ num_ETHkwota;
	private: System::Windows::Forms::Label^ lb_Krypto;
	private: System::Windows::Forms::Label^ lb_ZRX;
	private: System::Windows::Forms::Label^ lb_LSK;
	private: System::Windows::Forms::Label^ lb_XRP;
	private: System::Windows::Forms::Label^ lb_ETH;
	private: System::Windows::Forms::Label^ lb_nazwaKrypto;
	private: System::Windows::Forms::Label^ lb_BSV;
	private: System::Windows::Forms::NumericUpDown^ num_BSVcena;
	private: System::Windows::Forms::NumericUpDown^ num_BSVkwota;
	private: System::Windows::Forms::ComboBox^ Box5;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::NumericUpDown^ num_cenaUSDT;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ lb_USDT5;
	private: System::Windows::Forms::Label^ lb_USDT4;
	private: System::Windows::Forms::Label^ lb_USDT3;
	private: System::Windows::Forms::Label^ lb_USDT2;
	private: System::Windows::Forms::Label^ lb_USDT1;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::NumericUpDown^ num_XRPUSDT;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::NumericUpDown^ num_BSVUSDT;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::NumericUpDown^ num_ZRXUSDT;
	private: System::Windows::Forms::NumericUpDown^ num_LSKUSDT;
	private: System::Windows::Forms::NumericUpDown^ num_ETHUSDT;
	private: System::Windows::Forms::Panel^ panel4;

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
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->num_XRPcena = (gcnew System::Windows::Forms::NumericUpDown());
			this->lb_Krypto = (gcnew System::Windows::Forms::Label());
			this->num_ETHkwota = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_BSVcena = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_XRPkwota = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_BSVkwota = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_LSKkwota = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_ZRXkwota = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_ETHcena = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_LSKcena = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_ZRXcena = (gcnew System::Windows::Forms::NumericUpDown());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->num_XRPUSDT = (gcnew System::Windows::Forms::NumericUpDown());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->num_BSVUSDT = (gcnew System::Windows::Forms::NumericUpDown());
			this->lb_USDT1 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->num_cenaUSDT = (gcnew System::Windows::Forms::NumericUpDown());
			this->lb_USDT2 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->lb_USDT3 = (gcnew System::Windows::Forms::Label());
			this->lb_USDT5 = (gcnew System::Windows::Forms::Label());
			this->num_ZRXUSDT = (gcnew System::Windows::Forms::NumericUpDown());
			this->lb_USDT4 = (gcnew System::Windows::Forms::Label());
			this->num_ETHUSDT = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_LSKUSDT = (gcnew System::Windows::Forms::NumericUpDown());
			this->lb_BSV = (gcnew System::Windows::Forms::Label());
			this->Box5 = (gcnew System::Windows::Forms::ComboBox());
			this->lb_nazwaKrypto = (gcnew System::Windows::Forms::Label());
			this->lb_ZRX = (gcnew System::Windows::Forms::Label());
			this->lb_LSK = (gcnew System::Windows::Forms::Label());
			this->lb_XRP = (gcnew System::Windows::Forms::Label());
			this->lb_ETH = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
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
			this->num_cenaWejscia = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_kwotaWejscia = (gcnew System::Windows::Forms::NumericUpDown());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->Box1 = (gcnew System::Windows::Forms::ComboBox());
			this->Box4 = (gcnew System::Windows::Forms::ComboBox());
			this->Box3 = (gcnew System::Windows::Forms::ComboBox());
			this->Box2 = (gcnew System::Windows::Forms::ComboBox());
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
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_XRPcena))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ETHkwota))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_BSVcena))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_XRPkwota))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_BSVkwota))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_LSKkwota))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ZRXkwota))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ETHcena))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_LSKcena))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ZRXcena))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_XRPUSDT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_BSVUSDT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_cenaUSDT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ZRXUSDT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ETHUSDT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_LSKUSDT))->BeginInit();
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
			this->linkLabel1->Location = System::Drawing::Point(433, 444);
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
			this->tb_Karty->Size = System::Drawing::Size(531, 429);
			this->tb_Karty->TabIndex = 23;
			// 
			// tabSwing
			// 
			this->tabSwing->Controls->Add(this->panel4);
			this->tabSwing->Controls->Add(this->panel3);
			this->tabSwing->Controls->Add(this->lb_BSV);
			this->tabSwing->Controls->Add(this->Box5);
			this->tabSwing->Controls->Add(this->lb_nazwaKrypto);
			this->tabSwing->Controls->Add(this->lb_ZRX);
			this->tabSwing->Controls->Add(this->lb_LSK);
			this->tabSwing->Controls->Add(this->lb_XRP);
			this->tabSwing->Controls->Add(this->lb_ETH);
			this->tabSwing->Controls->Add(this->label43);
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
			this->tabSwing->Controls->Add(this->Box1);
			this->tabSwing->Controls->Add(this->Box4);
			this->tabSwing->Controls->Add(this->Box3);
			this->tabSwing->Controls->Add(this->Box2);
			this->tabSwing->Location = System::Drawing::Point(4, 22);
			this->tabSwing->Name = L"tabSwing";
			this->tabSwing->Size = System::Drawing::Size(523, 403);
			this->tabSwing->TabIndex = 3;
			this->tabSwing->Text = L"Short Swing";
			this->tabSwing->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->panel4->Controls->Add(this->num_XRPcena);
			this->panel4->Controls->Add(this->lb_Krypto);
			this->panel4->Controls->Add(this->num_ETHkwota);
			this->panel4->Controls->Add(this->num_BSVcena);
			this->panel4->Controls->Add(this->num_XRPkwota);
			this->panel4->Controls->Add(this->num_BSVkwota);
			this->panel4->Controls->Add(this->num_LSKkwota);
			this->panel4->Controls->Add(this->num_ZRXkwota);
			this->panel4->Controls->Add(this->num_ETHcena);
			this->panel4->Controls->Add(this->num_LSKcena);
			this->panel4->Controls->Add(this->num_ZRXcena);
			this->panel4->Controls->Add(this->label41);
			this->panel4->Controls->Add(this->label40);
			this->panel4->Controls->Add(this->label39);
			this->panel4->Location = System::Drawing::Point(3, 40);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(517, 55);
			this->panel4->TabIndex = 34;
			// 
			// num_XRPcena
			// 
			this->num_XRPcena->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_XRPcena->DecimalPlaces = 2;
			this->num_XRPcena->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_XRPcena->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_XRPcena->Location = System::Drawing::Point(131, 30);
			this->num_XRPcena->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_XRPcena->Name = L"num_XRPcena";
			this->num_XRPcena->Size = System::Drawing::Size(80, 20);
			this->num_XRPcena->TabIndex = 19;
			this->num_XRPcena->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_XRPcena->ThousandsSeparator = true;
			// 
			// lb_Krypto
			// 
			this->lb_Krypto->AutoSize = true;
			this->lb_Krypto->Location = System::Drawing::Point(6, 7);
			this->lb_Krypto->Name = L"lb_Krypto";
			this->lb_Krypto->Size = System::Drawing::Size(37, 13);
			this->lb_Krypto->TabIndex = 20;
			this->lb_Krypto->Text = L"Kwota";
			// 
			// num_ETHkwota
			// 
			this->num_ETHkwota->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_ETHkwota->DecimalPlaces = 2;
			this->num_ETHkwota->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_ETHkwota->Location = System::Drawing::Point(44, 5);
			this->num_ETHkwota->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_ETHkwota->Name = L"num_ETHkwota";
			this->num_ETHkwota->Size = System::Drawing::Size(80, 20);
			this->num_ETHkwota->TabIndex = 18;
			this->num_ETHkwota->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_ETHkwota->ThousandsSeparator = true;
			this->num_ETHkwota->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_ETHkwota_ValueChanged);
			// 
			// num_BSVcena
			// 
			this->num_BSVcena->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_BSVcena->DecimalPlaces = 2;
			this->num_BSVcena->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_BSVcena->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_BSVcena->Location = System::Drawing::Point(389, 30);
			this->num_BSVcena->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_BSVcena->Name = L"num_BSVcena";
			this->num_BSVcena->Size = System::Drawing::Size(80, 20);
			this->num_BSVcena->TabIndex = 32;
			this->num_BSVcena->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_BSVcena->ThousandsSeparator = true;
			// 
			// num_XRPkwota
			// 
			this->num_XRPkwota->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_XRPkwota->DecimalPlaces = 2;
			this->num_XRPkwota->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_XRPkwota->Location = System::Drawing::Point(131, 5);
			this->num_XRPkwota->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_XRPkwota->Name = L"num_XRPkwota";
			this->num_XRPkwota->Size = System::Drawing::Size(80, 20);
			this->num_XRPkwota->TabIndex = 18;
			this->num_XRPkwota->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_XRPkwota->ThousandsSeparator = true;
			// 
			// num_BSVkwota
			// 
			this->num_BSVkwota->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_BSVkwota->DecimalPlaces = 2;
			this->num_BSVkwota->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_BSVkwota->Location = System::Drawing::Point(389, 5);
			this->num_BSVkwota->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_BSVkwota->Name = L"num_BSVkwota";
			this->num_BSVkwota->Size = System::Drawing::Size(80, 20);
			this->num_BSVkwota->TabIndex = 31;
			this->num_BSVkwota->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_BSVkwota->ThousandsSeparator = true;
			// 
			// num_LSKkwota
			// 
			this->num_LSKkwota->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_LSKkwota->DecimalPlaces = 2;
			this->num_LSKkwota->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_LSKkwota->Location = System::Drawing::Point(217, 5);
			this->num_LSKkwota->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_LSKkwota->Name = L"num_LSKkwota";
			this->num_LSKkwota->Size = System::Drawing::Size(80, 20);
			this->num_LSKkwota->TabIndex = 18;
			this->num_LSKkwota->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_LSKkwota->ThousandsSeparator = true;
			// 
			// num_ZRXkwota
			// 
			this->num_ZRXkwota->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_ZRXkwota->DecimalPlaces = 2;
			this->num_ZRXkwota->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_ZRXkwota->Location = System::Drawing::Point(303, 5);
			this->num_ZRXkwota->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_ZRXkwota->Name = L"num_ZRXkwota";
			this->num_ZRXkwota->Size = System::Drawing::Size(80, 20);
			this->num_ZRXkwota->TabIndex = 18;
			this->num_ZRXkwota->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_ZRXkwota->ThousandsSeparator = true;
			// 
			// num_ETHcena
			// 
			this->num_ETHcena->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_ETHcena->DecimalPlaces = 2;
			this->num_ETHcena->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_ETHcena->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_ETHcena->Location = System::Drawing::Point(44, 30);
			this->num_ETHcena->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_ETHcena->Name = L"num_ETHcena";
			this->num_ETHcena->Size = System::Drawing::Size(80, 20);
			this->num_ETHcena->TabIndex = 19;
			this->num_ETHcena->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_ETHcena->ThousandsSeparator = true;
			// 
			// num_LSKcena
			// 
			this->num_LSKcena->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_LSKcena->DecimalPlaces = 2;
			this->num_LSKcena->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_LSKcena->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_LSKcena->Location = System::Drawing::Point(217, 30);
			this->num_LSKcena->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_LSKcena->Name = L"num_LSKcena";
			this->num_LSKcena->Size = System::Drawing::Size(80, 20);
			this->num_LSKcena->TabIndex = 19;
			this->num_LSKcena->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_LSKcena->ThousandsSeparator = true;
			// 
			// num_ZRXcena
			// 
			this->num_ZRXcena->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_ZRXcena->DecimalPlaces = 2;
			this->num_ZRXcena->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_ZRXcena->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_ZRXcena->Location = System::Drawing::Point(303, 30);
			this->num_ZRXcena->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_ZRXcena->Name = L"num_ZRXcena";
			this->num_ZRXcena->Size = System::Drawing::Size(80, 20);
			this->num_ZRXcena->TabIndex = 19;
			this->num_ZRXcena->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_ZRXcena->ThousandsSeparator = true;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(6, 32);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(32, 13);
			this->label41->TabIndex = 21;
			this->label41->Text = L"Cena";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(478, 32);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(28, 13);
			this->label40->TabIndex = 22;
			this->label40->Text = L"PLN";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(478, 7);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(28, 13);
			this->label39->TabIndex = 23;
			this->label39->Text = L"PLN";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Tan;
			this->panel3->Controls->Add(this->label55);
			this->panel3->Controls->Add(this->label50);
			this->panel3->Controls->Add(this->label51);
			this->panel3->Controls->Add(this->label52);
			this->panel3->Controls->Add(this->label53);
			this->panel3->Controls->Add(this->label54);
			this->panel3->Controls->Add(this->label49);
			this->panel3->Controls->Add(this->num_XRPUSDT);
			this->panel3->Controls->Add(this->label48);
			this->panel3->Controls->Add(this->label42);
			this->panel3->Controls->Add(this->num_BSVUSDT);
			this->panel3->Controls->Add(this->lb_USDT1);
			this->panel3->Controls->Add(this->label44);
			this->panel3->Controls->Add(this->label46);
			this->panel3->Controls->Add(this->num_cenaUSDT);
			this->panel3->Controls->Add(this->lb_USDT2);
			this->panel3->Controls->Add(this->label45);
			this->panel3->Controls->Add(this->label47);
			this->panel3->Controls->Add(this->lb_USDT3);
			this->panel3->Controls->Add(this->lb_USDT5);
			this->panel3->Controls->Add(this->num_ZRXUSDT);
			this->panel3->Controls->Add(this->lb_USDT4);
			this->panel3->Controls->Add(this->num_ETHUSDT);
			this->panel3->Controls->Add(this->num_LSKUSDT);
			this->panel3->Location = System::Drawing::Point(3, 108);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(517, 115);
			this->panel3->TabIndex = 17;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(477, 92);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(28, 13);
			this->label55->TabIndex = 34;
			this->label55->Text = L"PLN";
			// 
			// label50
			// 
			this->label50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(52, 92);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(78, 13);
			this->label50->TabIndex = 50;
			this->label50->Text = L"0";
			this->label50->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label51
			// 
			this->label51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(139, 92);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(78, 13);
			this->label51->TabIndex = 51;
			this->label51->Text = L"0";
			this->label51->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label52
			// 
			this->label52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(225, 92);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(78, 13);
			this->label52->TabIndex = 52;
			this->label52->Text = L"0";
			this->label52->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label53
			// 
			this->label53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(311, 92);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(78, 13);
			this->label53->TabIndex = 53;
			this->label53->Text = L"0";
			this->label53->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label54
			// 
			this->label54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(397, 92);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(78, 13);
			this->label54->TabIndex = 54;
			this->label54->Text = L"0";
			this->label54->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(6, 92);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(39, 13);
			this->label49->TabIndex = 49;
			this->label49->Text = L"w PLN";
			// 
			// num_XRPUSDT
			// 
			this->num_XRPUSDT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_XRPUSDT->DecimalPlaces = 5;
			this->num_XRPUSDT->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_XRPUSDT->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_XRPUSDT->Location = System::Drawing::Point(131, 41);
			this->num_XRPUSDT->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_XRPUSDT->Name = L"num_XRPUSDT";
			this->num_XRPUSDT->Size = System::Drawing::Size(80, 20);
			this->num_XRPUSDT->TabIndex = 43;
			this->num_XRPUSDT->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_XRPUSDT->ThousandsSeparator = true;
			this->num_XRPUSDT->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_XRPUSDT_ValueChanged);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(473, 70);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(37, 13);
			this->label48->TabIndex = 48;
			this->label48->Text = L"USDT";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(6, 70);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(37, 13);
			this->label42->TabIndex = 34;
			this->label42->Text = L"USDT";
			// 
			// num_BSVUSDT
			// 
			this->num_BSVUSDT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_BSVUSDT->DecimalPlaces = 5;
			this->num_BSVUSDT->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_BSVUSDT->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_BSVUSDT->Location = System::Drawing::Point(389, 41);
			this->num_BSVUSDT->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_BSVUSDT->Name = L"num_BSVUSDT";
			this->num_BSVUSDT->Size = System::Drawing::Size(80, 20);
			this->num_BSVUSDT->TabIndex = 47;
			this->num_BSVUSDT->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_BSVUSDT->ThousandsSeparator = true;
			this->num_BSVUSDT->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_BSVUSDT_ValueChanged);
			// 
			// lb_USDT1
			// 
			this->lb_USDT1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_USDT1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->lb_USDT1->Location = System::Drawing::Point(52, 70);
			this->lb_USDT1->Name = L"lb_USDT1";
			this->lb_USDT1->Size = System::Drawing::Size(78, 13);
			this->lb_USDT1->TabIndex = 16;
			this->lb_USDT1->Text = L"0";
			this->lb_USDT1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(160, 12);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(65, 13);
			this->label44->TabIndex = 40;
			this->label44->Text = L"Cena USDT";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(473, 43);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(37, 13);
			this->label46->TabIndex = 46;
			this->label46->Text = L"USDT";
			// 
			// num_cenaUSDT
			// 
			this->num_cenaUSDT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_cenaUSDT->DecimalPlaces = 5;
			this->num_cenaUSDT->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_cenaUSDT->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_cenaUSDT->Location = System::Drawing::Point(231, 10);
			this->num_cenaUSDT->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_cenaUSDT->Name = L"num_cenaUSDT";
			this->num_cenaUSDT->Size = System::Drawing::Size(63, 20);
			this->num_cenaUSDT->TabIndex = 39;
			this->num_cenaUSDT->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_cenaUSDT->ThousandsSeparator = true;
			this->num_cenaUSDT->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_cenaUSDT_ValueChanged_1);
			// 
			// lb_USDT2
			// 
			this->lb_USDT2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_USDT2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->lb_USDT2->Location = System::Drawing::Point(139, 70);
			this->lb_USDT2->Name = L"lb_USDT2";
			this->lb_USDT2->Size = System::Drawing::Size(78, 13);
			this->lb_USDT2->TabIndex = 35;
			this->lb_USDT2->Text = L"0";
			this->lb_USDT2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(299, 12);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(28, 13);
			this->label45->TabIndex = 11;
			this->label45->Text = L"PLN";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(6, 43);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(28, 13);
			this->label47->TabIndex = 45;
			this->label47->Text = L"Kurs";
			// 
			// lb_USDT3
			// 
			this->lb_USDT3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_USDT3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->lb_USDT3->Location = System::Drawing::Point(225, 70);
			this->lb_USDT3->Name = L"lb_USDT3";
			this->lb_USDT3->Size = System::Drawing::Size(78, 13);
			this->lb_USDT3->TabIndex = 36;
			this->lb_USDT3->Text = L"0";
			this->lb_USDT3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lb_USDT5
			// 
			this->lb_USDT5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_USDT5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->lb_USDT5->Location = System::Drawing::Point(397, 70);
			this->lb_USDT5->Name = L"lb_USDT5";
			this->lb_USDT5->Size = System::Drawing::Size(78, 13);
			this->lb_USDT5->TabIndex = 38;
			this->lb_USDT5->Text = L"0";
			this->lb_USDT5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// num_ZRXUSDT
			// 
			this->num_ZRXUSDT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_ZRXUSDT->DecimalPlaces = 5;
			this->num_ZRXUSDT->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_ZRXUSDT->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_ZRXUSDT->Location = System::Drawing::Point(303, 41);
			this->num_ZRXUSDT->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_ZRXUSDT->Name = L"num_ZRXUSDT";
			this->num_ZRXUSDT->Size = System::Drawing::Size(80, 20);
			this->num_ZRXUSDT->TabIndex = 41;
			this->num_ZRXUSDT->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_ZRXUSDT->ThousandsSeparator = true;
			this->num_ZRXUSDT->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_ZRXUSDT_ValueChanged);
			// 
			// lb_USDT4
			// 
			this->lb_USDT4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_USDT4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->lb_USDT4->Location = System::Drawing::Point(311, 70);
			this->lb_USDT4->Name = L"lb_USDT4";
			this->lb_USDT4->Size = System::Drawing::Size(78, 13);
			this->lb_USDT4->TabIndex = 37;
			this->lb_USDT4->Text = L"0";
			this->lb_USDT4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// num_ETHUSDT
			// 
			this->num_ETHUSDT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_ETHUSDT->DecimalPlaces = 5;
			this->num_ETHUSDT->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_ETHUSDT->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_ETHUSDT->Location = System::Drawing::Point(44, 41);
			this->num_ETHUSDT->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_ETHUSDT->Name = L"num_ETHUSDT";
			this->num_ETHUSDT->Size = System::Drawing::Size(80, 20);
			this->num_ETHUSDT->TabIndex = 44;
			this->num_ETHUSDT->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_ETHUSDT->ThousandsSeparator = true;
			this->num_ETHUSDT->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_ETHUSDT_ValueChanged);
			// 
			// num_LSKUSDT
			// 
			this->num_LSKUSDT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_LSKUSDT->DecimalPlaces = 5;
			this->num_LSKUSDT->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_LSKUSDT->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_LSKUSDT->Location = System::Drawing::Point(217, 41);
			this->num_LSKUSDT->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_LSKUSDT->Name = L"num_LSKUSDT";
			this->num_LSKUSDT->Size = System::Drawing::Size(80, 20);
			this->num_LSKUSDT->TabIndex = 42;
			this->num_LSKUSDT->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_LSKUSDT->ThousandsSeparator = true;
			this->num_LSKUSDT->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_LSKUSDT_ValueChanged);
			// 
			// lb_BSV
			// 
			this->lb_BSV->AutoSize = true;
			this->lb_BSV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->lb_BSV->Location = System::Drawing::Point(422, 16);
			this->lb_BSV->Name = L"lb_BSV";
			this->lb_BSV->Size = System::Drawing::Size(38, 17);
			this->lb_BSV->TabIndex = 33;
			this->lb_BSV->Text = L"BSV";
			this->lb_BSV->DoubleClick += gcnew System::EventHandler(this, &MyForm::lb_BSV_doubleClick);
			this->lb_BSV->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lb_BSV_MouseClick);
			// 
			// Box5
			// 
			this->Box5->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(7)
			{
				L"BTC", L"ETH", L"XRP", L"XLM", L"LTC",
					L"LSK", L"BSV"
			});
			this->Box5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Box5->FormattingEnabled = true;
			this->Box5->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"BTC", L"ETH", L"XRP", L"XLM", L"LTC", L"LSK", L"BSV" });
			this->Box5->Location = System::Drawing::Point(411, 13);
			this->Box5->Name = L"Box5";
			this->Box5->Size = System::Drawing::Size(62, 21);
			this->Box5->TabIndex = 30;
			this->Box5->Visible = false;
			this->Box5->TextChanged += gcnew System::EventHandler(this, &MyForm::Box5_TextChanged);
			this->Box5->Leave += gcnew System::EventHandler(this, &MyForm::Box5_Leave);
			// 
			// lb_nazwaKrypto
			// 
			this->lb_nazwaKrypto->AutoSize = true;
			this->lb_nazwaKrypto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	  static_cast<System::Byte>(0)));
			this->lb_nazwaKrypto->ForeColor = System::Drawing::Color::Blue;
			this->lb_nazwaKrypto->Location = System::Drawing::Point(230, 236);
			this->lb_nazwaKrypto->Name = L"lb_nazwaKrypto";
			this->lb_nazwaKrypto->Size = System::Drawing::Size(72, 31);
			this->lb_nazwaKrypto->TabIndex = 29;
			this->lb_nazwaKrypto->Text = L"ETH";
			// 
			// lb_ZRX
			// 
			this->lb_ZRX->AutoSize = true;
			this->lb_ZRX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->lb_ZRX->Location = System::Drawing::Point(336, 16);
			this->lb_ZRX->Name = L"lb_ZRX";
			this->lb_ZRX->Size = System::Drawing::Size(39, 17);
			this->lb_ZRX->TabIndex = 28;
			this->lb_ZRX->Text = L"ZRX";
			this->lb_ZRX->DoubleClick += gcnew System::EventHandler(this, &MyForm::lb_ZRX_doubleClick);
			this->lb_ZRX->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lb_ZRX_MouseClick);
			// 
			// lb_LSK
			// 
			this->lb_LSK->AutoSize = true;
			this->lb_LSK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->lb_LSK->Location = System::Drawing::Point(253, 16);
			this->lb_LSK->Name = L"lb_LSK";
			this->lb_LSK->Size = System::Drawing::Size(37, 17);
			this->lb_LSK->TabIndex = 27;
			this->lb_LSK->Text = L"LSK";
			this->lb_LSK->DoubleClick += gcnew System::EventHandler(this, &MyForm::lb_LSK_doubleClick);
			this->lb_LSK->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lb_LSK_MouseClick);
			// 
			// lb_XRP
			// 
			this->lb_XRP->AutoSize = true;
			this->lb_XRP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->lb_XRP->Location = System::Drawing::Point(163, 16);
			this->lb_XRP->Name = L"lb_XRP";
			this->lb_XRP->Size = System::Drawing::Size(39, 17);
			this->lb_XRP->TabIndex = 26;
			this->lb_XRP->Text = L"XRP";
			this->lb_XRP->DoubleClick += gcnew System::EventHandler(this, &MyForm::lb_XRP_doubleClick);
			this->lb_XRP->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lb_XRP_MouseClick);
			// 
			// lb_ETH
			// 
			this->lb_ETH->AutoSize = true;
			this->lb_ETH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->lb_ETH->Location = System::Drawing::Point(74, 16);
			this->lb_ETH->Name = L"lb_ETH";
			this->lb_ETH->Size = System::Drawing::Size(39, 17);
			this->lb_ETH->TabIndex = 25;
			this->lb_ETH->Text = L"ETH";
			this->lb_ETH->DoubleClick += gcnew System::EventHandler(this, &MyForm::lb_ETH_doubleClick);
			this->lb_ETH->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::lb_ETH_MouseClick);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(3, 18);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(54, 13);
			this->label43->TabIndex = 24;
			this->label43->Text = L"KRYPTO:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gainsboro;
			this->panel2->Controls->Add(this->lb_swingWynik);
			this->panel2->Controls->Add(this->lb_swingPLN);
			this->panel2->Controls->Add(this->lb_swingLabel);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(313, 353);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 39);
			this->panel2->TabIndex = 16;
			// 
			// lb_swingWynik
			// 
			this->lb_swingWynik->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_swingWynik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(0)));
			this->lb_swingWynik->Location = System::Drawing::Point(71, 9);
			this->lb_swingWynik->Name = L"lb_swingWynik";
			this->lb_swingWynik->Size = System::Drawing::Size(78, 20);
			this->lb_swingWynik->TabIndex = 14;
			this->lb_swingWynik->Text = L"0";
			this->lb_swingWynik->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// lb_swingPLN
			// 
			this->lb_swingPLN->AutoSize = true;
			this->lb_swingPLN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->lb_swingPLN->Location = System::Drawing::Point(146, 9);
			this->lb_swingPLN->Name = L"lb_swingPLN";
			this->lb_swingPLN->Size = System::Drawing::Size(42, 20);
			this->lb_swingPLN->TabIndex = 15;
			this->lb_swingPLN->Text = L"PLN";
			// 
			// lb_swingLabel
			// 
			this->lb_swingLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lb_swingLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(0)));
			this->lb_swingLabel->Location = System::Drawing::Point(2, 9);
			this->lb_swingLabel->Name = L"lb_swingLabel";
			this->lb_swingLabel->Size = System::Drawing::Size(70, 20);
			this->lb_swingLabel->TabIndex = 13;
			this->lb_swingLabel->Text = L"-";
			this->lb_swingLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(218, 372);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(35, 17);
			this->label38->TabIndex = 12;
			this->label38->Text = L"PLN";
			// 
			// lb_progWyjscia
			// 
			this->lb_progWyjscia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	  static_cast<System::Byte>(0)));
			this->lb_progWyjscia->Location = System::Drawing::Point(158, 372);
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
			this->label37->Location = System::Drawing::Point(17, 372);
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
			this->label36->Location = System::Drawing::Point(17, 346);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(142, 17);
			this->label36->TabIndex = 9;
			this->label36->Text = L"Jednostek nabytych: ";
			// 
			// lb_jednKupione
			// 
			this->lb_jednKupione->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	  static_cast<System::Byte>(0)));
			this->lb_jednKupione->Location = System::Drawing::Point(158, 346);
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
			this->num_prowizja->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_prowizja->Location = System::Drawing::Point(232, 277);
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
			this->label30->Location = System::Drawing::Point(240, 300);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(46, 13);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Prowizja";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::Transparent;
			this->groupBox6->Controls->Add(this->lb_kwotaWyjscia);
			this->groupBox6->Controls->Add(this->label35);
			this->groupBox6->Controls->Add(this->label34);
			this->groupBox6->Controls->Add(this->label32);
			this->groupBox6->Controls->Add(this->label28);
			this->groupBox6->Controls->Add(this->num_cenaWyjscia);
			this->groupBox6->Controls->Add(this->label29);
			this->groupBox6->Location = System::Drawing::Point(325, 244);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(195, 78);
			this->groupBox6->TabIndex = 0;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Wyjście";
			// 
			// lb_kwotaWyjscia
			// 
			this->lb_kwotaWyjscia->Location = System::Drawing::Point(81, 24);
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
			this->label34->Location = System::Drawing::Point(162, 24);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(28, 13);
			this->label34->TabIndex = 9;
			this->label34->Text = L"PLN";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(162, 51);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(28, 13);
			this->label32->TabIndex = 7;
			this->label32->Text = L"PLN";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(15, 51);
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
			this->num_cenaWyjscia->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_cenaWyjscia->Location = System::Drawing::Point(76, 49);
			this->num_cenaWyjscia->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_cenaWyjscia->Name = L"num_cenaWyjscia";
			this->num_cenaWyjscia->Size = System::Drawing::Size(80, 20);
			this->num_cenaWyjscia->TabIndex = 5;
			this->num_cenaWyjscia->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_cenaWyjscia->ThousandsSeparator = true;
			this->num_cenaWyjscia->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_cenaWyjscia_ValueChanged);
			this->num_cenaWyjscia->Click += gcnew System::EventHandler(this, &MyForm::num_cenaWyjscia_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(15, 24);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(37, 13);
			this->label29->TabIndex = 6;
			this->label29->Text = L"Kwota";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->label33);
			this->groupBox5->Controls->Add(this->label31);
			this->groupBox5->Controls->Add(this->label27);
			this->groupBox5->Controls->Add(this->num_cenaWejscia);
			this->groupBox5->Controls->Add(this->num_kwotaWejscia);
			this->groupBox5->Controls->Add(this->label26);
			this->groupBox5->Location = System::Drawing::Point(3, 244);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(199, 78);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Wejście";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(161, 24);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(28, 13);
			this->label33->TabIndex = 8;
			this->label33->Text = L"PLN";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(161, 49);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(28, 13);
			this->label31->TabIndex = 6;
			this->label31->Text = L"PLN";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(14, 49);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(32, 13);
			this->label27->TabIndex = 5;
			this->label27->Text = L"Cena";
			// 
			// num_cenaWejscia
			// 
			this->num_cenaWejscia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num_cenaWejscia->DecimalPlaces = 2;
			this->num_cenaWejscia->ForeColor = System::Drawing::SystemColors::WindowText;
			this->num_cenaWejscia->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->num_cenaWejscia->Location = System::Drawing::Point(75, 47);
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
			this->num_kwotaWejscia->Location = System::Drawing::Point(75, 22);
			this->num_kwotaWejscia->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_kwotaWejscia->Name = L"num_kwotaWejscia";
			this->num_kwotaWejscia->Size = System::Drawing::Size(80, 20);
			this->num_kwotaWejscia->TabIndex = 2;
			this->num_kwotaWejscia->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_kwotaWejscia->ThousandsSeparator = true;
			this->num_kwotaWejscia->ValueChanged += gcnew System::EventHandler(this, &MyForm::num_kwotaWejscia_ValueChanged);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(14, 24);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(37, 13);
			this->label26->TabIndex = 4;
			this->label26->Text = L"Kwota";
			// 
			// Box1
			// 
			this->Box1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(7)
			{
				L"BTC", L"ETH", L"XRP", L"XLM", L"LTC",
					L"LSK", L"BSV"
			});
			this->Box1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Box1->FormattingEnabled = true;
			this->Box1->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"BTC", L"ETH", L"XRP", L"XLM", L"LTC", L"LSK", L"BSV" });
			this->Box1->Location = System::Drawing::Point(65, 13);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(62, 21);
			this->Box1->TabIndex = 17;
			this->Box1->Visible = false;
			this->Box1->TextChanged += gcnew System::EventHandler(this, &MyForm::Box1_TextChanged);
			this->Box1->Leave += gcnew System::EventHandler(this, &MyForm::Box1_Leave);
			// 
			// Box4
			// 
			this->Box4->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(7)
			{
				L"BTC", L"ETH", L"XRP", L"XLM", L"LTC",
					L"LSK", L"BSV"
			});
			this->Box4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Box4->FormattingEnabled = true;
			this->Box4->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"BTC", L"ETH", L"XRP", L"XLM", L"LTC", L"LSK", L"BSV" });
			this->Box4->Location = System::Drawing::Point(325, 13);
			this->Box4->Name = L"Box4";
			this->Box4->Size = System::Drawing::Size(62, 21);
			this->Box4->TabIndex = 17;
			this->Box4->Visible = false;
			this->Box4->TextChanged += gcnew System::EventHandler(this, &MyForm::Box4_TextChanged);
			this->Box4->Leave += gcnew System::EventHandler(this, &MyForm::Box4_Leave);
			// 
			// Box3
			// 
			this->Box3->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(7)
			{
				L"BTC", L"ETH", L"XRP", L"XLM", L"LTC",
					L"LSK", L"BSV"
			});
			this->Box3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Box3->FormattingEnabled = true;
			this->Box3->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"BTC", L"ETH", L"XRP", L"XLM", L"LTC", L"LSK", L"BSV" });
			this->Box3->Location = System::Drawing::Point(239, 13);
			this->Box3->Name = L"Box3";
			this->Box3->Size = System::Drawing::Size(62, 21);
			this->Box3->TabIndex = 17;
			this->Box3->Visible = false;
			this->Box3->TextChanged += gcnew System::EventHandler(this, &MyForm::Box3_TextChanged);
			this->Box3->Leave += gcnew System::EventHandler(this, &MyForm::Box3_Leave);
			// 
			// Box2
			// 
			this->Box2->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(7)
			{
				L"BTC", L"ETH", L"XRP", L"XLM", L"LTC",
					L"LSK", L"BSV"
			});
			this->Box2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Box2->FormattingEnabled = true;
			this->Box2->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"BTC", L"ETH", L"XRP", L"XLM", L"LTC", L"LSK", L"BSV" });
			this->Box2->Location = System::Drawing::Point(153, 13);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(62, 21);
			this->Box2->TabIndex = 17;
			this->Box2->Visible = false;
			this->Box2->TextChanged += gcnew System::EventHandler(this, &MyForm::Box2_TextChanged);
			this->Box2->Leave += gcnew System::EventHandler(this, &MyForm::Box2_Leave);
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
			this->tabSpread->Size = System::Drawing::Size(523, 403);
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
			this->tabPage2->Size = System::Drawing::Size(523, 403);
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
			this->tabStopLoss->Size = System::Drawing::Size(523, 403);
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
			this->ClientSize = System::Drawing::Size(548, 466);
			this->Controls->Add(this->tb_Karty);
			this->Controls->Add(this->linkLabel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->Text = L"Waluty";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
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
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_XRPcena))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ETHkwota))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_BSVcena))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_XRPkwota))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_BSVkwota))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_LSKkwota))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ZRXkwota))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ETHcena))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_LSKcena))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ZRXcena))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_XRPUSDT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_BSVUSDT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_cenaUSDT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ZRXUSDT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_ETHUSDT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_LSKUSDT))->EndInit();
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
	
	System::Decimal jednostkiETH;
	System::Decimal jednostkiXRP;
	System::Decimal jednostkiLSK;
	System::Decimal jednostkiZRX;
	System::Decimal jednostkiBSV;
//
//	jednostkiETH = (num_ETHkwota->Value / num_ETHcena->Value) * (1 - num_prowizja->Value / 100);
//	jednostkiXRP = (num_XRPkwota->Value / num_ZRXcena->Value) * (1 - num_prowizja->Value / 100);
//	jednostkiLSK = (num_LSKkwota->Value / num_LSKcena->Value) * (1 - num_prowizja->Value / 100);
//	jednostkiZRX = (num_ZRXkwota->Value / num_ZRXcena->Value) * (1 - num_prowizja->Value / 100);
//	jednostkiBSV = (num_BSVkwota->Value / num_BSVcena->Value) * (1 - num_prowizja->Value / 100);

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
		//num_ETHcena->Increment = num_ETHcena->Value/10;

		if (num_ETHcena->Value != 0) 
		{ 
			jednostkiETH = (num_ETHkwota->Value / num_ETHcena->Value) * (1 - num_prowizja->Value / 100);
		}
		else jednostkiETH = 0;
		
		if (num_XRPcena->Value != 0)
		{
			jednostkiXRP = (num_XRPkwota->Value / num_ZRXcena->Value) * (1 - num_prowizja->Value / 100);
		}
		else jednostkiXRP = 0;
		
		if (num_LSKcena->Value != 0)
		{
			jednostkiLSK = (num_LSKkwota->Value / num_LSKcena->Value) * (1 - num_prowizja->Value / 100);
		}
		else jednostkiLSK = 0;
		
		if (num_ZRXcena->Value != 0)
		{
			jednostkiZRX = (num_ZRXkwota->Value / num_ZRXcena->Value) * (1 - num_prowizja->Value / 100);
		}
		else jednostkiZRX = 0;
		
		if (num_BSVcena->Value != 0)
		{
			jednostkiBSV = (num_BSVkwota->Value / num_BSVcena->Value) * (1 - num_prowizja->Value / 100);
		}
		else jednostkiBSV = 0;
		
		if (num_cenaWejscia->Value != 0)
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
			stan.write((const char*)&num_ETHkwota->Value, sizeof(num_ETHkwota->Value));
			stan.write((const char*)&num_XRPkwota->Value, sizeof(num_XRPkwota->Value));
			stan.write((const char*)&num_LSKkwota->Value, sizeof(num_LSKkwota->Value));
			stan.write((const char*)&num_ZRXkwota->Value, sizeof(num_ZRXkwota->Value));
			stan.write((const char*)&num_BSVkwota->Value, sizeof(num_BSVkwota->Value));
			stan.write((const char*)&num_ETHcena->Value, sizeof(num_ETHcena->Value));
			stan.write((const char*)&num_XRPcena->Value, sizeof(num_XRPcena->Value));
			stan.write((const char*)&num_LSKcena->Value, sizeof(num_LSKcena->Value));
			stan.write((const char*)&num_ZRXcena->Value, sizeof(num_ZRXcena->Value));
			stan.write((const char*)&num_BSVcena->Value, sizeof(num_BSVcena->Value));
			stan.write((const char*)&num_cenaUSDT->Value, sizeof(num_cenaUSDT->Value));
			stan.write((const char*)&num_ETHUSDT->Value, sizeof(num_ETHUSDT->Value));
			stan.write((const char*)&num_XRPUSDT->Value, sizeof(num_XRPUSDT->Value));
			stan.write((const char*)&num_LSKUSDT->Value, sizeof(num_LSKUSDT->Value));
			stan.write((const char*)&num_ZRXUSDT->Value, sizeof(num_ZRXUSDT->Value));
			stan.write((const char*)&num_BSVUSDT->Value, sizeof(num_BSVUSDT->Value));

			stan.setf(std::ios_base::out);

			/*stan.write((const char*)&lb_ETH->Text, sizeof(lb_ETH->Text));
			stan.write((const char*)&lb_XRP->Text, sizeof(lb_XRP->Text));
			stan.write((const char*)&lb_LSK->Text, sizeof(lb_LSK->Text));
			stan.write((const char*)&lb_ZRX->Text, sizeof(lb_ZRX->Text));
			stan.write((const char*)&lb_BSV->Text, sizeof(lb_BSV->Text));*/

		/*	lb_ETH->Text
			lb_XRP->Text
			lb_LSK->Text
			lb_ZRX->Text
			lb_BSV->Text*/

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
			stan.read((char*)&temp, sizeof(temp));
			num_ETHkwota->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_XRPkwota->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_LSKkwota->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_ZRXkwota->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_BSVkwota->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_ETHcena->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_XRPcena->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_LSKcena->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_ZRXcena->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_BSVcena->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_cenaUSDT->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_ETHUSDT->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_XRPUSDT->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_LSKUSDT->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_ZRXUSDT->Value = temp;
			stan.read((char*)&temp, sizeof(temp));
			num_BSVUSDT->Value = temp;

		/*	System::String temp;

			stan.read((char*)&temp, sizeof(temp));
			lb_ETH->Text = temp;
			stan.read((char*)&temp, sizeof(temp));
			lb_XRP->Text = temp;
			stan.read((char*)&temp, sizeof(temp));
			lb_LSK->Text = temp;
			stan.read((char*)&temp, sizeof(temp));
			lb_ZRX->Text = temp;
			stan.read((char*)&temp, sizeof(temp));
			lb_BSV->Text = temp;


			lb_ETH->Text
			lb_XRP->Text
			lb_LSK->Text
			lb_ZRX->Text
			lb_BSV->Text*/

		//	System::Windows::Forms::MessageBox::Show(L"Stan został wczytany", L"Odczyt stanu", MessageBoxButtons::OK, MessageBoxIcon::Information);
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

	private: System::Void sl_cena_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		stopLoss();
	}

	private: System::Void sl_prog_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		stopLoss();
	}

	private: System::Void num_cenaWejscia_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		swing();
	}

	private: System::Void num_kwotaWejscia_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		swing();
	}

	private: System::Void num_prowizja_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		swing();
	}
	private: System::Void num_cenaWyjscia_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		swing();
	}

	private: System::Void num_ETHUSDT_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		System::Decimal kwota = ((num_ETHkwota->Value / num_ETHcena->Value) * (1 - num_prowizja->Value / 100)) * num_ETHUSDT->Value;

		if (num_ETHcena->Value != 0)
		{
			lb_USDT1->Text = System::Convert::ToString(System::Decimal::Ceiling(100000 * kwota) / 100000);
		}
		else lb_USDT1->Text = "-";
		
		label50->Text = System::Convert::ToString(System::Decimal::Ceiling(kwota * num_cenaUSDT->Value * 100) / 100);
	}

	private: System::Void num_XRPUSDT_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		System::Decimal kwota = ((num_XRPkwota->Value / num_XRPcena->Value) * (1 - num_prowizja->Value / 100)) * num_XRPUSDT->Value;

		if (num_XRPcena->Value != 0)
		{
			lb_USDT2->Text = System::Convert::ToString(System::Decimal::Ceiling(100000 * kwota) / 100000);
		}
		else lb_USDT2->Text = "-";
	
		label51->Text = System::Convert::ToString(System::Decimal::Ceiling(kwota * num_cenaUSDT->Value * 100) / 100);
	}


	private: System::Void num_LSKUSDT_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		System::Decimal kwota = ((num_LSKkwota->Value / num_LSKcena->Value) * (1 - num_prowizja->Value / 100)) * num_LSKUSDT->Value;

		if (num_LSKcena->Value != 0)
		{
			lb_USDT3->Text = System::Convert::ToString(System::Decimal::Ceiling(100000 * kwota) / 100000);
		}
		else lb_USDT3->Text = "-";

		label52->Text = System::Convert::ToString(System::Decimal::Ceiling(kwota * num_cenaUSDT->Value * 100) / 100);
	}

	private: System::Void num_ZRXUSDT_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		System::Decimal kwota = ((num_ZRXkwota->Value / num_ZRXcena->Value) * (1 - num_prowizja->Value / 100)) * num_ZRXUSDT->Value;

		if (num_ZRXcena->Value != 0)
		{
			lb_USDT4->Text = System::Convert::ToString(System::Decimal::Ceiling(100000 * kwota) / 100000);
		}
		else lb_USDT4->Text = "-";

		label53->Text = System::Convert::ToString(System::Decimal::Ceiling(kwota * num_cenaUSDT->Value * 100) / 100);
	}

	private: System::Void num_BSVUSDT_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		System::Decimal kwota = ((num_BSVkwota->Value / num_BSVcena->Value) * (1 - num_prowizja->Value / 100)) * num_BSVUSDT->Value;

		if (num_BSVcena->Value != 0)
		{
			lb_USDT5->Text = System::Convert::ToString(System::Decimal::Ceiling(100000 * kwota) / 100000);
		}
		else lb_USDT5->Text = "-";

		label54->Text = System::Convert::ToString(System::Decimal::Ceiling(kwota * num_cenaUSDT->Value * 100) / 100);
	}

	private: System::Void num_cenaUSDT_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		swing();
	}

	private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
	{
		zapiszStan();
	}
	private: System::Void lb_ETH_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		num_kwotaWejscia->Value = num_ETHkwota->Value;
		num_cenaWejscia->Value = num_ETHcena->Value;
		lb_nazwaKrypto->Text = lb_ETH->Text;
		num_cenaWyjscia->Focus();
		num_cenaWyjscia->BackColor = Color::Red;
		num_cenaWyjscia->Value = num_cenaWejscia->Value;
	}
	private: System::Void lb_XRP_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		num_kwotaWejscia->Value = num_XRPkwota->Value;
		num_cenaWejscia->Value = num_XRPcena->Value;
		lb_nazwaKrypto->Text = lb_XRP->Text;
		num_cenaWyjscia->Focus();
		num_cenaWyjscia->BackColor = Color::Red;
		num_cenaWyjscia->Value = num_cenaWejscia->Value;
	}
	private: System::Void lb_LSK_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		num_kwotaWejscia->Value = num_LSKkwota->Value;
		num_cenaWejscia->Value = num_LSKcena->Value;
		lb_nazwaKrypto->Text = lb_LSK->Text;
		num_cenaWyjscia->Focus();
		num_cenaWyjscia->BackColor = Color::Red;
		num_cenaWyjscia->Value = num_cenaWejscia->Value;
	}
	private: System::Void lb_ZRX_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		num_kwotaWejscia->Value = num_ZRXkwota->Value;
		num_cenaWejscia->Value = num_ZRXcena->Value;
		lb_nazwaKrypto->Text = lb_ZRX->Text;
		num_cenaWyjscia->Focus();
		num_cenaWyjscia->BackColor = Color::Red;
		num_cenaWyjscia->Value = num_cenaWejscia->Value;
	}

	private: System::Void lb_BSV_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		num_kwotaWejscia->Value = num_BSVkwota->Value;
		num_cenaWejscia->Value = num_BSVcena->Value;
		lb_nazwaKrypto->Text = lb_BSV->Text;
		num_cenaWyjscia->Focus();
		num_cenaWyjscia->BackColor = Color::Red;
		num_cenaWyjscia->Value = num_cenaWejscia->Value;
	}


	private: System::Void lb_ETH_doubleClick(System::Object^ sender, System::EventArgs^ e)
	{
		lb_ETH->Visible = false;
		Box1->Visible = true;
	}

	private: System::Void lb_XRP_doubleClick(System::Object^ sender, System::EventArgs^ e)
	{
		lb_XRP->Visible = false;
		Box2->Visible = true;
	}

	private: System::Void lb_LSK_doubleClick(System::Object^ sender, System::EventArgs^ e)
	{
		lb_LSK->Visible = false;
		Box3->Visible = true;
	}

	private: System::Void lb_ZRX_doubleClick(System::Object^ sender, System::EventArgs^ e)
	{
		lb_ZRX->Visible = false;
		Box4->Visible = true;
	}

	private: System::Void lb_BSV_doubleClick(System::Object^ sender, System::EventArgs^ e)
	{
		lb_BSV->Visible = false;
		Box5->Visible = true;
	}

	private: System::Void Box1_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		Box1->Visible = false;
		lb_ETH->Visible = true;
	}

	private: System::Void Box2_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		Box2->Visible = false;
		lb_XRP->Visible = true;
	}

	private: System::Void Box3_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		Box3->Visible = false;
		lb_LSK->Visible = true;
	}

	private: System::Void Box4_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		Box4->Visible = false;
		lb_ZRX->Visible = true;
	}

	private: System::Void Box5_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		Box5->Visible = false;
		lb_BSV->Visible = true;
	}

	private: System::Void Box1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		lb_ETH->Text = Box1->Text;
	}

	private: System::Void Box2_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		lb_XRP->Text = Box2->Text;
	}

	private: System::Void Box3_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		lb_LSK->Text = Box3->Text;
	}

	private: System::Void Box4_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		lb_ZRX->Text = Box4->Text;
	}

	private: System::Void Box5_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		lb_BSV->Text = Box5->Text;
	}



private: System::Void num_cenaUSDT_ValueChanged_1(System::Object^ sender, System::EventArgs^ e)
{

}
private: System::Void num_ETHkwota_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{

}


private: System::Void num_cenaWyjscia_Click(System::Object^ sender, System::EventArgs^ e)
{
	num_cenaWyjscia->BackColor = System::Drawing::SystemColors::Window;
}
};

}