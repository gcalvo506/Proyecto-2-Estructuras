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
	void cargarArchivo();
	void insertarArchivo(Persona mensaje);
	bool validarCedula(string fecha);
	bool validarNombre(string nombre);
	bool validarFecha(string fecha);
	bool validarPersona(Persona p);
};
