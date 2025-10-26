#include "Figura.h"

Figura::Figura(float b, float a) {
	this->altura = a;
	this->base = b;
}
Figura::~Figura() {
	cout << "Se elimino el objeto" << endl;
}

void Figura::setBase(float b) {
	this->base = b;
}
void Figura::setAltura(float a) {
	this->altura = a;
}

float Figura::getBase() const { return this->base; }
float Figura::getAltura() const { return this->altura; }

void Figura::MostrarDatos()const {
	cout << "Base: " << getBase() << endl;
	cout << "Altura: " << getAltura() << endl;
}

