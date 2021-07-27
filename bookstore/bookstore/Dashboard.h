#pragma once
#include "SearchAndEdit.h"
#include "AddBook.h"
#include "InventoryDetails.h"
#include "CustomerDetails.h"
#include "OtherDetails.h"
#include "PlaceOrder.h"
#include "TrackOrder.h"
#include "Cart.h"
#include "EmployeeDetails.h"
#include "LibraryEvents.h"
#include "CartCombined.h"
namespace bookstore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ bOOKSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sEARCHANDEDITToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aDDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dETAILSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ iNVENTORYDETAILSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cUSTOMERDETAILSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oTHERDETAILSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oRDERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pLACEORDERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tRACKORDERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cARTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pROFILEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eMPLOYEEDETAILSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eVENTSToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ sIGNOUTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eXITToolStripMenuItem;












	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->bOOKSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sEARCHANDEDITToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aDDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dETAILSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iNVENTORYDETAILSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cUSTOMERDETAILSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oTHERDETAILSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oRDERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pLACEORDERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tRACKORDERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cARTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pROFILEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eMPLOYEEDETAILSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eVENTSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sIGNOUTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eXITToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::BurlyWood;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->bOOKSToolStripMenuItem,
					this->dETAILSToolStripMenuItem, this->oRDERToolStripMenuItem, this->cARTToolStripMenuItem, this->pROFILEToolStripMenuItem, this->eXITToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1260, 58);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// bOOKSToolStripMenuItem
			// 
			this->bOOKSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sEARCHANDEDITToolStripMenuItem,
					this->aDDToolStripMenuItem
			});
			this->bOOKSToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bOOKSToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bOOKSToolStripMenuItem.Image")));
			this->bOOKSToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->bOOKSToolStripMenuItem->Name = L"bOOKSToolStripMenuItem";
			this->bOOKSToolStripMenuItem->Size = System::Drawing::Size(143, 54);
			this->bOOKSToolStripMenuItem->Text = L"BOOKS";
			// 
			// sEARCHANDEDITToolStripMenuItem
			// 
			this->sEARCHANDEDITToolStripMenuItem->BackColor = System::Drawing::Color::BurlyWood;
			this->sEARCHANDEDITToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sEARCHANDEDITToolStripMenuItem.Image")));
			this->sEARCHANDEDITToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->sEARCHANDEDITToolStripMenuItem->Name = L"sEARCHANDEDITToolStripMenuItem";
			this->sEARCHANDEDITToolStripMenuItem->Size = System::Drawing::Size(305, 56);
			this->sEARCHANDEDITToolStripMenuItem->Text = L"SEARCH AND EDIT";
			this->sEARCHANDEDITToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::sEARCHANDEDITToolStripMenuItem_Click);
			// 
			// aDDToolStripMenuItem
			// 
			this->aDDToolStripMenuItem->BackColor = System::Drawing::Color::BurlyWood;
			this->aDDToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aDDToolStripMenuItem.Image")));
			this->aDDToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->aDDToolStripMenuItem->Name = L"aDDToolStripMenuItem";
			this->aDDToolStripMenuItem->Size = System::Drawing::Size(305, 56);
			this->aDDToolStripMenuItem->Text = L"ADD";
			this->aDDToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::aDDToolStripMenuItem_Click);
			// 
			// dETAILSToolStripMenuItem
			// 
			this->dETAILSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->iNVENTORYDETAILSToolStripMenuItem,
					this->cUSTOMERDETAILSToolStripMenuItem, this->oTHERDETAILSToolStripMenuItem
			});
			this->dETAILSToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dETAILSToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dETAILSToolStripMenuItem.Image")));
			this->dETAILSToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->dETAILSToolStripMenuItem->Name = L"dETAILSToolStripMenuItem";
			this->dETAILSToolStripMenuItem->Size = System::Drawing::Size(154, 54);
			this->dETAILSToolStripMenuItem->Text = L"DETAILS";
			// 
			// iNVENTORYDETAILSToolStripMenuItem
			// 
			this->iNVENTORYDETAILSToolStripMenuItem->BackColor = System::Drawing::Color::BurlyWood;
			this->iNVENTORYDETAILSToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iNVENTORYDETAILSToolStripMenuItem.Image")));
			this->iNVENTORYDETAILSToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->iNVENTORYDETAILSToolStripMenuItem->Name = L"iNVENTORYDETAILSToolStripMenuItem";
			this->iNVENTORYDETAILSToolStripMenuItem->Size = System::Drawing::Size(325, 56);
			this->iNVENTORYDETAILSToolStripMenuItem->Text = L"INVENTORY DETAILS";
			this->iNVENTORYDETAILSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::iNVENTORYDETAILSToolStripMenuItem_Click);
			// 
			// cUSTOMERDETAILSToolStripMenuItem
			// 
			this->cUSTOMERDETAILSToolStripMenuItem->BackColor = System::Drawing::Color::BurlyWood;
			this->cUSTOMERDETAILSToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cUSTOMERDETAILSToolStripMenuItem.Image")));
			this->cUSTOMERDETAILSToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->cUSTOMERDETAILSToolStripMenuItem->Name = L"cUSTOMERDETAILSToolStripMenuItem";
			this->cUSTOMERDETAILSToolStripMenuItem->Size = System::Drawing::Size(325, 56);
			this->cUSTOMERDETAILSToolStripMenuItem->Text = L"CUSTOMER DETAILS";
			this->cUSTOMERDETAILSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::cUSTOMERDETAILSToolStripMenuItem_Click);
			// 
			// oTHERDETAILSToolStripMenuItem
			// 
			this->oTHERDETAILSToolStripMenuItem->BackColor = System::Drawing::Color::BurlyWood;
			this->oTHERDETAILSToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"oTHERDETAILSToolStripMenuItem.Image")));
			this->oTHERDETAILSToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->oTHERDETAILSToolStripMenuItem->Name = L"oTHERDETAILSToolStripMenuItem";
			this->oTHERDETAILSToolStripMenuItem->Size = System::Drawing::Size(325, 56);
			this->oTHERDETAILSToolStripMenuItem->Text = L"OTHER DETAILS";
			this->oTHERDETAILSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::oTHERDETAILSToolStripMenuItem_Click);
			// 
			// oRDERToolStripMenuItem
			// 
			this->oRDERToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->pLACEORDERToolStripMenuItem,
					this->tRACKORDERToolStripMenuItem
			});
			this->oRDERToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oRDERToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"oRDERToolStripMenuItem.Image")));
			this->oRDERToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->oRDERToolStripMenuItem->Name = L"oRDERToolStripMenuItem";
			this->oRDERToolStripMenuItem->Size = System::Drawing::Size(143, 54);
			this->oRDERToolStripMenuItem->Text = L"ORDER";
			// 
			// pLACEORDERToolStripMenuItem
			// 
			this->pLACEORDERToolStripMenuItem->BackColor = System::Drawing::Color::BurlyWood;
			this->pLACEORDERToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pLACEORDERToolStripMenuItem.Image")));
			this->pLACEORDERToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->pLACEORDERToolStripMenuItem->Name = L"pLACEORDERToolStripMenuItem";
			this->pLACEORDERToolStripMenuItem->Size = System::Drawing::Size(266, 56);
			this->pLACEORDERToolStripMenuItem->Text = L"PLACE ORDER ";
			this->pLACEORDERToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::pLACEORDERToolStripMenuItem_Click);
			// 
			// tRACKORDERToolStripMenuItem
			// 
			this->tRACKORDERToolStripMenuItem->BackColor = System::Drawing::Color::BurlyWood;
			this->tRACKORDERToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tRACKORDERToolStripMenuItem.Image")));
			this->tRACKORDERToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->tRACKORDERToolStripMenuItem->Name = L"tRACKORDERToolStripMenuItem";
			this->tRACKORDERToolStripMenuItem->Size = System::Drawing::Size(266, 56);
			this->tRACKORDERToolStripMenuItem->Text = L"TRACK ORDER";
			this->tRACKORDERToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::tRACKORDERToolStripMenuItem_Click);
			// 
			// cARTToolStripMenuItem
			// 
			this->cARTToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cARTToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cARTToolStripMenuItem.Image")));
			this->cARTToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->cARTToolStripMenuItem->Name = L"cARTToolStripMenuItem";
			this->cARTToolStripMenuItem->Size = System::Drawing::Size(127, 54);
			this->cARTToolStripMenuItem->Text = L"CART";
			this->cARTToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::cARTToolStripMenuItem_Click);
			// 
			// pROFILEToolStripMenuItem
			// 
			this->pROFILEToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->eMPLOYEEDETAILSToolStripMenuItem,
					this->eVENTSToolStripMenuItem, this->sIGNOUTToolStripMenuItem
			});
			this->pROFILEToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pROFILEToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pROFILEToolStripMenuItem.Image")));
			this->pROFILEToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->pROFILEToolStripMenuItem->Name = L"pROFILEToolStripMenuItem";
			this->pROFILEToolStripMenuItem->Size = System::Drawing::Size(153, 54);
			this->pROFILEToolStripMenuItem->Text = L"PROFILE";
			// 
			// eMPLOYEEDETAILSToolStripMenuItem
			// 
			this->eMPLOYEEDETAILSToolStripMenuItem->BackColor = System::Drawing::Color::BurlyWood;
			this->eMPLOYEEDETAILSToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eMPLOYEEDETAILSToolStripMenuItem.Image")));
			this->eMPLOYEEDETAILSToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->eMPLOYEEDETAILSToolStripMenuItem->Name = L"eMPLOYEEDETAILSToolStripMenuItem";
			this->eMPLOYEEDETAILSToolStripMenuItem->Size = System::Drawing::Size(313, 56);
			this->eMPLOYEEDETAILSToolStripMenuItem->Text = L"EMPLOYEE DETAILS";
			this->eMPLOYEEDETAILSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::eMPLOYEEDETAILSToolStripMenuItem_Click);
			// 
			// eVENTSToolStripMenuItem
			// 
			this->eVENTSToolStripMenuItem->BackColor = System::Drawing::Color::BurlyWood;
			this->eVENTSToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eVENTSToolStripMenuItem.Image")));
			this->eVENTSToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->eVENTSToolStripMenuItem->Name = L"eVENTSToolStripMenuItem";
			this->eVENTSToolStripMenuItem->Size = System::Drawing::Size(313, 56);
			this->eVENTSToolStripMenuItem->Text = L"EVENTS";
			this->eVENTSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::eVENTSToolStripMenuItem_Click);
			// 
			// sIGNOUTToolStripMenuItem
			// 
			this->sIGNOUTToolStripMenuItem->BackColor = System::Drawing::Color::BurlyWood;
			this->sIGNOUTToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sIGNOUTToolStripMenuItem.Image")));
			this->sIGNOUTToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->sIGNOUTToolStripMenuItem->Name = L"sIGNOUTToolStripMenuItem";
			this->sIGNOUTToolStripMenuItem->Size = System::Drawing::Size(313, 56);
			this->sIGNOUTToolStripMenuItem->Text = L"SIGNOUT";
			this->sIGNOUTToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::sIGNOUTToolStripMenuItem_Click);
			// 
			// eXITToolStripMenuItem
			// 
			this->eXITToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eXITToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eXITToolStripMenuItem.Image")));
			this->eXITToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->eXITToolStripMenuItem->Name = L"eXITToolStripMenuItem";
			this->eXITToolStripMenuItem->Size = System::Drawing::Size(118, 54);
			this->eXITToolStripMenuItem->Text = L"EXIT";
			this->eXITToolStripMenuItem->Click += gcnew System::EventHandler(this, &Dashboard::eXITToolStripMenuItem_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1260, 744);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void eXITToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}
