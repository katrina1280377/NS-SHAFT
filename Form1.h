#pragma once
#include <stdio.h>
#include <conio.h>

using namespace std;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  movetimer;


	private: System::Windows::Forms::PictureBox^  ground;



	private: System::Windows::Forms::Timer^  groundtimer;
	private: System::Windows::Forms::PictureBox^  ground1;

	private: System::ComponentModel::IContainer^  components;

	private:


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->movetimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->ground = (gcnew System::Windows::Forms::PictureBox());
			this->groundtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->ground1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;   // Coloe::Transparent = 背景透明化
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(141, 61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(61, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(325, 393);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"strat";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// movetimer
			// 
			this->movetimer->Interval = 1;
			this->movetimer->Tick += gcnew System::EventHandler(this, &Form1::movetimer_Tick);
			// 
			// ground
			// 
			this->ground->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ground.Image")));
			this->ground->Location = System::Drawing::Point(94, 117);
			this->ground->Name = L"ground";
			this->ground->Size = System::Drawing::Size(153, 10);
			this->ground->TabIndex = 4;
			this->ground->TabStop = false;
			// 
			// groundtimer
			// 
			this->groundtimer->Interval = 500;
			this->groundtimer->Tick += gcnew System::EventHandler(this, &Form1::groundtimer_Tick);
			// 
			// ground1
			// 
			this->ground1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ground1.Image")));
			this->ground1->Location = System::Drawing::Point(448, 202);
			this->ground1->Name = L"ground1";
			this->ground1->Size = System::Drawing::Size(153, 10);
			this->ground1->TabIndex = 5;
			this->ground1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 462);
			this->Controls->Add(this->ground1);
			this->Controls->Add(this->ground);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		button1->Visible = false; 
		movetimer->Enabled = true;
		groundtimer->Enabled = true;
	}
	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyData == Keys::Left)
			if (pictureBox1->Left < 0) pictureBox1->Left = pictureBox1->Left;
			else pictureBox1->Left -= 5;
		else if (e->KeyData == Keys::Right)
			if (pictureBox1->Right > this->Width) pictureBox1->Left = pictureBox1->Left;
			else pictureBox1->Left += 5;
	}
	int y,x;
	private: System::Void movetimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		Invalidate();
		x = (ground->Location.X) - (pictureBox1->Location.X);
		y = (ground->Location.Y) - (pictureBox1->Location.Y);
		if (pictureBox1->Location.Y == (ground->Location.Y - 45))
			{	if (pictureBox1->Location.X <= (ground->Location.X - 26) || pictureBox1->Location.X >= (ground->Location.X + 101))
				pictureBox1->Top += 3;	}
		else
			pictureBox1->Top += 3;
	}
private: System::Void groundtimer_Tick(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Top -= 3;
	ground->Top -= 3;

}
};
}
