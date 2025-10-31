#pragma once
#include "Figura.h"
#include <math.h>
using namespace std;

class Rectangulo : public Figura
{
public:
	Rectangulo(float, float);
	~Rectangulo();

	float CalcularPerimetro()const override;
	float CalcularSuperficie()const override;
};


