#include "Maratonista.h"

Maratonista::Maratonista(float p, int e, string c, string n, string s) : Deportista(p, e, c, n), sponsor(s) {};
Maratonista::~Maratonista() {};

void Maratonista::setSponsor(string s) { this->sponsor = s; }
string Maratonista::getSponsor()const { return this->sponsor; }

void Maratonista::MostrarDatos()const {
	cout << "El sponsor es: " << getSponsor() << endl;
}