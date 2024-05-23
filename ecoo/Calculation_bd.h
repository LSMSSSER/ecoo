#pragma once
#include "Calculation_bd.h"

namespace ecoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Calculation_bd
	/// </summary>
	public ref class Calculation_bd : public System::Windows::Forms::Form
	{
	public:
		Calculation_bd(void)
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
		~Calculation_bd()
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
	private: System::Windows::Forms::ComboBox^ ModelCombo;
	private: System::Windows::Forms::ComboBox^ CityType;



	private: System::Windows::Forms::ComboBox^ NormType;



	private: System::Windows::Forms::TextBox^ norm_box;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ pop;


	private: System::Windows::Forms::Button^ calc_button;

	private: System::Windows::Forms::Button^ back_button;



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
			this->ModelCombo = (gcnew System::Windows::Forms::ComboBox());
			this->CityType = (gcnew System::Windows::Forms::ComboBox());
			this->NormType = (gcnew System::Windows::Forms::ComboBox());
			this->norm_box = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pop = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�������� ������ ����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"������� ����� �������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"������� �������� ��������� ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(235, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"�������� ��� ����������� ������";
			// 
			// ModelCombo
			// 
			this->ModelCombo->FormattingEnabled = true;
			this->ModelCombo->Items->AddRange(gcnew cli::array< System::Object^  >(19) {
				L"���-431414(�)", L"���-431414(�)", L"���-433360(�)",
					L"���-433362(�)", L"���-433362 ���-10 (�)", L"���-433362 ���-2 (�)", L"��-401(�)", L"��-413(�)", L"��-413(�)", L"��-413(�)",
					L"��-424(�)", L"��-431(�)", L"��-440(�)", L"��-440-1(�)", L"��-440-1(�)", L"��-440-2(�)", L"��-440-2(�)", L"��-440-3(�)", L"��-440-3(�)"
			});
			this->ModelCombo->Location = System::Drawing::Point(15, 27);
			this->ModelCombo->Name = L"ModelCombo";
			this->ModelCombo->Size = System::Drawing::Size(121, 24);
			this->ModelCombo->TabIndex = 4;
			// 
			// CityType
			// 
			this->CityType->FormattingEnabled = true;
			this->CityType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"������� ���������� �����", L"��������� ���������� �����" });
			this->CityType->Location = System::Drawing::Point(15, 222);
			this->CityType->Name = L"CityType";
			this->CityType->Size = System::Drawing::Size(121, 24);
			this->CityType->TabIndex = 5;
			// 
			// NormType
			// 
			this->NormType->FormattingEnabled = true;
			this->NormType->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
				L"��������������� �������� ���������� ������� ������������ �������",
					L"����������� ����� ���������� ������� ������������ ������� (0.16051)"
			});
			this->NormType->Location = System::Drawing::Point(15, 128);
			this->NormType->Name = L"NormType";
			this->NormType->Size = System::Drawing::Size(121, 24);
			this->NormType->TabIndex = 6;
			// 
			// norm_box
			// 
			this->norm_box->Location = System::Drawing::Point(15, 178);
			this->norm_box->Name = L"norm_box";
			this->norm_box->Size = System::Drawing::Size(100, 22);
			this->norm_box->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(424, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"������ ��������� ���������� ������� ������������ �������";
			// 
			// pop
			// 
			this->pop->Location = System::Drawing::Point(15, 73);
			this->pop->Name = L"pop";
			this->pop->Size = System::Drawing::Size(100, 22);
			this->pop->TabIndex = 9;
			// 
			// calc_button
			// 
			this->calc_button->Location = System::Drawing::Point(408, 362);
			this->calc_button->Name = L"calc_button";
			this->calc_button->Size = System::Drawing::Size(85, 28);
			this->calc_button->TabIndex = 11;
			this->calc_button->Text = L"������";
			this->calc_button->UseVisualStyleBackColor = true;
			// 
			// back_button
			// 
			this->back_button->Location = System::Drawing::Point(317, 362);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(85, 28);
			this->back_button->TabIndex = 12;
			this->back_button->Text = L"�����";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Click += gcnew System::EventHandler(this, &Calculation_bd::back_button_Click);
			// 
			// Calculation_bd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(806, 516);
			this->Controls->Add(this->back_button);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->pop);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->norm_box);
			this->Controls->Add(this->NormType);
			this->Controls->Add(this->CityType);
			this->Controls->Add(this->ModelCombo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Calculation_bd";
			this->Text = L"Calculation_bd";
			this->Load += gcnew System::EventHandler(this, &Calculation_bd::Calculation_bd_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Calculation_bd_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculation_bd::Hide();
	}
};
}
