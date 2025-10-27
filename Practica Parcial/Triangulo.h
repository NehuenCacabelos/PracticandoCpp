#pragma once
#include "Figura.h"
#include <math.h>
using namespace std;

class Triangulo : public Figura
{
public:
	Triangulo(float, float);
	~Triangulo();

	float CalcularSuperficie()const;
	float CalcularPerimetro()const;
};

