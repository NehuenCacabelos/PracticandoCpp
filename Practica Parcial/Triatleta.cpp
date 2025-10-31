#include "Triatleta.h"
#include "Deportista.h"
#include "Ciclista.h"
#include "Nadador.h"
#include "Maratonista.h"

Triatleta::Triatleta(float p, int a, string c, string n, string m, string e, string s, int cant) : Deportista(p, a, c, n), Ciclista(p, a, c, n, m), Nadador(p, a, c, n, e), Maratonista(p, a, c, n, s), cantMedallas(cant) {
	this->contadorTriatletas++;
};
Triatleta::~Triatleta() {
	this->contadorTriatletas--;
};

void Triatleta::setCant(int cant) { this->cantMedallas = cant; }
int Triatleta::getCant()const { return this->cantMedallas; }

void Triatleta::MostrarDatos() const {
	Deportista::MostrarDatos();
	Nadador::MostrarDatos();
	Ciclista::MostrarDatos();
	Maratonista::MostrarDatos();
	cout << "Cantidad de medallas: " << getCant() << endl;
}

void Triatleta::ModificarDatos(string n) {
	this->setNombre(n);
}
void Triatleta::ModificarDatos(float p, int a) {
	this->setPeso(p);
	this->setAltura(a);
}
void Triatleta::ModificarDatos(float p, int a, string n) {
	this->setPeso(p);
	this->setAltura(a);
	this->setNombre(n);
}

int Triatleta::getContadorTriatletas() {
	return contadorTriatletas;
}
int Triatleta::contadorTriatletas = 0;

void CompararPeso(const Deportista& D1, const Deportista& D2) {
	if (D1.peso > D2.peso) {
		cout << D1.nombre << "es mas pesado que " << D2.nombre << endl;
	}
	else if (D1.peso < D2.peso) {
		cout << D2.peso << "es mas pesado que " << D1.nombre << endl;
	}
	else
	{
		cout << "Ambos pesan lo mismo" << endl;
	}
}