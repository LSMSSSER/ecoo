#pragma once
#include "enterAuth.h"
#include "RegAuth.h"

namespace ecoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Enter;
	private: System::Windows::Forms::Button^ Registration;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->Registration = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Enter
			// 
			this->Enter->Location = System::Drawing::Point(289, 262);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(91, 49);
			this->Enter->TabIndex = 0;
			this->Enter->Text = L"¬ход";
			this->Enter->UseVisualStyleBackColor = true;
			this->Enter->Click += gcnew System::EventHandler(this, &MyForm::Enter_Click);
			// 
			// Registration
			// 
			this->Registration->Location = System::Drawing::Point(418, 261);
			this->Registration->Name = L"Registration";
			this->Registration->Size = System::Drawing::Size(105, 50);
			this->Registration->TabIndex = 1;
			this->Registration->Text = L"–егистраци€";
			this->Registration->UseVisualStyleBackColor = true;
			this->Registration->Click += gcnew System::EventHandler(this, &MyForm::Registration_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 589);
			this->Controls->Add(this->Registration);
			this->Controls->Add(this->Enter);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
		enterAuth^ reg = gcnew enterAuth();// создаем новый экземпл€р
		reg->Show(); // открываем вторую форму
		MyForm::Hide();
	}
	private: System::Void Registration_Click(System::Object^ sender, System::EventArgs^ e) {
		RegAuth^ reg = gcnew RegAuth();// создаем новый экземпл€р
		reg->Show(); // открываем вторую форму
		MyForm::Hide();
	}
	};
}
