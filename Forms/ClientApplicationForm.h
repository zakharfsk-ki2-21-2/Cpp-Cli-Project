#pragma once

#include "DataBase.h"

namespace Cursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClientApplicationForm
	/// </summary>
	public ref class ClientApplicationForm : public System::Windows::Forms::Form
	{
	public:
		ClientApplicationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClientApplicationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::TextBox^ list_applications;
		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->list_applications = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// list_applications
			// 
			this->list_applications->Location = System::Drawing::Point(12, 12);
			this->list_applications->Multiline = true;
			this->list_applications->Name = L"list_applications";
			this->list_applications->ReadOnly = true;
			this->list_applications->Size = System::Drawing::Size(398, 382);
			this->list_applications->TabIndex = 1;
			// 
			// ClientApplicationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 406);
			this->Controls->Add(this->list_applications);
			this->Name = L"ClientApplicationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Мої заявки";
			this->Load += gcnew System::EventHandler(this, &ClientApplicationForm::ClientApplicationForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
	private:
		System::Void ClientApplicationForm_Load(System::Object^ sender, System::EventArgs^ e) {
			DataBase^ db = gcnew DataBase();
			for each (Applications^ appl in db->getApplications())
			{
				list_applications->Text += appl->info_applicaion();
			};
		}
	};
}
