#pragma once
#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

class Estudiante : public Persona
{
private:
	string materia;
public:
	Estudiante(string, string, int, string);
	~Estudiante();

	void setMateria(string);

	string getMateria()const { return this->materia; }

	void MostrarDatos()const override;
};