private: System::Void sEARCHANDEDITToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SearchAndEdit^ Sae = gcnew SearchAndEdit();
	Sae->ShowDialog();
}
private: System::Void aDDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	AddBook^ ab = gcnew AddBook();
	ab->ShowDialog();
}
private: System::Void iNVENTORYDETAILSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	InventoryDetails^ invdet = gcnew InventoryDetails();
	invdet->ShowDialog();
}
private: System::Void cUSTOMERDETAILSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	CustomerDetails^ cd = gcnew CustomerDetails();
	cd->ShowDialog();
}
private: System::Void oTHERDETAILSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	OtherDetails^ od = gcnew OtherDetails();
	od->ShowDialog();
}
private: System::Void pLACEORDERToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	PlaceOrder^ po = gcnew PlaceOrder();
	po->ShowDialog();
}
private: System::Void tRACKORDERToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	TrackOrder^ to = gcnew TrackOrder();
	to->ShowDialog();
}
private: System::Void cARTToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	CartCombined^ shop = gcnew CartCombined();
	shop->ShowDialog();
}
private: System::Void eMPLOYEEDETAILSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	EmployeeDetails^ ed = gcnew EmployeeDetails();
	ed->ShowDialog();
}
private: System::Void eVENTSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	LibraryEvents^ le = gcnew LibraryEvents();
	le->ShowDialog();
}
private: System::Void sIGNOUTToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
};
}
