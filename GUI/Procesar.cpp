#include "Procesar.h"

void Procesar::setPersonas(vector<Persona>p)
{
	personas = p;
}

void Procesar::cargarArchivo()
{
	ifstream archivo;
	string valor;
	string cedula, nombre, apellido, apellido2, fecha;
	string casa;
	archivo.open(casa);
	while (archivo.good()) {
		getline(archivo, cedula, ';');
		getline(archivo, nombre, ';');
		getline(archivo, apellido, ';');
		getline(archivo, apellido2, ';');
		getline(archivo, fecha, ';');
		personas.push_back(Persona(cedula, nombre, apellido, apellido2, fecha));
		if (cedula == "Cedula" && nombre == "Nombre" && apellido == "Apellido" && apellido2 == "Segundo Apellido" && fecha == "Fecha Nacimiento") personas.pop_back();
	}
	personas.pop_back();
	archivo.close();
	for (int i = 0; i < personas.size(); i++) {
		cout << "\t Persona " << i + 1;
		personas[i].mostrarPersona();
	}
}

void Procesar::insertarArchivo(Persona p)
{
	ofstream archivoC;
	string casa; //Casa = ruta
	archivoC.open(casa);
	archivoC << "Cedula"<<";";
	archivoC << "Nombre" << ";";
	archivoC << "Apellido" << ";";
	archivoC << "Segundo Apellido" << ";";
	archivoC << "Fecha Nacimiento" << ";";
	for (int i = 0; i < personas.size(); i++) {
		archivoC << personas[i].getCedula() << ";";
		archivoC << personas[i].getNombre() << ";";
		archivoC << personas[i].getApellido() << ";";
		archivoC << personas[i].getApellido2() << ";";
		archivoC << personas[i].getFechaNacimiento() << ";";
	}
	archivoC <<"\n"<<p.getCedula()<<";";
	archivoC << p.getNombre()<<";";
	archivoC << p.getApellido()<<";";
	archivoC << p.getApellido2()<<";";
	archivoC << p.getFechaNacimiento() <<";";
	archivoC.close();
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
	if (largo == 0) return false;
	for (int i = 0; i < largo; i++) {
		if (!isupper(nombre[0]) || !isalpha(nombre[i])) return false;
		return largo>0 && largo <= 25;
	}
}

bool Procesar::validarFecha(string fecha)
{		//25/02/1997
	int largo = fecha.length();
	if (largo == 0) return false;
	if (!isdigit(fecha[0]) || !isdigit(fecha[1]) || !(fecha[2] == '/') ||
		!isdigit(fecha[3]) || !isdigit(fecha[4]) || !(fecha[5] == '/') ||
		!isdigit(fecha[6]) || !isdigit(fecha[7]) || !isdigit(fecha[8]) || !isdigit(fecha[9])) return false;
	return largo == 10;
}

bool Procesar::validarPersona(Persona p)
{
	if (validarCedula(p.getCedula()) && validarNombre(p.getNombre()) && validarNombre(p.getApellido())
		&& validarNombre(p.getApellido2()) && validarFecha(p.getFechaNacimiento())) return true;
	return false;
}
