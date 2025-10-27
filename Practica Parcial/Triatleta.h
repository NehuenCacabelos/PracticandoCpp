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
public:
	Triatleta(float, int, string, string, string, string,string, int);
	~Triatleta();

	void setCant(int cant);
	int getCant()const;

	void MostrarDatos()const override;
};


