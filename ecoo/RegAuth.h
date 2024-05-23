#pragma once

namespace ecoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RegAuth
	/// </summary>
	public ref class RegAuth : public System::Windows::Forms::Form
	{
	public:
		RegAuth(void)
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
		~RegAuth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ password;
	protected:
	private: System::Windows::Forms::Label^ login;
	private: System::Windows::Forms::TextBox^ login_box;
	private: System::Windows::Forms::TextBox^ password_box;
	private: System::Windows::Forms::Button^ reg_button;


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
			this->password = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::Label());
			this->login_box = (gcnew System::Windows::Forms::TextBox());
			this->password_box = (gcnew System::Windows::Forms::TextBox());
			this->reg_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Location = System::Drawing::Point(454, 222);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(56, 16);
			this->password->TabIndex = 0;
			this->password->Text = L"Пароль";
			// 
			// login
			// 
			this->login->AutoSize = true;
			this->login->Location = System::Drawing::Point(454, 98);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(46, 16);
			this->login->TabIndex = 1;
			this->login->Text = L"Логин";
			// 
			// login_box
			// 
			this->login_box->Location = System::Drawing::Point(433, 138);
			this->login_box->Name = L"login_box";
			this->login_box->Size = System::Drawing::Size(100, 22);
			this->login_box->TabIndex = 2;
			// 
			// password_box
			// 
			this->password_box->Location = System::Drawing::Point(433, 251);
			this->password_box->Name = L"password_box";
			this->password_box->Size = System::Drawing::Size(100, 22);
			this->password_box->TabIndex = 3;
			// 
			// reg_button
			// 
			this->reg_button->Location = System::Drawing::Point(406, 333);
			this->reg_button->Name = L"reg_button";
			this->reg_button->Size = System::Drawing::Size(158, 23);
			this->reg_button->TabIndex = 4;
			this->reg_button->Text = L"Зарегистрироваться";
			this->reg_button->UseVisualStyleBackColor = true;
			// 
			// RegAuth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(969, 516);
			this->Controls->Add(this->reg_button);
			this->Controls->Add(this->password_box);
			this->Controls->Add(this->login_box);
			this->Controls->Add(this->login);
			this->Controls->Add(this->password);
			this->Name = L"RegAuth";
			this->Text = L"RegAuth";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
