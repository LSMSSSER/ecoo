#pragma once
#include "datacalc.h"
#include "Calculationform.h"


namespace ecoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

		/// <summary>
		/// ������ ��� Calculationform
		/// </summary>
	public ref class Calculationform : public System::Windows::Forms::Form
	{
	public:
		Calculationform(void)
		{
			InitializeComponent();
			//
				//TODO: �������� ��� ������������
				//
		}

	protected:
			/// <summary>
			/// ���������� ��� ������������ �������.
			/// </summary>
		~Calculationform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ capacity;
	private: System::Windows::Forms::TextBox^ WTConsumption;
	private: System::Windows::Forms::TextBox^ idle;
	private: System::Windows::Forms::TextBox^ warmup;
	private: System::Windows::Forms::TextBox^ pop;





	private: System::Windows::Forms::ComboBox^ FuelType;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ NormType;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ CityType;
	private: System::Windows::Forms::Button^ backbut;
	private: System::Windows::Forms::Button^ raschet;





	private:
			/// <summary>
			/// ������������ ���������� ������������.
			/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			/// <summary>
			/// ��������� ����� ��� ��������� ������������ � �� ��������� 
			/// ���������� ����� ������ � ������� ��������� ����.
			/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->capacity = (gcnew System::Windows::Forms::TextBox());
			this->WTConsumption = (gcnew System::Windows::Forms::TextBox());
			this->idle = (gcnew System::Windows::Forms::TextBox());
			this->warmup = (gcnew System::Windows::Forms::TextBox());
			this->pop = (gcnew System::Windows::Forms::TextBox());
			this->FuelType = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->NormType = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->CityType = (gcnew System::Windows::Forms::ComboBox());
			this->backbut = (gcnew System::Windows::Forms::Button());
			this->raschet = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������� ��������������� ���������� � (��)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(287, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"������� ������� ������ ������� (�/100��)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(316, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"������� ������ ������� �� �������� ���� (�/�)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(290, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"������� ����� �������� ���������� (���)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(46, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(257, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"������� ��� ������� ��� ����������";
			// 
			// capacity
			// 
			this->capacity->Location = System::Drawing::Point(49, 38);
			this->capacity->Name = L"capacity";
			this->capacity->Size = System::Drawing::Size(117, 22);
			this->capacity->TabIndex = 5;
			// 
			// WTConsumption
			// 
			this->WTConsumption->Location = System::Drawing::Point(49, 82);
			this->WTConsumption->Name = L"WTConsumption";
			this->WTConsumption->Size = System::Drawing::Size(117, 22);
			this->WTConsumption->TabIndex = 6;
			// 
			// idle
			// 
			this->idle->Location = System::Drawing::Point(49, 126);
			this->idle->Name = L"idle";
			this->idle->Size = System::Drawing::Size(117, 22);
			this->idle->TabIndex = 7;
			// 
			// warmup
			// 
			this->warmup->Location = System::Drawing::Point(49, 173);
			this->warmup->Name = L"warmup";
			this->warmup->Size = System::Drawing::Size(117, 22);
			this->warmup->TabIndex = 8;
			// 
			// pop
			// 
			this->pop->Location = System::Drawing::Point(49, 263);
			this->pop->Name = L"pop";
			this->pop->Size = System::Drawing::Size(117, 22);
			this->pop->TabIndex = 9;
			// 
			// FuelType
			// 
			this->FuelType->FormattingEnabled = true;
			this->FuelType->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"�-76", L"��-92", L"��-93", L"��-95", L"��-98",
					L"������ ������", L"������ ������", L"�������� �������� (������)", L"�������� ��������� ��� (���)"
			});
			this->FuelType->Location = System::Drawing::Point(49, 217);
			this->FuelType->Name = L"FuelType";
			this->FuelType->Size = System::Drawing::Size(121, 24);
			this->FuelType->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(46, 244);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"������� ����� �������";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(46, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"�������� ��� ���������";
			// 
			// NormType
			// 
			this->NormType->FormattingEnabled = true;
			this->NormType->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
				L"��������������� �������� ���������� ������� ������������ �������",
					L"����������� ����� ���������� ������� ������������ ������� (0.16051)"
			});
			this->NormType->Location = System::Drawing::Point(49, 307);
			this->NormType->Name = L"NormType";
			this->NormType->Size = System::Drawing::Size(121, 24);
			this->NormType->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(46, 334);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(261, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"�������� ������ ����������� ������";
			// 
			// CityType
			// 
			this->CityType->FormattingEnabled = true;
			this->CityType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��������� ���������� �����", L"������� ���������� �����" });
			this->CityType->Location = System::Drawing::Point(49, 353);
			this->CityType->Name = L"CityType";
			this->CityType->Size = System::Drawing::Size(121, 24);
			this->CityType->TabIndex = 15;
			// 
			// backbut
			// 
			this->backbut->Location = System::Drawing::Point(402, 480);
			this->backbut->Name = L"backbut";
			this->backbut->Size = System::Drawing::Size(85, 28);
			this->backbut->TabIndex = 18;
			this->backbut->Text = L"�����";
			this->backbut->UseVisualStyleBackColor = true;
			this->backbut->Click += gcnew System::EventHandler(this, &Calculationform::backbut_Click);
			// 
			// raschet
			// 
			this->raschet->Location = System::Drawing::Point(548, 480);
			this->raschet->Name = L"raschet";
			this->raschet->Size = System::Drawing::Size(85, 28);
			this->raschet->TabIndex = 19;
			this->raschet->Text = L"������";
			this->raschet->UseVisualStyleBackColor = true;
			this->raschet->Click += gcnew System::EventHandler(this, &Calculationform::raschet_Click);
			// 
			// Calculationform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1115, 596);
			this->Controls->Add(this->raschet);
			this->Controls->Add(this->backbut);
			this->Controls->Add(this->CityType);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->NormType);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->FuelType);
			this->Controls->Add(this->pop);
			this->Controls->Add(this->warmup);
			this->Controls->Add(this->idle);
			this->Controls->Add(this->WTConsumption);
			this->Controls->Add(this->capacity);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Calculationform";
			this->Text = L"Calculationform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backbut_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculationform::Hide();
	}
	private: System::Void raschet_Click(System::Object^ sender, System::EventArgs^ e) {
		datacalc^ dc = gcnew datacalc();// ������� ����� ���������
		dc->Show(); // ��������� ������ �����
		Calculationform::Hide();
	}
};
}
