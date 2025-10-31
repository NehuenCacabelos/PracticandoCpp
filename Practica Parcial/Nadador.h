#pragma once
#include "Deportista.h"
#include <iostream>
#include<string>
using namespace std;

class Nadador : virtual public Deportista
{
private:
	string estilo;
public:
	Nadador(float, int, string, string, string);
	~Nadador();

	void setEstilo(string e);
	string getEstilo()const;

	void MostrarDatos() const override;

	friend void CompararPeso(const Deportista& D1, const Deportista& D2);

};


