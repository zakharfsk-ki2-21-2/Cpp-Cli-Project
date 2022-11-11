#pragma once

#include "Clients.h"
#include "DataBase.h"

namespace Cursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
		}

	protected:
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::TextBox^ register_login;
		System::Windows::Forms::TextBox^ register_password;
		System::Windows::Forms::TextBox^ register_name;
		System::Windows::Forms::TextBox^ register_surname;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Button^ register_btn;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::MaskedTextBox^ register_phone;
		System::Windows::Forms::MaskedTextBox^ register_email;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->register_login = (gcnew System::Windows::Forms::TextBox());
			this->register_password = (gcnew System::Windows::Forms::TextBox());
			this->register_name = (gcnew System::Windows::Forms::TextBox());
			this->register_surname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->register_btn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->register_phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->register_email = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// register_login
			// 
			this->register_login->Location = System::Drawing::Point(15, 29);
			this->register_login->Name = L"register_login";
			this->register_login->Size = System::Drawing::Size(134, 20);
			this->register_login->TabIndex = 1;
			// 
			// register_password
			// 
			this->register_password->Location = System::Drawing::Point(15, 83);
			this->register_password->Name = L"register_password";
			this->register_password->Size = System::Drawing::Size(134, 20);
			this->register_password->TabIndex = 2;
			// 
			// register_name
			// 
			this->register_name->Location = System::Drawing::Point(193, 29);
			this->register_name->Name = L"register_name";
			this->register_name->Size = System::Drawing::Size(134, 20);
			this->register_name->TabIndex = 3;
			// 
			// register_surname
			// 
			this->register_surname->Location = System::Drawing::Point(193, 86);
			this->register_surname->Name = L"register_surname";
			this->register_surname->Size = System::Drawing::Size(134, 20);
			this->register_surname->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Логін";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Пароль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(190, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Ім\'я";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(190, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Прізвище";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(104, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Емаїл";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(104, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Номер телефону";
			// 
			// register_btn
			// 
			this->register_btn->AutoSize = true;
			this->register_btn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->register_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->register_btn->Location = System::Drawing::Point(0, 292);
			this->register_btn->Name = L"register_btn";
			this->register_btn->Size = System::Drawing::Size(347, 41);
			this->register_btn->TabIndex = 12;
			this->register_btn->Text = L"Зареєструватися";
			this->register_btn->UseVisualStyleBackColor = true;
			this->register_btn->Click += gcnew System::EventHandler(this, &RegisterForm::register_btn_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(0, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(347, 44);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// register_phone
			// 
			this->register_phone->Location = System::Drawing::Point(107, 196);
			this->register_phone->Mask = L"(999) 000-0000";
			this->register_phone->Name = L"register_phone";
			this->register_phone->Size = System::Drawing::Size(134, 20);
			this->register_phone->TabIndex = 14;
			// 
			// register_email
			// 
			this->register_email->Location = System::Drawing::Point(107, 140);
			this->register_email->Name = L"register_email";
			this->register_email->PromptChar = '*';
			this->register_email->Size = System::Drawing::Size(134, 20);
			this->register_email->TabIndex = 15;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(347, 333);
			this->Controls->Add(this->register_email);
			this->Controls->Add(this->register_phone);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->register_btn);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->register_login);
			this->Controls->Add(this->register_password);
			this->Controls->Add(this->register_surname);
			this->Controls->Add(this->register_name);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Реєстраація";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		System::Void register_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ name = register_name->Text;
			String^ surname = register_surname->Text;
			String^ login = register_login->Text;
			String^ password = register_password->Text;
			String^ email = register_email->Text;
			String^ phone = register_phone->Text;
		
			if (name == "" || surname == "" || login == "" || password == "" || email == "" || phone == "") {
				MessageBox::Show("Введіть всі дані");
			}
			else {
				DataBase^ db = gcnew DataBase;
				Clients^ client = gcnew Clients(login, password, name, surname, email, phone);

				db->clientRegister(client);
			
				MessageBox::Show("Ви успішно зареєструвалися");
				this->Close();
			}
		}
	};
};

