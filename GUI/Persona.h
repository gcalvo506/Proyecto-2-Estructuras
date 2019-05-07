#pragma once
#include "string"
#include <iostream>

using namespace std;

class Persona
{
private:
	string cedula;
	string nombre;
	string apellido;
	string apellido2;
	string fechaNacimiento;
public:
	Persona* sig;
	Persona(string ced, string nom, string ap1, string ap2, string nacimiento) { cedula = ced, nombre = nom, apellido = ap1, apellido2 = ap2, fechaNacimiento = nacimiento; sig = NULL; };
	string getCedula() { return cedula;} 
	string getNombre() { return nombre; }
	string getApellido() { return apellido; }
	string getApellido2() { return apellido2; }
	string getFechaNacimiento() { return fechaNacimiento; }
	Persona getPersona() { return Persona(cedula, nombre, apellido, apellido2, fechaNacimiento); }
	void setCedula(string str) { cedula = str; }
	void setNombre(string str) { nombre = str; }
	void setApellido(string str) { apellido = str; }
	void setApellido2(string str) { apellido2 = str; }
	void setFechaNacimiento(string str) { fechaNacimiento = str; }
	void mostrarPersona() { cout << cedula << " " << nombre << " " << apellido << " " << apellido2  << " " << fechaNacimiento << endl;}
};

