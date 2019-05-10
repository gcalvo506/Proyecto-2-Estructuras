#include "Procesar.h"

void Procesar::setPersonas(vector<Persona>p)
{
	personas = p;
}

void Procesar::setRuta(string str)
{
	ruta = str;
}

void Procesar::cargarArchivo(string rutaAlterna)
{
	ifstream archivo;
	string valor;
	string cedula, nombre, apellido, apellido2, fecha;
	archivo.open(rutaAlterna);
	while (archivo.good()) {
		getline(archivo, cedula, ';');
		getline(archivo, nombre, ';');
		getline(archivo, apellido, ';');
		getline(archivo, apellido2, ';');
		getline(archivo, fecha, ';');
		cedula.erase(0, 1);
		if (validarCedula(cedula) && validarNombre(nombre) && validarNombre(apellido) && validarNombre(apellido2) && validarFecha(fecha)) {
			personas.push_back(Persona(cedula, nombre, apellido, apellido2, fecha));
		}
		else {
			cout << "Persona no valida\n";
		}
	}
	archivo.close();
	for (int i = 0; i < personas.size(); i++) {
		cout << "\t Persona " << i + 1;
		personas[i].mostrarPersona();
	}
}

void Procesar::insertarArchivo(string rutaAlterna)
{
	ofstream archivoC;
	archivoC.open(rutaAlterna);
	archivoC << "Cedula"<<";";
	archivoC << "Nombre" << ";";
	archivoC << "Apellido" << ";";
	archivoC << "Segundo Apellido" << ";";
	archivoC << "Fecha Nacimiento" << ";\n";
	for (int i = 0; i < personas.size(); i++) {
		archivoC << personas[i].getCedula() << ";";
		archivoC << personas[i].getNombre() << ";";
		archivoC << personas[i].getApellido() << ";";
		archivoC << personas[i].getApellido2() << ";";
		archivoC << personas[i].getFechaNacimiento() << ";\n";
	}
	cout << "Mensaje guardado";
}

void Procesar::insertarArchivo()
{
	ofstream archivoC;
	archivoC.open(ruta);
	archivoC << "Cedula" << ";";
	archivoC << "Nombre" << ";";
	archivoC << "Apellido" << ";";
	archivoC << "Segundo Apellido" << ";";
	archivoC << "Fecha Nacimiento" << ";\n";
	for (int i = 0; i < personas.size(); i++) {
		archivoC << personas[i].getCedula() << ";";
		archivoC << personas[i].getNombre() << ";";
		archivoC << personas[i].getApellido() << ";";
		archivoC << personas[i].getApellido2() << ";";
		archivoC << personas[i].getFechaNacimiento() << ";\n";
	}
	cout << "Mensaje guardado";
}

bool Procesar::validarCedula(string cedula)
{
	int length = cedula.length();
	int c = 0;
	if (length == 0) return false;
	for (int i = 0; i < length; i++) {
		if (!isdigit(cedula[i])) return false;
		c++;
	}
	return length==9;
}

bool Procesar::validarNombre(string nombre)
{
	int c = 0;
	int largo = nombre.length();
	for (int i = 0; i < largo; i++) {
		if (i > 0) {
			if (isupper(nombre[i])) return false;
		}
		if (!(isupper(nombre[0])) || !isalpha(nombre[i])) return false;
	}
	return largo > 0 && largo <= 25;
}


bool Procesar::validarFecha(string fecha)
{		//25/02/1997
		int largo = fecha.length();
		if (largo != 10) return false;
		if (!isdigit(fecha[0]) || !isdigit(fecha[1]) || !(fecha[2] == '/') ||
			!isdigit(fecha[3]) || !isdigit(fecha[4]) || !(fecha[5] == '/') ||
			!isdigit(fecha[6]) || !isdigit(fecha[7]) || !isdigit(fecha[8]) || !isdigit(fecha[9])) return false;
		string dia = to_string(fecha[0]) + to_string(fecha[1]);
		int d = ((fecha[0] - '0') * 10) + ((fecha[1] - '0') * 1);
		int m = ((fecha[3] - '0') * 10) + ((fecha[4] - '0') * 1);
		int a = ((fecha[6] - '0') * 1000) + ((fecha[7] - '0') * 100) + ((fecha[8] - '0') * 10) + ((fecha[9] - '0') * 1);
		if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) {
			if (m == 2 && d > 29) { return false; }
		}
		else {
			if (m == 2 && d > 28) return false;
		}
		if (d > 31) return false;
		if (m > 12) return false;
		if (a > 2019) return false;
		return largo == 10;
}

bool Procesar::validarPersona(Persona p)
{
	if (validarCedula(p.getCedula()) && validarNombre(p.getNombre()) && validarNombre(p.getApellido())
		&& validarNombre(p.getApellido2()) && validarFecha(p.getFechaNacimiento())) return true;
	return false;
}
