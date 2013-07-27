#pragma once

#include "gshop.h"

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Icon = (Drawing::Icon^)((gcnew  Resources::ResourceManager("FWGShop.icons", Reflection::Assembly::GetExecutingAssembly()))->GetObject("app"));
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tbGiftDuration;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  tbSOFlags;
	private: System::Windows::Forms::ComboBox^  cbSOStatus;
	private: System::Windows::Forms::TextBox^  tbSODay;
	private: System::Windows::Forms::TextBox^  tbSODuration;
	private: System::Windows::Forms::TextBox^  tbSOExpireDate;
	private: System::Windows::Forms::TextBox^  tbSOActivateDate;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  nmudSOControlType;
	private: System::Windows::Forms::NumericUpDown^  nmudSOPrice;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  cbSaleOption;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  cbSurface;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::NumericUpDown^  nmudLogPrice;
	private: System::Windows::Forms::NumericUpDown^  nmudGiftAmount;
	private: System::Windows::Forms::NumericUpDown^  nmudGiftID;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  tbDescription;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  tbName;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  nmudAmount;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  nmudItemId;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  tbSubCategoryName;
	private: System::Windows::Forms::TextBox^  tbCategoryName;
	private: System::Windows::Forms::ListBox^  lbSubCategories;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  lbItems;
	private: System::Windows::Forms::ListBox^  lbCategories;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnCurrentTimestamp;
	private: System::Windows::Forms::TextBox^  tbTimestamp;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbGShopCount;
	private: System::Windows::Forms::TextBox^  tbLeaves;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->tbGiftDuration = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tbLeaves = (gcnew System::Windows::Forms::TextBox());
			this->tbSOFlags = (gcnew System::Windows::Forms::TextBox());
			this->cbSOStatus = (gcnew System::Windows::Forms::ComboBox());
			this->tbSODay = (gcnew System::Windows::Forms::TextBox());
			this->tbSODuration = (gcnew System::Windows::Forms::TextBox());
			this->tbSOExpireDate = (gcnew System::Windows::Forms::TextBox());
			this->tbSOActivateDate = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->nmudSOControlType = (gcnew System::Windows::Forms::Label());
			this->nmudSOPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cbSaleOption = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cbSurface = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->nmudLogPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->nmudGiftAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->nmudGiftID = (gcnew System::Windows::Forms::NumericUpDown());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tbDescription = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->nmudAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nmudItemId = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbGShopCount = (gcnew System::Windows::Forms::Label());
			this->tbSubCategoryName = (gcnew System::Windows::Forms::TextBox());
			this->tbCategoryName = (gcnew System::Windows::Forms::TextBox());
			this->lbSubCategories = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbItems = (gcnew System::Windows::Forms::ListBox());
			this->lbCategories = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCurrentTimestamp = (gcnew System::Windows::Forms::Button());
			this->tbTimestamp = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudSOPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudLogPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudGiftAmount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudGiftID))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudAmount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudItemId))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbGiftDuration
			// 
			this->tbGiftDuration->Enabled = false;
			this->tbGiftDuration->Location = System::Drawing::Point(115, 623);
			this->tbGiftDuration->Name = L"tbGiftDuration";
			this->tbGiftDuration->Size = System::Drawing::Size(92, 22);
			this->tbGiftDuration->TabIndex = 20;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tbLeaves);
			this->groupBox3->Controls->Add(this->tbSOFlags);
			this->groupBox3->Controls->Add(this->cbSOStatus);
			this->groupBox3->Controls->Add(this->tbSODay);
			this->groupBox3->Controls->Add(this->tbSODuration);
			this->groupBox3->Controls->Add(this->tbSOExpireDate);
			this->groupBox3->Controls->Add(this->tbSOActivateDate);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->nmudSOControlType);
			this->groupBox3->Controls->Add(this->nmudSOPrice);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Location = System::Drawing::Point(228, 265);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(354, 407);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Sale Options";
			// 
			// tbLeaves
			// 
			this->tbLeaves->BackColor = System::Drawing::Color::Gainsboro;
			this->tbLeaves->ForeColor = System::Drawing::Color::DimGray;
			this->tbLeaves->Location = System::Drawing::Point(125, 61);
			this->tbLeaves->MaxLength = 300;
			this->tbLeaves->Name = L"tbLeaves";
			this->tbLeaves->ReadOnly = true;
			this->tbLeaves->Size = System::Drawing::Size(223, 22);
			this->tbLeaves->TabIndex = 22;
			// 
			// tbSOFlags
			// 
			this->tbSOFlags->Enabled = false;
			this->tbSOFlags->Location = System::Drawing::Point(125, 322);
			this->tbSOFlags->Name = L"tbSOFlags";
			this->tbSOFlags->Size = System::Drawing::Size(109, 22);
			this->tbSOFlags->TabIndex = 15;
			// 
			// cbSOStatus
			// 
			this->cbSOStatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSOStatus->Enabled = false;
			this->cbSOStatus->FormattingEnabled = true;
			this->cbSOStatus->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"0 - Normal", L"1 - New\?", L"2 - \?", L"3 - Hot\?", 
				L"4 - Sale\?"});
			this->cbSOStatus->Location = System::Drawing::Point(125, 285);
			this->cbSOStatus->Name = L"cbSOStatus";
			this->cbSOStatus->Size = System::Drawing::Size(121, 24);
			this->cbSOStatus->TabIndex = 14;
			// 
			// tbSODay
			// 
			this->tbSODay->Enabled = false;
			this->tbSODay->Location = System::Drawing::Point(125, 248);
			this->tbSODay->Name = L"tbSODay";
			this->tbSODay->Size = System::Drawing::Size(109, 22);
			this->tbSODay->TabIndex = 13;
			// 
			// tbSODuration
			// 
			this->tbSODuration->Enabled = false;
			this->tbSODuration->Location = System::Drawing::Point(125, 214);
			this->tbSODuration->Name = L"tbSODuration";
			this->tbSODuration->Size = System::Drawing::Size(109, 22);
			this->tbSODuration->TabIndex = 12;
			// 
			// tbSOExpireDate
			// 
			this->tbSOExpireDate->Enabled = false;
			this->tbSOExpireDate->Location = System::Drawing::Point(125, 173);
			this->tbSOExpireDate->Name = L"tbSOExpireDate";
			this->tbSOExpireDate->Size = System::Drawing::Size(223, 22);
			this->tbSOExpireDate->TabIndex = 11;
			// 
			// tbSOActivateDate
			// 
			this->tbSOActivateDate->Enabled = false;
			this->tbSOActivateDate->Location = System::Drawing::Point(125, 135);
			this->tbSOActivateDate->Name = L"tbSOActivateDate";
			this->tbSOActivateDate->Size = System::Drawing::Size(223, 22);
			this->tbSOActivateDate->TabIndex = 10;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 214);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 17);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Duration";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Control;
			this->label16->ForeColor = System::Drawing::Color::Gray;
			this->label16->Location = System::Drawing::Point(8, 322);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(42, 17);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Flags";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Control;
			this->label15->ForeColor = System::Drawing::Color::Gray;
			this->label15->Location = System::Drawing::Point(6, 285);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 17);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Status";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Control;
			this->label14->ForeColor = System::Drawing::Color::Gray;
			this->label14->Location = System::Drawing::Point(6, 253);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(33, 17);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Day";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Control;
			this->label13->ForeColor = System::Drawing::Color::Gray;
			this->label13->Location = System::Drawing::Point(6, 178);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(81, 17);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Expire Date";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Control;
			this->label12->ForeColor = System::Drawing::Color::Gray;
			this->label12->Location = System::Drawing::Point(6, 135);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(92, 17);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Activate Date";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Client", L"Server"});
			this->comboBox1->Location = System::Drawing::Point(125, 91);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// nmudSOControlType
			// 
			this->nmudSOControlType->AutoSize = true;
			this->nmudSOControlType->Location = System::Drawing::Point(6, 91);
			this->nmudSOControlType->Name = L"nmudSOControlType";
			this->nmudSOControlType->Size = System::Drawing::Size(89, 17);
			this->nmudSOControlType->TabIndex = 2;
			this->nmudSOControlType->Text = L"Control Type";
			// 
			// nmudSOPrice
			// 
			this->nmudSOPrice->DecimalPlaces = 2;
			this->nmudSOPrice->Location = System::Drawing::Point(125, 33);
			this->nmudSOPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99999, 0, 0, 0});
			this->nmudSOPrice->Name = L"nmudSOPrice";
			this->nmudSOPrice->Size = System::Drawing::Size(120, 22);
			this->nmudSOPrice->TabIndex = 1;
			this->nmudSOPrice->ValueChanged += gcnew System::EventHandler(this, &MainWindow::nmudSOPrice_ValueChanged);
			this->nmudSOPrice->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 33);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 17);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Price";
			// 
			// cbSaleOption
			// 
			this->cbSaleOption->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSaleOption->Enabled = false;
			this->cbSaleOption->FormattingEnabled = true;
			this->cbSaleOption->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Default", L"Option 1", L"Option 2", L"Option 3"});
			this->cbSaleOption->Location = System::Drawing::Point(87, 262);
			this->cbSaleOption->Name = L"cbSaleOption";
			this->cbSaleOption->Size = System::Drawing::Size(121, 24);
			this->cbSaleOption->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 265);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 17);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Sale Option";
			// 
			// cbSurface
			// 
			this->cbSurface->Enabled = false;
			this->cbSurface->FormattingEnabled = true;
			this->cbSurface->Location = System::Drawing::Point(87, 212);
			this->cbSurface->Name = L"cbSurface";
			this->cbSurface->Size = System::Drawing::Size(495, 24);
			this->cbSurface->TabIndex = 10;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::Gray;
			this->label20->Location = System::Drawing::Point(6, 627);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(88, 17);
			this->label20->TabIndex = 16;
			this->label20->Text = L"Gift Duration";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Gray;
			this->label19->Location = System::Drawing::Point(6, 595);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(82, 17);
			this->label19->TabIndex = 15;
			this->label19->Text = L"Gift Amount";
			// 
			// nmudLogPrice
			// 
			this->nmudLogPrice->DecimalPlaces = 2;
			this->nmudLogPrice->Enabled = false;
			this->nmudLogPrice->Location = System::Drawing::Point(115, 653);
			this->nmudLogPrice->Name = L"nmudLogPrice";
			this->nmudLogPrice->Size = System::Drawing::Size(93, 22);
			this->nmudLogPrice->TabIndex = 21;
			// 
			// nmudGiftAmount
			// 
			this->nmudGiftAmount->Enabled = false;
			this->nmudGiftAmount->Location = System::Drawing::Point(115, 592);
			this->nmudGiftAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99999, 0, 0, 0});
			this->nmudGiftAmount->Name = L"nmudGiftAmount";
			this->nmudGiftAmount->Size = System::Drawing::Size(92, 22);
			this->nmudGiftAmount->TabIndex = 19;
			this->nmudGiftAmount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// nmudGiftID
			// 
			this->nmudGiftID->Enabled = false;
			this->nmudGiftID->Location = System::Drawing::Point(115, 561);
			this->nmudGiftID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99999, 0, 0, 0});
			this->nmudGiftID->Name = L"nmudGiftID";
			this->nmudGiftID->Size = System::Drawing::Size(92, 22);
			this->nmudGiftID->TabIndex = 18;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Gray;
			this->label21->Location = System::Drawing::Point(6, 655);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(68, 17);
			this->label21->TabIndex = 17;
			this->label21->Text = L"Log Price";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Gray;
			this->label18->Location = System::Drawing::Point(6, 563);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(47, 17);
			this->label18->TabIndex = 14;
			this->label18->Text = L"Gift ID";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 215);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 17);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Surface";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1056, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->openToolStripMenuItem, 
				this->saveToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(114, 24);
			this->openToolStripMenuItem->Text = L"&Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(114, 24);
			this->saveToolStripMenuItem->Text = L"&Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(114, 24);
			this->exitToolStripMenuItem->Text = L"&Exit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"&Help";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->nmudLogPrice);
			this->groupBox2->Controls->Add(this->tbGiftDuration);
			this->groupBox2->Controls->Add(this->nmudGiftAmount);
			this->groupBox2->Controls->Add(this->nmudGiftID);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->cbSaleOption);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->cbSurface);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->tbDescription);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->tbName);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->nmudAmount);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->nmudItemId);
			this->groupBox2->Location = System::Drawing::Point(456, 37);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(588, 678);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Item";
			// 
			// tbDescription
			// 
			this->tbDescription->Location = System::Drawing::Point(87, 133);
			this->tbDescription->MaxLength = 512;
			this->tbDescription->Multiline = true;
			this->tbDescription->Name = L"tbDescription";
			this->tbDescription->ReadOnly = true;
			this->tbDescription->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->tbDescription->Size = System::Drawing::Size(333, 58);
			this->tbDescription->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 136);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Description";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Location = System::Drawing::Point(426, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(156, 156);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(87, 87);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(333, 22);
			this->tbName->TabIndex = 5;
			this->tbName->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 17);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Name";
			// 
			// nmudAmount
			// 
			this->nmudAmount->Location = System::Drawing::Point(300, 33);
			this->nmudAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99999, 0, 0, 0});
			this->nmudAmount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->nmudAmount->Name = L"nmudAmount";
			this->nmudAmount->Size = System::Drawing::Size(120, 22);
			this->nmudAmount->TabIndex = 3;
			this->nmudAmount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->nmudAmount->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(225, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 17);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Amount";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 17);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Item ID";
			// 
			// nmudItemId
			// 
			this->nmudItemId->Location = System::Drawing::Point(87, 33);
			this->nmudItemId->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99999, 0, 0, 0});
			this->nmudItemId->Name = L"nmudItemId";
			this->nmudItemId->Size = System::Drawing::Size(120, 22);
			this->nmudItemId->TabIndex = 0;
			this->nmudItemId->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lbGShopCount);
			this->groupBox1->Controls->Add(this->tbSubCategoryName);
			this->groupBox1->Controls->Add(this->tbCategoryName);
			this->groupBox1->Controls->Add(this->lbSubCategories);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->lbItems);
			this->groupBox1->Controls->Add(this->lbCategories);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->btnCurrentTimestamp);
			this->groupBox1->Controls->Add(this->tbTimestamp);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(438, 648);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"General";
			// 
			// lbGShopCount
			// 
			this->lbGShopCount->AutoSize = true;
			this->lbGShopCount->Location = System::Drawing::Point(90, 12);
			this->lbGShopCount->Name = L"lbGShopCount";
			this->lbGShopCount->Size = System::Drawing::Size(135, 17);
			this->lbGShopCount->TabIndex = 11;
			this->lbGShopCount->Text = L"No GSHOP Loaded!";
			// 
			// tbSubCategoryName
			// 
			this->tbSubCategoryName->Enabled = false;
			this->tbSubCategoryName->Location = System::Drawing::Point(12, 610);
			this->tbSubCategoryName->Name = L"tbSubCategoryName";
			this->tbSubCategoryName->Size = System::Drawing::Size(171, 22);
			this->tbSubCategoryName->TabIndex = 10;
			// 
			// tbCategoryName
			// 
			this->tbCategoryName->Enabled = false;
			this->tbCategoryName->Location = System::Drawing::Point(12, 234);
			this->tbCategoryName->Name = L"tbCategoryName";
			this->tbCategoryName->Size = System::Drawing::Size(171, 22);
			this->tbCategoryName->TabIndex = 9;
			// 
			// lbSubCategories
			// 
			this->lbSubCategories->Enabled = false;
			this->lbSubCategories->FormattingEnabled = true;
			this->lbSubCategories->ItemHeight = 16;
			this->lbSubCategories->Location = System::Drawing::Point(12, 285);
			this->lbSubCategories->Name = L"lbSubCategories";
			this->lbSubCategories->Size = System::Drawing::Size(171, 324);
			this->lbSubCategories->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 265);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Sub Categories";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(189, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Items";
			// 
			// lbItems
			// 
			this->lbItems->ForeColor = System::Drawing::SystemColors::WindowText;
			this->lbItems->FormattingEnabled = true;
			this->lbItems->ItemHeight = 16;
			this->lbItems->Location = System::Drawing::Point(189, 100);
			this->lbItems->Name = L"lbItems";
			this->lbItems->Size = System::Drawing::Size(226, 532);
			this->lbItems->TabIndex = 5;
			this->lbItems->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::lbItems_SelectedIndexChanged);
			// 
			// lbCategories
			// 
			this->lbCategories->Enabled = false;
			this->lbCategories->FormattingEnabled = true;
			this->lbCategories->ItemHeight = 16;
			this->lbCategories->Location = System::Drawing::Point(12, 100);
			this->lbCategories->Name = L"lbCategories";
			this->lbCategories->Size = System::Drawing::Size(171, 132);
			this->lbCategories->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Categories";
			// 
			// btnCurrentTimestamp
			// 
			this->btnCurrentTimestamp->Location = System::Drawing::Point(340, 35);
			this->btnCurrentTimestamp->Name = L"btnCurrentTimestamp";
			this->btnCurrentTimestamp->Size = System::Drawing::Size(75, 23);
			this->btnCurrentTimestamp->TabIndex = 2;
			this->btnCurrentTimestamp->Text = L"Current";
			this->btnCurrentTimestamp->UseVisualStyleBackColor = true;
			this->btnCurrentTimestamp->Click += gcnew System::EventHandler(this, &MainWindow::btnCurrentTimestamp_Click);
			// 
			// tbTimestamp
			// 
			this->tbTimestamp->Location = System::Drawing::Point(90, 35);
			this->tbTimestamp->Name = L"tbTimestamp";
			this->tbTimestamp->Size = System::Drawing::Size(244, 22);
			this->tbTimestamp->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Timestamp";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 721);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MainWindow";
			this->Text = L"Forsaken World GSHOP Editor";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudSOPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudLogPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudGiftAmount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudGiftID))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudAmount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nmudItemId))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Boutique^ GSHOP;
	int max_item_id;
	int *movingIndex;
	SortedList^ item_id_index_map;
	String^ hexd;

	unsigned int string_to_timestamp(String^ date)
		{
			DateTime target = DateTime::Parse(date); // parsing depends on culture, application was set to invariant culture
			return Convert::ToUInt32(target.Subtract( DateTime(1970, 1, 1, 0, 0, 0, 0) ).TotalSeconds);
		}
		String^ timestamp_to_string(unsigned int timestamp)
		{
			DateTime origin(1970, 1, 1, 0, 0, 0, 0);
			origin = origin.AddSeconds(timestamp);
			return origin.ToString("yyyy-MM-dd HH:mm:ss");
		}

	String^ bytes_to_string(array<unsigned char>^ value, String^ code)
	{
		System::Text::Encoding^ enc = System::Text::Encoding::GetEncoding(code);
		return enc->GetString(value);
	}
	array<unsigned char>^ string_to_bytes(String^ value, String^ code, int bytes)
	{
		System::Text::Encoding^ enc = System::Text::Encoding::GetEncoding(code);
		array<unsigned char>^ target = gcnew array<unsigned char>(bytes);
		array<unsigned char>^ source = enc->GetBytes(value);
		if(target->Length > source->Length)
		{
			Array::Copy(source, target, source->Length);
		}
		else
		{
			Array::Copy(source, target, target->Length);
		}
		return target;
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog^ load = gcnew OpenFileDialog();
				 load->Filter = "GShop (*.data)|*.data|All Files(*.*)|*.*";
				 if(load->ShowDialog() == Windows::Forms::DialogResult::OK && File::Exists(load->FileName))
				 {
					 try
					 {
						 Cursor = Windows::Forms::Cursors::WaitCursor;
						 lbCategories->Items->Clear();
						 lbSubCategories->Items->Clear();
						 lbItems->Items->Clear();

						 GSHOP = gcnew Boutique();
						 item_id_index_map = gcnew SortedList();
						 max_item_id = 0;

						 FileStream^ fs = File::OpenRead(load->FileName);
						 BinaryReader^ br = gcnew BinaryReader(fs);

						 GSHOP->timestamp = br->ReadInt32();

						 // Hex
						 GSHOP->hex = gcnew array<Hex^>(3);
						 GSHOP->hex[0] = gcnew Hex();
						 GSHOP->hex[0]->hex1 = br->ReadInt32();
						 GSHOP->hex[0]->hex2 = br->ReadInt32();
						 GSHOP->hex[0]->hex3 = br->ReadInt32();

						 //br->ReadInt32();br->ReadInt32();br->ReadInt32(); // UNK
						 GSHOP->item_count = br->ReadInt32();
						 GSHOP->items = gcnew array<Item^>(GSHOP->item_count);
						 for(int i = 0; i < GSHOP->item_count; i++)
						 {
							 GSHOP->items[i] = gcnew Item();
							 GSHOP->items[i]->activate = true;
							 GSHOP->items[i]->cat_index = br->ReadInt32();
							 GSHOP->items[i]->name = br->ReadBytes(64);
							 GSHOP->items[i]->surface_path = br->ReadBytes(4);
							 GSHOP->items[i]->item_id = br->ReadInt32();
							 GSHOP->items[i]->item_amount = br->ReadInt32();
							 br->ReadBytes(16);
							 GSHOP->items[i]->shop_id = br->ReadInt32();
							 GSHOP->items[i]->price= br->ReadInt32();
							 br->ReadBytes(80);

							 lbItems->Items->Add("[" + i + "]" + bytes_to_string(GSHOP->items[i]->name, "Unicode"));
						 }

						 br->Close();
						 fs->Close();

						 // Show TimeStamp
						 tbTimestamp->Text = timestamp_to_string(GSHOP->timestamp);
						 lbGShopCount->Text = GSHOP->items->Length.ToString();

						 Cursor = Windows::Forms::Cursors::Default;
					 }
					 catch( Exception ^e)
					 {
						 Cursor = Windows::Forms::Cursors::Default;
						 MessageBox::Show("Open Error! \n\n" + e->Message);
					 }
				 }
			 }
