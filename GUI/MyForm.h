#pragma once
#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "Procesar.h"
#include "Persona.h"
#include "Hash.h"

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  abrirArchivo_btn;
	private: Hash* hash = new Hash();
	private: Procesar* procesamiento = new Procesar();
	private: bool puedeEliminar = false;


	//Elementos Menú Principal
	private: System::Windows::Forms::Button^  guardar_btn;
	private: System::Windows::Forms::Button^  guardarComo_btn;
	private: System::Windows::Forms::Button^  salir_btn;
	private: System::Windows::Forms::Button^  consultar_btn;
	private: System::Windows::Forms::Button^  insertar_btn;
	private: System::Windows::Forms::Button^  eliminar_btn;
	private: System::Windows::Forms::Button^  modificar_btn;
	private: System::Windows::Forms::GroupBox^  groupBoxPersonas;
	private: System::Windows::Forms::GroupBox^  groupBoxArchivo;
	
	//Elementos Consultar
	private: System::Windows::Forms::Label^  tituloConsultar_lbl;
	private: System::Windows::Forms::Label^  cedulaConsultar_lbl;
	private: System::Windows::Forms::Label^  nombreConsultar_lbl;
	private: System::Windows::Forms::Label^  apellido1Consultar_lbl;
	private: System::Windows::Forms::Label^  apellido2Consultar_lbl;
	private: System::Windows::Forms::Label^  nacimientoConsultar_lbl;
	private: System::Windows::Forms::TextBox^  inputConsultar_entry;
	private: System::Windows::Forms::Button^  consultarConsultar_btn;
	private: System::Windows::Forms::Label^  respNombreConsultar_lbl;
	private: System::Windows::Forms::Label^  respApellido1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Label^  messagebox_Consultar;
	private: System::Windows::Forms::Button^  volverConsultar_btn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	//Elementos Insertar
	private: System::Windows::Forms::Label^  insertarTitulo_lbl;
	private: System::Windows::Forms::Label^  cedulaInsertar_lbl;
	private: System::Windows::Forms::Label^  apellido2Insertar_lbl;
	private: System::Windows::Forms::Label^  nacimientoInsertar_lbl;
	private: System::Windows::Forms::Label^  apellido1Insertar_lbl;
	private: System::Windows::Forms::Label^  nombreInsertar_lbl;
	private: System::Windows::Forms::TextBox^  cedulaInsertar_entry;
	private: System::Windows::Forms::TextBox^  apellido1Insertar_entry;
	private: System::Windows::Forms::TextBox^  nombreInsertar_entry;
	private: System::Windows::Forms::TextBox^  apellido2Insertar_entry;
	private: System::Windows::Forms::TextBox^  nacimientoInsertar_entry;
	private: System::Windows::Forms::Button^  limpiarInsertar_btn;
	private: System::Windows::Forms::Button^  insertarInsertar_btn;
	private: System::Windows::Forms::Button^  cancelarInsertar_btn;
	private: System::Windows::Forms::FlowLayoutPanel^  layoutPanelInsertar;
	private: System::Windows::Forms::Label^  messageBoxInsertar;

	//Elementos Eliminar
	private: System::Windows::Forms::Label^  tituloEliminar_lbl;
	private: System::Windows::Forms::Label^  cedulaEliminar_lbl;
	private: System::Windows::Forms::Label^  nombreEliminar_lbl;
	private: System::Windows::Forms::Label^  apellido1Eliminar_lbl;
	private: System::Windows::Forms::Label^  apellido2Eliminar_lbl;
	private: System::Windows::Forms::Label^  nacimientoEliminar_lbl;
	private: System::Windows::Forms::TextBox^  cedulaEliminar_entry;
	private: System::Windows::Forms::Label^  respNombreEliminar_lbl;
	private: System::Windows::Forms::Label^  respApellido1Eliminar_lbl;
	private: System::Windows::Forms::Label^  respApellido2Eliminar_lbl;
	private: System::Windows::Forms::Label^  respNacimientoEliminar_lbl;
	private: System::Windows::Forms::Button^  consultarEliminar_btn;
	private: System::Windows::Forms::Button^  eliminarEliminar_btn;
	private: System::Windows::Forms::Button^  cancelarEliminar_btn;
	private: System::Windows::Forms::FlowLayoutPanel^  layoutPanelEliminar;
	private: System::Windows::Forms::Label^  messageBoxEliminar_lbl;

	//Elementos Modificar
	private: System::Windows::Forms::Label^  tituloModificar_lbl;
	private: System::Windows::Forms::Label^  cedulaModificar_lbl;
	private: System::Windows::Forms::Label^  nombreModificar_lbl;
	private: System::Windows::Forms::Label^  apellido2Modificar_lbl;
	private: System::Windows::Forms::Label^  apellido1Modificar_lbl;
	private: System::Windows::Forms::Label^  nacimientoModificar_lbl;
	private: System::Windows::Forms::TextBox^  cedulaModificar_entry;
	private: System::Windows::Forms::TextBox^  nombreModificar_entry;
	private: System::Windows::Forms::TextBox^  apellido1Modificar_entry;
	private: System::Windows::Forms::TextBox^  apellido2Modificar_entry;
	private: System::Windows::Forms::TextBox^  nacimientoModificar_entry;
	private: System::Windows::Forms::Button^  consultarModificar_btn;
	private: System::Windows::Forms::Button^  modificarModificar_btn;
	private: System::Windows::Forms::Button^  cancelarModificar_btn;
	private: System::Windows::Forms::FlowLayoutPanel^  layoutPanelModificar;
	private: System::Windows::Forms::Label^  messageBoxModificar_lbl;
	private: System::Windows::Forms::Button^  limpiarModificar_btn;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->abrirArchivo_btn = (gcnew System::Windows::Forms::Button());
			this->guardar_btn = (gcnew System::Windows::Forms::Button());
			this->guardarComo_btn = (gcnew System::Windows::Forms::Button());
			this->salir_btn = (gcnew System::Windows::Forms::Button());
			this->consultar_btn = (gcnew System::Windows::Forms::Button());
			this->insertar_btn = (gcnew System::Windows::Forms::Button());
			this->eliminar_btn = (gcnew System::Windows::Forms::Button());
			this->modificar_btn = (gcnew System::Windows::Forms::Button());
			this->groupBoxPersonas = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxArchivo = (gcnew System::Windows::Forms::GroupBox());
			this->tituloConsultar_lbl = (gcnew System::Windows::Forms::Label());
			this->cedulaConsultar_lbl = (gcnew System::Windows::Forms::Label());
			this->nombreConsultar_lbl = (gcnew System::Windows::Forms::Label());
			this->apellido1Consultar_lbl = (gcnew System::Windows::Forms::Label());
			this->apellido2Consultar_lbl = (gcnew System::Windows::Forms::Label());
			this->nacimientoConsultar_lbl = (gcnew System::Windows::Forms::Label());
			this->inputConsultar_entry = (gcnew System::Windows::Forms::TextBox());
			this->consultarConsultar_btn = (gcnew System::Windows::Forms::Button());
			this->respNombreConsultar_lbl = (gcnew System::Windows::Forms::Label());
			this->respApellido1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->messagebox_Consultar = (gcnew System::Windows::Forms::Label());
			this->volverConsultar_btn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->insertarTitulo_lbl = (gcnew System::Windows::Forms::Label());
			this->cedulaInsertar_lbl = (gcnew System::Windows::Forms::Label());
			this->apellido2Insertar_lbl = (gcnew System::Windows::Forms::Label());
			this->nacimientoInsertar_lbl = (gcnew System::Windows::Forms::Label());
			this->apellido1Insertar_lbl = (gcnew System::Windows::Forms::Label());
			this->nombreInsertar_lbl = (gcnew System::Windows::Forms::Label());
			this->cedulaInsertar_entry = (gcnew System::Windows::Forms::TextBox());
			this->apellido1Insertar_entry = (gcnew System::Windows::Forms::TextBox());
			this->nombreInsertar_entry = (gcnew System::Windows::Forms::TextBox());
			this->apellido2Insertar_entry = (gcnew System::Windows::Forms::TextBox());
			this->nacimientoInsertar_entry = (gcnew System::Windows::Forms::TextBox());
			this->limpiarInsertar_btn = (gcnew System::Windows::Forms::Button());
			this->insertarInsertar_btn = (gcnew System::Windows::Forms::Button());
			this->cancelarInsertar_btn = (gcnew System::Windows::Forms::Button());
			this->layoutPanelInsertar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->messageBoxInsertar = (gcnew System::Windows::Forms::Label());
			this->tituloEliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->cedulaEliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->nombreEliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->apellido1Eliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->apellido2Eliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->nacimientoEliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->cedulaEliminar_entry = (gcnew System::Windows::Forms::TextBox());
			this->respNombreEliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->respApellido1Eliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->respApellido2Eliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->respNacimientoEliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->consultarEliminar_btn = (gcnew System::Windows::Forms::Button());
			this->eliminarEliminar_btn = (gcnew System::Windows::Forms::Button());
			this->cancelarEliminar_btn = (gcnew System::Windows::Forms::Button());
			this->layoutPanelEliminar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->messageBoxEliminar_lbl = (gcnew System::Windows::Forms::Label());
			this->tituloModificar_lbl = (gcnew System::Windows::Forms::Label());
			this->cedulaModificar_lbl = (gcnew System::Windows::Forms::Label());
			this->nombreModificar_lbl = (gcnew System::Windows::Forms::Label());
			this->apellido2Modificar_lbl = (gcnew System::Windows::Forms::Label());
			this->apellido1Modificar_lbl = (gcnew System::Windows::Forms::Label());
			this->nacimientoModificar_lbl = (gcnew System::Windows::Forms::Label());
			this->cedulaModificar_entry = (gcnew System::Windows::Forms::TextBox());
			this->nombreModificar_entry = (gcnew System::Windows::Forms::TextBox());
			this->apellido1Modificar_entry = (gcnew System::Windows::Forms::TextBox());
			this->apellido2Modificar_entry = (gcnew System::Windows::Forms::TextBox());
			this->nacimientoModificar_entry = (gcnew System::Windows::Forms::TextBox());
			this->consultarModificar_btn = (gcnew System::Windows::Forms::Button());
			this->modificarModificar_btn = (gcnew System::Windows::Forms::Button());
			this->cancelarModificar_btn = (gcnew System::Windows::Forms::Button());
			this->layoutPanelModificar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->messageBoxModificar_lbl = (gcnew System::Windows::Forms::Label());
			this->limpiarModificar_btn = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBoxPersonas->SuspendLayout();
			this->groupBoxArchivo->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->layoutPanelInsertar->SuspendLayout();
			this->layoutPanelEliminar->SuspendLayout();
			this->layoutPanelModificar->SuspendLayout();
			this->SuspendLayout();
			// 
			// abrirArchivo_btn
			// 
			this->abrirArchivo_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->abrirArchivo_btn->Location = System::Drawing::Point(6, 29);
			this->abrirArchivo_btn->Name = L"abrirArchivo_btn";
			this->abrirArchivo_btn->Size = System::Drawing::Size(103, 23);
			this->abrirArchivo_btn->TabIndex = 0;
			this->abrirArchivo_btn->Text = L"Abrir ...";
			this->abrirArchivo_btn->UseVisualStyleBackColor = true;
			this->abrirArchivo_btn->Click += gcnew System::EventHandler(this, &MyForm::abrirArchivo_btn_Click);
			// 
			// guardar_btn
			// 
			this->guardar_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guardar_btn->Location = System::Drawing::Point(6, 77);
			this->guardar_btn->Name = L"guardar_btn";
			this->guardar_btn->Size = System::Drawing::Size(103, 23);
			this->guardar_btn->TabIndex = 3;
			this->guardar_btn->Text = L"Guardar";
			this->guardar_btn->UseVisualStyleBackColor = true;
			this->guardar_btn->Click += gcnew System::EventHandler(this, &MyForm::guardar_btn_Click);
			// 
			// guardarComo_btn
			// 
			this->guardarComo_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guardarComo_btn->Location = System::Drawing::Point(115, 29);
			this->guardarComo_btn->Name = L"guardarComo_btn";
			this->guardarComo_btn->Size = System::Drawing::Size(103, 23);
			this->guardarComo_btn->TabIndex = 4;
			this->guardarComo_btn->Text = L"Guardar como ...";
			this->guardarComo_btn->UseVisualStyleBackColor = true;
			this->guardarComo_btn->Click += gcnew System::EventHandler(this, &MyForm::guardarComo_btn_Click);
			// 
			// salir_btn
			// 
			this->salir_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salir_btn->Location = System::Drawing::Point(115, 77);
			this->salir_btn->Name = L"salir_btn";
			this->salir_btn->Size = System::Drawing::Size(103, 23);
			this->salir_btn->TabIndex = 5;
			this->salir_btn->Text = L"Salir";
			this->salir_btn->UseVisualStyleBackColor = true;
			this->salir_btn->Click += gcnew System::EventHandler(this, &MyForm::salir_btn_Click);
			// 
			// consultar_btn
			// 
			this->consultar_btn->BackColor = System::Drawing::Color::Transparent;
			this->consultar_btn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->consultar_btn->FlatAppearance->BorderSize = 0;
			this->consultar_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->consultar_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->consultar_btn->Location = System::Drawing::Point(6, 29);
			this->consultar_btn->Margin = System::Windows::Forms::Padding(0);
			this->consultar_btn->Name = L"consultar_btn";
			this->consultar_btn->Size = System::Drawing::Size(103, 23);
			this->consultar_btn->TabIndex = 6;
			this->consultar_btn->Text = L"Consultar";
			this->consultar_btn->UseVisualStyleBackColor = false;
			this->consultar_btn->Click += gcnew System::EventHandler(this, &MyForm::consultar_btn_Click);
			// 
			// insertar_btn
			// 
			this->insertar_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insertar_btn->Location = System::Drawing::Point(115, 29);
			this->insertar_btn->Name = L"insertar_btn";
			this->insertar_btn->Size = System::Drawing::Size(103, 23);
			this->insertar_btn->TabIndex = 7;
			this->insertar_btn->Text = L"Insertar";
			this->insertar_btn->UseVisualStyleBackColor = true;
			this->insertar_btn->Click += gcnew System::EventHandler(this, &MyForm::insertar_btn_Click);
			// 
			// eliminar_btn
			// 
			this->eliminar_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminar_btn->Location = System::Drawing::Point(115, 77);
			this->eliminar_btn->Name = L"eliminar_btn";
			this->eliminar_btn->Size = System::Drawing::Size(103, 23);
			this->eliminar_btn->TabIndex = 8;
			this->eliminar_btn->Text = L"Eliminar";
			this->eliminar_btn->UseVisualStyleBackColor = true;
			this->eliminar_btn->Click += gcnew System::EventHandler(this, &MyForm::eliminar_btn_Click);
			// 
			// modificar_btn
			// 
			this->modificar_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modificar_btn->Location = System::Drawing::Point(6, 77);
			this->modificar_btn->Name = L"modificar_btn";
			this->modificar_btn->Size = System::Drawing::Size(103, 23);
			this->modificar_btn->TabIndex = 9;
			this->modificar_btn->Text = L"Modificar";
			this->modificar_btn->UseVisualStyleBackColor = true;
			this->modificar_btn->Click += gcnew System::EventHandler(this, &MyForm::modificar_btn_Click);
			// 
			// groupBoxPersonas
			// 
			this->groupBoxPersonas->BackColor = System::Drawing::Color::Transparent;
			this->groupBoxPersonas->Controls->Add(this->consultar_btn);
			this->groupBoxPersonas->Controls->Add(this->eliminar_btn);
			this->groupBoxPersonas->Controls->Add(this->modificar_btn);
			this->groupBoxPersonas->Controls->Add(this->insertar_btn);
			this->groupBoxPersonas->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBoxPersonas->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBoxPersonas->Location = System::Drawing::Point(375, 224);
			this->groupBoxPersonas->Name = L"groupBoxPersonas";
			this->groupBoxPersonas->Size = System::Drawing::Size(227, 113);
			this->groupBoxPersonas->TabIndex = 10;
			this->groupBoxPersonas->TabStop = false;
			this->groupBoxPersonas->Text = L"Personas";
			// 
			// groupBoxArchivo
			// 
			this->groupBoxArchivo->BackColor = System::Drawing::Color::Transparent;
			this->groupBoxArchivo->Controls->Add(this->abrirArchivo_btn);
			this->groupBoxArchivo->Controls->Add(this->guardar_btn);
			this->groupBoxArchivo->Controls->Add(this->salir_btn);
			this->groupBoxArchivo->Controls->Add(this->guardarComo_btn);
			this->groupBoxArchivo->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBoxArchivo->Location = System::Drawing::Point(62, 224);
			this->groupBoxArchivo->Name = L"groupBoxArchivo";
			this->groupBoxArchivo->Size = System::Drawing::Size(227, 113);
			this->groupBoxArchivo->TabIndex = 11;
			this->groupBoxArchivo->TabStop = false;
			this->groupBoxArchivo->Text = L"Archivo";
			// 
			// tituloConsultar_lbl
			// 
			this->tituloConsultar_lbl->AutoSize = true;
			this->tituloConsultar_lbl->BackColor = System::Drawing::Color::Transparent;
			this->tituloConsultar_lbl->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tituloConsultar_lbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tituloConsultar_lbl->Location = System::Drawing::Point(262, 24);
			this->tituloConsultar_lbl->Name = L"tituloConsultar_lbl";
			this->tituloConsultar_lbl->Size = System::Drawing::Size(100, 28);
			this->tituloConsultar_lbl->TabIndex = 0;
			this->tituloConsultar_lbl->Text = L"Consultar";
			this->tituloConsultar_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cedulaConsultar_lbl
			// 
			this->cedulaConsultar_lbl->AutoSize = true;
			this->cedulaConsultar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cedulaConsultar_lbl->Location = System::Drawing::Point(39, 74);
			this->cedulaConsultar_lbl->Name = L"cedulaConsultar_lbl";
			this->cedulaConsultar_lbl->Size = System::Drawing::Size(74, 26);
			this->cedulaConsultar_lbl->TabIndex = 1;
			this->cedulaConsultar_lbl->Text = L"Cédula:";
			// 
			// nombreConsultar_lbl
			// 
			this->nombreConsultar_lbl->AutoSize = true;
			this->nombreConsultar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nombreConsultar_lbl->Location = System::Drawing::Point(39, 118);
			this->nombreConsultar_lbl->Name = L"nombreConsultar_lbl";
			this->nombreConsultar_lbl->Size = System::Drawing::Size(87, 26);
			this->nombreConsultar_lbl->TabIndex = 2;
			this->nombreConsultar_lbl->Text = L"Nombre:";
			// 
			// apellido1Consultar_lbl
			// 
			this->apellido1Consultar_lbl->AutoSize = true;
			this->apellido1Consultar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->apellido1Consultar_lbl->Location = System::Drawing::Point(39, 165);
			this->apellido1Consultar_lbl->Name = L"apellido1Consultar_lbl";
			this->apellido1Consultar_lbl->Size = System::Drawing::Size(149, 26);
			this->apellido1Consultar_lbl->TabIndex = 3;
			this->apellido1Consultar_lbl->Text = L"Primer Apellido:";
			// 
			// apellido2Consultar_lbl
			// 
			this->apellido2Consultar_lbl->AutoSize = true;
			this->apellido2Consultar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->apellido2Consultar_lbl->Location = System::Drawing::Point(39, 223);
			this->apellido2Consultar_lbl->Name = L"apellido2Consultar_lbl";
			this->apellido2Consultar_lbl->Size = System::Drawing::Size(160, 26);
			this->apellido2Consultar_lbl->TabIndex = 4;
			this->apellido2Consultar_lbl->Text = L"SegundoApellido:";
			// 
			// nacimientoConsultar_lbl
			// 
			this->nacimientoConsultar_lbl->AutoSize = true;
			this->nacimientoConsultar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->nacimientoConsultar_lbl->Location = System::Drawing::Point(39, 274);
			this->nacimientoConsultar_lbl->Name = L"nacimientoConsultar_lbl";
			this->nacimientoConsultar_lbl->Size = System::Drawing::Size(191, 26);
			this->nacimientoConsultar_lbl->TabIndex = 5;
			this->nacimientoConsultar_lbl->Text = L"Fecha de Nacimiento:";
			// 
			// inputConsultar_entry
			// 
			this->inputConsultar_entry->Location = System::Drawing::Point(267, 80);
			this->inputConsultar_entry->Name = L"inputConsultar_entry";
			this->inputConsultar_entry->Size = System::Drawing::Size(282, 20);
			this->inputConsultar_entry->TabIndex = 6;
			// 
			// consultarConsultar_btn
			// 
			this->consultarConsultar_btn->Location = System::Drawing::Point(560, 80);
			this->consultarConsultar_btn->Name = L"consultarConsultar_btn";
			this->consultarConsultar_btn->Size = System::Drawing::Size(75, 23);
			this->consultarConsultar_btn->TabIndex = 7;
			this->consultarConsultar_btn->Text = L"Consultar";
			this->consultarConsultar_btn->UseVisualStyleBackColor = true;
			this->consultarConsultar_btn->Click += gcnew System::EventHandler(this, &MyForm::consultarConsultar_btn_Click);
			// 
			// respNombreConsultar_lbl
			// 
			this->respNombreConsultar_lbl->AutoSize = true;
			this->respNombreConsultar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->respNombreConsultar_lbl->Location = System::Drawing::Point(262, 118);
			this->respNombreConsultar_lbl->Name = L"respNombreConsultar_lbl";
			this->respNombreConsultar_lbl->Size = System::Drawing::Size(0, 26);
			this->respNombreConsultar_lbl->TabIndex = 10;
			// 
			// respApellido1
			// 
			this->respApellido1->AutoSize = true;
			this->respApellido1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->respApellido1->Location = System::Drawing::Point(262, 165);
			this->respApellido1->Name = L"respApellido1";
			this->respApellido1->Size = System::Drawing::Size(0, 26);
			this->respApellido1->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(262, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 26);
			this->label2->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(262, 274);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 26);
			this->label4->TabIndex = 13;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->flowLayoutPanel1->Controls->Add(this->messagebox_Consultar);
			this->flowLayoutPanel1->Location = System::Drawing::Point(1, 367);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->flowLayoutPanel1->Size = System::Drawing::Size(553, 18);
			this->flowLayoutPanel1->TabIndex = 14;
			// 
			// messagebox_Consultar
			// 
			this->messagebox_Consultar->AutoSize = true;
			this->messagebox_Consultar->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->messagebox_Consultar->ForeColor = System::Drawing::Color::Red;
			this->messagebox_Consultar->Location = System::Drawing::Point(550, 0);
			this->messagebox_Consultar->Name = L"messagebox_Consultar";
			this->messagebox_Consultar->Size = System::Drawing::Size(0, 18);
			this->messagebox_Consultar->TabIndex = 0;
			this->messagebox_Consultar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// volverConsultar_btn
			// 
			this->volverConsultar_btn->Location = System::Drawing::Point(560, 362);
			this->volverConsultar_btn->Name = L"volverConsultar_btn";
			this->volverConsultar_btn->Size = System::Drawing::Size(75, 23);
			this->volverConsultar_btn->TabIndex = 15;
			this->volverConsultar_btn->Text = L"Volver";
			this->volverConsultar_btn->UseVisualStyleBackColor = true;
			this->volverConsultar_btn->Click += gcnew System::EventHandler(this, &MyForm::volverConsultar_btn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(623, 206);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// insertarTitulo_lbl
			// 
			this->insertarTitulo_lbl->AutoSize = true;
			this->insertarTitulo_lbl->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->insertarTitulo_lbl->Location = System::Drawing::Point(285, 9);
			this->insertarTitulo_lbl->Name = L"insertarTitulo_lbl";
			this->insertarTitulo_lbl->Size = System::Drawing::Size(87, 28);
			this->insertarTitulo_lbl->TabIndex = 0;
			this->insertarTitulo_lbl->Text = L"Insertar";
			// 
			// cedulaInsertar_lbl
			// 
			this->cedulaInsertar_lbl->AutoSize = true;
			this->cedulaInsertar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cedulaInsertar_lbl->Location = System::Drawing::Point(39, 74);
			this->cedulaInsertar_lbl->Name = L"cedulaInsertar_lbl";
			this->cedulaInsertar_lbl->Size = System::Drawing::Size(74, 26);
			this->cedulaInsertar_lbl->TabIndex = 1;
			this->cedulaInsertar_lbl->Text = L"Cédula:";
			// 
			// apellido2Insertar_lbl
			// 
			this->apellido2Insertar_lbl->AutoSize = true;
			this->apellido2Insertar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->apellido2Insertar_lbl->Location = System::Drawing::Point(39, 223);
			this->apellido2Insertar_lbl->Name = L"apellido2Insertar_lbl";
			this->apellido2Insertar_lbl->Size = System::Drawing::Size(164, 26);
			this->apellido2Insertar_lbl->TabIndex = 2;
			this->apellido2Insertar_lbl->Text = L"Segundo Apellido:";
			// 
			// nacimientoInsertar_lbl
			// 
			this->nacimientoInsertar_lbl->AutoSize = true;
			this->nacimientoInsertar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nacimientoInsertar_lbl->Location = System::Drawing::Point(39, 274);
			this->nacimientoInsertar_lbl->Name = L"nacimientoInsertar_lbl";
			this->nacimientoInsertar_lbl->Size = System::Drawing::Size(191, 26);
			this->nacimientoInsertar_lbl->TabIndex = 3;
			this->nacimientoInsertar_lbl->Text = L"Fecha de Nacimiento:";
			// 
			// apellido1Insertar_lbl
			// 
			this->apellido1Insertar_lbl->AutoSize = true;
			this->apellido1Insertar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->apellido1Insertar_lbl->Location = System::Drawing::Point(39, 165);
			this->apellido1Insertar_lbl->Name = L"apellido1Insertar_lbl";
			this->apellido1Insertar_lbl->Size = System::Drawing::Size(149, 26);
			this->apellido1Insertar_lbl->TabIndex = 4;
			this->apellido1Insertar_lbl->Text = L"Primer Apellido:";
			// 
			// nombreInsertar_lbl
			// 
			this->nombreInsertar_lbl->AutoSize = true;
			this->nombreInsertar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nombreInsertar_lbl->Location = System::Drawing::Point(39, 118);
			this->nombreInsertar_lbl->Name = L"nombreInsertar_lbl";
			this->nombreInsertar_lbl->Size = System::Drawing::Size(87, 26);
			this->nombreInsertar_lbl->TabIndex = 5;
			this->nombreInsertar_lbl->Text = L"Nombre:";
			// 
			// cedulaInsertar_entry
			// 
			this->cedulaInsertar_entry->Location = System::Drawing::Point(267, 80);
			this->cedulaInsertar_entry->Name = L"cedulaInsertar_entry";
			this->cedulaInsertar_entry->Size = System::Drawing::Size(282, 20);
			this->cedulaInsertar_entry->TabIndex = 6;
			// 
			// apellido1Insertar_entry
			// 
			this->apellido1Insertar_entry->Location = System::Drawing::Point(267, 171);
			this->apellido1Insertar_entry->Name = L"apellido1Insertar_entry";
			this->apellido1Insertar_entry->Size = System::Drawing::Size(282, 20);
			this->apellido1Insertar_entry->TabIndex = 8;
			// 
			// nombreInsertar_entry
			// 
			this->nombreInsertar_entry->Location = System::Drawing::Point(267, 124);
			this->nombreInsertar_entry->Name = L"nombreInsertar_entry";
			this->nombreInsertar_entry->Size = System::Drawing::Size(282, 20);
			this->nombreInsertar_entry->TabIndex = 9;
			// 
			// apellido2Insertar_entry
			// 
			this->apellido2Insertar_entry->Location = System::Drawing::Point(267, 229);
			this->apellido2Insertar_entry->Name = L"apellido2Insertar_entry";
			this->apellido2Insertar_entry->Size = System::Drawing::Size(282, 20);
			this->apellido2Insertar_entry->TabIndex = 10;
			// 
			// nacimientoInsertar_entry
			// 
			this->nacimientoInsertar_entry->Location = System::Drawing::Point(267, 280);
			this->nacimientoInsertar_entry->Name = L"nacimientoInsertar_entry";
			this->nacimientoInsertar_entry->Size = System::Drawing::Size(282, 20);
			this->nacimientoInsertar_entry->TabIndex = 11;
			// 
			// limpiarInsertar_btn
			// 
			this->limpiarInsertar_btn->Location = System::Drawing::Point(401, 327);
			this->limpiarInsertar_btn->Name = L"limpiarInsertar_btn";
			this->limpiarInsertar_btn->Size = System::Drawing::Size(75, 23);
			this->limpiarInsertar_btn->TabIndex = 12;
			this->limpiarInsertar_btn->Text = L"Limpiar";
			this->limpiarInsertar_btn->UseVisualStyleBackColor = true;
			this->limpiarInsertar_btn->Click += gcnew System::EventHandler(this, &MyForm::limpiarInsertar_btn_Click);
			// 
			// insertarInsertar_btn
			// 
			this->insertarInsertar_btn->Location = System::Drawing::Point(482, 327);
			this->insertarInsertar_btn->Name = L"insertarInsertar_btn";
			this->insertarInsertar_btn->Size = System::Drawing::Size(75, 23);
			this->insertarInsertar_btn->TabIndex = 13;
			this->insertarInsertar_btn->Text = L"Insertar";
			this->insertarInsertar_btn->UseVisualStyleBackColor = true;
			this->insertarInsertar_btn->Click += gcnew System::EventHandler(this, &MyForm::insertarInsertar_btn_Click);
			// 
			// cancelarInsertar_btn
			// 
			this->cancelarInsertar_btn->Location = System::Drawing::Point(563, 327);
			this->cancelarInsertar_btn->Name = L"cancelarInsertar_btn";
			this->cancelarInsertar_btn->Size = System::Drawing::Size(75, 23);
			this->cancelarInsertar_btn->TabIndex = 14;
			this->cancelarInsertar_btn->Text = L"Cancelar";
			this->cancelarInsertar_btn->UseVisualStyleBackColor = true;
			this->cancelarInsertar_btn->Click += gcnew System::EventHandler(this, &MyForm::cancelarInsertar_btn_Click);
			// 
			// layoutPanelInsertar
			// 
			this->layoutPanelInsertar->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->layoutPanelInsertar->Controls->Add(this->messageBoxInsertar);
			this->layoutPanelInsertar->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->layoutPanelInsertar->Location = System::Drawing::Point(3, 355);
			this->layoutPanelInsertar->Name = L"layoutPanelInsertar";
			this->layoutPanelInsertar->Size = System::Drawing::Size(644, 35);
			this->layoutPanelInsertar->TabIndex = 15;
			// 
			// messageBoxInsertar
			// 
			this->messageBoxInsertar->AutoSize = true;
			this->messageBoxInsertar->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->messageBoxInsertar->ForeColor = System::Drawing::Color::Red;
			this->messageBoxInsertar->Location = System::Drawing::Point(641, 0);
			this->messageBoxInsertar->Name = L"messageBoxInsertar";
			this->messageBoxInsertar->Size = System::Drawing::Size(0, 18);
			this->messageBoxInsertar->TabIndex = 0;
			// 
			// tituloEliminar_lbl
			// 
			this->tituloEliminar_lbl->AutoSize = true;
			this->tituloEliminar_lbl->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Underline));
			this->tituloEliminar_lbl->Location = System::Drawing::Point(285, 9);
			this->tituloEliminar_lbl->Name = L"tituloEliminar_lbl";
			this->tituloEliminar_lbl->Size = System::Drawing::Size(91, 28);
			this->tituloEliminar_lbl->TabIndex = 0;
			this->tituloEliminar_lbl->Text = L"Eliminar";
			// 
			// cedulaEliminar_lbl
			// 
			this->cedulaEliminar_lbl->AutoSize = true;
			this->cedulaEliminar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->cedulaEliminar_lbl->Location = System::Drawing::Point(39, 74);
			this->cedulaEliminar_lbl->Name = L"cedulaEliminar_lbl";
			this->cedulaEliminar_lbl->Size = System::Drawing::Size(74, 26);
			this->cedulaEliminar_lbl->TabIndex = 1;
			this->cedulaEliminar_lbl->Text = L"Cédula:";
			// 
			// nombreEliminar_lbl
			// 
			this->nombreEliminar_lbl->AutoSize = true;
			this->nombreEliminar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->nombreEliminar_lbl->Location = System::Drawing::Point(39, 118);
			this->nombreEliminar_lbl->Name = L"nombreEliminar_lbl";
			this->nombreEliminar_lbl->Size = System::Drawing::Size(87, 26);
			this->nombreEliminar_lbl->TabIndex = 2;
			this->nombreEliminar_lbl->Text = L"Nombre:";
			// 
			// apellido1Eliminar_lbl
			// 
			this->apellido1Eliminar_lbl->AutoSize = true;
			this->apellido1Eliminar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->apellido1Eliminar_lbl->Location = System::Drawing::Point(39, 165);
			this->apellido1Eliminar_lbl->Name = L"apellido1Eliminar_lbl";
			this->apellido1Eliminar_lbl->Size = System::Drawing::Size(149, 26);
			this->apellido1Eliminar_lbl->TabIndex = 3;
			this->apellido1Eliminar_lbl->Text = L"Primer Apellido:";
			// 
			// apellido2Eliminar_lbl
			// 
			this->apellido2Eliminar_lbl->AutoSize = true;
			this->apellido2Eliminar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->apellido2Eliminar_lbl->Location = System::Drawing::Point(39, 223);
			this->apellido2Eliminar_lbl->Name = L"apellido2Eliminar_lbl";
			this->apellido2Eliminar_lbl->Size = System::Drawing::Size(164, 26);
			this->apellido2Eliminar_lbl->TabIndex = 4;
			this->apellido2Eliminar_lbl->Text = L"Segundo Apellido:";
			// 
			// nacimientoEliminar_lbl
			// 
			this->nacimientoEliminar_lbl->AutoSize = true;
			this->nacimientoEliminar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->nacimientoEliminar_lbl->Location = System::Drawing::Point(39, 274);
			this->nacimientoEliminar_lbl->Name = L"nacimientoEliminar_lbl";
			this->nacimientoEliminar_lbl->Size = System::Drawing::Size(191, 26);
			this->nacimientoEliminar_lbl->TabIndex = 5;
			this->nacimientoEliminar_lbl->Text = L"Fecha de Nacimiento:";
			// 
			// cedulaEliminar_entry
			// 
			this->cedulaEliminar_entry->Location = System::Drawing::Point(267, 80);
			this->cedulaEliminar_entry->Name = L"cedulaEliminar_entry";
			this->cedulaEliminar_entry->Size = System::Drawing::Size(282, 20);
			this->cedulaEliminar_entry->TabIndex = 6;
			// 
			// respNombreEliminar_lbl
			// 
			this->respNombreEliminar_lbl->AutoSize = true;
			this->respNombreEliminar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->respNombreEliminar_lbl->Location = System::Drawing::Point(262, 118);
			this->respNombreEliminar_lbl->Name = L"respNombreEliminar_lbl";
			this->respNombreEliminar_lbl->Size = System::Drawing::Size(0, 26);
			this->respNombreEliminar_lbl->TabIndex = 8;
			// 
			// respApellido1Eliminar_lbl
			// 
			this->respApellido1Eliminar_lbl->AutoSize = true;
			this->respApellido1Eliminar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->respApellido1Eliminar_lbl->Location = System::Drawing::Point(262, 165);
			this->respApellido1Eliminar_lbl->Name = L"respApellido1Eliminar_lbl";
			this->respApellido1Eliminar_lbl->Size = System::Drawing::Size(0, 26);
			this->respApellido1Eliminar_lbl->TabIndex = 9;
			// 
			// respApellido2Eliminar_lbl
			// 
			this->respApellido2Eliminar_lbl->AutoSize = true;
			this->respApellido2Eliminar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->respApellido2Eliminar_lbl->Location = System::Drawing::Point(262, 223);
			this->respApellido2Eliminar_lbl->Name = L"respApellido2Eliminar_lbl";
			this->respApellido2Eliminar_lbl->Size = System::Drawing::Size(0, 26);
			this->respApellido2Eliminar_lbl->TabIndex = 10;
			// 
			// respNacimientoEliminar_lbl
			// 
			this->respNacimientoEliminar_lbl->AutoSize = true;
			this->respNacimientoEliminar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->respNacimientoEliminar_lbl->Location = System::Drawing::Point(262, 274);
			this->respNacimientoEliminar_lbl->Name = L"respNacimientoEliminar_lbl";
			this->respNacimientoEliminar_lbl->Size = System::Drawing::Size(0, 26);
			this->respNacimientoEliminar_lbl->TabIndex = 11;
			// 
			// consultarEliminar_btn
			// 
			this->consultarEliminar_btn->Location = System::Drawing::Point(560, 78);
			this->consultarEliminar_btn->Name = L"consultarEliminar_btn";
			this->consultarEliminar_btn->Size = System::Drawing::Size(75, 23);
			this->consultarEliminar_btn->TabIndex = 12;
			this->consultarEliminar_btn->Text = L"Consultar";
			this->consultarEliminar_btn->UseVisualStyleBackColor = true;
			this->consultarEliminar_btn->Click += gcnew System::EventHandler(this, &MyForm::consultarEliminar_btn_Click);
			// 
			// eliminarEliminar_btn
			// 
			this->eliminarEliminar_btn->Location = System::Drawing::Point(474, 326);
			this->eliminarEliminar_btn->Name = L"eliminarEliminar_btn";
			this->eliminarEliminar_btn->Size = System::Drawing::Size(75, 23);
			this->eliminarEliminar_btn->TabIndex = 13;
			this->eliminarEliminar_btn->Text = L"Eliminar";
			this->eliminarEliminar_btn->UseVisualStyleBackColor = true;
			this->eliminarEliminar_btn->Click += gcnew System::EventHandler(this, &MyForm::eliminarEliminar_btn_Click);
			// 
			// cancelarEliminar_btn
			// 
			this->cancelarEliminar_btn->Location = System::Drawing::Point(560, 326);
			this->cancelarEliminar_btn->Name = L"cancelarEliminar_btn";
			this->cancelarEliminar_btn->Size = System::Drawing::Size(75, 23);
			this->cancelarEliminar_btn->TabIndex = 14;
			this->cancelarEliminar_btn->Text = L"Cancelar";
			this->cancelarEliminar_btn->UseVisualStyleBackColor = true;
			this->cancelarEliminar_btn->Click += gcnew System::EventHandler(this, &MyForm::cancelarEliminar_btn_Click);
			// 
			// layoutPanelEliminar
			// 
			this->layoutPanelEliminar->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->layoutPanelEliminar->Controls->Add(this->messageBoxEliminar_lbl);
			this->layoutPanelEliminar->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->layoutPanelEliminar->ForeColor = System::Drawing::Color::Red;
			this->layoutPanelEliminar->Location = System::Drawing::Point(3, 355);
			this->layoutPanelEliminar->Name = L"layoutPanelEliminar";
			this->layoutPanelEliminar->Size = System::Drawing::Size(644, 35);
			this->layoutPanelEliminar->TabIndex = 15;
			// 
			// messageBoxEliminar_lbl
			// 
			this->messageBoxEliminar_lbl->AutoSize = true;
			this->messageBoxEliminar_lbl->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->messageBoxEliminar_lbl->Location = System::Drawing::Point(641, 0);
			this->messageBoxEliminar_lbl->Name = L"messageBoxEliminar_lbl";
			this->messageBoxEliminar_lbl->Size = System::Drawing::Size(0, 18);
			this->messageBoxEliminar_lbl->TabIndex = 0;
			// 
			// tituloModificar_lbl
			// 
			this->tituloModificar_lbl->AutoSize = true;
			this->tituloModificar_lbl->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Underline));
			this->tituloModificar_lbl->Location = System::Drawing::Point(285, 9);
			this->tituloModificar_lbl->Name = L"tituloModificar_lbl";
			this->tituloModificar_lbl->Size = System::Drawing::Size(98, 28);
			this->tituloModificar_lbl->TabIndex = 0;
			this->tituloModificar_lbl->Text = L"Modificar";
			// 
			// cedulaModificar_lbl
			// 
			this->cedulaModificar_lbl->AutoSize = true;
			this->cedulaModificar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->cedulaModificar_lbl->Location = System::Drawing::Point(39, 74);
			this->cedulaModificar_lbl->Name = L"cedulaModificar_lbl";
			this->cedulaModificar_lbl->Size = System::Drawing::Size(74, 26);
			this->cedulaModificar_lbl->TabIndex = 1;
			this->cedulaModificar_lbl->Text = L"Cédula:";
			// 
			// nombreModificar_lbl
			// 
			this->nombreModificar_lbl->AutoSize = true;
			this->nombreModificar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->nombreModificar_lbl->Location = System::Drawing::Point(39, 118);
			this->nombreModificar_lbl->Name = L"nombreModificar_lbl";
			this->nombreModificar_lbl->Size = System::Drawing::Size(87, 26);
			this->nombreModificar_lbl->TabIndex = 2;
			this->nombreModificar_lbl->Text = L"Nombre:";
			// 
			// apellido2Modificar_lbl
			// 
			this->apellido2Modificar_lbl->AutoSize = true;
			this->apellido2Modificar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->apellido2Modificar_lbl->Location = System::Drawing::Point(39, 223);
			this->apellido2Modificar_lbl->Name = L"apellido2Modificar_lbl";
			this->apellido2Modificar_lbl->Size = System::Drawing::Size(164, 26);
			this->apellido2Modificar_lbl->TabIndex = 3;
			this->apellido2Modificar_lbl->Text = L"Segundo Apellido:";
			// 
			// apellido1Modificar_lbl
			// 
			this->apellido1Modificar_lbl->AutoSize = true;
			this->apellido1Modificar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->apellido1Modificar_lbl->Location = System::Drawing::Point(39, 165);
			this->apellido1Modificar_lbl->Name = L"apellido1Modificar_lbl";
			this->apellido1Modificar_lbl->Size = System::Drawing::Size(149, 26);
			this->apellido1Modificar_lbl->TabIndex = 4;
			this->apellido1Modificar_lbl->Text = L"Primer Apellido:";
			// 
			// nacimientoModificar_lbl
			// 
			this->nacimientoModificar_lbl->AutoSize = true;
			this->nacimientoModificar_lbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F));
			this->nacimientoModificar_lbl->Location = System::Drawing::Point(39, 274);
			this->nacimientoModificar_lbl->Name = L"nacimientoModificar_lbl";
			this->nacimientoModificar_lbl->Size = System::Drawing::Size(191, 26);
			this->nacimientoModificar_lbl->TabIndex = 5;
			this->nacimientoModificar_lbl->Text = L"Fecha de Nacimiento:";
			// 
			// cedulaModificar_entry
			// 
			this->cedulaModificar_entry->Location = System::Drawing::Point(267, 80);
			this->cedulaModificar_entry->Name = L"cedulaModificar_entry";
			this->cedulaModificar_entry->Size = System::Drawing::Size(282, 20);
			this->cedulaModificar_entry->TabIndex = 6;
			// 
			// nombreModificar_entry
			// 
			this->nombreModificar_entry->Location = System::Drawing::Point(267, 124);
			this->nombreModificar_entry->Name = L"nombreModificar_entry";
			this->nombreModificar_entry->Size = System::Drawing::Size(282, 20);
			this->nombreModificar_entry->TabIndex = 7;
			// 
			// apellido1Modificar_entry
			// 
			this->apellido1Modificar_entry->Location = System::Drawing::Point(267, 171);
			this->apellido1Modificar_entry->Name = L"apellido1Modificar_entry";
			this->apellido1Modificar_entry->Size = System::Drawing::Size(282, 20);
			this->apellido1Modificar_entry->TabIndex = 8;
			// 
			// apellido2Modificar_entry
			// 
			this->apellido2Modificar_entry->Location = System::Drawing::Point(267, 229);
			this->apellido2Modificar_entry->Name = L"apellido2Modificar_entry";
			this->apellido2Modificar_entry->Size = System::Drawing::Size(282, 20);
			this->apellido2Modificar_entry->TabIndex = 9;
			// 
			// nacimientoModificar_entry
			// 
			this->nacimientoModificar_entry->Location = System::Drawing::Point(267, 280);
			this->nacimientoModificar_entry->Name = L"nacimientoModificar_entry";
			this->nacimientoModificar_entry->Size = System::Drawing::Size(282, 20);
			this->nacimientoModificar_entry->TabIndex = 10;
			// 
			// consultarModificar_btn
			// 
			this->consultarModificar_btn->Location = System::Drawing::Point(560, 80);
			this->consultarModificar_btn->Name = L"consultarModificar_btn";
			this->consultarModificar_btn->Size = System::Drawing::Size(75, 23);
			this->consultarModificar_btn->TabIndex = 11;
			this->consultarModificar_btn->Text = L"Consultar";
			this->consultarModificar_btn->UseVisualStyleBackColor = true;
			this->consultarModificar_btn->Click += gcnew System::EventHandler(this, &MyForm::consultarModificar_btn_Click);
			// 
			// modificarModificar_btn
			// 
			this->modificarModificar_btn->Location = System::Drawing::Point(479, 316);
			this->modificarModificar_btn->Name = L"modificarModificar_btn";
			this->modificarModificar_btn->Size = System::Drawing::Size(75, 23);
			this->modificarModificar_btn->TabIndex = 12;
			this->modificarModificar_btn->Text = L"Modificar";
			this->modificarModificar_btn->UseVisualStyleBackColor = true;
			this->modificarModificar_btn->Click += gcnew System::EventHandler(this, &MyForm::modificarModificar_btn_Click);
			// 
			// cancelarModificar_btn
			// 
			this->cancelarModificar_btn->Location = System::Drawing::Point(560, 316);
			this->cancelarModificar_btn->Name = L"cancelarModificar_btn";
			this->cancelarModificar_btn->Size = System::Drawing::Size(75, 23);
			this->cancelarModificar_btn->TabIndex = 13;
			this->cancelarModificar_btn->Text = L"Cancelar";
			this->cancelarModificar_btn->UseVisualStyleBackColor = true;
			this->cancelarModificar_btn->Click += gcnew System::EventHandler(this, &MyForm::cancelarModificar_btn_Click);
			// 
			// layoutPanelModificar
			// 
			this->layoutPanelModificar->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->layoutPanelModificar->Controls->Add(this->messageBoxModificar_lbl);
			this->layoutPanelModificar->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->layoutPanelModificar->Location = System::Drawing::Point(3, 355);
			this->layoutPanelModificar->Name = L"layoutPanelModificar";
			this->layoutPanelModificar->Size = System::Drawing::Size(644, 35);
			this->layoutPanelModificar->TabIndex = 14;
			// 
			// messageBoxModificar_lbl
			// 
			this->messageBoxModificar_lbl->AutoSize = true;
			this->messageBoxModificar_lbl->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->messageBoxModificar_lbl->ForeColor = System::Drawing::Color::Red;
			this->messageBoxModificar_lbl->Location = System::Drawing::Point(641, 0);
			this->messageBoxModificar_lbl->Name = L"messageBoxModificar_lbl";
			this->messageBoxModificar_lbl->Size = System::Drawing::Size(0, 18);
			this->messageBoxModificar_lbl->TabIndex = 0;
			// 
			// limpiarModificar_btn
			// 
			this->limpiarModificar_btn->Location = System::Drawing::Point(398, 316);
			this->limpiarModificar_btn->Name = L"limpiarModificar_btn";
			this->limpiarModificar_btn->Size = System::Drawing::Size(75, 23);
			this->limpiarModificar_btn->TabIndex = 15;
			this->limpiarModificar_btn->Text = L"Limpiar";
			this->limpiarModificar_btn->UseVisualStyleBackColor = true;
			this->limpiarModificar_btn->Click += gcnew System::EventHandler(this, &MyForm::limpiarModificar_btn_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(647, 387);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBoxArchivo);
			this->Controls->Add(this->groupBoxPersonas);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro de Personas";
			this->groupBoxPersonas->ResumeLayout(false);
			this->groupBoxArchivo->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->layoutPanelInsertar->ResumeLayout(false);
			this->layoutPanelInsertar->PerformLayout();
			this->layoutPanelEliminar->ResumeLayout(false);
			this->layoutPanelEliminar->PerformLayout();
			this->layoutPanelModificar->ResumeLayout(false);
			this->layoutPanelModificar->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void abrirArchivo_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función para el botón abrirArchivo del menú principal
		openFileDialog1->Title = "Abrir...";
		openFileDialog1->Filter = "Comma-separated values (*.csv)|*.csv";
		openFileDialog1->ShowDialog();
		
		//Conversión de System::String 2 std::basic_string
		System::String^ managedString = openFileDialog1->FileName;
		msclr::interop::marshal_context context;
		std::string abrir = context.marshal_as<std::string>(managedString);
		std::cout << abrir << "\n";
	}
	private: System::Void salir_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función para el botón salir del menú principal
		this->Close();
	}
	private: System::Void consultar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función para el botón consultar del menú principal
		this->Controls->Clear();
		this->Controls->Add(this->volverConsultar_btn);
		this->Controls->Add(this->flowLayoutPanel1);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->respApellido1);
		this->Controls->Add(this->respNombreConsultar_lbl);
		this->Controls->Add(this->consultarConsultar_btn);
		this->Controls->Add(this->inputConsultar_entry);
		this->Controls->Add(this->nacimientoConsultar_lbl);
		this->Controls->Add(this->apellido2Consultar_lbl);
		this->Controls->Add(this->apellido1Consultar_lbl);
		this->Controls->Add(this->nombreConsultar_lbl);
		this->Controls->Add(this->cedulaConsultar_lbl);
		this->Controls->Add(this->tituloConsultar_lbl);
	}
	private: System::Void guardarComo_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función para el botón guardar como... del menú principal
		saveFileDialog1->Title = "Guardar como...";
		saveFileDialog1->Filter = "Comma-separated values (*.csv)|*.csv";
		saveFileDialog1->ShowDialog();

		//Conversión de System::String 2 std::basic_string
		System::String^ managedString = saveFileDialog1->FileName;
		msclr::interop::marshal_context context;
		std::string guardado = context.marshal_as<std::string>(managedString);
		std::cout << guardado << "\n";
	}
	private: System::Void guardar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función para el botón guardar del menú principal
	}
	private: System::Void insertar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función para el botón insertar del menú principal
		this->Controls->Clear();
		this->Controls->Add(this->layoutPanelInsertar);
		this->Controls->Add(this->cancelarInsertar_btn);
		this->Controls->Add(this->insertarInsertar_btn);
		this->Controls->Add(this->limpiarInsertar_btn);
		this->Controls->Add(this->nacimientoInsertar_entry);
		this->Controls->Add(this->apellido2Insertar_entry);
		this->Controls->Add(this->nombreInsertar_entry);
		this->Controls->Add(this->apellido1Insertar_entry);
		this->Controls->Add(this->cedulaInsertar_entry);
		this->Controls->Add(this->nombreInsertar_lbl);
		this->Controls->Add(this->apellido1Insertar_lbl);
		this->Controls->Add(this->nacimientoInsertar_lbl);
		this->Controls->Add(this->apellido2Insertar_lbl);
		this->Controls->Add(this->cedulaInsertar_lbl);
		this->Controls->Add(this->insertarTitulo_lbl);
	}
	private: System::Void modificar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función para el botón modificar del menú principal
		this->Controls->Clear();
		this->Controls->Add(this->limpiarModificar_btn);
		this->Controls->Add(this->layoutPanelModificar);
		this->Controls->Add(this->cancelarModificar_btn);
		this->Controls->Add(this->modificarModificar_btn);
		this->Controls->Add(this->consultarModificar_btn);
		this->Controls->Add(this->nacimientoModificar_entry);
		this->Controls->Add(this->apellido2Modificar_entry);
		this->Controls->Add(this->apellido1Modificar_entry);
		this->Controls->Add(this->nombreModificar_entry);
		this->Controls->Add(this->cedulaModificar_entry);
		this->Controls->Add(this->nacimientoModificar_lbl);
		this->Controls->Add(this->apellido1Modificar_lbl);
		this->Controls->Add(this->apellido2Modificar_lbl);
		this->Controls->Add(this->nombreModificar_lbl);
		this->Controls->Add(this->cedulaModificar_lbl);
		this->Controls->Add(this->tituloModificar_lbl);
		this->nombreModificar_entry->Enabled = false;
		this->apellido1Modificar_entry->Enabled = false;
		this->apellido2Modificar_entry->Enabled = false;
		this->nacimientoModificar_entry->Enabled = false;
	}
	private: System::Void eliminar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función para el botón eliminar del menú principal
		this->Controls->Clear(); 
		this->Controls->Add(this->layoutPanelEliminar);
		this->Controls->Add(this->cancelarEliminar_btn);
		this->Controls->Add(this->eliminarEliminar_btn);
		this->Controls->Add(this->consultarEliminar_btn);
		this->Controls->Add(this->respNacimientoEliminar_lbl);
		this->Controls->Add(this->respApellido2Eliminar_lbl);
		this->Controls->Add(this->respApellido1Eliminar_lbl);
		this->Controls->Add(this->respNombreEliminar_lbl);
		this->Controls->Add(this->cedulaEliminar_entry);
		this->Controls->Add(this->nacimientoEliminar_lbl);
		this->Controls->Add(this->apellido2Eliminar_lbl);
		this->Controls->Add(this->apellido1Eliminar_lbl);
		this->Controls->Add(this->nombreEliminar_lbl);
		this->Controls->Add(this->cedulaEliminar_lbl);
		this->Controls->Add(this->tituloEliminar_lbl);
	}

	//Instrucciones consultar
	private: System::Void consultarConsultar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función para el botón consultar de la pantalla Consultar
		System::String^ managedString = this->inputConsultar_entry->Text;
		msclr::interop::marshal_context context;
		std::string strcedula = context.marshal_as<std::string>(managedString);
		if (!procesamiento->validarCedula(strcedula)) {
			this->messagebox_Consultar->Text = "Cédula inválida";
		}
		else if (!hash->existeCedula(strcedula)) {
			this->messagebox_Consultar->Text = "Cédula no existe";
		}
		else {
			Persona* persona = hash->buscarPersona(strcedula);
			String^ nombreRespuesta = gcnew String(persona->getNombre().c_str());
			String^ ap1Respuesta = gcnew String(persona->getApellido().c_str());
			String^ ap2Respuesta = gcnew String(persona->getApellido2().c_str());
			String^ nacimientoRespuesta = gcnew String(persona->getFechaNacimiento().c_str());
			this->respNombreConsultar_lbl->Text = nombreRespuesta;
			this->respApellido1->Text = ap1Respuesta;
			this->label2->Text = ap2Respuesta;
			this->label4->Text = nacimientoRespuesta;
			int idx = hash->idx(strcedula);
			this->messagebox_Consultar->Text = "Colisiones encontradas: " +(*to_string(hash->numeroColisiones(idx)).c_str() - '0');
		}
	}
	private: System::Void volverConsultar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función para el botón volver de la pantalla Consultar
		this->respNombreConsultar_lbl->Text = "";
		this->respApellido1->Text = "";
		this->label2->Text = "";
		this->label4->Text = "";
		this->inputConsultar_entry->Text = "";
		this->messagebox_Consultar->Text = "";
		this->Controls->Clear();
		this->Controls->Add(this->groupBoxArchivo);
		this->Controls->Add(this->groupBoxPersonas);
		this->Controls->Add(this->pictureBox1);
	}

	//Instrucciones insertar
	private: System::Void limpiarInsertar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función del botón limpiar en la pantalla Insertar
		this->cedulaInsertar_entry->Text = "";
		this->nombreInsertar_entry->Text = "";
		this->apellido1Insertar_entry->Text = "";
		this->apellido2Insertar_entry->Text = "";
		this->nacimientoInsertar_entry->Text = "";
		this->messageBoxInsertar->Text = "";
	}
	private: System::Void insertarInsertar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función del botón insertar en la pantalla Insertar
		System::String^ managedString = this->cedulaInsertar_entry->Text;
		msclr::interop::marshal_context context;
		std::string strcedula = context.marshal_as<std::string>(managedString);

		managedString = this->nombreInsertar_entry->Text;
		std::string strnombre = context.marshal_as<std::string>(managedString);

		managedString = this->apellido1Insertar_entry->Text;
		std::string strapellido1 = context.marshal_as<std::string>(managedString);

		managedString = this->apellido2Insertar_entry->Text;
		std::string strapellido2 = context.marshal_as<std::string>(managedString);

		managedString = this->nacimientoInsertar_entry->Text;
		std::string strnacimiento = context.marshal_as<std::string>(managedString);

		if (!procesamiento->validarCedula(strcedula)) {
			this->messageBoxInsertar->Text = "Cédula Inválida";
		}
		else if (hash->existeCedula(strcedula)) {
			this->messageBoxInsertar->Text = "Cédula ya existe";
		}
		else if  (!procesamiento->validarNombre(strnombre)){
			this->messageBoxInsertar->Text = "Nombre Inválido";
		}
		else if (!procesamiento->validarNombre(strapellido1)) {
			this->messageBoxInsertar->Text = "Primer Apellido Inválido";
		}
		else if (!procesamiento->validarNombre(strapellido2)) {
			this->messageBoxInsertar->Text = "Segundo Apellido Inválido";
		}
		else if (!procesamiento->validarFecha(strnacimiento)) {
			this->messageBoxInsertar->Text = "Fecha de Nacimiento Inválida";
		}
		else {
			int idx = hash->idx(strcedula);
			this->messageBoxInsertar->Text = "Inserción exitosa en posición: " + (*to_string(idx).c_str()-'0') + 
				" con " + (*to_string(hash->numeroColisiones(idx)).c_str()-'0') + " colisiones";
			hash->añadirPersona(Persona(strcedula, strnombre, strapellido1, strapellido2, strnacimiento));
		}

	}
	private: System::Void cancelarInsertar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función del botón cancelar en la pantalla Insertar
		this->cedulaInsertar_entry->Text = "";
		this->nombreInsertar_entry->Text = "";
		this->apellido1Insertar_entry->Text = "";
		this->apellido2Insertar_entry->Text = "";
		this->nacimientoInsertar_entry->Text = "";
		this->messageBoxInsertar->Text = "";
		this->Controls->Clear();
		this->Controls->Add(this->groupBoxArchivo);
		this->Controls->Add(this->groupBoxPersonas);
		this->Controls->Add(this->pictureBox1);
	}

	//Instrucciones eliminar
	private: System::Void consultarEliminar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función del botón consultar en la pantalla Eliminar
		this->cedulaEliminar_entry->Enabled = false;
		System::String^ managedString = this->cedulaEliminar_entry->Text;
		msclr::interop::marshal_context context;
		std::string strcedula = context.marshal_as<std::string>(managedString);
		if (!procesamiento->validarCedula(strcedula)) {
			this->messageBoxEliminar_lbl->Text = "Cédula inválida";
			puedeEliminar = false;
		}
		else if (!hash->existeCedula(strcedula)) {
			this->messageBoxEliminar_lbl->Text = "Registro no existe";
			puedeEliminar = false;
		}
		else {
			Persona* persona = hash->buscarPersona(strcedula);
			String^ nombreRespuesta = gcnew String(persona->getNombre().c_str());
			String^ ap1Respuesta = gcnew String(persona->getApellido().c_str());
			String^ ap2Respuesta = gcnew String(persona->getApellido2().c_str());
			String^ nacimientoRespuesta = gcnew String(persona->getFechaNacimiento().c_str());
			this->respNombreEliminar_lbl->Text = nombreRespuesta;
			this->respApellido1Eliminar_lbl->Text = ap1Respuesta;
			this->respApellido2Eliminar_lbl->Text = ap2Respuesta;
			this->respNacimientoEliminar_lbl->Text = nacimientoRespuesta;
			puedeEliminar = true;
		}
	}
	private: System::Void eliminarEliminar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función del botón eliminar en la pantalla Eliminar
		if (!puedeEliminar) {
		}
		else {
			cout << "Eliminando una persona";
			System::String^ managedString = this->cedulaEliminar_entry->Text;
			msclr::interop::marshal_context context;
			std::string strcedula = context.marshal_as<std::string>(managedString);
			int idx = hash->idx(strcedula);
			hash->eliminarPersona(strcedula);
			this->messageBoxEliminar_lbl->Text = "Registro eliminado con " + (*to_string(hash->numeroColisiones(idx)).c_str() - '0')
				+ " colisiones";
			this->cedulaEliminar_entry->Enabled = true;
			this->cedulaEliminar_entry->Text = "";
			this->respNombreEliminar_lbl->Text = "";
			this->respApellido1Eliminar_lbl->Text = "";
			this->respApellido2Eliminar_lbl->Text = "";
			this->respNacimientoEliminar_lbl->Text = "";
			puedeEliminar = false;
		}
	}
	private: System::Void cancelarEliminar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función del botón cancelar en la pantalla Eliminar
		puedeEliminar = false;
		this->cedulaEliminar_entry->Enabled = true;
		this->cedulaEliminar_entry->Text = "";
		this->respNombreEliminar_lbl->Text = "";
		this->respApellido1Eliminar_lbl->Text = "";
		this->respApellido2Eliminar_lbl->Text = "";
		this->respNacimientoEliminar_lbl->Text = "";
		this->messageBoxEliminar_lbl->Text = "";
		this->Controls->Clear();
		this->Controls->Add(this->groupBoxArchivo);
		this->Controls->Add(this->groupBoxPersonas);
		this->Controls->Add(this->pictureBox1);
	}

	//Instrucciones modificar
	private: System::Void consultarModificar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función del botón consultar en la pantalla Modificar
		this->cedulaModificar_entry->Enabled = false;
		this->nombreModificar_entry->Enabled = true;
		this->apellido1Modificar_entry->Enabled = true;
		this->apellido2Modificar_entry->Enabled = true;
		this->nacimientoModificar_entry->Enabled = true;
	}
	private: System::Void limpiarModificar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función del botón limpiar en la pantalla Modificar
		this->cedulaModificar_entry->Enabled = true;
		this->nombreModificar_entry->Enabled = false;
		this->apellido1Modificar_entry->Enabled = false;
		this->apellido2Modificar_entry->Enabled = false;
		this->nacimientoModificar_entry->Enabled = false;
		this->nombreModificar_entry->Text = "";
		this->apellido1Modificar_entry->Text = "";
		this->apellido2Modificar_entry->Text = "";
		this->nacimientoModificar_entry->Text = "";

	}
	private: System::Void modificarModificar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función del botón modificar en la pantalla Modificar
	}
	private: System::Void cancelarModificar_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Función del botón cancelar en la pantalla Modificar
		this->Controls->Clear();
		this->Controls->Add(this->groupBoxArchivo);
		this->Controls->Add(this->groupBoxPersonas);
		this->Controls->Add(this->pictureBox1);
	}
};
}
