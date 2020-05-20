#pragma once
#include "solution.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <msclr\marshal_cppstd.h>
bool enter;
bool pan1 = false;
namespace cal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ num1;

	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ bc;

	private: System::Windows::Forms::Button^ barr;




	private: System::Windows::Forms::Button^ bleft;



	private: System::Windows::Forms::Button^ b7;
	private: System::Windows::Forms::Button^ bright;



	private: System::Windows::Forms::Button^ b4;
	private: System::Windows::Forms::Button^ b5;
	private: System::Windows::Forms::Button^ b6;
	private: System::Windows::Forms::Button^ bdelx;




	private: System::Windows::Forms::Button^ b0;




	private: System::Windows::Forms::Button^ bp;




	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ b2;
	private: System::Windows::Forms::Button^ b9;



	private: System::Windows::Forms::Button^ b3;








	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ bstep2;
	private: System::Windows::Forms::Button^ bplus;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Panel^ panel4;










	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bc = (gcnew System::Windows::Forms::Button());
			this->barr = (gcnew System::Windows::Forms::Button());
			this->bleft = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->bright = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->bdelx = (gcnew System::Windows::Forms::Button());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->bp = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->bstep2 = (gcnew System::Windows::Forms::Button());
			this->bplus = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(383, 351);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(57, 104);
			this->button1->TabIndex = 0;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// num1
			// 
			this->num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num1->Location = System::Drawing::Point(111, 126);
			this->num1->Margin = System::Windows::Forms::Padding(2);
			this->num1->Multiline = true;
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(330, 57);
			this->num1->TabIndex = 1;
			this->num1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num1->TextChanged += gcnew System::EventHandler(this, &MyForm::num1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 13, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(294, 44);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 22);
			this->label1->TabIndex = 2;
			this->label1->Tag = L"";
			this->label1->Text = L"Выражение со скобками";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label4->Location = System::Drawing::Point(117, 161);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 18);
			this->label4->TabIndex = 7;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// bc
			// 
			this->bc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->bc->Location = System::Drawing::Point(178, 188);
			this->bc->Margin = System::Windows::Forms::Padding(2);
			this->bc->Name = L"bc";
			this->bc->Size = System::Drawing::Size(57, 50);
			this->bc->TabIndex = 8;
			this->bc->Text = L"C";
			this->bc->UseVisualStyleBackColor = true;
			this->bc->Click += gcnew System::EventHandler(this, &MyForm::bc_Click);
			// 
			// barr
			// 
			this->barr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->barr->Location = System::Drawing::Point(247, 188);
			this->barr->Margin = System::Windows::Forms::Padding(2);
			this->barr->Name = L"barr";
			this->barr->Size = System::Drawing::Size(57, 50);
			this->barr->TabIndex = 8;
			this->barr->Text = L"←";
			this->barr->UseVisualStyleBackColor = true;
			this->barr->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// bleft
			// 
			this->bleft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->bleft->Location = System::Drawing::Point(383, 242);
			this->bleft->Margin = System::Windows::Forms::Padding(2);
			this->bleft->Name = L"bleft";
			this->bleft->Size = System::Drawing::Size(57, 50);
			this->bleft->TabIndex = 8;
			this->bleft->Text = L"(";
			this->bleft->UseVisualStyleBackColor = true;
			this->bleft->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// b7
			// 
			this->b7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b7->Location = System::Drawing::Point(110, 242);
			this->b7->Margin = System::Windows::Forms::Padding(2);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(57, 50);
			this->b7->TabIndex = 8;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = true;
			this->b7->Click += gcnew System::EventHandler(this, &MyForm::b7_Click);
			// 
			// bright
			// 
			this->bright->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->bright->Location = System::Drawing::Point(383, 297);
			this->bright->Margin = System::Windows::Forms::Padding(2);
			this->bright->Name = L"bright";
			this->bright->Size = System::Drawing::Size(57, 50);
			this->bright->TabIndex = 8;
			this->bright->Text = L")";
			this->bright->UseVisualStyleBackColor = true;
			this->bright->Click += gcnew System::EventHandler(this, &MyForm::bright_Click);
			// 
			// b4
			// 
			this->b4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b4->Location = System::Drawing::Point(110, 297);
			this->b4->Margin = System::Windows::Forms::Padding(2);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(57, 50);
			this->b4->TabIndex = 8;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = true;
			this->b4->Click += gcnew System::EventHandler(this, &MyForm::b4_Click);
			// 
			// b5
			// 
			this->b5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b5->Location = System::Drawing::Point(178, 297);
			this->b5->Margin = System::Windows::Forms::Padding(2);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(57, 50);
			this->b5->TabIndex = 8;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = true;
			this->b5->Click += gcnew System::EventHandler(this, &MyForm::b5_Click);
			// 
			// b6
			// 
			this->b6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b6->Location = System::Drawing::Point(247, 297);
			this->b6->Margin = System::Windows::Forms::Padding(2);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(57, 50);
			this->b6->TabIndex = 8;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = true;
			this->b6->Click += gcnew System::EventHandler(this, &MyForm::b6_Click);
			// 
			// bdelx
			// 
			this->bdelx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->bdelx->Location = System::Drawing::Point(110, 188);
			this->bdelx->Margin = System::Windows::Forms::Padding(2);
			this->bdelx->Name = L"bdelx";
			this->bdelx->Size = System::Drawing::Size(57, 50);
			this->bdelx->TabIndex = 8;
			this->bdelx->Text = L"CE";
			this->bdelx->UseVisualStyleBackColor = true;
			this->bdelx->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// b0
			// 
			this->b0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b0->Location = System::Drawing::Point(110, 405);
			this->b0->Margin = System::Windows::Forms::Padding(2);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(57, 50);
			this->b0->TabIndex = 8;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = true;
			this->b0->Click += gcnew System::EventHandler(this, &MyForm::b0_Click);
			// 
			// bp
			// 
			this->bp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->bp->Location = System::Drawing::Point(247, 405);
			this->bp->Margin = System::Windows::Forms::Padding(2);
			this->bp->Name = L"bp";
			this->bp->Size = System::Drawing::Size(57, 50);
			this->bp->TabIndex = 8;
			this->bp->Text = L",";
			this->bp->UseVisualStyleBackColor = true;
			this->bp->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// b1
			// 
			this->b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b1->Location = System::Drawing::Point(110, 351);
			this->b1->Margin = System::Windows::Forms::Padding(2);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(58, 50);
			this->b1->TabIndex = 8;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// b2
			// 
			this->b2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b2->Location = System::Drawing::Point(178, 351);
			this->b2->Margin = System::Windows::Forms::Padding(2);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(57, 50);
			this->b2->TabIndex = 8;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &MyForm::b2_Click);
			// 
			// b9
			// 
			this->b9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b9->Location = System::Drawing::Point(247, 242);
			this->b9->Margin = System::Windows::Forms::Padding(2);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(57, 50);
			this->b9->TabIndex = 8;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = true;
			this->b9->Click += gcnew System::EventHandler(this, &MyForm::b9_Click);
			// 
			// b3
			// 
			this->b3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b3->Location = System::Drawing::Point(247, 351);
			this->b3->Margin = System::Windows::Forms::Padding(2);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(57, 50);
			this->b3->TabIndex = 8;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &MyForm::b3_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button8->Location = System::Drawing::Point(178, 242);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(56, 50);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button54
			// 
			this->button54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button54->Location = System::Drawing::Point(315, 187);
			this->button54->Margin = System::Windows::Forms::Padding(2);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(57, 50);
			this->button54->TabIndex = 11;
			this->button54->Text = L"^";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// bstep2
			// 
			this->bstep2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->bstep2->Location = System::Drawing::Point(383, 188);
			this->bstep2->Margin = System::Windows::Forms::Padding(2);
			this->bstep2->Name = L"bstep2";
			this->bstep2->Size = System::Drawing::Size(57, 50);
			this->bstep2->TabIndex = 12;
			this->bstep2->Text = L"x²";
			this->bstep2->UseVisualStyleBackColor = true;
			this->bstep2->Click += gcnew System::EventHandler(this, &MyForm::bstep2_Click);
			// 
			// bplus
			// 
			this->bplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->bplus->Location = System::Drawing::Point(178, 405);
			this->bplus->Margin = System::Windows::Forms::Padding(2);
			this->bplus->Name = L"bplus";
			this->bplus->Size = System::Drawing::Size(57, 50);
			this->bplus->TabIndex = 8;
			this->bplus->Text = L"00";
			this->bplus->UseVisualStyleBackColor = true;
			this->bplus->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button2->Location = System::Drawing::Point(315, 242);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(57, 50);
			this->button2->TabIndex = 13;
			this->button2->Text = L"÷";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button3->Location = System::Drawing::Point(315, 297);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(57, 50);
			this->button3->TabIndex = 14;
			this->button3->Text = L"×";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button4->Location = System::Drawing::Point(315, 351);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(57, 50);
			this->button4->TabIndex = 15;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button5->Location = System::Drawing::Point(315, 405);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(57, 50);
			this->button5->TabIndex = 16;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(467, 126);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(292, 292);
			this->listBox1->TabIndex = 17;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(550, 423);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(127, 40);
			this->button6->TabIndex = 19;
			this->button6->Text = L"   Очистить";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(9, 136);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(73, 33);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Темная";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(91, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(0, 474);
			this->panel1->TabIndex = 21;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold));
			this->button12->Location = System::Drawing::Point(9, 300);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 33);
			this->button12->TabIndex = 24;
			this->button12->Text = L"Зеленая";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold));
			this->button11->Location = System::Drawing::Point(9, 245);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(73, 33);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Синяя";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold));
			this->button10->Location = System::Drawing::Point(9, 191);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(73, 33);
			this->button10->TabIndex = 21;
			this->button10->Text = L"Светлая";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(110, 71);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(124, 50);
			this->button9->TabIndex = 22;
			this->button9->Text = L"Выбрать тему";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Purple;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(91, 474);
			this->panel2->TabIndex = 23;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(91, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(693, 42);
			this->panel3->TabIndex = 24;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			this->panel3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::HeaderUp_MouseDown);
			this->panel3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::HeaderUp_MouseMove);
			this->panel3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::HeaderUp_MouseUp);
			// 
			// button14
			// 
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->Location = System::Drawing::Point(601, 0);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(40, 40);
			this->button14->TabIndex = 25;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->Location = System::Drawing::Point(646, 0);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(40, 40);
			this->button13->TabIndex = 0;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(91, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(382, 42);
			this->panel4->TabIndex = 25;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ClientSize = System::Drawing::Size(784, 474);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->bstep2);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b0);
			this->Controls->Add(this->bplus);
			this->Controls->Add(this->bright);
			this->Controls->Add(this->bdelx);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->bleft);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->bp);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->barr);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->bc);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1500, 1625);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->TransparencyKey = System::Drawing::Color::Purple;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string buf = msclr::interop::marshal_as<std::string>(num1->Text);
		char* str = new char[buf.length() + 1];
		strcpy(str, buf.c_str());
		double result = eval(str);
		if (error1 == true)
		{
			label4->Text = "Деление на ноль!";
			error1 = false;
		}
		else if (error2 == true)
		{
			label4->Text = "Не хватает скобки!";
			error2 = false;
		}
		else
		{
			label4->Text = num1->Text + "=";
			num1->Text = System::Convert::ToString(result);
			listBox1->Items->Add(label4->Text + num1->Text);
			enter = true;
		}


	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void num1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void num2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = ",";
			enter = false;
		}
		else
			num1->Text = num1->Text + ",";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = num1->Text;
		if (text->Length > 0) {
			num1->Text = text->Substring(0, text->Length - 1);
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "00";
			enter = false;
		}
		else
			num1->Text = num1->Text + "00";
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "1";
			enter = false;
		}
		else
			num1->Text = num1->Text + "1";
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "(";
			enter = false;
		}
		else
			num1->Text = num1->Text + "(";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		num1->Text = "";
		label4->Text = "";
	}
	private: System::Void bc_Click(System::Object^ sender, System::EventArgs^ e) {
		num1->Text = "";
	}
	private: System::Void b0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "0";
			enter = false;
		}
		else
			num1->Text = num1->Text + "0";
	}
	private: System::Void b2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "2";
			enter = false;
		}
		else
			num1->Text = num1->Text + "2";
	}
	private: System::Void b3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "3";
			enter = false;
		}
		else
			num1->Text = num1->Text + "3";
	}
	private: System::Void b4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "4";
			enter = false;
		}
		else
			num1->Text = num1->Text + "4";
	}
	private: System::Void b5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "5";
			enter = false;
		}
		else
			num1->Text = num1->Text + "5";
	}
	private: System::Void b6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "6";
			enter = false;
		}
		else
			num1->Text = num1->Text + "6";
	}
	private: System::Void b7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "7";
			enter = false;
		}
		else
			num1->Text = num1->Text + "7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "8";
			enter = false;
		}
		else
			num1->Text = num1->Text + "8";
	}
	private: System::Void b9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (enter)
		{
			label4->Text = label4->Text + num1->Text;
			num1->Text = "9";
			enter = false;
		}
		else
			num1->Text = num1->Text + "9";
	}
	private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
		num1->Text = num1->Text + "^";
		enter = false;
	}
	private: System::Void bstep2_Click(System::Object^ sender, System::EventArgs^ e) {
		num1->Text = num1->Text + "^2";
		enter = false;
	}
	private: System::Void bright_Click(System::Object^ sender, System::EventArgs^ e) {
		num1->Text = num1->Text + ")";
		enter = false;
	}
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		num1->Text = num1->Text + "-";
		enter = false;
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		num1->Text = num1->Text + "+";
		enter = false;
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		num1->Text = num1->Text + "*";
		enter = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		num1->Text = num1->Text + "/";
		enter = false;
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		panel3->BackColor = System::Drawing::SystemColors::ControlDark;
		label1->ForeColor = System::Drawing::SystemColors::Window;
		button6->BackColor = System::Drawing::SystemColors::ControlDark;
		button1->BackColor = System::Drawing::SystemColors::ControlDark;
		button5->BackColor = System::Drawing::SystemColors::ControlDark;
		bp->BackColor = System::Drawing::SystemColors::ControlDark;
		bplus->BackColor = System::Drawing::SystemColors::ControlDark;
		b0->BackColor = System::Drawing::SystemColors::ControlDark;
		b1->BackColor = System::Drawing::SystemColors::ControlDark;
		b2->BackColor = System::Drawing::SystemColors::ControlDark;
		b3->BackColor = System::Drawing::SystemColors::ControlDark;
		b4->BackColor = System::Drawing::SystemColors::ControlDark;
		b5->BackColor = System::Drawing::SystemColors::ControlDark;
		b6->BackColor = System::Drawing::SystemColors::ControlDark;
		b7->BackColor = System::Drawing::SystemColors::ControlDark;
		button8->BackColor = System::Drawing::SystemColors::ControlDark;
		b9->BackColor = System::Drawing::SystemColors::ControlDark;
		button4->BackColor = System::Drawing::SystemColors::ControlDark;
		button3->BackColor = System::Drawing::SystemColors::ControlDark;
		button2->BackColor = System::Drawing::SystemColors::ControlDark;
		button54->BackColor = System::Drawing::SystemColors::ControlDark;
		bdelx->BackColor = System::Drawing::SystemColors::ControlDark;
		bc->BackColor = System::Drawing::SystemColors::ControlDark;
		barr->BackColor = System::Drawing::SystemColors::ControlDark;
		bstep2->BackColor = System::Drawing::SystemColors::ControlDark;
		bleft->BackColor = System::Drawing::SystemColors::ControlDark;
		bright->BackColor = System::Drawing::SystemColors::ControlDark;
		button7->BackColor = System::Drawing::SystemColors::ControlDark;
		button9->BackColor = System::Drawing::SystemColors::ControlDark;
		button10->BackColor = System::Drawing::SystemColors::ControlDark;
		button11->BackColor = System::Drawing::SystemColors::ControlDark;
		button12->BackColor = System::Drawing::SystemColors::ControlDark;

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!pan1)
		{
			panel1->Width += 30;
			if (panel1->Width == 90)
			{
				timer1->Stop();
				pan1 = true;
			}
		}
		else
		{
			panel1->Width -= 30;
			if (panel1->Width == 0)
			{
				timer1->Stop();
				pan1 = false;
			}
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = System::Drawing::SystemColors::Control;
		panel1->BackColor = System::Drawing::SystemColors::Control;
		panel3->BackColor = System::Drawing::SystemColors::ActiveBorder;
		label1->ForeColor = System::Drawing::SystemColors::WindowText;
		button6->BackColor = System::Drawing::SystemColors::ControlLight;
		button1->BackColor = System::Drawing::SystemColors::ControlLight;
		button5->BackColor = System::Drawing::SystemColors::ControlLight;
		bp->BackColor = System::Drawing::SystemColors::ControlLight;
		bplus->BackColor = System::Drawing::SystemColors::ControlLight;
		b0->BackColor = System::Drawing::SystemColors::ControlLight;
		b1->BackColor = System::Drawing::SystemColors::ControlLight;
		b2->BackColor = System::Drawing::SystemColors::ControlLight;
		b3->BackColor = System::Drawing::SystemColors::ControlLight;
		b4->BackColor = System::Drawing::SystemColors::ControlLight;
		b5->BackColor = System::Drawing::SystemColors::ControlLight;
		b6->BackColor = System::Drawing::SystemColors::ControlLight;
		b7->BackColor = System::Drawing::SystemColors::ControlLight;
		button8->BackColor = System::Drawing::SystemColors::ControlLight;
		b9->BackColor = System::Drawing::SystemColors::ControlLight;
		button4->BackColor = System::Drawing::SystemColors::ControlLight;
		button3->BackColor = System::Drawing::SystemColors::ControlLight;
		button2->BackColor = System::Drawing::SystemColors::ControlLight;
		button54->BackColor = System::Drawing::SystemColors::ControlLight;
		bdelx->BackColor = System::Drawing::SystemColors::ControlLight;
		bc->BackColor = System::Drawing::SystemColors::ControlLight;
		barr->BackColor = System::Drawing::SystemColors::ControlLight;
		bstep2->BackColor = System::Drawing::SystemColors::ControlLight;
		bleft->BackColor = System::Drawing::SystemColors::ControlLight;
		bright->BackColor = System::Drawing::SystemColors::ControlLight;
		button7->BackColor = System::Drawing::SystemColors::ControlLight;
		button9->BackColor = System::Drawing::SystemColors::ControlLight;
		button10->BackColor = System::Drawing::SystemColors::ControlLight;
		button11->BackColor = System::Drawing::SystemColors::ControlLight;
		button12->BackColor = System::Drawing::SystemColors::ControlLight;
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = System::Drawing::Color::LimeGreen;
		panel1->BackColor = System::Drawing::Color::LimeGreen;
		panel3->BackColor = System::Drawing::Color::ForestGreen;
		label1->ForeColor = System::Drawing::SystemColors::WindowText;
		button6->BackColor = System::Drawing::Color::LightGreen;
		button1->BackColor = System::Drawing::Color::LightGreen;
		button5->BackColor = System::Drawing::Color::LightGreen;
		bp->BackColor = System::Drawing::Color::LightGreen;
		bplus->BackColor = System::Drawing::Color::LightGreen;
		b0->BackColor = System::Drawing::Color::LightGreen;
		b1->BackColor = System::Drawing::Color::LightGreen;
		b2->BackColor = System::Drawing::Color::LightGreen;
		b3->BackColor = System::Drawing::Color::LightGreen;
		b4->BackColor = System::Drawing::Color::LightGreen;
		b5->BackColor = System::Drawing::Color::LightGreen;
		b6->BackColor = System::Drawing::Color::LightGreen;
		b7->BackColor = System::Drawing::Color::LightGreen;
		button8->BackColor = System::Drawing::Color::LightGreen;
		b9->BackColor = System::Drawing::Color::LightGreen;
		button4->BackColor = System::Drawing::Color::LightGreen;
		button3->BackColor = System::Drawing::Color::LightGreen;
		button2->BackColor = System::Drawing::Color::LightGreen;
		button54->BackColor = System::Drawing::Color::LightGreen;
		bdelx->BackColor = System::Drawing::Color::LightGreen;
		bc->BackColor = System::Drawing::Color::LightGreen;
		barr->BackColor = System::Drawing::Color::LightGreen;
		bstep2->BackColor = System::Drawing::Color::LightGreen;
		bleft->BackColor = System::Drawing::Color::LightGreen;
		bright->BackColor = System::Drawing::Color::LightGreen;
		button7->BackColor = System::Drawing::Color::LightGreen;
		button9->BackColor = System::Drawing::Color::LightGreen;
		button10->BackColor = System::Drawing::Color::LightGreen;
		button11->BackColor = System::Drawing::Color::LightGreen;
		button12->BackColor = System::Drawing::Color::LightGreen;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = System::Drawing::Color::RoyalBlue;
		panel1->BackColor = System::Drawing::Color::RoyalBlue;
		panel3->BackColor = System::Drawing::Color::MediumBlue;
		label1->ForeColor = System::Drawing::SystemColors::WindowText;
		button6->BackColor = System::Drawing::Color::CornflowerBlue;
		button1->BackColor = System::Drawing::Color::CornflowerBlue;
		button5->BackColor = System::Drawing::Color::CornflowerBlue;
		bp->BackColor = System::Drawing::Color::CornflowerBlue;
		bplus->BackColor = System::Drawing::Color::CornflowerBlue;
		b0->BackColor = System::Drawing::Color::CornflowerBlue;
		b1->BackColor = System::Drawing::Color::CornflowerBlue;
		b2->BackColor = System::Drawing::Color::CornflowerBlue;
		b3->BackColor = System::Drawing::Color::CornflowerBlue;
		b4->BackColor = System::Drawing::Color::CornflowerBlue;
		b5->BackColor = System::Drawing::Color::CornflowerBlue;
		b6->BackColor = System::Drawing::Color::CornflowerBlue;
		b7->BackColor = System::Drawing::Color::CornflowerBlue;
		button8->BackColor = System::Drawing::Color::CornflowerBlue;
		b9->BackColor = System::Drawing::Color::CornflowerBlue;
		button4->BackColor = System::Drawing::Color::CornflowerBlue;
		button3->BackColor = System::Drawing::Color::CornflowerBlue;
		button2->BackColor = System::Drawing::Color::CornflowerBlue;
		button54->BackColor = System::Drawing::Color::CornflowerBlue;
		bdelx->BackColor = System::Drawing::Color::CornflowerBlue;
		bc->BackColor = System::Drawing::Color::CornflowerBlue;
		barr->BackColor = System::Drawing::Color::CornflowerBlue;
		bstep2->BackColor = System::Drawing::Color::CornflowerBlue;
		bleft->BackColor = System::Drawing::Color::CornflowerBlue;
		bright->BackColor = System::Drawing::Color::CornflowerBlue;
		button7->BackColor = System::Drawing::Color::CornflowerBlue;
		button9->BackColor = System::Drawing::Color::CornflowerBlue;
		button10->BackColor = System::Drawing::Color::CornflowerBlue;
		button11->BackColor = System::Drawing::Color::CornflowerBlue;
		button12->BackColor = System::Drawing::Color::CornflowerBlue;
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
	   bool mouseDown;
	   Point lastLocation;
		private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
	private: System::Void HeaderUp_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		mouseDown = true;
		lastLocation = e->Location;

	}
	private: System::Void HeaderUp_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (mouseDown)
		{
			//установка нового положения окна в зависимости от старого
			this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
			this->Update();
		}
	}
	private: System::Void HeaderUp_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		mouseDown = false;
	}
};
}
