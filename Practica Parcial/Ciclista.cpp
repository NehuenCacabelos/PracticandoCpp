#include "Ciclista.h"

Ciclista::Ciclista(float p, int a, string c, string n, string m) : Deportista(p, a, c, n), marcaBici(m) {};
Ciclista::~Ciclista() {};

void Ciclista::setMarca(string m) { this->marcaBici = m; }
string Ciclista::getMarca()const { return this->marcaBici; }

