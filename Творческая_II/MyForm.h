#pragma once

namespace Творческая2
{

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::Label^ label18;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(15, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(297, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(156, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 22);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(455, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 22);
			this->textBox4->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(133, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 19);
			this->label1->TabIndex = 12;
			this->label1->Text = L"x";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(274, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 19);
			this->label2->TabIndex = 13;
			this->label2->Text = L"y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(415, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 19);
			this->label3->TabIndex = 14;
			this->label3->Text = L"z";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(430, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 19);
			this->label5->TabIndex = 23;
			this->label5->Text = L"=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(415, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 19);
			this->label6->TabIndex = 22;
			this->label6->Text = L"z";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(274, 39);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 19);
			this->label7->TabIndex = 21;
			this->label7->Text = L"y";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(133, 39);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 19);
			this->label8->TabIndex = 20;
			this->label8->Text = L"x";
			// 
			// textBox5
			// 
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox5->Location = System::Drawing::Point(455, 40);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(161, 22);
			this->textBox5->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(156, 40);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(112, 22);
			this->textBox6->TabIndex = 18;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(297, 40);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(112, 22);
			this->textBox7->TabIndex = 17;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(15, 40);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(112, 22);
			this->textBox8->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(430, 67);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 19);
			this->label9->TabIndex = 31;
			this->label9->Text = L"=";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(415, 67);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 19);
			this->label10->TabIndex = 30;
			this->label10->Text = L"z";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(274, 67);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(17, 19);
			this->label11->TabIndex = 29;
			this->label11->Text = L"y";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(133, 67);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(17, 19);
			this->label12->TabIndex = 28;
			this->label12->Text = L"x";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(455, 68);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(161, 22);
			this->textBox9->TabIndex = 27;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(156, 68);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(112, 22);
			this->textBox10->TabIndex = 26;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(297, 68);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(112, 22);
			this->textBox11->TabIndex = 25;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(15, 68);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(112, 22);
			this->textBox12->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 120);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(80, 14);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Сохранить в:";
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ячейка 1", L"ячейка 2", L"ячейка 3", L"ячейка 4" });
			this->comboBox1->Location = System::Drawing::Point(15, 137);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 22);
			this->comboBox1->TabIndex = 34;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ячейка 1", L"ячейка 2", L"ячейка 3", L"ячейка 4" });
			this->comboBox2->Location = System::Drawing::Point(483, 137);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 22);
			this->comboBox2->TabIndex = 35;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(462, 414);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(17, 19);
			this->label15->TabIndex = 36;
			this->label15->Text = L"x";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(462, 442);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(17, 19);
			this->label16->TabIndex = 37;
			this->label16->Text = L"y";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(476, 414);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(21, 19);
			this->label18->TabIndex = 39;
			this->label18->Text = L"=";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(476, 442);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(21, 19);
			this->label20->TabIndex = 41;
			this->label20->Text = L"=";
			// 
			// textBox13
			// 
			this->textBox13->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(503, 471);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(112, 22);
			this->textBox13->TabIndex = 44;
			// 
			// textBox14
			// 
			this->textBox14->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox14->Enabled = false;
			this->textBox14->Location = System::Drawing::Point(503, 443);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(112, 22);
			this->textBox14->TabIndex = 43;
			// 
			// textBox15
			// 
			this->textBox15->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox15->Enabled = false;
			this->textBox15->Location = System::Drawing::Point(503, 415);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(113, 22);
			this->textBox15->TabIndex = 42;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(509, 398);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(45, 14);
			this->label21->TabIndex = 45;
			this->label21->Text = L"Ответ:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(476, 470);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 19);
			this->label4->TabIndex = 47;
			this->label4->Text = L"=";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(462, 470);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(16, 19);
			this->label14->TabIndex = 46;
			this->label14->Text = L"z";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(428, 11);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(21, 19);
			this->label17->TabIndex = 48;
			this->label17->Text = L"=";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(480, 120);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(88, 14);
			this->label19->TabIndex = 49;
			this->label19->Text = L"Вспомнить из:";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(153, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 38);
			this->button1->TabIndex = 50;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(32, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 36);
			this->button2->TabIndex = 51;
			this->button2->Text = L"7";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(101, 315);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 36);
			this->button3->TabIndex = 52;
			this->button3->Text = L"8";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(170, 315);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 36);
			this->button4->TabIndex = 53;
			this->button4->Text = L"9";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(32, 358);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 36);
			this->button5->TabIndex = 54;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(101, 358);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 36);
			this->button6->TabIndex = 55;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(170, 358);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 36);
			this->button7->TabIndex = 56;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(32, 401);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 36);
			this->button8->TabIndex = 57;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(101, 401);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 36);
			this->button9->TabIndex = 58;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(170, 401);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 36);
			this->button10->TabIndex = 59;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(101, 444);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(49, 36);
			this->button12->TabIndex = 61;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(170, 444);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(49, 36);
			this->button13->TabIndex = 62;
			this->button13->Text = L",";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(461, 304);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 19);
			this->label22->TabIndex = 63;
			this->label22->Text = L"Δx =";
			this->label22->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(461, 332);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(44, 19);
			this->label23->TabIndex = 64;
			this->label23->Text = L"Δy =";
			this->label23->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(462, 360);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(43, 19);
			this->label24->TabIndex = 65;
			this->label24->Text = L"Δz =";
			this->label24->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(469, 276);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(36, 19);
			this->label25->TabIndex = 66;
			this->label25->Text = L"Δ =";
			this->label25->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox16
			// 
			this->textBox16->Enabled = false;
			this->textBox16->Location = System::Drawing::Point(503, 305);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(110, 22);
			this->textBox16->TabIndex = 67;
			// 
			// textBox17
			// 
			this->textBox17->Enabled = false;
			this->textBox17->Location = System::Drawing::Point(503, 333);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(110, 22);
			this->textBox17->TabIndex = 68;
			// 
			// textBox18
			// 
			this->textBox18->Enabled = false;
			this->textBox18->Location = System::Drawing::Point(503, 361);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(110, 22);
			this->textBox18->TabIndex = 69;
			// 
			// textBox19
			// 
			this->textBox19->Enabled = false;
			this->textBox19->Location = System::Drawing::Point(503, 277);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(110, 22);
			this->textBox19->TabIndex = 70;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(32, 255);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(256, 44);
			this->textBox20->TabIndex = 71;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(30, 238);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(135, 14);
			this->label26->TabIndex = 72;
			this->label26->Text = L"Обычный калькулятор";
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(239, 315);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(49, 36);
			this->button14->TabIndex = 73;
			this->button14->Text = L"÷";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(239, 358);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 36);
			this->button15->TabIndex = 74;
			this->button15->Text = L"×";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(239, 401);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(49, 36);
			this->button16->TabIndex = 75;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(239, 444);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 36);
			this->button17->TabIndex = 76;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->Location = System::Drawing::Point(311, 128);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(135, 38);
			this->button18->TabIndex = 77;
			this->button18->Text = L"Очистить";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(32, 444);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(49, 36);
			this->button19->TabIndex = 78;
			this->button19->Text = L"C";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(294, 259);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(49, 36);
			this->button11->TabIndex = 79;
			this->button11->Text = L"=";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(0, 4);
			this->listBox1->TabIndex = 80;
			this->listBox1->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(503, 238);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(100, 18);
			this->checkBox1->TabIndex = 81;
			this->checkBox1->Text = L"Тёмная тема";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-23, -18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(58, 120);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 82;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-23, -18);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(58, 120);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 83;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(625, 505);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор системы уравнений с 3 неизвестными";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//button Решить
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "" && textBox11->Text != "" && textBox12->Text != "")
	{
		if ((Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text)) != 0)
		{
			textBox15->Text = Convert::ToString((Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text)) / (Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text)));
			textBox14->Text = Convert::ToString((Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox9->Text)) / (Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text)));
			textBox13->Text = Convert::ToString((Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox10->Text)) / (Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text)));
			textBox19->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text));
			textBox16->Text = Convert::ToString(Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox10->Text));
			textBox17->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox11->Text) + Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox2->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox11->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox7->Text) * Convert::ToDouble(textBox9->Text));
			textBox18->Text = Convert::ToString(Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox12->Text) + Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox10->Text) - Convert::ToDouble(textBox4->Text) * Convert::ToDouble(textBox6->Text) * Convert::ToDouble(textBox12->Text) - Convert::ToDouble(textBox3->Text) * Convert::ToDouble(textBox8->Text) * Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox5->Text) * Convert::ToDouble(textBox10->Text));
		}
		else
		{
			MessageBox::Show("Определитель равен 0\nСистема не имеет решений, либо имеет бесконечное множество решений", "Ошибка");
		}
	}
	else
	{
		MessageBox::Show("Пожалуйста, заполните все поля", "Ошибка");
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";
	textBox10->Text = "";
	textBox11->Text = "";
	textBox12->Text = "";
	textBox13->Text = "";
	textBox14->Text = "";
	textBox15->Text = "";
	textBox16->Text = "";
	textBox17->Text = "";
	textBox18->Text = "";
	textBox19->Text = "";
}
	   static array<double>^ arr = gcnew array<double>(48);
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "" && textBox11->Text != "" && textBox12->Text != "")
	{
		switch (comboBox1->SelectedIndex)
		{
		case 0:
			for (int i = 0; i < 12; i++)
			{
				arr[i] = Convert::ToDouble(Controls["textBox" + Convert::ToString(i + 1)]->Text);
			}
			break;
		case 1:
			for (int i = 12; i < 24; i++)
			{
				arr[i] = Convert::ToDouble(Controls["textBox" + Convert::ToString(i - 11)]->Text);
			}
			break;
		case 2:
			for (int i = 24; i < 36; i++)
			{
				arr[i] = Convert::ToDouble(Controls["textBox" + Convert::ToString(i - 23)]->Text);
			}
			break;
		case 3:
			for (int i = 36; i < 48; i++)
			{
				arr[i] = Convert::ToDouble(Controls["textBox" + Convert::ToString(i - 35)]->Text);
			}
			break;
		}
	}
	else
	{
		MessageBox::Show("Пожалуйста, заполните все поля", "Ошибка");
	}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (comboBox2->SelectedIndex)
	{
	case 0:
		for (int i = 0; i < 12; i++)
		{
			Controls["textBox" + Convert::ToString(i + 1)]->Text = Convert::ToString(arr[i]);
		}
		break;
	case 1:
		for (int i = 12; i < 24; i++)
		{
			Controls["textBox" + Convert::ToString(i - 11)]->Text = Convert::ToString(arr[i]);
		}
		break;
	case 2:
		for (int i = 24; i < 36; i++)
		{
			Controls["textBox" + Convert::ToString(i - 23)]->Text = Convert::ToString(arr[i]);
		}
		break;
	case 3:
		for (int i = 36; i < 48; i++)
		{
			Controls["textBox" + Convert::ToString(i - 35)]->Text = Convert::ToString(arr[i]);
		}
		break;
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "0";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "1";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "2";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "3";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "4";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "5";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "6";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "7";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "8";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "9";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + ",";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "/";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "*";
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "-";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = textBox20->Text + "+";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = "";
}
	   // ФУНКЦИЯ ПОДСЧЕТА
	private: System::String^ calculate(System::String^ text) {
		listBox1->Items->Clear();
		System::String^ tmp = "";
		for (int i = 0; i < text->Length; i++) {

			if (text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/')
			{
				listBox1->Items->Add(tmp);
				listBox1->Items->Add(text[i]);
				tmp = "";
			}
			else tmp += text[i];
		}
		listBox1->Items->Add(tmp);
		for (int i = 0; i < listBox1->Items->Count; i++) {
			if (listBox1->Items[i]->ToString() == "*" || listBox1->Items[i]->ToString() == "/") {
				if (i == 0 || i == listBox1->Items->Count - 1)
					return "Ошибка";
				System::String^ res = calc1(listBox1->Items[i - 1]->ToString(), listBox1->Items[i]->ToString(), listBox1->Items[i + 1]->ToString());
				if (res == "Ошибка") return "Ошибка";
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->RemoveAt(i - 1);
				listBox1->Items->Insert(i - 1, res);
				i--;
			}
		}
		for (int i = 0; i < listBox1->Items->Count; i++) {
			if (listBox1->Items[i]->ToString() == "+" || listBox1->Items[i]->ToString() == "-") {
				if (i == 0 || i == listBox1->Items->Count - 1)
					return "Ошибка";
				if ((listBox1->Items[i - 1]->ToString() == "") && (listBox1->Items[i]->ToString() == "-")) {
					System::String^ res1 = "-" + listBox1->Items[i + 1]->ToString();
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->Insert(i - 1, res1);
					i = 0;
				}
				else {
					System::String^ res = calc1(listBox1->Items[i - 1]->ToString(), listBox1->Items[i]->ToString(), listBox1->Items[i + 1]->ToString());
					if (res == "Ошибка") return "Ошибка";
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->RemoveAt(i - 1);
					listBox1->Items->Insert(i - 1, res);
					i = 0;
				}
			}
		}
		return listBox1->Items[0]->ToString();
	}
		   // ФУНКЦИ ВЫПОЛНЕНИЯ ДЕЙСТВИЙ
	private: System::String^ calc1(System::String^ n1, System::String^ d, System::String^ n2) {
		try {
			double number1 = Convert::ToDouble(n1);
			double number2 = Convert::ToDouble(n2);
			if (d == "/") {
				if (number2 != 0) {
					return (number1 / number2).ToString();
				}
				else return "Ошибка. На ноль делить нельзя";
			}
			if (d == "*") {
				return (number1 * number2).ToString();
			}
			if (d == "+")
			{
				return (number1 + number2).ToString();
			}
			if (d == "-")
			{
				return (number1 - number2).ToString();
			}
		}
		catch (SystemException^ e1) {
			return "Ошибка";
		}
		return "Ошибка";
	}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Text->Contains("-"))
		textBox20->Text = "-" + calculate(textBox20->Text);
	else textBox20->Text = calculate(textBox20->Text);
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		this->BackColor = Color::Black;
		this->ForeColor = Color::Brown;
		for (int i = 1; i < 21; i++)
		{
			Controls["textBox" + Convert::ToString(i)]->BackColor = Color::Black;
			Controls["textBox" + Convert::ToString(i)]->ForeColor = Color::Brown;
		}
		comboBox1->BackColor = Color::Black;
		comboBox1->ForeColor = Color::Brown;
		comboBox2->BackColor = Color::Black;
		comboBox2->ForeColor = Color::Brown;
		for (int i = 1; i < 20; i++)
		{
			Controls["button" + Convert::ToString(i)]->BackColor = Color::DimGray;
			Controls["button" + Convert::ToString(i)]->ForeColor = Color::Brown;
		}
		pictureBox1->Visible = false;
		pictureBox2->Visible = true;
	}
	if (checkBox1->Checked == false)
	{
		this->BackColor = Color::White;
		this->ForeColor = Color::Black;
		for (int i = 1; i < 21; i++)
		{
			Controls["textBox" + Convert::ToString(i)]->BackColor = Color::White;
			Controls["textBox" + Convert::ToString(i)]->ForeColor = Color::Black;
		}
		comboBox1->BackColor = Color::White;
		comboBox1->ForeColor = Color::Black;
		comboBox2->BackColor = Color::White;
		comboBox2->ForeColor = Color::Black;
		for (int i = 1; i < 20; i++)
		{
			Controls["button" + Convert::ToString(i)]->BackColor = Color::White;
			Controls["button" + Convert::ToString(i)]->ForeColor = Color::Black;
		}
		pictureBox1->Visible = true;
		pictureBox2->Visible = false;
	}
}
};
};