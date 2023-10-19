
#pragma once


namespace  Project2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Сводка для Form1
    ///
    /// Внимание! При изменении имени этого класса необходимо также изменить
    ///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
    ///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
    ///          конструкторы не смогут правильно работать с локализованными
    ///          ресурсами, сопоставленными данной форме.
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
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::CheckBox^ checkBox1;
    private: System::Windows::Forms::CheckBox^ checkBox2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;


    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;







    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::CheckBox^ checkBox3;
    private: System::Windows::Forms::CheckBox^ checkBox4;
    private: System::Windows::Forms::CheckBox^ checkBox5;
    private: System::Windows::Forms::CheckBox^ checkBox6;















     
    private:
        /// <summary>
        /// Требуется переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
        /// <summary>

        /// Обязательный метод для поддержки конструктора - не изменяйте
        /// содержимое данного метода при помощи редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
            this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
            this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
            this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 63);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(42, 15);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Рост,м";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(15, 102);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(39, 15);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Вес,кг";
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->Location = System::Drawing::Point(95, 157);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(75, 19);
            this->checkBox1->TabIndex = 2;
            this->checkBox1->Text = L"Мужчина";
            this->checkBox1->UseVisualStyleBackColor = true;
            // 
            // checkBox2
            // 
            this->checkBox2->AutoSize = true;
            this->checkBox2->Location = System::Drawing::Point(18, 157);
            this->checkBox2->Name = L"checkBox2";
            this->checkBox2->Size = System::Drawing::Size(75, 19);
            this->checkBox2->TabIndex = 3;
            this->checkBox2->Text = L"Женщина";
            this->checkBox2->UseVisualStyleBackColor = true;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(12, 9);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(305, 20);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Расчет идеального веса через Индекс Массы Тела";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(96, 179);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(38, 15);
            this->label4->TabIndex = 5;
            this->label4->Text = L"Ответ";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(15, 79);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(50, 23);
            this->textBox1->TabIndex = 6;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(15, 118);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(50, 23);
            this->textBox2->TabIndex = 7;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(15, 40);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(50, 23);
            this->textBox3->TabIndex = 8;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(12, 24);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(49, 15);
            this->label5->TabIndex = 9;
            this->label5->Text = L"Возраст";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(92, 40);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(225, 105);
            this->label6->TabIndex = 10;
            this->label6->Text = resources->GetString(L"label6.Text");
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::LightBlue;
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button1->Cursor = System::Windows::Forms::Cursors::Default;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->Location = System::Drawing::Point(487, 5);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(32, 23);
            this->button1->TabIndex = 11;
            this->button1->Text = L"X";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(12, 215);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(97, 15);
            this->label7->TabIndex = 12;
            this->label7->Text = L"Счетчик калорий";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(13, 230);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(49, 15);
            this->label8->TabIndex = 22;
            this->label8->Text = L"Возраст";
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(16, 248);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(50, 23);
            this->textBox4->TabIndex = 21;
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(15, 326);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(51, 23);
            this->textBox5->TabIndex = 20;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(16, 287);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(50, 23);
            this->textBox6->TabIndex = 19;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(16, 310);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(39, 15);
            this->label9->TabIndex = 16;
            this->label9->Text = L"Вес,кг";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(13, 271);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(48, 15);
            this->label10->TabIndex = 15;
            this->label10->Text = L"Рост,см";
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::LightCyan;
            this->button2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
            this->button2->Location = System::Drawing::Point(15, 174);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 23);
            this->button2->TabIndex = 30;
            this->button2->Text = L"Посчитать";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::LightCyan;
            this->button3->Location = System::Drawing::Point(14, 355);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(75, 23);
            this->button3->TabIndex = 31;
            this->button3->Text = L"Посчитать";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(95, 359);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(38, 15);
            this->label11->TabIndex = 32;
            this->label11->Text = L"Ответ";
            // 
            // checkBox3
            // 
            this->checkBox3->AutoSize = true;
            this->checkBox3->Location = System::Drawing::Point(86, 330);
            this->checkBox3->Name = L"checkBox3";
            this->checkBox3->Size = System::Drawing::Size(75, 19);
            this->checkBox3->TabIndex = 33;
            this->checkBox3->Text = L"Женщина";
            this->checkBox3->UseVisualStyleBackColor = true;
            // 
            // checkBox4
            // 
            this->checkBox4->AutoSize = true;
            this->checkBox4->Location = System::Drawing::Point(86, 305);
            this->checkBox4->Name = L"checkBox4";
            this->checkBox4->Size = System::Drawing::Size(75, 19);
            this->checkBox4->TabIndex = 34;
            this->checkBox4->Text = L"Мужчина";
            this->checkBox4->UseVisualStyleBackColor = true;
            // 
            // checkBox5
            // 
            this->checkBox5->AutoSize = true;
            this->checkBox5->Location = System::Drawing::Point(86, 275);
            this->checkBox5->Name = L"checkBox5";
            this->checkBox5->Size = System::Drawing::Size(85, 19);
            this->checkBox5->TabIndex = 35;
            this->checkBox5->Text = L"Сброс веса";
            this->checkBox5->UseVisualStyleBackColor = true;
            // 
            // checkBox6
            // 
            this->checkBox6->AutoSize = true;
            this->checkBox6->Location = System::Drawing::Point(86, 248);
            this->checkBox6->Name = L"checkBox6";
            this->checkBox6->Size = System::Drawing::Size(84, 19);
            this->checkBox6->TabIndex = 36;
            this->checkBox6->Text = L"набор веса";
            this->checkBox6->UseVisualStyleBackColor = true;
            // 
            // MyForm
            // 
            this->BackColor = System::Drawing::Color::CadetBlue;
            this->ClientSize = System::Drawing::Size(522, 382);
            this->Controls->Add(this->checkBox6);
            this->Controls->Add(this->checkBox5);
            this->Controls->Add(this->checkBox4);
            this->Controls->Add(this->checkBox3);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->checkBox2);
            this->Controls->Add(this->checkBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
       double calculateBMI(double weight, double height)
       {
           // Расчет ИМТ
           double bmi = height / (weight * weight);

           return bmi;
       }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    double weight = Double::Parse(textBox1->Text);
    double height = Double::Parse(textBox2->Text);

    // Расчет ИМТ
    double bmi = calculateBMI(weight, height);

    // Вывод результата
    label4->Text = "Индекс массы тела: " + bmi.ToString();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    int height = Convert::ToInt32(textBox6->Text); 
    int weight = Convert::ToInt32(textBox5->Text);
    int age = Convert::ToInt32(textBox4->Text);
    if (checkBox4->Checked == true) {
        if (checkBox6->Checked == true) {
            this->label11->Text = Convert::ToString((10 * weight) + (6.25 * height) - (5 * age) + 5);
        }
        else {
          this->label11->Text = Convert::ToString(9.99 * weight + 6.25 * height - 4.92 * age + 5);
        }
            
    }
    else {
        if (checkBox4->Checked == true) {
            this->label11->Text = Convert::ToString((10* weight)+(6.25 * height) - (5 * age) + 161);
        }
        else {
            this->label11->Text = Convert::ToString(9.99 * weight + 6.25 * height - 4.92 * age - 161);
        }
    }
}

};
}