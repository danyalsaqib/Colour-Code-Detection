#pragma once
#include"Class.h"


namespace Project48 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;


	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(8, 99);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 76);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Location = System::Drawing::Point(356, 99);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 74);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Location = System::Drawing::Point(519, 99);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(166, 72);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->Location = System::Drawing::Point(689, 101);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(157, 72);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->Location = System::Drawing::Point(8, 190);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(163, 72);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->Location = System::Drawing::Point(186, 188);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(166, 74);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->Location = System::Drawing::Point(356, 191);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(159, 76);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(204, 40);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 15);
			this->label1->TabIndex = 10;
			this->label1->Text = L"The Resistance of the Resistor you Just Clicked = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(204, 15);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(445, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Please Click Any Picture of the Resistor Below and Our Algorithms Will Determine "
				L"Their Value";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button9->Location = System::Drawing::Point(519, 191);
			this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(166, 77);
			this->button9->TabIndex = 13;
			this->button9->Text = L"9";
			this->button9->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click_1);
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button10->Location = System::Drawing::Point(689, 190);
			this->button10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(157, 79);
			this->button10->TabIndex = 14;
			this->button10->Text = L"10";
			this->button10->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click_2);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Location = System::Drawing::Point(186, 99);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 76);
			this->button2->TabIndex = 15;
			this->button2->Text = L"2";
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(383, 66);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Tolerance = ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(481, 66);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Percentage Tolerance";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(481, 40);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Resistance";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(908, 482);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm1";
			this->Text = L"Resistance Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				 using namespace std;
				 int resistance;
				 int tolerance;

				 resistorBands r1;
				 r1.bandDetection("D://final7.png");//Here, the path will be given to the function
				 r1.resistanceNumber();
				 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

				 resistance = r1.resistanceReturn();
				 tolerance = r1.toleranceReturn();

				
				 System::String^ R;
				 System::String^ T;
				 R = System::Convert::ToString(resistance);
				 label5->Text = R;
				 T = System::Convert::ToString(tolerance);
				 label4->Text = T;


	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final6.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();

			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;


}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
{
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final9.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();
			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;
			 
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 


}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final3.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();
			  
			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;


}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final1.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();

			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;


}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final2.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();

			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;


}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final8.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();

			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;


}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
{
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final10.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();

			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;


}
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
			

}
private: System::Void button10_Click_2(System::Object^  sender, System::EventArgs^  e) 
{
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final10.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();

			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;



}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final2.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();

			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;



}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final9.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();

			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final5.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();

			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 int resistance;
			 int tolerance;

			 resistorBands r1;
			 r1.bandDetection("D://final4.png");//Here, the path will be given to the function
			 r1.resistanceNumber();
			 //r1.resistanceCalculation(); //This was the function that was displaying all the information before. I have commented it out

			 resistance = r1.resistanceReturn();
			 tolerance = r1.toleranceReturn();

			 System::String^ R;
			 System::String^ T;
			 R = System::Convert::ToString(resistance);
			 label5->Text = R;
			 T = System::Convert::ToString(tolerance);
			 label4->Text = T;

}
};
}
