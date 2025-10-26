#include "Persona.h"

Persona::Persona(string n, string a, int e) {
	nombre = n;
	apellido = a;
	edad = e;
}
Persona::~Persona() {}

void Persona::setNombre(string n) {
	nombre = n;
}
void Persona::setApellido(string a) {
	apellido = a;
}
void Persona::setEdad(int e) {
	edad = e;
}

string Persona::getNombre() const { return this->nombre; }
string Persona::getApellido() const { return this->apellido; }
int Persona::getEdad() const { return this->edad; }

void Persona::MostrarDatos() const {
	cout << "El nombre es: " << getNombre() << endl;
	cout << "Su apellido: " << getApellido() << endl;
	cout << "Su edad: " << getEdad() << endl;
}