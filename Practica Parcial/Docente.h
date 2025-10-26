#pragma once
#include "Persona.h"
#include <iostream>
#include<string>
using namespace std;


class Docente : public Persona
{
private:
	string catedra;
public:
	Docente(string, string, int, string);
	~Docente();

	void setCatedra(string c);
	string getCatedra() const;

	void MostrarDatos()const override;
};




