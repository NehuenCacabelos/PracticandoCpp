#pragma once
#include "Figura.h"
#include "Rectangulo.h"
#include <math.h>
using namespace std;

class Triangulo : public Figura
{
public:
	Triangulo(float, float);
	~Triangulo();

	float CalcularSuperficie()const;
	float CalcularPerimetro()const;
	
	Rectangulo operator+ (const Triangulo & t)const;
};

