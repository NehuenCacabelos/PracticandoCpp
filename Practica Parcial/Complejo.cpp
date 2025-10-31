#include "Complejo.h"
#include <iostream>
#include <string>
using namespace std;

Complejo::Complejo(float r, float i) {
	this->r = r;
	this->i = i;
}
Complejo:: ~Complejo() {};


Complejo operator+(const Complejo& c1, const Complejo& c2) {
	return Complejo(c1.r + c2.r, c1.i + c2.i);
}
Complejo operator-(const Complejo& c1, const Complejo& c2) {
	return Complejo(c1.r - c2.r, c1.i - c2.i);
}
Complejo operator*(const Complejo& c1, const Complejo& c2) {
	float nuevaR = (c1.r * c2.r) - (c1.i * c2.i);
	float nuevaI = (c1.r * c2.i) + (c1.i * c2.r);
	return Complejo(nuevaR, nuevaI);
}
Complejo operator/(const Complejo& c1, const Complejo& c2) {
	// a = this->r, b = this->i
	// c = c.r,     d = c.i

	// Calculamos el denominador: c^2 + d^2
	float denominador = (c2.r * c2.r) + (c2.i * c2.i);

	// ¡Importante! Evitar división por cero
	if (denominador == 0) {
		// Opcional: imprimir un error o "lanzar una excepción"
		// Por ahora, devolvemos 0 + 0i
		return Complejo(0, 0);
	}

	// Calculamos la nueva parte real: (ac + bd) / denominador
	float nuevaR = ((c1.r * c2.r) + (c1.i * c2.i)) / denominador;

	// Calculamos la nueva parte imaginaria: (bc - ad) / denominador
	float nuevaI = ((c1.i * c2.r) - (c1.r * c2.i)) / denominador;

	return Complejo(nuevaR, nuevaI);
}

void MostrarComplejo(const Complejo& c) {
	if (c.i >= 0)
		cout << c.r << " + " << c.i << "i" << endl;
	else
		cout << c.r << " - " << -c.i << "i" << endl;
}