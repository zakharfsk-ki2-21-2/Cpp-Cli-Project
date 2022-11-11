#pragma once

#include "Catalog.h"
#include "OrderForm.h"
#include "Clients.h"
#include "ClientApplicationForm.h"

namespace Cursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class GeneralForm : public System::Windows::Forms::Form
	{
	public:
		Clients^ client;
		Form^ form_auth;
		Cars^ cars = gcnew Cars();
	private: 
		System::Windows::Forms::Button^ my_applications_btn;
		System::Windows::Forms::Button^ exit_btn;
		System::Windows::Forms::Button^ create_order;
		System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
		System::Windows::Forms::ListView^ carView;
		System::Windows::Forms::ColumnHeader^ Info;
		System::Windows::Forms::Label^ car_info_lbl;

		System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->carView = (gcnew System::Windows::Forms::ListView());
			this->Info = (gcnew System::Windows::Forms::ColumnHeader());
			this->car_info_lbl = (gcnew System::Windows::Forms::Label());
			this->create_order = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->my_applications_btn = (gcnew System::Windows::Forms::Button());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// carView
			// 
			this->carView->AutoArrange = false;
			this->carView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->Info });
			this->carView->HideSelection = false;
			this->carView->Location = System::Drawing::Point(12, 12);
			this->carView->Name = L"carView";
			this->carView->Size = System::Drawing::Size(389, 376);
			this->carView->TabIndex = 0;
			this->carView->UseCompatibleStateImageBehavior = false;
			this->carView->View = System::Windows::Forms::View::Details;
			this->carView->SelectedIndexChanged += gcnew System::EventHandler(this, &GeneralForm::carView_SelectedIndexChanged);
			// 
			// Info
			// 
			this->Info->Text = L"Info";
			this->Info->Width = 377;
			// 
			// car_info_lbl
			// 
			this->car_info_lbl->AutoSize = true;
			this->car_info_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->car_info_lbl->Location = System::Drawing::Point(477, 119);
			this->car_info_lbl->Name = L"car_info_lbl";
			this->car_info_lbl->Size = System::Drawing::Size(0, 25);
			this->car_info_lbl->TabIndex = 1;
			// 
			// create_order
			// 
			this->create_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_order->Location = System::Drawing::Point(3, 3);
			this->create_order->Name = L"create_order";
			this->create_order->Size = System::Drawing::Size(164, 45);
			this->create_order->TabIndex = 2;
			this->create_order->Text = L"Зробити замовлення";
			this->create_order->UseVisualStyleBackColor = true;
			this->create_order->Click += gcnew System::EventHandler(this, &GeneralForm::create_order_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->create_order);
			this->flowLayoutPanel1->Controls->Add(this->my_applications_btn);
			this->flowLayoutPanel1->Controls->Add(this->exit_btn);
			this->flowLayoutPanel1->Location = System::Drawing::Point(133, 406);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(511, 52);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// my_applications_btn
			// 
			this->my_applications_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->my_applications_btn->Location = System::Drawing::Point(173, 3);
			this->my_applications_btn->Name = L"my_applications_btn";
			this->my_applications_btn->Size = System::Drawing::Size(165, 45);
			this->my_applications_btn->TabIndex = 4;
			this->my_applications_btn->Text = L"Мої заявки";
			this->my_applications_btn->UseVisualStyleBackColor = true;
			this->my_applications_btn->Click += gcnew System::EventHandler(this, &GeneralForm::my_applications_btn_Click);
			// 
			// exit_btn
			// 
			this->exit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_btn->Location = System::Drawing::Point(344, 3);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(164, 45);
			this->exit_btn->TabIndex = 3;
			this->exit_btn->Text = L"Вийти";
			this->exit_btn->UseVisualStyleBackColor = true;
			this->exit_btn->Click += gcnew System::EventHandler(this, &GeneralForm::exit_btn_Click);
			// 
			// GeneralForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 470);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->car_info_lbl);
			this->Controls->Add(this->carView);
			this->Name = L"GeneralForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GeneralForm";
			this->Load += gcnew System::EventHandler(this, &GeneralForm::GeneralForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		
		void updateCarView() {
			carView->Items->Clear();
			List<ListViewItem^>^ toRemove = gcnew List<ListViewItem^>;
			this->Text = "Welcome, " + this->client->getFullName();

			array<ViewCars^>^ arr = {
				gcnew ViewCars(1, "BMW", "X5", "Black", "2021", 3000, false),
				gcnew ViewCars(2, "Mercedes", "A-Class Sedan", "Silver", "2022", 7000, false),
				gcnew ViewCars(3, "Audi", "R8", "Blue", "2007", 7500, false),
				gcnew ViewCars(4, "Mazda", "RX 7", "Red", "2002", 8000, false),
				gcnew ViewCars(5, "Toyota", "Supra", "Red", "1981", 8500, false)
			};
			for each (ViewCars ^ car in arr)
			{
				catalog->addCar(car);
			}

			for each (ViewCars ^ brand in catalog->getCars())
			{
				carView->Groups->Add(gcnew ListViewGroup(brand->brand));
			}
			for each (ViewCars ^ car in catalog->getCars())
			{
				ListViewItem^ item = gcnew ListViewItem(car->getInfoForList());
				for (int i = 0; i < carView->Groups->Count; i++)
				{
					if (carView->Groups[i]->Header == car->brand)
					{
						item->Group = carView->Groups[i];
						break;
					}
				}
				ListViewItem::ListViewSubItem^ id_car = gcnew ListViewItem::ListViewSubItem();
				id_car->Text = car->id.ToString();

				item->SubItems->Add(id_car);
				carView->Items->Add(item);

			}
		}
		
	public:
		Catalog^ catalog = gcnew Catalog(cars);
		
		GeneralForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		GeneralForm(Clients^ client, Form^ form){
			InitializeComponent(); 
			this->client = client;
			this->form_auth = form;
		};

	protected:
		~GeneralForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Void carView_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			if (carView->SelectedItems->Count > 0) {
				int number_car = Convert::ToInt16(carView->SelectedItems[0]->SubItems[1]->Text);
				car_info_lbl->Text = catalog->getCar(number_car)->getFullInfo();
			}
		}
		System::Void GeneralForm_Load(System::Object^ sender, System::EventArgs^ e) {
			updateCarView();
		}
		System::Void create_order_Click(System::Object^ sender, System::EventArgs^ e) {
			if (carView->SelectedItems->Count == 1) {
				int number_car = Convert::ToInt16(carView->SelectedItems[0]->SubItems[1]->Text);
				OrderForm^ orderForm = gcnew OrderForm(catalog->getCar(number_car)->id, this->client);
				orderForm->ShowDialog();
			}
			else
			{
				MessageBox::Show("Виберіть тільки одну машину.");
			}
		}
		System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			this->form_auth->ShowDialog();
			this->Close();
		}
		System::Void my_applications_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			Form^ form = gcnew ClientApplicationForm();
			form->ShowDialog();
		}
	};
}
