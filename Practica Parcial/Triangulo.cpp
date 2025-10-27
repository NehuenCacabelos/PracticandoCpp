#include "Triangulo.h"

Triangulo::Triangulo(float b, float a) : Figura(b, a) {}
Triangulo::~Triangulo() {
	cout << "Se elimino el objeto triangulo" << endl;
}

float Triangulo::CalcularSuperficie()const {
	return (Figura::getBase() * Figura::getAltura()) / float(2);
}
float Triangulo::CalcularPerimetro()const {
	float a = Figura::getAltura();
	float b = Figura::getBase();
	float hipotenusa = sqrt(a * a + b * b);
	return hipotenusa + a + b;
}

