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
	string ruta;
public:
	Procesar() { ruta = ""; };
	void setPersonas(vector<Persona>p);
	void setRuta(string str);
	string getRuta() { return ruta; };
	vector<Persona> getPersonas() { return personas; };
	void cargarArchivo(string ruta);
	void insertarArchivo(string ruta);
	void insertarArchivo();
	bool validarCedula(string fecha);
	bool validarNombre(string nombre);
	bool validarFecha(string fecha);
	bool validarPersona(Persona p);
};