private: System::Void lbItems_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(GSHOP && lbItems->SelectedIndex > -1)
			 {
				 int id = lbItems->SelectedIndex;
				 int current_item_index = (int)id;

				 if(current_item_index >- 1)
				 {
					 nmudItemId->Value = GSHOP->items[current_item_index]->item_id;
					 tbName->Text = bytes_to_string(GSHOP->items[current_item_index]->name, "UNICODE");
					 nmudAmount->Value = GSHOP->items[current_item_index]->item_amount;
					 nmudSOPrice->Value = GSHOP->items[current_item_index]->price;
					 tbLeaves->Text = (GSHOP->items[current_item_index]->price * 0.4) + " Eyrda Leaves";
				 }
			 }
		 }
private: System::Void nmudSOPrice_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(GSHOP && lbItems->SelectedIndex > -1)
			 {
				 int id = lbItems->SelectedIndex;
				 int current_item_index = (int)id;
				 tbLeaves->Text = (GSHOP->items[current_item_index]->price * 0.4) + " Eyrda Leaves";
				 if(GSHOP->items[current_item_index]->price != nmudSOPrice->Value)
				 {
					 tbLeaves->Text = (Convert::ToInt32(nmudSOPrice->Value) * 0.4) + " Eyrda Leaves";
				 }
			 }
		 }

