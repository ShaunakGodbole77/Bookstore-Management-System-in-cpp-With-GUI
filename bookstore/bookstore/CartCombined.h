#pragma once
#include "FinalDataEntry.h"
using namespace System::IO;

namespace bookstore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CartCombined
	/// </summary>
	public ref class CartCombined : public System::Windows::Forms::Form
	{
	public:
		CartCombined(void)
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
		~CartCombined()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CartCombined::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PeachPuff;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2129, 124);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(1912, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 32);
			this->label6->TabIndex = 14;
			this->label6->Text = L"X";
			this->label6->Click += gcnew System::EventHandler(this, &CartCombined::label6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(979, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 54);
			this->label2->TabIndex = 10;
			this->label2->Text = L"YOUR CART";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(790, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(183, 124);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 191);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(885, 715);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 140;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"BOOK NAME";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 140;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"PRICE";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 140;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"STOCK";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 140;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"AUTHOR";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 140;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"ISBN";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 140;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column7,
					this->Column8, this->Column9, this->Column10, this->Column11
			});
			this->dataGridView2->Location = System::Drawing::Point(1045, 191);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(865, 715);
			this->dataGridView2->TabIndex = 2;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ID";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 162;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"BOOK NAME";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 162;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"PRICE";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 162;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"QUANTITY";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 162;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"TOTAL";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 162;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"CATALOG : ";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(903, 622);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 62);
			this->button1->TabIndex = 4;
			this->button1->Text = L"ADD TO CART";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CartCombined::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(903, 562);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(136, 34);
			this->numericUpDown1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(335, 912);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 62);
			this->button2->TabIndex = 6;
			this->button2->Text = L"REFRESH";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CartCombined::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1045, 912);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 62);
			this->button3->TabIndex = 7;
			this->button3->Text = L"REMOVE ITEM";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CartCombined::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1774, 912);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 62);
			this->button4->TabIndex = 8;
			this->button4->Text = L"CHECKOUT";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CartCombined::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1040, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 28);
			this->label3->TabIndex = 9;
			this->label3->Text = L"CART : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1723, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 28);
			this->label4->TabIndex = 10;
			this->label4->Text = L"RS. ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1821, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 28);
			this->label5->TabIndex = 11;
			this->label5->Text = L"00000/-";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(389, 155);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(329, 30);
			this->textBox1->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(724, 153);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(173, 35);
			this->button5->TabIndex = 13;
			this->button5->Text = L"SEARCH";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &CartCombined::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1210, 912);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 62);
			this->button6->TabIndex = 14;
			this->button6->Text = L"CLEAR CART";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &CartCombined::button6_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(1649, 918);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 43);
			this->textBox2->TabIndex = 15;
			// 
			// CartCombined
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->ClientSize = System::Drawing::Size(1942, 1102);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CartCombined";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CartCombined";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	StreamReader^ reader = gcnew StreamReader("books.csv");
	try
	{
		do {
			String^ line = reader->ReadLine();
			if (String::IsNullOrEmpty(line))
			{
				MessageBox::Show("Please Add Data.","Empty storage",MessageBoxButtons::OK,MessageBoxIcon::Information);
				reader->Close();
				return;
			}
			cli::array<String^>^ row = line->Split(',');
			dataGridView1->Rows->Add(row);
		} while (reader->Peek() != -1);
		reader->Close();

	}
	catch (Exception^ e)
	{

	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ id = (dataGridView1->SelectedRows[0])->Cells[0]->Value->ToString();
		String^ name = (dataGridView1->SelectedRows[0])->Cells[1]->Value->ToString();
		String^ price = (dataGridView1->SelectedRows[0])->Cells[2]->Value->ToString();
		String^ qty = numericUpDown1->Text;
		String^ selectedqtystr = (dataGridView1->SelectedRows[0])->Cells[3]->Value->ToString();
		Int32 selectedIteamQty = System::Convert::ToInt32(selectedqtystr);
		if (selectedIteamQty >= (System::Convert::ToInt32(qty)) && selectedIteamQty > 0)
		{
			Int32^ totalInt = System::Convert::ToInt32(qty) * System::Convert::ToInt32(price);
			String^ mymsg = "ID\t: " + id + "\nName\t: " + name + "\nQunatity\t: " + qty;
			MessageBox::Show(mymsg);
			dataGridView2->Rows->Add(id, name, price, qty, totalInt);
			int cartRowSize = dataGridView2->Rows->Count;
			Int32 totalToShowOnTop = 0;
			for (int i = 0; i < cartRowSize - 1; i++)
			{
				totalToShowOnTop += System::Convert::ToInt32((dataGridView2->Rows[i])->Cells[4]->Value->ToString());
			}
			label5->Text = System::Convert::ToString(totalToShowOnTop);
		}
		else
		{
			MessageBox::Show("Only " + selectedqtystr + " Available");
		}
	}
	catch (Exception^ e)
	{

	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		dataGridView2->Rows->Remove(dataGridView2->SelectedRows[0]);

	}
	catch (Exception^ e)
	{

	}
	Int32 totalToShowOnTop = 0;
	int cartRowSize = dataGridView2->Rows->Count;
	for (int i = 0; i < cartRowSize - 1; i++)
	{
		totalToShowOnTop += System::Convert::ToInt32((dataGridView2->Rows[i])->Cells[4]->Value->ToString());
	}
	label5->Text = System::Convert::ToString(totalToShowOnTop);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	

	try
	{
		StreamReader^ reader = gcnew StreamReader("books.csv");
		do {
			String^ line = reader->ReadLine();
			if (String::IsNullOrEmpty(line))
			{
				MessageBox::Show("Please Add Data.");
				reader->Close();
				return;
			}
			cli::array<String^>^ row = line->Split(',');
			dataGridView1->Rows->Add(row);
		} while (reader->Peek() != -1);
		reader->Close();

	}
	catch (Exception^ e)
	{

	}


	int cartcount = dataGridView2->Rows->Count;
	String^ bid = textBox2->Text;
	StreamWriter^ billwrite = gcnew StreamWriter("myBills/" + bid + ".txt");
	//billwrite->WriteLine(ShopNameLabel->Text);
	billwrite->WriteLine("ID\tNAME\tPRICE\tQTY\tTOTAL");
	billwrite->WriteLine(" ");
	StreamWriter^ billcsv = File::AppendText("bill.csv");
	for (int i = 0; i < cartcount - 1; i++)
	{
		String^ ID = dataGridView2->Rows[i]->Cells[0]->Value->ToString();
		String^ name = dataGridView2->Rows[i]->Cells[1]->Value->ToString();
		String^ price = dataGridView2->Rows[i]->Cells[2]->Value->ToString();
		String^ qty = dataGridView2->Rows[i]->Cells[3]->Value->ToString();
		String^ qtyxprice = dataGridView2->Rows[i]->Cells[4]->Value->ToString();
		billwrite->WriteLine(ID + "\t" + name->Substring(0, 10) + "\t" + price + "\t" + qty + "\t" + qtyxprice);


		int catalogsize = dataGridView1->Rows->Count;
		for (int i = 0; i < catalogsize - 1; i++)
		{
			if ((dataGridView1->Rows[i])->Cells[0]->Value->ToString() == ID)
			{
				String^ datagridviewqty = (dataGridView1->Rows[i])->Cells[3]->Value->ToString();
				Int32^ change = System::Convert::ToInt32(datagridviewqty) - System::Convert::ToInt32(qty);
				String^ toChangeInDataGridView = System::Convert::ToString(change);
				(dataGridView1->Rows[i])->Cells[3]->Value = toChangeInDataGridView;
			}
		}

	}
	String^ msgBoxVal = label5->Text;
	billwrite->WriteLine("\nTotal Bill is : \t" + msgBoxVal);
	billwrite->Close();
	billcsv->WriteLine(bid + "," + msgBoxVal);
	billcsv->Close();


	MessageBox::Show("Total Bill Is : " + msgBoxVal);


	dataGridView2->Rows->Clear();
	Int32 totalToShowOnTop = 0;
	int cartRowSize = dataGridView2->Rows->Count;
	for (int i = 0; i < cartRowSize - 1; i++)
	{
		totalToShowOnTop += System::Convert::ToInt32((dataGridView2->Rows[i])->Cells[4]->Value->ToString());
	}
	label5->Text = System::Convert::ToString(totalToShowOnTop);




	FinalDataEntry^ Fde = gcnew FinalDataEntry();
	Fde->Show();


}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView2->Rows->Clear();
	Int32 totalToShowOnTop = 0;
	int cartRowSize = dataGridView2->Rows->Count;
	for (int i = 0; i < cartRowSize - 1; i++)
	{
		totalToShowOnTop += System::Convert::ToInt32((dataGridView2->Rows[i])->Cells[4]->Value->ToString());
	}
	label5->Text = System::Convert::ToString(totalToShowOnTop);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	
	try
	{
		StreamReader^ reader = gcnew StreamReader("books.csv");
		do {
			String^ line = reader->ReadLine();
			if (String::IsNullOrEmpty(line))
			{
				MessageBox::Show("Please Add Data.");
				reader->Close();
				return;
			}
			cli::array<String^>^ row = line->Split(',');
			dataGridView1->Rows->Add(row);
		} while (reader->Peek() != -1);
		reader->Close();

	}
	catch (Exception^ e)
	{

	}

	int size = dataGridView1->Rows->Count;
	String^ searchText = textBox1->Text;
	if (searchText != "")
	{

		for (int i = 0; i < size - 1; i++)
		{
			DataGridViewRow^ myRow = dataGridView1->Rows[i];
			String^ check0 = myRow->Cells[0]->Value->ToString();
			String^ check1 = myRow->Cells[1]->Value->ToString();
			String^ check2 = myRow->Cells[2]->Value->ToString();
			String^ check3 = myRow->Cells[3]->Value->ToString();
			String^ check4 = myRow->Cells[4]->Value->ToString();
			String^ check5 = myRow->Cells[5]->Value->ToString();
			String^ check6 = myRow->Cells[6]->Value->ToString();
			String^ check7 = myRow->Cells[7]->Value->ToString();

			System::String::Compare(check1, searchText);

			if (System::String::Compare(check0, searchText) == 0)
			{
				// dataGridView1->Rows->Add(myRow);

			}
			else if (System::String::Compare(check1, searchText) == 0)
			{
				// dataGridView1->Rows->Add(myRow);


			}
			else if (System::String::Compare(check2, searchText) == 0)
			{
				// dataGridView1->Rows->Add(myRow);


			}
			else if (System::String::Compare(check3, searchText) == 0)
			{
				/// dataGridView1->Rows->Add(myRow);


			}
			else if (System::String::Compare(check4, searchText) == 0)
			{

			}
			else if (System::String::Compare(check5, searchText) == 0)
			{

			}
			else if (System::String::Compare(check6, searchText) == 0)
			{

			}
			else if (System::String::Compare(check7, searchText) == 0)
			{

			}
			else
			{
				dataGridView1->Rows->Remove(myRow);
				size -= 1;
			}


		}
	}

}
};
}
