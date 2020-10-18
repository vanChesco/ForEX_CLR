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
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ wartosc_po;


	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->wartosc_po = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_zak))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_sp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// c_zak
			// 
			this->c_zak->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->c_zak->DecimalPlaces = 2;
			this->c_zak->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(238)));
			this->c_zak->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->c_zak->Location = System::Drawing::Point(11, 39);
			this->c_zak->Name = L"c_zak";
			this->c_zak->Size = System::Drawing::Size(80, 20);
			this->c_zak->TabIndex = 0;
			this->c_zak->Tag = L"";
			this->c_zak->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->c_zak->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 388, 0, 0, 131072 });
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
			this->c_s_label->Text = L"Cena sprzeda¿y";
			// 
			// c_sp
			// 
			this->c_sp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->c_sp->DecimalPlaces = 2;
			this->c_sp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(238)));
			this->c_sp->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->c_sp->Location = System::Drawing::Point(104, 38);
			this->c_sp->Name = L"c_sp";
			this->c_sp->Size = System::Drawing::Size(80, 20);
			this->c_sp->TabIndex = 3;
			this->c_sp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->c_sp->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 39, 0, 0, 65536 });
			// 
			// inw_label
			// 
			this->inw_label->AutoSize = true;
			this->inw_label->Location = System::Drawing::Point(14, 98);
			this->inw_label->Name = L"inw_label";
			this->inw_label->Size = System::Drawing::Size(82, 13);
			this->inw_label->TabIndex = 4;
			this->inw_label->Text = L"Zainwestowano";
			this->inw_label->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Wynik_label
			// 
			this->Wynik_label->AutoSize = true;
			this->Wynik_label->Location = System::Drawing::Point(107, 97);
			this->Wynik_label->Name = L"Wynik_label";
			this->Wynik_label->Size = System::Drawing::Size(112, 13);
			this->Wynik_label->TabIndex = 5;
			this->Wynik_label->Text = L"Wartoœæ po sprzeda¿y";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown1->Location = System::Drawing::Point(14, 114);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(80, 20);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150000, 0, 0, 0 });
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->c_k_label);
			this->groupBox1->Controls->Add(this->c_zak);
			this->groupBox1->Controls->Add(this->c_s_label);
			this->groupBox1->Controls->Add(this->c_sp);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox1->Size = System::Drawing::Size(195, 69);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Spread";
			// 
			// wartosc_po
			// 
			this->wartosc_po->AutoSize = true;
			this->wartosc_po->Location = System::Drawing::Point(110, 120);
			this->wartosc_po->Name = L"wartosc_po";
			this->wartosc_po->Size = System::Drawing::Size(35, 13);
			this->wartosc_po->TabIndex = 8;
			this->wartosc_po->Text = L"label1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(237, 182);
			this->Controls->Add(this->wartosc_po);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->Wynik_label);
			this->Controls->Add(this->inw_label);
			this->Name = L"MyForm";
			this->Text = L"Forex";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_zak))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c_sp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{}
};
}
