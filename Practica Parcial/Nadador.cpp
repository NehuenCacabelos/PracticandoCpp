#include "Nadador.h"

Nadador::Nadador(float p, int a, string c, string n, string e) : Deportista(p, a, c, n), estilo(e) {};
Nadador::~Nadador() {};

void Nadador::setEstilo(string e) { this->estilo = e; }
string Nadador::getEstilo()const { return this->estilo; }

void Nadador::MostrarDatos() const {
	cout << "El estilo es: " << getEstilo() << endl;
}