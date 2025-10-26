#include "Estudiante.h"

Estudiante::Estudiante(string n, string a, int e, string m) : Persona(n, a, e), materia(m) {}
Estudiante:: ~Estudiante() {}

void Estudiante::setMateria(string m) { this->materia = m; }
string Estudiante::getMateria()const { return this->materia; }

void Estudiante::MostrarDatos()const {
	Persona::MostrarDatos();
	cout << "Materia: " << getMateria() << endl;
}