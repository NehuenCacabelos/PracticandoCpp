#pragma once
#include <string>
#include <iostream>
using namespace std;

class Persona
{
private:
	string nombre;
	string apellido;
	int edad;
public:
	Persona(string, string, int);
	~Persona();

	void setNombre(string);
	void setApellido(string);
	void setEdad(int);

	string getNombre() const;
	string getApellido() const;
	int getEdad() const;

	virtual void MostrarDatos() const;
};

