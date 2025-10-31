#pragma once
#include "Deportista.h"
#include "Ciclista.h"
#include "Nadador.h"
#include "Maratonista.h"
using namespace std;
#include <iostream>
#include <string>

class Triatleta : virtual public Ciclista, virtual public Nadador, virtual public Maratonista
{
private:
	int cantMedallas;
	static int contadorTriatletas;
public:
	Triatleta(float, int, string, string, string, string,string, int);
	~Triatleta();

	void setCant(int cant);
	int getCant()const;
	static int getContadorTriatletas();

	void MostrarDatos()const override;
	void ModificarDatos(string);
	void ModificarDatos(float, int);
	void ModificarDatos(float, int, string);

	friend void CompararPeso(const Deportista& D1, const Deportista& D2);


};


