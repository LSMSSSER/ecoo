#pragma once
#include "Mainmenu.h"
#include "Calculationform.h"
#include "Calculation_bd.h"

namespace ecoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Mainmenu
	/// </summary>
	public ref class Mainmenu : public System::Windows::Forms::Form
	{
	public:
		Mainmenu(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Mainmenu()
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
	private: System::Windows::Forms::Button^ CalculationButton;
	private: System::Windows::Forms::Button^ DBCalc;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CalculationButton = (gcnew System::Windows::Forms::Button());
			this->DBCalc = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(455, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Меню";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(384, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Выбор модели из базы данных";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(399, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ручной ввод значений";
			// 
			// CalculationButton
			// 
			this->CalculationButton->Location = System::Drawing::Point(440, 196);
			this->CalculationButton->Name = L"CalculationButton";
			this->CalculationButton->Size = System::Drawing::Size(75, 23);
			this->CalculationButton->TabIndex = 3;
			this->CalculationButton->Text = L"Расчет";
			this->CalculationButton->UseVisualStyleBackColor = true;
			this->CalculationButton->Click += gcnew System::EventHandler(this, &Mainmenu::CalculationButton_Click);
			// 
			// DBCalc
			// 
			this->DBCalc->Location = System::Drawing::Point(407, 359);
			this->DBCalc->Name = L"DBCalc";
			this->DBCalc->Size = System::Drawing::Size(150, 23);
			this->DBCalc->TabIndex = 4;
			this->DBCalc->Text = L"Выбор модели";
			this->DBCalc->UseVisualStyleBackColor = true;
			this->DBCalc->Click += gcnew System::EventHandler(this, &Mainmenu::DBCalc_Click);
			// 
			// Mainmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 539);
			this->Controls->Add(this->DBCalc);
			this->Controls->Add(this->CalculationButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Mainmenu";
			this->Text = L"Mainmenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CalculationButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculationform^ calcform = gcnew Calculationform();// создаем новый экземпляр
		calcform->Show(); // открываем вторую форму
	}
	private: System::Void DBCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculation_bd^ calcdb = gcnew Calculation_bd();// создаем новый экземпляр
		calcdb->Show(); // открываем вторую форму
	}
};
}
