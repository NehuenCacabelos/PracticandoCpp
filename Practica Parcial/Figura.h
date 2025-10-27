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

	void MostrarDatos()const;
// protected:

	void setBase(float);
	void setAltura(float);

	float getBase()const;
	float getAltura() const;



};