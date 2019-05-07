#pragma once
#include<iostream>
#include <string>
#include "Persona.h"
#include <vector>

using namespace std;

class Hash
{
private:
	static const int tama�oTabla = 20;
	Persona* tabla[tama�oTabla];

public:
	Hash();
	int idx(string key);
	void a�adirPersona(Persona p);
	Persona* buscarPersona(string key);
	void modificarPersona(string nuevaCedula, string nuevoNombre, string nuevoAp1, string nuevoAp2, string nuevaFecha);
	int numeroColisiones(int idx);
	bool existeCedula(string cedula);
	void eliminarPersona(string key);
	void imprimirTabla();
};

