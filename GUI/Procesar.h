#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <cctype>
#include "Persona.h"

class Procesar
{
private:
	vector<Persona> personas;
public:
	Procesar() { };
	void setPersonas(vector<Persona>p);
	vector<Persona> getPersonas() { return personas; };
	void cargarArchivo(string ruta);
	void insertarArchivo(string ruta);
	bool validarCedula(string fecha);
	bool validarNombre(string nombre);
	bool validarFecha(string fecha);
	bool validarPersona(Persona p);
};
