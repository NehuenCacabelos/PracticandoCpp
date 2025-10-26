#include "Deportista.h"

Deportista::Deportista(float p, int a, string c, string n) {
	this->peso = p;
	this->altura = a;
	this->clase = c;
	this->nombre = n;
};
Deportista::~Deportista() {
	cout << "Se elimino el objeto deportista" << endl;
}

void Deportista::setPeso(float p) {
	this->peso = p;
}
void Deportista::setAltura(int a) {
	this->altura = a;
}
void Deportista::setClase(string c) {
	this->clase = c;
}
void Deportista::setNombre(string n) {
	this->nombre = n;
}

float Deportista::getPeso()const { return this->peso; }
int Deportista::getAltura() const { return this->altura; }
string Deportista::getClase()const { return this->clase; }
string Deportista::getNombre() const { return this->nombre; }

void Deportista::MostrarDatos()const {
	cout << getPeso() << getAltura() << getClase() << getNombre() << endl;
}