private: System::Void edit_item(System::Object^  sender, System::EventArgs^  e){
			 if(lbItems->SelectedIndex > -1)
			 {
				int id = lbItems->SelectedIndex;
				int current_item_index = (int)id;

				if((Control^)sender == tbName)
				{
					GSHOP->items[current_item_index]->name = string_to_bytes(tbName->Text, "Unicode", 64);
					lbItems->Items[lbItems->SelectedIndex] = "[" + current_item_index + "]" + bytes_to_string(GSHOP->items[current_item_index]->name,
						"UNICODE");
				}
				if((Control^)sender == nmudSOPrice)
				{
					GSHOP->items[current_item_index]->price = Convert::ToInt32(nmudSOPrice->Value);
				}
				if((Control^)sender == nmudItemId)
				{
					GSHOP->items[current_item_index]->item_id = Convert::ToInt32(nmudItemId->Value);
				}
				if((Control^)sender == nmudAmount)
				{
					GSHOP->items[current_item_index]->item_amount = Convert::ToInt32(nmudAmount->Value);
				}
			 }
		 }
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 SaveFileDialog^ save = gcnew SaveFileDialog();
			 save->Filter = "GShop Server(*.data)|*.data|All Files(*.*)|*.*";
			 if(GSHOP && save->ShowDialog() == Windows::Forms::DialogResult::OK)
			 {
				 try
				 {
					 Cursor = Windows::Forms::Cursors::WaitCursor;

					 FileStream^ fw = gcnew FileStream(save->FileName, FileMode::Create,
						 FileAccess::Write);
					 BinaryWriter^ bw = gcnew BinaryWriter(fw);

					 GSHOP->timestamp = string_to_timestamp(tbTimestamp->Text);
					 bw->Write(GSHOP->timestamp);
					 int active_item_count = 0;
					 for(int i = 0; i < GSHOP->item_count; i++)
					 {
						 if(GSHOP->items[i]->activate)
						 {
							 active_item_count++;
						 }
					 }
					 // Write out Random Headers
					 bw->Write(GSHOP->hex[0]->hex1);
					 bw->Write(GSHOP->hex[0]->hex2);
					 bw->Write(GSHOP->hex[0]->hex3);

					 bw->Write(active_item_count);
					 
					 for(int i = 0; i < GSHOP->item_count; i++)
					 {
						 if(GSHOP->items[i]->activate)
						 {
							 bw->Write(GSHOP->items[i]->cat_index);
							 bw->Write(GSHOP->items[i]->name);
							 bw->Write(GSHOP->items[i]->surface_path);
							 bw->Write(GSHOP->items[i]->item_id);
							 bw->Write(GSHOP->items[i]->item_amount);
							 bw->Write(string_to_bytes("", "UNICODE", 16));
							 bw->Write(GSHOP->items[i]->shop_id);
							 bw->Write(GSHOP->items[i]->price);
							 bw->Write(string_to_bytes("", "UNICODE", 80));
						 }
					 }

					 bw->Close();
					 fw->Close();

					 Cursor = Windows::Forms::Cursors::Default;
				 }
				 catch(Exception^ e)
				 {
					 Cursor = Windows::Forms::Cursors::Default;
					 MessageBox::Show("Save Error! \n\n" + e->Message);
				 }
			 }
		 }
private: System::Void btnCurrentTimestamp_Click(System::Object^  sender, System::EventArgs^  e) {
			 int current_timestamp = Convert::ToUInt32(DateTime::UtcNow.Subtract( DateTime(1970, 1, 1, 0, 0, 0, 0) ).TotalSeconds);
			if(GSHOP)
			{
				GSHOP->timestamp = current_timestamp;
			}
			tbTimestamp->Text = timestamp_to_string(current_timestamp);
		 }
};
