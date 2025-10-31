#pragma once
#include "Deportista.h"

class Maratonista : virtual public Deportista
{
private:
	string sponsor;
public:
	Maratonista(float, int, string, string, string);
	~Maratonista();

	void setSponsor(string s);
	string getSponsor() const;

	void MostrarDatos()const override;

	friend void CompararPeso(const Deportista& D1, const Deportista& D2);

};
