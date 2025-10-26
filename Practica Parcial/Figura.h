#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Figura
{
private:
	float base;
	float altura;
public:
	Figura(float, float);
	~Figura();

	void setBase(float);
	void setAltura(float);

	float getBase()const;
	float getAltura() const;

	void MostrarDatos()const;
};


