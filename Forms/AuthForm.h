#pragma once

#include "RegisterForm.h"
#include "GeneralForm.h"

#include "Clients.h"
#include "DataBase.h"
#include "AdminForm.h"
#include "Administrator.h"

namespace Cursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AuthForm : public System::Windows::Forms::Form
	{
	public:
		AuthForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		~AuthForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ auth_labl;
		System::Windows::Forms::TextBox^ login_input;
		System::Windows::Forms::TextBox^ password_input;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
		System::Windows::Forms::Button^ login_btn;
		System::Windows::Forms::Button^ regist_btn;

		System::ComponentModel::Container^ components;
		
		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->auth_labl = (gcnew System::Windows::Forms::Label());
			this->login_input = (gcnew System::Windows::Forms::TextBox());
			this->password_input = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->regist_btn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// auth_labl
			// 
			this->auth_labl->AutoSize = true;
			this->auth_labl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->auth_labl->Location = System::Drawing::Point(97, 9);
			this->auth_labl->Name = L"auth_labl";
			this->auth_labl->Size = System::Drawing::Size(169, 31);
			this->auth_labl->TabIndex = 0;
			this->auth_labl->Text = L"Авторизація";
			// 
			// login_input
			// 
			this->login_input->Location = System::Drawing::Point(35, 117);
			this->login_input->Name = L"login_input";
			this->login_input->Size = System::Drawing::Size(132, 20);
			this->login_input->TabIndex = 1;
			// 
			// password_input
			// 
			this->password_input->Location = System::Drawing::Point(209, 117);
			this->password_input->Name = L"password_input";
			this->password_input->Size = System::Drawing::Size(132, 20);
			this->password_input->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(78, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Логін";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(245, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Пароль";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->login_btn, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->regist_btn, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 198);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(354, 45);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// login_btn
			// 
			this->login_btn->AllowDrop = true;
			this->login_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_btn->Location = System::Drawing::Point(3, 3);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(171, 39);
			this->login_btn->TabIndex = 0;
			this->login_btn->Text = L"Увійти";
			this->login_btn->UseVisualStyleBackColor = true;
			this->login_btn->Click += gcnew System::EventHandler(this, &AuthForm::login_btn_Click);
			// 
			// regist_btn
			// 
			this->regist_btn->AllowDrop = true;
			this->regist_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->regist_btn->Location = System::Drawing::Point(180, 3);
			this->regist_btn->Name = L"regist_btn";
			this->regist_btn->Size = System::Drawing::Size(171, 39);
			this->regist_btn->TabIndex = 1;
			this->regist_btn->Text = L"Зареєструватися";
			this->regist_btn->UseVisualStyleBackColor = true;
			this->regist_btn->Click += gcnew System::EventHandler(this, &AuthForm::regist_btn_Click);
			// 
			// AuthForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 252);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->password_input);
			this->Controls->Add(this->login_input);
			this->Controls->Add(this->auth_labl);
			this->Name = L"AuthForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизація";
			this->Load += gcnew System::EventHandler(this, &AuthForm::AuthForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: 
		System::Void login_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ Login = login_input->Text;
			String^ Password = password_input->Text;

			Clients^ client = gcnew Clients(Login, Password);
			DataBase^ db = gcnew DataBase;
		
			if (db->authClient(client)) {
				this->Hide();
				if (client->getIsAdmin()) {
					Form^ adminForm = gcnew AdminForm(gcnew Administrator(Login, Password), gcnew AuthForm);
					adminForm->ShowDialog();
				}
				else {
					Form^ form = gcnew GeneralForm(db->getClient(Login), gcnew AuthForm);
					form->ShowDialog();
				}
				/*this->Close();*/
			}
			else {
				MessageBox::Show("Невірний логін або пароль");
			}
		}
		System::Void regist_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			RegisterForm^ registForm = gcnew RegisterForm();
			registForm->ShowDialog();
			this->Close();
		}
		System::Void AuthForm_Load(System::Object^ sender, System::EventArgs^ e) {
			DataBase^ db = gcnew DataBase;
			db->initClients();
		}
	};
};
 