#pragma once
#include "Form1.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  ground2;
	private: System::Windows::Forms::PictureBox^  ground1;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  movetimer;
	private: System::Windows::Forms::Timer^  groundtimer;
	private: System::Windows::Forms::PictureBox^  ground3;
	private: System::Windows::Forms::PictureBox^  ground4;
	private: System::Windows::Forms::PictureBox^  ground5;
	private: System::Windows::Forms::PictureBox^  ground7;
	private: System::Windows::Forms::PictureBox^  ground6;
	private: System::Windows::Forms::Timer^  gametimer;
	private: System::Windows::Forms::Label^  level;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  hurtground1;
	private: System::Windows::Forms::PictureBox^  hurtground2;
	private: System::Windows::Forms::PictureBox^  hurtground3;
	private: System::Windows::Forms::PictureBox^  blood1;
	private: System::Windows::Forms::PictureBox^  blood2;
	private: System::Windows::Forms::PictureBox^  blood3;
	private: System::Windows::Forms::PictureBox^  blood4;
	private: System::Windows::Forms::PictureBox^  blood5;
	private: System::Windows::Forms::PictureBox^  top;
	private: System::Windows::Forms::PictureBox^  hurtman2;
	private: System::Windows::Forms::PictureBox^  hurtman1;
	private: System::Windows::Forms::Timer^  hurttime;







	private: System::ComponentModel::IContainer^  components;

	protected:

	protected:

	private:

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->ground2 = (gcnew System::Windows::Forms::PictureBox());
			this->ground1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->movetimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->groundtimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->ground3 = (gcnew System::Windows::Forms::PictureBox());
			this->ground4 = (gcnew System::Windows::Forms::PictureBox());
			this->ground5 = (gcnew System::Windows::Forms::PictureBox());
			this->ground7 = (gcnew System::Windows::Forms::PictureBox());
			this->ground6 = (gcnew System::Windows::Forms::PictureBox());
			this->gametimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->level = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->hurtground1 = (gcnew System::Windows::Forms::PictureBox());
			this->hurtground2 = (gcnew System::Windows::Forms::PictureBox());
			this->hurtground3 = (gcnew System::Windows::Forms::PictureBox());
			this->blood1 = (gcnew System::Windows::Forms::PictureBox());
			this->blood2 = (gcnew System::Windows::Forms::PictureBox());
			this->blood3 = (gcnew System::Windows::Forms::PictureBox());
			this->blood4 = (gcnew System::Windows::Forms::PictureBox());
			this->blood5 = (gcnew System::Windows::Forms::PictureBox());
			this->top = (gcnew System::Windows::Forms::PictureBox());
			this->hurtman2 = (gcnew System::Windows::Forms::PictureBox());
			this->hurtman1 = (gcnew System::Windows::Forms::PictureBox());
			this->hurttime = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hurtground1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hurtground2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hurtground3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blood1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blood2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blood3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blood4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blood5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hurtman2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hurtman1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(192, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 44);
			this->button1->TabIndex = 0;
			this->button1->TabStop = false;
			this->button1->Text = L"�}�l�C��";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(192, 366);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 49);
			this->button3->TabIndex = 2;
			this->button3->TabStop = false;
			this->button3->Text = L"���}�C�� ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// ground2
			// 
			this->ground2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ground2.Image")));
			this->ground2->Location = System::Drawing::Point(234, 166);
			this->ground2->Name = L"ground2";
			this->ground2->Size = System::Drawing::Size(153, 10);
			this->ground2->TabIndex = 8;
			this->ground2->TabStop = false;
			this->ground2->Visible = false;
			// 
			// ground1
			// 
			this->ground1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ground1.Image")));
			this->ground1->Location = System::Drawing::Point(1, 111);
			this->ground1->Name = L"ground1";
			this->ground1->Size = System::Drawing::Size(153, 10);
			this->ground1->TabIndex = 7;
			this->ground1->TabStop = false;
			this->ground1->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(61, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// movetimer
			// 
			this->movetimer->Interval = 1;
			this->movetimer->Tick += gcnew System::EventHandler(this, &MyForm::movetimer_Tick);
			// 
			// groundtimer
			// 
			this->groundtimer->Tick += gcnew System::EventHandler(this, &MyForm::groundtimer_Tick);
			// 
			// ground3
			// 
			this->ground3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ground3.Image")));
			this->ground3->Location = System::Drawing::Point(26, 241);
			this->ground3->Name = L"ground3";
			this->ground3->Size = System::Drawing::Size(153, 10);
			this->ground3->TabIndex = 9;
			this->ground3->TabStop = false;
			this->ground3->Visible = false;
			// 
			// ground4
			// 
			this->ground4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ground4.Image")));
			this->ground4->Location = System::Drawing::Point(56, 366);
			this->ground4->Name = L"ground4";
			this->ground4->Size = System::Drawing::Size(153, 10);
			this->ground4->TabIndex = 10;
			this->ground4->TabStop = false;
			this->ground4->Visible = false;
			// 
			// ground5
			// 
			this->ground5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ground5.Image")));
			this->ground5->Location = System::Drawing::Point(319, 292);
			this->ground5->Name = L"ground5";
			this->ground5->Size = System::Drawing::Size(153, 10);
			this->ground5->TabIndex = 11;
			this->ground5->TabStop = false;
			this->ground5->Visible = false;
			// 
			// ground7
			// 
			this->ground7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ground7.Image")));
			this->ground7->Location = System::Drawing::Point(319, 25);
			this->ground7->Name = L"ground7";
			this->ground7->Size = System::Drawing::Size(153, 10);
			this->ground7->TabIndex = 12;
			this->ground7->TabStop = false;
			this->ground7->Visible = false;
			// 
			// ground6
			// 
			this->ground6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ground6.Image")));
			this->ground6->Location = System::Drawing::Point(262, 437);
			this->ground6->Name = L"ground6";
			this->ground6->Size = System::Drawing::Size(153, 10);
			this->ground6->TabIndex = 13;
			this->ground6->TabStop = false;
			this->ground6->Visible = false;
			// 
			// gametimer
			// 
			this->gametimer->Interval = 5000;
			this->gametimer->Tick += gcnew System::EventHandler(this, &MyForm::gametimer_Tick);
			// 
			// level
			// 
			this->level->AutoSize = true;
			this->level->BackColor = System::Drawing::Color::Transparent;
			this->level->Font = (gcnew System::Drawing::Font(L"�L�n������", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->level->Location = System::Drawing::Point(442, 437);
			this->level->Name = L"level";
			this->level->Size = System::Drawing::Size(0, 31);
			this->level->TabIndex = 14;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, 49);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(61, 66);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// hurtground1
			// 
			this->hurtground1->BackColor = System::Drawing::Color::Transparent;
			this->hurtground1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hurtground1.Image")));
			this->hurtground1->Location = System::Drawing::Point(549, 91);
			this->hurtground1->Name = L"hurtground1";
			this->hurtground1->Size = System::Drawing::Size(153, 30);
			this->hurtground1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->hurtground1->TabIndex = 16;
			this->hurtground1->TabStop = false;
			this->hurtground1->Visible = false;
			// 
			// hurtground2
			// 
			this->hurtground2->BackColor = System::Drawing::Color::Transparent;
			this->hurtground2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hurtground2.Image")));
			this->hurtground2->Location = System::Drawing::Point(549, 346);
			this->hurtground2->Name = L"hurtground2";
			this->hurtground2->Size = System::Drawing::Size(153, 30);
			this->hurtground2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->hurtground2->TabIndex = 17;
			this->hurtground2->TabStop = false;
			this->hurtground2->Visible = false;
			// 
			// hurtground3
			// 
			this->hurtground3->BackColor = System::Drawing::Color::Transparent;
			this->hurtground3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hurtground3.Image")));
			this->hurtground3->Location = System::Drawing::Point(551, 221);
			this->hurtground3->Name = L"hurtground3";
			this->hurtground3->Size = System::Drawing::Size(153, 30);
			this->hurtground3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->hurtground3->TabIndex = 18;
			this->hurtground3->TabStop = false;
			this->hurtground3->Visible = false;
			// 
			// blood1
			// 
			this->blood1->BackColor = System::Drawing::Color::Transparent;
			this->blood1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blood1.Image")));
			this->blood1->Location = System::Drawing::Point(10, 467);
			this->blood1->Name = L"blood1";
			this->blood1->Size = System::Drawing::Size(100, 14);
			this->blood1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->blood1->TabIndex = 19;
			this->blood1->TabStop = false;
			this->blood1->Visible = false;
			// 
			// blood2
			// 
			this->blood2->BackColor = System::Drawing::Color::Transparent;
			this->blood2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blood2.Image")));
			this->blood2->Location = System::Drawing::Point(116, 467);
			this->blood2->Name = L"blood2";
			this->blood2->Size = System::Drawing::Size(100, 14);
			this->blood2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->blood2->TabIndex = 20;
			this->blood2->TabStop = false;
			this->blood2->Visible = false;
			// 
			// blood3
			// 
			this->blood3->BackColor = System::Drawing::Color::Transparent;
			this->blood3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blood3.Image")));
			this->blood3->Location = System::Drawing::Point(222, 467);
			this->blood3->Name = L"blood3";
			this->blood3->Size = System::Drawing::Size(100, 14);
			this->blood3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->blood3->TabIndex = 21;
			this->blood3->TabStop = false;
			this->blood3->Visible = false;
			// 
			// blood4
			// 
			this->blood4->BackColor = System::Drawing::Color::Transparent;
			this->blood4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blood4.Image")));
			this->blood4->Location = System::Drawing::Point(330, 467);
			this->blood4->Name = L"blood4";
			this->blood4->Size = System::Drawing::Size(100, 14);
			this->blood4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->blood4->TabIndex = 22;
			this->blood4->TabStop = false;
			this->blood4->Visible = false;
			// 
			// blood5
			// 
			this->blood5->BackColor = System::Drawing::Color::Transparent;
			this->blood5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blood5.Image")));
			this->blood5->Location = System::Drawing::Point(436, 467);
			this->blood5->Name = L"blood5";
			this->blood5->Size = System::Drawing::Size(100, 14);
			this->blood5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->blood5->TabIndex = 23;
			this->blood5->TabStop = false;
			this->blood5->Visible = false;
			// 
			// top
			// 
			this->top->BackColor = System::Drawing::Color::Transparent;
			this->top->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top.Image")));
			this->top->Location = System::Drawing::Point(1, -11);
			this->top->Name = L"top";
			this->top->Size = System::Drawing::Size(550, 30);
			this->top->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->top->TabIndex = 24;
			this->top->TabStop = false;
			this->top->Visible = false;
			// 
			// hurtman2
			// 
			this->hurtman2->BackColor = System::Drawing::Color::Transparent;
			this->hurtman2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->hurtman2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hurtman2.Image")));
			this->hurtman2->Location = System::Drawing::Point(1, 49);
			this->hurtman2->Name = L"hurtman2";
			this->hurtman2->Size = System::Drawing::Size(61, 66);
			this->hurtman2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->hurtman2->TabIndex = 25;
			this->hurtman2->TabStop = false;
			this->hurtman2->Visible = false;
			// 
			// hurtman1
			// 
			this->hurtman1->BackColor = System::Drawing::Color::Transparent;
			this->hurtman1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->hurtman1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hurtman1.Image")));
			this->hurtman1->Location = System::Drawing::Point(1, 49);
			this->hurtman1->Name = L"hurtman1";
			this->hurtman1->Size = System::Drawing::Size(61, 66);
			this->hurtman1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->hurtman1->TabIndex = 26;
			this->hurtman1->TabStop = false;
			this->hurtman1->Visible = false;
			// 
			// hurttime
			// 
			this->hurttime->Tick += gcnew System::EventHandler(this, &MyForm::hurttime_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(538, 493);
			this->Controls->Add(this->top);
			this->Controls->Add(this->blood5);
			this->Controls->Add(this->blood4);
			this->Controls->Add(this->blood3);
			this->Controls->Add(this->blood2);
			this->Controls->Add(this->blood1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ground6);
			this->Controls->Add(this->ground7);
			this->Controls->Add(this->ground5);
			this->Controls->Add(this->ground4);
			this->Controls->Add(this->ground3);
			this->Controls->Add(this->ground2);
			this->Controls->Add(this->ground1);
			this->Controls->Add(this->hurtground3);
			this->Controls->Add(this->hurtground2);
			this->Controls->Add(this->hurtground1);
			this->Controls->Add(this->level);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->hurtman1);
			this->Controls->Add(this->hurtman2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hurtground1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hurtground2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hurtground3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blood1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blood2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blood3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blood4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blood5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hurtman2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hurtman1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 int count, speed, hp,hurtman; int hurt = 1;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		count = 1; speed = 2; hp = 5; hurtman = 0;
		int manloc[2] = { 0, 0 };
		hurtground1->Visible = false;
		hurtground2->Visible = false;
		hurtground3->Visible = false;


		pictureBox1->Top = 55; pictureBox1->Left = 1;
		hurtground1->Top = 87; hurtground1->Left = 551;
		hurtground2->Top = 346; hurtground2->Left = 551;
		hurtground3->Top = 219; hurtground3->Left = 551;
		ground1->Top = 111; ground1->Left = 1;
		ground2->Top = 143; ground2->Left = 1;
		ground3->Top = 219; ground3->Left = 1;
		ground4->Top = 292; ground4->Left = 1;
		ground5->Top = 366; ground5->Left = 1;
		ground6->Top = 437; ground6->Left = 1;
		ground7->Top = 25; ground7->Left = 1;

		button1->Visible = false;
		button3->Visible = false;
		movetimer->Enabled = true;
		gametimer->Enabled = true;
		groundtimer->Enabled = true;
        blood5->Visible = true;
		blood4->Visible = true;
		blood3->Visible = true;
		blood2->Visible = true;
		blood1->Visible = true;
		top->Visible = true;

		manloc[0] = rand() %300;
		pictureBox1->Left += manloc[0];
		ground1->Left += manloc[0];
		pictureBox1->Visible = true; 
		ground1->Visible = true;

		manloc[0] = rand() % 300;
		manloc[1] = rand() % 10;
		ground2->Left += manloc[0];
		ground2->Top += manloc[1];
		ground2->Visible = true;
		
		manloc[0] = rand() % 300;
		manloc[1] = rand() % 10;
		ground3->Top += manloc[1];
		ground3->Left += manloc[0];
		ground3->Visible = true;
		
		manloc[0] = rand() % 300;
		manloc[1] = rand() % 10;
		ground4->Left += manloc[0];
		ground4->Top += manloc[1];
		ground4->Visible = true;
		
		manloc[0] = rand() % 300;
		manloc[1] = rand() % 10;
		ground5->Left += manloc[0];
		ground5->Top += manloc[1];
		ground5->Visible = true;


		manloc[0] = rand() % 300;
		manloc[1] = rand() % 10;
		ground6->Left += manloc[0];
		ground6->Top += manloc[1];
		ground6->Visible = true;


		manloc[0] = rand() % 300;
		manloc[1] = rand() % 10;
		ground7->Left += manloc[0];
		ground7->Top += manloc[1];
		ground7->Visible = true;



		MyForm::Focus();
		level->Text = "��" + count + "�h";
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm::Close();
		 int left=0,right=0;
private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

	if (e->KeyData == Keys::Left)
	{
		if(!hurtman)
		{ 
			pictureBox1->Visible = false;
		    pictureBox2->Visible = true;
			left = 1;
			right = 1;
		}
		else
		{
			hurtman2->Visible = false;
			hurtman1->Visible = true;
			right = 0;
			left = 1;
		}
		if (pictureBox1->Left < 0) pictureBox1->Left = pictureBox1->Left;
		else pictureBox1->Left -= 5;
	}
	else if (e->KeyData == Keys::Right)
	{
		if (!hurtman)
		{
			pictureBox1->Visible = true;
			pictureBox2->Visible = false;
			left = 0;
			right = 0;
		}
		else
		{
			hurtman2->Visible = true;
			hurtman1->Visible = false;
			right = 1;
			left = 0;
		}
		if (pictureBox1->Right > this->Width) pictureBox1->Left = pictureBox1->Left;
		else pictureBox1->Left += 5;
	}
}
		 int x, y;
private: System::Void movetimer_Tick(System::Object^  sender, System::EventArgs^  e) {; 
	Invalidate();
	if (pictureBox1->Location.Y >= (ground1->Location.Y - 50) && pictureBox1->Location.Y <= (ground1->Location.Y - 48 + speed))  
	{
		if (pictureBox1->Location.X <= (ground1->Location.X - 35) || pictureBox1->Location.X >= (ground1->Location.X + 105))
			pictureBox1->Top += speed+2;
	}
	else if (pictureBox1->Location.Y >= (ground2->Location.Y - 50) && pictureBox1->Location.Y <= (ground2->Location.Y - 48+ speed))
	{
		if (pictureBox1->Location.X <= (ground2->Location.X - 35) || pictureBox1->Location.X >= (ground2->Location.X + 105))
			pictureBox1->Top += speed+2;
	}
	else if (pictureBox1->Location.Y >= (ground3->Location.Y - 50) && pictureBox1->Location.Y <= (ground3->Location.Y - 48 + speed))
	{
		if (pictureBox1->Location.X <= (ground3->Location.X - 35) || pictureBox1->Location.X >= (ground3->Location.X + 105))
			pictureBox1->Top += speed+2;
	}
	else if (pictureBox1->Location.Y >= (ground4->Location.Y - 50) && pictureBox1->Location.Y <= (ground4->Location.Y - 48 + speed))
	{
		if (pictureBox1->Location.X <= (ground4->Location.X - 35) || pictureBox1->Location.X >= (ground4->Location.X + 105))
			pictureBox1->Top += speed+2;
	}
	else if (pictureBox1->Location.Y >= (ground5->Location.Y - 50) && pictureBox1->Location.Y <= (ground5->Location.Y - 48 + speed))
	{
		if (pictureBox1->Location.X <= (ground5->Location.X - 35) || pictureBox1->Location.X >= (ground5->Location.X + 105))
			pictureBox1->Top += speed+2;
	}
	else if (pictureBox1->Location.Y >= (ground6->Location.Y - 50) && pictureBox1->Location.Y <= (ground6->Location.Y - 48 + speed))
	{
		if (pictureBox1->Location.X <= (ground6->Location.X - 35) || pictureBox1->Location.X >= (ground6->Location.X + 105))
			pictureBox1->Top += speed+2;
	}
	else if (pictureBox1->Location.Y >= (ground7->Location.Y - 50) && pictureBox1->Location.Y <= (ground7->Location.Y - 48 + speed))
	{
		if (pictureBox1->Location.X <= (ground7->Location.X - 35) || pictureBox1->Location.X >= (ground7->Location.X + 105))
			pictureBox1->Top += speed+2;
	}
	else if (pictureBox1->Location.Y >= (hurtground1->Location.Y - 45) && pictureBox1->Location.Y <= (hurtground1->Location.Y - 43 + speed))
	{
		if (pictureBox1->Location.X <= (hurtground1->Location.X - 35) || pictureBox1->Location.X >= (hurtground1->Location.X + 105))
		 {	pictureBox1->Top += speed + 2; hurt = 1; }
		else
			if (hurt)
			{ hp--; hurt = 0; hurttime->Enabled=true;}
	}
	else if (pictureBox1->Location.Y >= (hurtground2->Location.Y - 45) && pictureBox1->Location.Y <= (hurtground2->Location.Y - 43 + speed))
	{
		if (pictureBox1->Location.X <= (hurtground2->Location.X - 35) || pictureBox1->Location.X >= (hurtground2->Location.X + 105))
		{	pictureBox1->Top += speed + 2; hurt = 1;}
		else
			if(hurt)  
			{hp--; hurt = 0;hurttime->Enabled=true;}
	}
	else if (pictureBox1->Location.Y >= (hurtground3->Location.Y - 45) && pictureBox1->Location.Y <= (hurtground3->Location.Y - 43 + speed))
	{
		if (pictureBox1->Location.X <= (hurtground3->Location.X - 35) || pictureBox1->Location.X >= (hurtground3->Location.X + 105))
		{	pictureBox1->Top += speed + 2; hurt = 1;}	
		else
		{hp--; hurt = 0;hurttime->Enabled=true;}
	}
	else
		pictureBox1->Top += speed+2;

	pictureBox2->Top = pictureBox1->Top;
	pictureBox2->Left = pictureBox1->Left;
	hurtman1->Top = pictureBox1->Top;
	hurtman1->Left = pictureBox1->Left;
	hurtman2->Top = pictureBox1->Top;
	hurtman2->Left = pictureBox1->Left;

}
		 int k = 0;
	private: System::Void groundtimer_Tick(System::Object^  sender, System::EventArgs^  e) {

		int rndx = rand() % 320;
		int rndy = 50;

		pictureBox1->Top -= speed + 1;
		ground1->Top -= speed + 1;
		ground2->Top -= speed + 1;
		ground3->Top -= speed + 1;
		ground4->Top -= speed + 1;
		ground5->Top -= speed + 1;
		ground6->Top -= speed + 1;
		ground7->Top -= speed + 1;
		hurtground1->Top -= speed + 1;
		hurtground2->Top -= speed + 1;
		hurtground3->Top -= speed + 1;

		if ((ground1->Location.Y) <= -20)
			if (count > 5)
				ground1->Visible = false;
			else { ground1->Top += (rndy + 400); ground1->Left = 1; ground1->Left += rndx; }

			if ((ground5->Location.Y) <= -20)
				if (count > 10)
					ground5->Visible = false;
				else
				{ ground5->Top += (rndy + 400); ground5->Left = 1; ground5->Left += rndx; }

			if ((ground3->Location.Y) <= -20)
				if (count > 15)
					ground3->Visible = false;
				else
				{ ground3->Top += (rndy + 400); ground3->Left = 1; ground3->Left += rndx; }

			if ((ground4->Location.Y) <= -20)
				if (count > 20)
					ground4->Visible = false;
				else
				{ ground4->Top += (rndy + 400); ground4->Left = 1; ground4->Left += rndx; }

			if ((hurtground1->Location.Y) <= -20)
				if (count > 5)
				{ hurtground1->Visible = true; hurtground1->Top += (rndy + 400); hurtground1->Left = 1; hurtground1->Left += rndx;	}
				else
					hurtground1->Top += (rndy + 400);

			if ((hurtground2->Location.Y) <= -20)
				if (count > 10)
				{ hurtground2->Visible = true; hurtground2->Top += (rndy + 400); hurtground2->Left = 1; hurtground2->Left += rndx;	}
				else
					hurtground2->Top += (rndy + 400);

			if ((hurtground3->Location.Y) <= -20)
				if (count > 15)
				{ hurtground3->Visible = true; hurtground3->Top += (rndy + 400); hurtground3->Left = 1; hurtground3->Left += rndx;	}
				else
					hurtground3->Top += (rndy + 400);
			if ((ground2->Location.Y) <= -20) { ground2->Top += (rndy + 400); ground2->Left = 1; ground2->Left += rndx; }
			if ((ground6->Location.Y) <= -20) { ground6->Top += (rndy + 400); ground6->Left = 1; ground6->Left += rndx; }
			if ((ground7->Location.Y) <= -20) { ground7->Top += (rndy + 400); ground7->Left = 1; ground7->Left += rndx; }

			if (hp <= 4)
				blood5->Visible = false;
			if (hp <= 3)
				blood4->Visible = false;
			if (hp <= 2)
				blood3->Visible = false;
			if (hp <= 1)
				blood2->Visible = false;
			if (hp <= 0)
				blood1->Visible = false;

			if ((pictureBox1->Location.Y) <= 10)
				if (hurt)
				{
					hp--; pictureBox1->Top += 3; hurttime->Enabled = true; hurt = 0;
				}
				else
				{ pictureBox1->Top += 3;	hurt = 1;}

	if ((pictureBox1->Location.Y) >=400 || hp <=0)
	{
		hp = 0;
		blood1->Visible = false;
		blood2->Visible = false;
		blood3->Visible = false;
		blood4->Visible = false;
		blood5->Visible = false;
		movetimer->Enabled = false;
		groundtimer->Enabled = false;
		gametimer->Enabled = false;
		MessageBox::Show("Game Over");
		button1->Visible = true;
		button3->Visible = true;
	}
	k++;
	if (k == 10)k = 0;

}
			 int flag = 1; 
private: System::Void gametimer_Tick(System::Object^  sender, System::EventArgs^  e) {
	count++; flag ++;
	level->Text = "<" + count + ">";
	if (flag>10)
	{
		flag = 1;
		speed++;
	}
}
		 int time = 0;
private: System::Void hurttime_Tick(System::Object^  sender, System::EventArgs^  e) {
	time++;
	if (left)
	{
		pictureBox1->Visible = false;
		pictureBox2->Visible = false;
		hurtman1->Visible = true;
	}
	else
	{
		pictureBox1->Visible = false;
		pictureBox2->Visible = false;
		hurtman2->Visible = true;
	}
	hurtman = 1;

	if(time==10)
	{ 
		hurtman = 0; hurttime->Enabled = false; time=0; 
		if (!hurtman)
		{
			if (right)
			{
				pictureBox1->Visible = true;
				hurtman2->Visible = false;
				hurtman1->Visible = false;
			}
			else
			{
				pictureBox2->Visible = true;
				hurtman1->Visible = false;
				hurtman2->Visible = false;
			}
		}
	}
}
};
}
