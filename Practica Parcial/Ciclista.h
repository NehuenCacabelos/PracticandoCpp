#pragma once
#include "Deportista.h"

class Ciclista : virtual public Deportista
{
private:
	string marcaBici;
public:
	Ciclista(float, int, string, string, string);
	~Ciclista();

	void setMarca(string m);
	string getMarca()const;

	friend void CompararPeso(const Deportista& D1, const Deportista& D2);


};

