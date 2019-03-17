#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Staff_Register
	/// </summary>
	public ref class UserControl_Staff_Register : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Staff_Register(void)
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
		~UserControl_Staff_Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  Text_Name;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Text_Add;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Text_Contact;


	private: System::Windows::Forms::Label^  Designation;
	private: System::Windows::Forms::ComboBox^  Text_Designation;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  Date_Join;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  Text_Gender;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DateTimePicker^  Date_Birth;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Text_Id;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  Text_Email;
	private: System::Windows::Forms::Button^  Button_Register;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Text_Name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Text_Add = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Text_Contact = (gcnew System::Windows::Forms::TextBox());
			this->Designation = (gcnew System::Windows::Forms::Label());
			this->Text_Designation = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Date_Join = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Text_Gender = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Date_Birth = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Text_Id = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Text_Email = (gcnew System::Windows::Forms::TextBox());
			this->Button_Register = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(95, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Employee Name";
			this->label1->Click += gcnew System::EventHandler(this, &UserControl_Staff_Register::label1_Click);
			// 
			// Text_Name
			// 
			this->Text_Name->Location = System::Drawing::Point(222, 11);
			this->Text_Name->Name = L"Text_Name";
			this->Text_Name->Size = System::Drawing::Size(243, 22);
			this->Text_Name->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(95, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Address";
			// 
			// Text_Add
			// 
			this->Text_Add->Location = System::Drawing::Point(222, 226);
			this->Text_Add->Name = L"Text_Add";
			this->Text_Add->Size = System::Drawing::Size(243, 22);
			this->Text_Add->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 269);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Contact";
			// 
			// Text_Contact
			// 
			this->Text_Contact->Location = System::Drawing::Point(222, 269);
			this->Text_Contact->Name = L"Text_Contact";
			this->Text_Contact->Size = System::Drawing::Size(243, 22);
			this->Text_Contact->TabIndex = 5;
			// 
			// Designation
			// 
			this->Designation->AutoSize = true;
			this->Designation->Location = System::Drawing::Point(95, 42);
			this->Designation->Name = L"Designation";
			this->Designation->Size = System::Drawing::Size(83, 17);
			this->Designation->TabIndex = 8;
			this->Designation->Text = L"Designation";
			this->Designation->Click += gcnew System::EventHandler(this, &UserControl_Staff_Register::Designation_Click);
			// 
			// Text_Designation
			// 
			this->Text_Designation->FormattingEnabled = true;
			this->Text_Designation->Location = System::Drawing::Point(222, 44);
			this->Text_Designation->Name = L"Text_Designation";
			this->Text_Designation->Size = System::Drawing::Size(239, 24);
			this->Text_Designation->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(95, 81);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Date of Joining";
			// 
			// Date_Join
			// 
			this->Date_Join->Location = System::Drawing::Point(222, 81);
			this->Date_Join->Name = L"Date_Join";
			this->Date_Join->Size = System::Drawing::Size(200, 22);
			this->Date_Join->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(95, 115);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Gender";
			// 
			// Text_Gender
			// 
			this->Text_Gender->FormattingEnabled = true;
			this->Text_Gender->Location = System::Drawing::Point(222, 115);
			this->Text_Gender->Name = L"Text_Gender";
			this->Text_Gender->Size = System::Drawing::Size(227, 24);
			this->Text_Gender->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(95, 156);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Date of Birth";
			// 
			// Date_Birth
			// 
			this->Date_Birth->Location = System::Drawing::Point(222, 156);
			this->Date_Birth->Name = L"Date_Birth";
			this->Date_Birth->Size = System::Drawing::Size(200, 22);
			this->Date_Birth->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(95, 194);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Id Proof";
			// 
			// Text_Id
			// 
			this->Text_Id->Location = System::Drawing::Point(222, 191);
			this->Text_Id->Name = L"Text_Id";
			this->Text_Id->Size = System::Drawing::Size(243, 22);
			this->Text_Id->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(95, 315);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Email";
			// 
			// Text_Email
			// 
			this->Text_Email->Location = System::Drawing::Point(222, 310);
			this->Text_Email->Name = L"Text_Email";
			this->Text_Email->Size = System::Drawing::Size(243, 22);
			this->Text_Email->TabIndex = 19;
			// 
			// Button_Register
			// 
			this->Button_Register->Location = System::Drawing::Point(245, 354);
			this->Button_Register->Name = L"Button_Register";
			this->Button_Register->Size = System::Drawing::Size(123, 32);
			this->Button_Register->TabIndex = 20;
			this->Button_Register->Text = L"Register!";
			this->Button_Register->UseVisualStyleBackColor = true;
			// 
			// UserControl_Staff_Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Button_Register);
			this->Controls->Add(this->Text_Email);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Text_Id);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Date_Birth);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Text_Gender);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Date_Join);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Text_Designation);
			this->Controls->Add(this->Designation);
			this->Controls->Add(this->Text_Contact);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Text_Add);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Text_Name);
			this->Controls->Add(this->label1);
			this->Name = L"UserControl_Staff_Register";
			this->Size = System::Drawing::Size(719, 389);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Designation_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
