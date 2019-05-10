#include "Hash.h"


Hash::Hash()
{
	string vacio = "vacio";
	for (int i = 0; i < tamañoTabla; i++) {
		tabla[i] = new Persona(vacio, vacio, vacio, vacio, vacio);
		tabla[i]->sig = NULL;
	}
}

int Hash::idx(string key)
{
	int indice = 0;
	for (int i = 0; i < key.length(); i++) {
		if(key[i]>'0' && key[i]<'9')
			indice += key[i]-'0';
	}
	return indice%tamañoTabla;
}

void Hash::añadirPersona(Persona p)
{
	int indice = idx(p.getCedula());

	if (tabla[indice]->getNombre() == "vacio") {
		tabla[indice] = new Persona(p.getCedula(), p.getNombre(), p.getApellido(),p.getApellido2(),p.getFechaNacimiento());
	}
	else{
		Persona* ptr = tabla[indice];
		Persona* nuevo = new Persona(p.getCedula(), p.getNombre(), p.getApellido(), p.getApellido2(), p.getFechaNacimiento());
		while (ptr->sig) {
			ptr = ptr->sig;
		}
		ptr->sig = nuevo;
	}
}

Persona* Hash::buscarPersona(string key)
{
	int indice = idx(key);
	Persona* ptr = tabla[indice];
	while (ptr) {
		if (ptr->getCedula() == key) {
			return ptr;
		}
		ptr = ptr->sig;
	}
}

void Hash::modificarPersona(string Cedula, string nuevoNombre, string nuevoAp1, string nuevoAp2, string nuevaFecha)
{
	int indice = idx(Cedula);

	Persona* p = tabla[indice];
	while (p) {
		if (p->getCedula() == Cedula) {
			p->setNombre(nuevoNombre);
			p->setApellido(nuevoAp1);
			p->setApellido2(nuevoAp2);
			p->setFechaNacimiento(nuevaFecha);
			return;
		}
		p = p->sig;
	}
}

int Hash::numeroColisiones(int idx)
{
	int x = 0;
	if (tabla[idx]->getNombre() == "vacio" )
		return 0;
	else {
		x++;
		Persona* p = tabla[idx];
		while (p->sig) {
			x++;
			p = p->sig;
		}
	}
	return x;
}


bool Hash::existeCedula(string cedula)
{
	int indice = idx(cedula);
	Persona* p = tabla[indice];
	if (p->getCedula() == cedula)
		return true;
	while (p->sig) {
		p = p->sig;
		if (p->getCedula() == cedula)
			return true;
	}
	return false;
}

void Hash::eliminarPersona(string key)
{
	int indice = idx(key);

	Persona* temp;
	Persona* p;
	Persona* q;

	if (tabla[indice]->getCedula() == key && tabla[indice]->sig == NULL) {
		string vacio = "vacio";
		tabla[indice] = new Persona(vacio, vacio, vacio, vacio, vacio);
	}
	else if (tabla[indice]->getCedula() == key) {
		temp = tabla[indice];
		tabla[indice] = tabla[indice]->sig;
		delete temp;
	}
	else {
		p = tabla[indice]->sig;
		q = tabla[indice];
		while (p && p->getCedula() != key) {
			q = p;
			p = p->sig;
		}
		temp = p;
		p = p->sig;
		q->sig = p;
		delete temp;
	}
}


vector<Persona> Hash::devolverPersonas()
{
	vector<Persona>personas;
	for (int i = 0; i < tamañoTabla; i++) {
		Persona* p = tabla[i];
		while (p) {
			if (p->getNombre() != "vacio") {
				personas.push_back(p->getPersona());
			}
			p = p->sig;
		}
		delete p;
	}
	return personas;
}

void Hash::limpiarHash()
{
	string vacio = "vacio";
	for (int i = 0; i < tamañoTabla; i++) {
		Persona* p = tabla[i];
		while (p) {
			Persona* q = p;
			p = p->sig;
			delete q;
		}
		delete p;
		tabla[i]= new Persona(vacio, vacio, vacio, vacio, vacio);
	}
}

void Hash::imprimirTabla()
{
	cout << "\tImprimiendo Tabla Hash\n\n";
	for (int i = 0; i < tamañoTabla; i++) {
		cout << "------------\n";
		cout << "Cantidad de Personas en el indice " << i << " = " << numeroColisiones(i) << endl;
		cout << "La primera persona con este indice posee la cedula: " << tabla[i]->getCedula() << endl;
	}

}

