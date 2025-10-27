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

};

