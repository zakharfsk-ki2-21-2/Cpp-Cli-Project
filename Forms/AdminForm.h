#pragma once

#include "Administrator.h"
#include "Applications.h"
#include "DataBase.h"

namespace Cursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AdminForm : public System::Windows::Forms::Form
	{
	private: 
		System::Windows::Forms::ColumnHeader^ columnHeader1;
		System::Windows::Forms::Button^ apply_changes_btn;
		System::Windows::Forms::Button^ exit_btn;
		System::Windows::Forms::SplitContainer^ splitContainer1;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TextBox^ id_appl_textbox;
		System::Windows::Forms::SplitContainer^ splitContainer2;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::TextBox^ status_appl_textbox;
		System::Windows::Forms::SplitContainer^ splitContainer3;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::TextBox^ first_name_client_textbox;
		System::Windows::Forms::SplitContainer^ splitContainer4;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::TextBox^ second_name_client_textbox;
		System::Windows::Forms::SplitContainer^ splitContainer5;
		System::Windows::Forms::Label^ lable5;
		System::Windows::Forms::TextBox^ car_brand_appl_textbox;
		System::Windows::Forms::SplitContainer^ splitContainer6;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::TextBox^ car_model_appl_textbox;
		System::Windows::Forms::SplitContainer^ splitContainer7;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::TextBox^ leaser_term_appl_textbox;
		System::Windows::Forms::SplitContainer^ splitContainer8;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::TextBox^ id_paspt_client_textbox;
		System::Windows::Forms::SplitContainer^ splitContainer9;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::TextBox^ notes_appl_textbox;
		System::Windows::Forms::SplitContainer^ splitContainer10;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::TextBox^ phone_client_textbox;
		System::Windows::Forms::SplitContainer^ splitContainer11;
		System::Windows::Forms::SplitContainer^ splitContainer12;
		System::Windows::Forms::Label^ label10;
		System::Windows::Forms::TextBox^ email_client_textbox;
		System::Windows::Forms::ListView^ applicationsView;

		System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->applicationsView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->apply_changes_btn = (gcnew System::Windows::Forms::Button());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->id_appl_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->status_appl_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->first_name_client_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->second_name_client_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->lable5 = (gcnew System::Windows::Forms::Label());
			this->car_brand_appl_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer6 = (gcnew System::Windows::Forms::SplitContainer());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->car_model_appl_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer7 = (gcnew System::Windows::Forms::SplitContainer());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->leaser_term_appl_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer8 = (gcnew System::Windows::Forms::SplitContainer());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->id_paspt_client_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer9 = (gcnew System::Windows::Forms::SplitContainer());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->notes_appl_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer10 = (gcnew System::Windows::Forms::SplitContainer());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->phone_client_textbox = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer11 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer12 = (gcnew System::Windows::Forms::SplitContainer());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->email_client_textbox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->BeginInit();
			this->splitContainer6->Panel1->SuspendLayout();
			this->splitContainer6->Panel2->SuspendLayout();
			this->splitContainer6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer7))->BeginInit();
			this->splitContainer7->Panel1->SuspendLayout();
			this->splitContainer7->Panel2->SuspendLayout();
			this->splitContainer7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer8))->BeginInit();
			this->splitContainer8->Panel1->SuspendLayout();
			this->splitContainer8->Panel2->SuspendLayout();
			this->splitContainer8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer9))->BeginInit();
			this->splitContainer9->Panel1->SuspendLayout();
			this->splitContainer9->Panel2->SuspendLayout();
			this->splitContainer9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer10))->BeginInit();
			this->splitContainer10->Panel1->SuspendLayout();
			this->splitContainer10->Panel2->SuspendLayout();
			this->splitContainer10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer11))->BeginInit();
			this->splitContainer11->Panel1->SuspendLayout();
			this->splitContainer11->Panel2->SuspendLayout();
			this->splitContainer11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer12))->BeginInit();
			this->splitContainer12->Panel1->SuspendLayout();
			this->splitContainer12->Panel2->SuspendLayout();
			this->splitContainer12->SuspendLayout();
			this->SuspendLayout();
			// 
			// applicationsView
			// 
			this->applicationsView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader1 });
			this->applicationsView->HideSelection = false;
			this->applicationsView->Location = System::Drawing::Point(12, 12);
			this->applicationsView->Name = L"applicationsView";
			this->applicationsView->Size = System::Drawing::Size(311, 613);
			this->applicationsView->TabIndex = 0;
			this->applicationsView->UseCompatibleStateImageBehavior = false;
			this->applicationsView->View = System::Windows::Forms::View::Details;
			this->applicationsView->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::applicationsView_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Info";
			this->columnHeader1->Width = 303;
			// 
			// apply_changes_btn
			// 
			this->apply_changes_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->apply_changes_btn->Location = System::Drawing::Point(92, 0);
			this->apply_changes_btn->Name = L"apply_changes_btn";
			this->apply_changes_btn->Size = System::Drawing::Size(274, 54);
			this->apply_changes_btn->TabIndex = 0;
			this->apply_changes_btn->Text = L"Примінити зміни";
			this->apply_changes_btn->UseVisualStyleBackColor = true;
			this->apply_changes_btn->Click += gcnew System::EventHandler(this, &AdminForm::apply_changes_btn_Click);
			// 
			// exit_btn
			// 
			this->exit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_btn->Location = System::Drawing::Point(56, 0);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(274, 54);
			this->exit_btn->TabIndex = 1;
			this->exit_btn->Text = L"Вийти";
			this->exit_btn->UseVisualStyleBackColor = true;
			this->exit_btn->Click += gcnew System::EventHandler(this, &AdminForm::exit_btn_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(329, 12);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->id_appl_textbox);
			this->splitContainer1->Size = System::Drawing::Size(113, 60);
			this->splitContainer1->SplitterDistance = 30;
			this->splitContainer1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Номер заявки";
			// 
			// id_appl_textbox
			// 
			this->id_appl_textbox->Location = System::Drawing::Point(3, 3);
			this->id_appl_textbox->Name = L"id_appl_textbox";
			this->id_appl_textbox->ReadOnly = true;
			this->id_appl_textbox->Size = System::Drawing::Size(107, 20);
			this->id_appl_textbox->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Location = System::Drawing::Point(448, 12);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->label2);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->status_appl_textbox);
			this->splitContainer2->Size = System::Drawing::Size(113, 60);
			this->splitContainer2->SplitterDistance = 30;
			this->splitContainer2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Статус";
			// 
			// status_appl_textbox
			// 
			this->status_appl_textbox->Location = System::Drawing::Point(3, 3);
			this->status_appl_textbox->Name = L"status_appl_textbox";
			this->status_appl_textbox->Size = System::Drawing::Size(107, 20);
			this->status_appl_textbox->TabIndex = 0;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Location = System::Drawing::Point(329, 98);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->label3);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->first_name_client_textbox);
			this->splitContainer3->Size = System::Drawing::Size(113, 60);
			this->splitContainer3->SplitterDistance = 30;
			this->splitContainer3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Ім\'я клієнта";
			// 
			// first_name_client_textbox
			// 
			this->first_name_client_textbox->Location = System::Drawing::Point(3, 3);
			this->first_name_client_textbox->Name = L"first_name_client_textbox";
			this->first_name_client_textbox->Size = System::Drawing::Size(107, 20);
			this->first_name_client_textbox->TabIndex = 0;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Location = System::Drawing::Point(448, 98);
			this->splitContainer4->Name = L"splitContainer4";
			this->splitContainer4->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->label4);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->second_name_client_textbox);
			this->splitContainer4->Size = System::Drawing::Size(113, 60);
			this->splitContainer4->SplitterDistance = 30;
			this->splitContainer4->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 15);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Прізвище клієнта";
			// 
			// second_name_client_textbox
			// 
			this->second_name_client_textbox->Location = System::Drawing::Point(3, 3);
			this->second_name_client_textbox->Name = L"second_name_client_textbox";
			this->second_name_client_textbox->Size = System::Drawing::Size(107, 20);
			this->second_name_client_textbox->TabIndex = 0;
			// 
			// splitContainer5
			// 
			this->splitContainer5->Location = System::Drawing::Point(329, 244);
			this->splitContainer5->Name = L"splitContainer5";
			this->splitContainer5->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->Controls->Add(this->lable5);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->Controls->Add(this->car_brand_appl_textbox);
			this->splitContainer5->Size = System::Drawing::Size(113, 60);
			this->splitContainer5->SplitterDistance = 30;
			this->splitContainer5->TabIndex = 7;
			// 
			// lable5
			// 
			this->lable5->AutoSize = true;
			this->lable5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lable5->Location = System::Drawing::Point(3, 13);
			this->lable5->Name = L"lable5";
			this->lable5->Size = System::Drawing::Size(106, 17);
			this->lable5->TabIndex = 0;
			this->lable5->Text = L"Марка машини";
			// 
			// car_brand_appl_textbox
			// 
			this->car_brand_appl_textbox->Location = System::Drawing::Point(3, 3);
			this->car_brand_appl_textbox->Name = L"car_brand_appl_textbox";
			this->car_brand_appl_textbox->Size = System::Drawing::Size(107, 20);
			this->car_brand_appl_textbox->TabIndex = 0;
			// 
			// splitContainer6
			// 
			this->splitContainer6->Location = System::Drawing::Point(448, 244);
			this->splitContainer6->Name = L"splitContainer6";
			this->splitContainer6->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer6.Panel1
			// 
			this->splitContainer6->Panel1->Controls->Add(this->label6);
			// 
			// splitContainer6.Panel2
			// 
			this->splitContainer6->Panel2->Controls->Add(this->car_model_appl_textbox);
			this->splitContainer6->Size = System::Drawing::Size(113, 60);
			this->splitContainer6->SplitterDistance = 30;
			this->splitContainer6->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(3, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Модель машини";
			// 
			// car_model_appl_textbox
			// 
			this->car_model_appl_textbox->Location = System::Drawing::Point(3, 3);
			this->car_model_appl_textbox->Name = L"car_model_appl_textbox";
			this->car_model_appl_textbox->Size = System::Drawing::Size(107, 20);
			this->car_model_appl_textbox->TabIndex = 0;
			// 
			// splitContainer7
			// 
			this->splitContainer7->Location = System::Drawing::Point(329, 359);
			this->splitContainer7->Name = L"splitContainer7";
			this->splitContainer7->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer7.Panel1
			// 
			this->splitContainer7->Panel1->Controls->Add(this->label7);
			// 
			// splitContainer7.Panel2
			// 
			this->splitContainer7->Panel2->Controls->Add(this->leaser_term_appl_textbox);
			this->splitContainer7->Size = System::Drawing::Size(113, 60);
			this->splitContainer7->SplitterDistance = 28;
			this->splitContainer7->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(3, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 17);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Термін оренди";
			// 
			// leaser_term_appl_textbox
			// 
			this->leaser_term_appl_textbox->Location = System::Drawing::Point(3, 3);
			this->leaser_term_appl_textbox->Name = L"leaser_term_appl_textbox";
			this->leaser_term_appl_textbox->Size = System::Drawing::Size(107, 20);
			this->leaser_term_appl_textbox->TabIndex = 0;
			// 
			// splitContainer8
			// 
			this->splitContainer8->Location = System::Drawing::Point(329, 164);
			this->splitContainer8->Name = L"splitContainer8";
			this->splitContainer8->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer8.Panel1
			// 
			this->splitContainer8->Panel1->Controls->Add(this->label8);
			// 
			// splitContainer8.Panel2
			// 
			this->splitContainer8->Panel2->Controls->Add(this->id_paspt_client_textbox);
			this->splitContainer8->Size = System::Drawing::Size(113, 60);
			this->splitContainer8->SplitterDistance = 30;
			this->splitContainer8->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(3, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 17);
			this->label8->TabIndex = 0;
			this->label8->Text = L"ID Паспорта";
			// 
			// id_paspt_client_textbox
			// 
			this->id_paspt_client_textbox->Location = System::Drawing::Point(3, 3);
			this->id_paspt_client_textbox->Name = L"id_paspt_client_textbox";
			this->id_paspt_client_textbox->ReadOnly = true;
			this->id_paspt_client_textbox->Size = System::Drawing::Size(107, 20);
			this->id_paspt_client_textbox->TabIndex = 0;
			// 
			// splitContainer9
			// 
			this->splitContainer9->Location = System::Drawing::Point(329, 474);
			this->splitContainer9->Name = L"splitContainer9";
			this->splitContainer9->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer9.Panel1
			// 
			this->splitContainer9->Panel1->Controls->Add(this->label9);
			// 
			// splitContainer9.Panel2
			// 
			this->splitContainer9->Panel2->Controls->Add(this->notes_appl_textbox);
			this->splitContainer9->Size = System::Drawing::Size(510, 154);
			this->splitContainer9->SplitterDistance = 35;
			this->splitContainer9->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(3, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 17);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Примітки";
			// 
			// notes_appl_textbox
			// 
			this->notes_appl_textbox->Location = System::Drawing::Point(3, 3);
			this->notes_appl_textbox->Multiline = true;
			this->notes_appl_textbox->Name = L"notes_appl_textbox";
			this->notes_appl_textbox->Size = System::Drawing::Size(504, 109);
			this->notes_appl_textbox->TabIndex = 0;
			// 
			// splitContainer10
			// 
			this->splitContainer10->Location = System::Drawing::Point(567, 98);
			this->splitContainer10->Name = L"splitContainer10";
			this->splitContainer10->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer10.Panel1
			// 
			this->splitContainer10->Panel1->Controls->Add(this->label5);
			// 
			// splitContainer10.Panel2
			// 
			this->splitContainer10->Panel2->Controls->Add(this->phone_client_textbox);
			this->splitContainer10->Size = System::Drawing::Size(122, 60);
			this->splitContainer10->SplitterDistance = 30;
			this->splitContainer10->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Номер телефону";
			// 
			// phone_client_textbox
			// 
			this->phone_client_textbox->Location = System::Drawing::Point(3, 3);
			this->phone_client_textbox->Name = L"phone_client_textbox";
			this->phone_client_textbox->Size = System::Drawing::Size(116, 20);
			this->phone_client_textbox->TabIndex = 0;
			// 
			// splitContainer11
			// 
			this->splitContainer11->Location = System::Drawing::Point(12, 646);
			this->splitContainer11->Name = L"splitContainer11";
			// 
			// splitContainer11.Panel1
			// 
			this->splitContainer11->Panel1->Controls->Add(this->apply_changes_btn);
			// 
			// splitContainer11.Panel2
			// 
			this->splitContainer11->Panel2->Controls->Add(this->exit_btn);
			this->splitContainer11->Size = System::Drawing::Size(827, 54);
			this->splitContainer11->SplitterDistance = 438;
			this->splitContainer11->TabIndex = 13;
			// 
			// splitContainer12
			// 
			this->splitContainer12->Location = System::Drawing::Point(696, 98);
			this->splitContainer12->Name = L"splitContainer12";
			this->splitContainer12->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer12.Panel1
			// 
			this->splitContainer12->Panel1->Controls->Add(this->label10);
			// 
			// splitContainer12.Panel2
			// 
			this->splitContainer12->Panel2->Controls->Add(this->email_client_textbox);
			this->splitContainer12->Size = System::Drawing::Size(122, 60);
			this->splitContainer12->SplitterDistance = 30;
			this->splitContainer12->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(3, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 17);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Емаїл";
			// 
			// email_client_textbox
			// 
			this->email_client_textbox->Location = System::Drawing::Point(3, 3);
			this->email_client_textbox->Name = L"email_client_textbox";
			this->email_client_textbox->Size = System::Drawing::Size(116, 20);
			this->email_client_textbox->TabIndex = 0;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 712);
			this->Controls->Add(this->splitContainer12);
			this->Controls->Add(this->splitContainer11);
			this->Controls->Add(this->splitContainer10);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->splitContainer2);
			this->Controls->Add(this->splitContainer3);
			this->Controls->Add(this->splitContainer4);
			this->Controls->Add(this->applicationsView);
			this->Controls->Add(this->splitContainer5);
			this->Controls->Add(this->splitContainer9);
			this->Controls->Add(this->splitContainer6);
			this->Controls->Add(this->splitContainer8);
			this->Controls->Add(this->splitContainer7);
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel1->PerformLayout();
			this->splitContainer4->Panel2->ResumeLayout(false);
			this->splitContainer4->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel1->PerformLayout();
			this->splitContainer5->Panel2->ResumeLayout(false);
			this->splitContainer5->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->splitContainer6->Panel1->ResumeLayout(false);
			this->splitContainer6->Panel1->PerformLayout();
			this->splitContainer6->Panel2->ResumeLayout(false);
			this->splitContainer6->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->EndInit();
			this->splitContainer6->ResumeLayout(false);
			this->splitContainer7->Panel1->ResumeLayout(false);
			this->splitContainer7->Panel1->PerformLayout();
			this->splitContainer7->Panel2->ResumeLayout(false);
			this->splitContainer7->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer7))->EndInit();
			this->splitContainer7->ResumeLayout(false);
			this->splitContainer8->Panel1->ResumeLayout(false);
			this->splitContainer8->Panel1->PerformLayout();
			this->splitContainer8->Panel2->ResumeLayout(false);
			this->splitContainer8->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer8))->EndInit();
			this->splitContainer8->ResumeLayout(false);
			this->splitContainer9->Panel1->ResumeLayout(false);
			this->splitContainer9->Panel1->PerformLayout();
			this->splitContainer9->Panel2->ResumeLayout(false);
			this->splitContainer9->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer9))->EndInit();
			this->splitContainer9->ResumeLayout(false);
			this->splitContainer10->Panel1->ResumeLayout(false);
			this->splitContainer10->Panel1->PerformLayout();
			this->splitContainer10->Panel2->ResumeLayout(false);
			this->splitContainer10->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer10))->EndInit();
			this->splitContainer10->ResumeLayout(false);
			this->splitContainer11->Panel1->ResumeLayout(false);
			this->splitContainer11->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer11))->EndInit();
			this->splitContainer11->ResumeLayout(false);
			this->splitContainer12->Panel1->ResumeLayout(false);
			this->splitContainer12->Panel1->PerformLayout();
			this->splitContainer12->Panel2->ResumeLayout(false);
			this->splitContainer12->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer12))->EndInit();
			this->splitContainer12->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		#pragma endregion
		void update_listView() {
			applicationsView->Items->Clear();

			for each (Applications ^ status in admin->getApplications())
			{
				applicationsView->Groups->Add(gcnew ListViewGroup(status->getStatus()));
			}
			for each (Applications ^ appl in admin->getApplications())
			{
				ListViewItem^ item = gcnew ListViewItem(appl->info_applicaion_for_list());
				for (int i = 0; i < applicationsView->Groups->Count; i++)
				{
					if (applicationsView->Groups[i]->Header == appl->getStatus())
					{
						item->Group = applicationsView->Groups[i];
						break;
					}
				}
				ListViewItem::ListViewSubItem^ id_car = gcnew ListViewItem::ListViewSubItem();
				id_car->Text = appl->getNumber().ToString();

				item->SubItems->Add(id_car);
				applicationsView->Items->Add(item);

			}
		}
		
	public:
		Form^ form_auth;
		Administrator^ admin;
		AdminForm(void)
		{
			InitializeComponent();
		}
		AdminForm(Administrator^ admin, Form^ form) {
			InitializeComponent();
			this->admin = admin;
			this->form_auth = form;
		}

	protected:
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
			update_listView();
		}
		System::Void applicationsView_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			if (applicationsView->SelectedItems->Count == 1) {;
				int number_appl = Convert::ToInt16(applicationsView->SelectedItems[0]->SubItems[1]->Text);
				Applications^ appl = admin->getApplication(number_appl);
			
				id_appl_textbox->Text = appl->getNumber().ToString();
				status_appl_textbox->Text = appl->getStatus();
			
				first_name_client_textbox->Text = appl->getClient()->getName();
				second_name_client_textbox->Text = appl->getClient()->getSurname();
				phone_client_textbox->Text = appl->getClient()->getPhone();
				email_client_textbox->Text = appl->getClient()->getEmail();
				id_paspt_client_textbox->Text = appl->getClient()->getPassportId();
			
				car_brand_appl_textbox->Text = appl->getCar()->brand;
				car_model_appl_textbox->Text = appl->getCar()->model;

				leaser_term_appl_textbox->Text = appl->getLeaserTerm();
			
			}
		}
		System::Void apply_changes_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			int number_appl = Convert::ToInt16(applicationsView->SelectedItems[0]->SubItems[1]->Text);
			Applications^ appl = admin->getApplication(number_appl);
			
			appl->setStatus(status_appl_textbox->Text);
			appl->setNotes(notes_appl_textbox->Text);
			appl->getClient()->setEmail(email_client_textbox->Text);
			appl->getClient()->setPhone(phone_client_textbox->Text);
			admin->updateApplication(appl);
			
			update_listView();
		}
		System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			this->form_auth->ShowDialog();
			this->Close();
		}
	};
}
