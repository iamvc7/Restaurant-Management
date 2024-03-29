/* Restaurant Management Sysytem
�Restaurant Management System� is a comprehensive software that helps operating
a restaurant from placing orders, automatically calculating discounts and taxes,
generating the bill all the way to maintaining customer records. This software
even has the bonus features of separate super user and employee login accounts
as well as adaptability for various kinds of restaurants.

B. Nitin Chandra 
Shubham Luhadia
Nishant Yadav
Sachin Aglave
Madhuri Tikhe
Mamidi Prashant
*/


#pragma once

#include "stdafx.h"
#include "Form2.h"
#include<Windows.h>

namespace RestaurantManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(454, 432);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 234234;
			this->button1->Text = L"<Previous";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(546, 432);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Next>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(572, 108);
			this->label1->TabIndex = 2342;
			this->label1->Text = L"Restaurant Management \r\n              System";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(247, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 39);
			this->label2->TabIndex = 443;
			this->label2->Text = L"Installation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(306, 31);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Name of the restaurant :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(319, 222);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(387, 38);
			this->textBox1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(638, 432);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Quit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(18, 439);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(381, 23);
			this->progressBar1->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 275);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(303, 31);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Address:-            Street :";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(319, 275);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(387, 38);
			this->textBox2->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(248, 320);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 31);
			this->label5->TabIndex = 234235;
			this->label5->Text = L"City:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(232, 370);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 31);
			this->label6->TabIndex = 234236;
			this->label6->Text = L"State:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(319, 320);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(387, 38);
			this->textBox3->TabIndex = 234237;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(319, 370);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(387, 38);
			this->textBox4->TabIndex = 234238;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 495);
			this->ControlBox = false;
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Restaurant Management System - Installation";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 String^ constring=L"datasource=localhost;username=root;password=group2";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("USE restman;"

					 "CREATE TABLE restname (eid int(5) NOT NULL PRIMARY KEY AUTO_INCREMENT ,name varchar(255) NOT NULL DEFAULT '0',address varchar(300) DEFAULT '0',cuisines varchar(255) NOT NULL DEFAULT '0',timings varchar(255) DEFAULT '0',tables varchar(25) DEFAULT '0',cancellation int(40) DEFAULT '0',dinein varchar(3) DEFAULT '0',takeout varchar(3) DEFAULT '0',takeoutcharge varchar(40) DEFAULT '0',home varchar(3) DEFAULT '0',deliverycharge varchar(40) DEFAULT '0',lucky varchar(3) DEFAULT '0',luckytype varchar(10) DEFAULT '0',luckyamount varchar(40) DEFAULT '0',frequent varchar(3) DEFAULT '0',frequentabove varchar(40) DEFAULT '0',frequentamount varchar(40) DEFAULT '0',birthday varchar(3) DEFAULT '0',birthdayamount varchar(40) DEFAULT '0',anniversary varchar(3) DEFAULT '0',anniversarydate varchar(40) DEFAULT '0',anniversaryamount varchar(40) DEFAULT '0',card varchar(3) DEFAULT '0',cardamount varchar(40) DEFAULT '0',institute varchar(3) DEFAULT '0',instituteamount varchar(40) DEFAULT '0',festivaloffer varchar(3) DEFAULT '0',festivalamount varchar(40) DEFAULT '0',vipoffer varchar(3) DEFAULT '0',vipamount varchar(40) DEFAULT '0',servicecharge varchar(3) DEFAULT '0',servicechargevalue varchar(10) DEFAULT '0',servicetax varchar(3) DEFAULT '0',servicetaxvalue varchar(10) DEFAULT '0',vat_fooditems varchar(10) DEFAULT '0',vat_alcohol varchar(10) DEFAULT '0');"
					 //"CREATE TABLE presentmenu (itemid int(5) NOT NULL PRIMARY KEY AUTO_INCREMENT ,name varchar(255) NOT NULL,price int NOT NULL,type varchar(255),cuisine varchar(255) NOT NULL);"
					 "CREATE TABLE users (userid int(5) NOT NULL PRIMARY KEY AUTO_INCREMENT ,name varchar(250) NOT NULL ,username varchar(255) BINARY NOT NULL UNIQUE,password varchar(250) BINARY NOT NULL,security varchar(255) NOT NULL,answer varchar(255) NOT NULL);",conDataBase);
				 MySqlDataReader^ myReader1;

				 try{
					 conDataBase->Open();
					 myReader1=cmdDataBase1->ExecuteReader();

					 //while(myReader->Read()){}	

				 }catch(Exception^ex){

					 MessageBox::Show(ex->Message);
				 }
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, "If you quit you'll have to install again.\nAre you sure?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if(System::Windows::Forms::DialogResult::Yes == result)
				{
					String^ constring=L"datasource=localhost;username=root;password=group2";
					MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("USE restman;DROP TABLE restname;DROP TABLE users;",conDataBase);

						MySqlDataReader^ myReader1;

					try{
						conDataBase->Open();
						myReader1=cmdDataBase1->ExecuteReader();

						//while(myReader->Read()){}	

					}catch(Exception^ex){

						MessageBox::Show(ex->Message);
					}
					Application::Exit();
				}
				else
				{
    
				}

				//Application::Exit();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 String^ constring=L"datasource=localhost;username=root;password=group2";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Insert into restman.restname (name,address) values('"+this->textBox1->Text+"','"+this->textBox2->Text+";"+this->textBox3->Text+";"+this->textBox4->Text+"') ;",conDataBase);
			 MySqlDataReader^ myReader;
			 try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();

				 while(myReader->Read()){

				 }	

			 }catch(Exception^ex){

				 MessageBox::Show(ex->Message);
			 }
			 if(textBox1->Text!="")
			 {
				 Form1::Hide();
				 Form2^frm=gcnew Form2;													//shows another form on clicking the button;
				 frm->Show(this);
				 //this->Show();
			 }
			 else
			 {
				 MessageBox::Show("You need to mention the name of the restaurant.","Error",MessageBoxButtons::OK);
				 textBox1->Select();
			 }



		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

