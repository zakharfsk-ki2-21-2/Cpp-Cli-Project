#pragma once

#include "Clients.h"
#include "Catalog.h"
#include "DataBase.h"
#include "Applications.h"

namespace Cursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class OrderForm : public System::Windows::Forms::Form
	{
	public:
		Clients^ client;
		Catalog^ catalog = gcnew Catalog();
		int number_of_car;
		OrderForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		OrderForm(int number_car, Clients^ client)
		{
			InitializeComponent();
			this->client = client;
			this->number_of_car = number_car;
		}
		
	private:
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Label^ client_lbl;
		System::Windows::Forms::TextBox^ passport_id_input;
		System::Windows::Forms::Label^ client_info_lbl;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::MaskedTextBox^ leaser_term_input;
		System::Windows::Forms::Label^ info_car_lbl;
		
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->info_car_lbl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->client_lbl = (gcnew System::Windows::Forms::Label());
			this->passport_id_input = (gcnew System::Windows::Forms::TextBox());
			this->client_info_lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->leaser_term_input = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// info_car_lbl
			// 
			this->info_car_lbl->AutoSize = true;
			this->info_car_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info_car_lbl->Location = System::Drawing::Point(12, 9);
			this->info_car_lbl->Name = L"info_car_lbl";
			this->info_car_lbl->Size = System::Drawing::Size(212, 22);
			this->info_car_lbl->TabIndex = 0;
			this->info_car_lbl->Text = L"Інформація про машину";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(213, 324);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Підтвердити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OrderForm::button1_Click);
			// 
			// client_lbl
			// 
			this->client_lbl->AutoSize = true;
			this->client_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->client_lbl->Location = System::Drawing::Point(365, 9);
			this->client_lbl->Name = L"client_lbl";
			this->client_lbl->Size = System::Drawing::Size(222, 22);
			this->client_lbl->TabIndex = 2;
			this->client_lbl->Text = L"Персональна інформація";
			// 
			// passport_id_input
			// 
			this->passport_id_input->Location = System::Drawing::Point(307, 257);
			this->passport_id_input->Name = L"passport_id_input";
			this->passport_id_input->Size = System::Drawing::Size(69, 20);
			this->passport_id_input->TabIndex = 3;
			this->passport_id_input->TextChanged += gcnew System::EventHandler(this, &OrderForm::passport_id_input_TextChanged);
			// 
			// client_info_lbl
			// 
			this->client_info_lbl->AutoSize = true;
			this->client_info_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->client_info_lbl->Location = System::Drawing::Point(365, 47);
			this->client_info_lbl->Name = L"client_info_lbl";
			this->client_info_lbl->Size = System::Drawing::Size(0, 22);
			this->client_info_lbl->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(220, 257);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Паспорт ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(196, 284);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Термін оренди";
			// 
			// leaser_term_input
			// 
			this->leaser_term_input->Location = System::Drawing::Point(307, 283);
			this->leaser_term_input->Mask = L"00/00/0000";
			this->leaser_term_input->Name = L"leaser_term_input";
			this->leaser_term_input->Size = System::Drawing::Size(69, 20);
			this->leaser_term_input->TabIndex = 8;
			this->leaser_term_input->ValidatingType = System::DateTime::typeid;
			// 
			// OrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 379);
			this->Controls->Add(this->leaser_term_input);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->client_info_lbl);
			this->Controls->Add(this->passport_id_input);
			this->Controls->Add(this->client_lbl);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->info_car_lbl);
			this->Name = L"OrderForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Підтвердження замовлення";
			this->Load += gcnew System::EventHandler(this, &OrderForm::OrderForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrderForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Void OrderForm_Load(System::Object^ sender, System::EventArgs^ e) {
			client_info_lbl->Text = this->client->getInfoForOrder();
			info_car_lbl->Text = info_car_lbl->Text + "\n\n" + catalog->getCar(this->number_of_car)->getFullInfo();
		}
		System::Void passport_id_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			client->setPassportId(this->passport_id_input->Text);
			this->client_info_lbl->Text = this->client->getInfoForOrder();
		}
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (passport_id_input->Text != "" && leaser_term_input->Text != "") {
				String^ leaser_term = leaser_term_input->Text;
				DataBase^ db = gcnew DataBase;
				Applications^ application = gcnew Applications(db->countApplications() + 1, this->client, this->catalog->getCar(this->number_of_car), leaser_term);
				db->addApplication(application);
				MessageBox::Show("Заявка успішно оформлена.");
				this->Close();
			}
			else
			{
				MessageBox::Show("Заповніть поля");
			}
		}
	};
}
