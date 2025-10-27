#pragma once
#include <string>
#include <iostream>
using namespace std;

class Deportista 
{
private:
	float peso;
	int altura;
	string clase;
	string nombre;

public:
	Deportista(float, int, string, string);
	~Deportista();

	void setPeso(float);
	void setAltura(int);
	void setClase(string);
	void setNombre(string);

	float getPeso() const;
	int getAltura() const;
	string getClase() const;
	string getNombre() const;

	virtual void MostrarDatos()const = 0;
};

