#include "Rectangulo.h"

Rectangulo::Rectangulo(float b, float a) : Figura(b, a) {}
Rectangulo:: ~Rectangulo() {}

float Rectangulo::CalcularSuperficie()const {
	return Figura::getBase() * Figura::getAltura();
}
float Rectangulo::CalcularPerimetro()const {
	return 2 * (Figura::getBase() + Figura::getAltura());
}