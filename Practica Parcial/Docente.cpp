#include "Docente.h"

Docente::Docente(string n, string a, int e, string c) : Persona(n, a, e), catedra(c) {}
Docente::~Docente() {}

void Docente::setCatedra(string c) { this->catedra = c; }
string Docente::getCatedra()const { return this->catedra; }

void Docente::MostrarDatos()const {
	Persona::MostrarDatos();
	cout << "Catedra: " << getCatedra() << endl;
}