#include "Triatleta.h"

Triatleta::Triatleta(float p, int a, string c, string n, string m, string e, string s, int cant) : Deportista(p, a, c, n), Ciclista(p, a, c, n, m), Nadador(p, a, c, n, e), Maratonista(p, a, c, n, s), cantMedallas(cant) {};
Triatleta::~Triatleta() {};

void Triatleta::setCant(int cant) { this->cantMedallas = cant; }
int Triatleta::getCant()const { return this->cantMedallas; }

void Triatleta::MostrarDatos() const {
	Deportista::MostrarDatos();
	Nadador::MostrarDatos();
	Ciclista::MostrarDatos();
	Maratonista::MostrarDatos();
	cout << "Cantidad de medallas: " << getCant() << endl;
}