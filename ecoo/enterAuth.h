#pragma once
#include "Mainmenu.h"
#include <sqlite3.h>
#include <msclr/marshal_cppstd.h>

namespace ecoo {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class enterAuth : public System::Windows::Forms::Form
    {
    public:
        enterAuth(void)
        {
            InitializeComponent();
        }

    protected:
        ~enterAuth()
        {
            if (components)
            {
                delete components;
            }
            sqlite3_close(DB); // Закрываем базу данных при уничтожении формы
        }
    private: System::Windows::Forms::Label^ login;
    private: System::Windows::Forms::Label^ password;
    private: System::Windows::Forms::TextBox^ loginbox;
    private: System::Windows::Forms::TextBox^ passwordbox;
    private: System::Windows::Forms::Button^ enterbutton;

    private:
        System::ComponentModel::Container^ components;

        sqlite3* DB;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->login = (gcnew System::Windows::Forms::Label());
            this->password = (gcnew System::Windows::Forms::Label());
            this->loginbox = (gcnew System::Windows::Forms::TextBox());
            this->passwordbox = (gcnew System::Windows::Forms::TextBox());
            this->enterbutton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();

            // 
            // login
            // 
            this->login->AutoSize = true;
            this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->login->Location = System::Drawing::Point(434, 89);
            this->login->Name = L"login";
            this->login->Size = System::Drawing::Size(82, 29);
            this->login->TabIndex = 0;
            this->login->Text = L"Логин";

            // 
            // password
            // 
            this->password->AutoSize = true;
            this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->password->Location = System::Drawing::Point(434, 204);
            this->password->Name = L"password";
            this->password->Size = System::Drawing::Size(96, 29);
            this->password->TabIndex = 0;
            this->password->Text = L"Пароль";

            // 
            // loginbox
            // 
            this->loginbox->Location = System::Drawing::Point(430, 131);
            this->loginbox->Name = L"loginbox";
            this->loginbox->Size = System::Drawing::Size(100, 22);
            this->loginbox->TabIndex = 1;

            // 
            // passwordbox
            // 
            this->passwordbox->Location = System::Drawing::Point(430, 245);
            this->passwordbox->Name = L"passwordbox";
            this->passwordbox->Size = System::Drawing::Size(100, 22);
            this->passwordbox->TabIndex = 1;

            // 
            // enterbutton
            // 
            this->enterbutton->Location = System::Drawing::Point(439, 342);
            this->enterbutton->Name = L"enterbutton";
            this->enterbutton->Size = System::Drawing::Size(75, 23);
            this->enterbutton->TabIndex = 2;
            this->enterbutton->Text = L"Войти";
            this->enterbutton->UseVisualStyleBackColor = true;
            this->enterbutton->Click += gcnew System::EventHandler(this, &enterAuth::enterbutton_Click);

            // 
            // enterAuth
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(941, 562);
            this->Controls->Add(this->enterbutton);
            this->Controls->Add(this->passwordbox);
            this->Controls->Add(this->loginbox);
            this->Controls->Add(this->password);
            this->Controls->Add(this->login);
            this->Name = L"enterAuth";
            this->Text = L"enterAuth";
            this->Load += gcnew System::EventHandler(this, &enterAuth::enterAuth_Load); // Добавляем обработчик события Load
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private:
        void enterAuth_Load(System::Object^ sender, System::EventArgs^ e) {
            // Инициализация подключения к базе данных при загрузке формы
            int exit = sqlite3_open("trucks.db", &DB);
            if (exit) {
                MessageBox::Show("Не удалось открыть базу данных: " + gcnew String(sqlite3_errmsg(DB)));
            }
        }

        bool Login_Password(String^ login, String^ password)
        {
            if (login == "master" && password == "master")
            {
                return true;
            }
            else
            {
                MessageBox::Show(this, "Вы ввели неверный пароль", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return false;
            }
        }

        bool checkUserCredentials(String^ login, String^ password) {
            sqlite3_stmt* stmt;
            std::string sql = "SELECT 1 FROM id_table WHERE username = ? AND password = ?";

            int exit = sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, nullptr);
            if (exit != SQLITE_OK) {
                MessageBox::Show("Не удалось подготовить запрос: " + gcnew String(sqlite3_errmsg(DB)));
                return false;
            }

            std::string loginStr = msclr::interop::marshal_as<std::string>(login);
            std::string passwordStr = msclr::interop::marshal_as<std::string>(password);

            sqlite3_bind_text(stmt, 1, loginStr.c_str(), -1, SQLITE_STATIC);
            sqlite3_bind_text(stmt, 2, passwordStr.c_str(), -1, SQLITE_STATIC);

            exit = sqlite3_step(stmt);
            bool userExists = (exit == SQLITE_ROW);
            sqlite3_finalize(stmt);
            return userExists;
        }

        bool authorizeUser(String^ login, String^ password) {
            bool isAuthenticated = checkUserCredentials(login, password);
            if (!isAuthenticated) {
                MessageBox::Show(this, "Вы ввели неверный пароль", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return false;
            }
            return true;
        }

    private: System::Void enterbutton_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ log = loginbox->Text;
        String^ pas = passwordbox->Text;

        if (Login_Password(log, pas) || authorizeUser(log, pas))
        {
            Mainmenu^ menu = gcnew Mainmenu(); // создаем новый экземпляр
            menu->Show(); // открываем вторую форму
            this->Hide(); // скрываем первую форму
        }
    }
    };
}
