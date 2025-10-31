#pragma once
#include <cmath>
class Punto
{
private:
	float x;
	float y;
public:
	Punto(float, float);
	~Punto();
	void setX(float);
	void setY(float);

	float getX()const;
	float getY()const;

	friend float CompararDistancias(const Punto& p1, const Punto& p2);

};

Punto::Punto(float x, float y) {
		this->x = x;
		this->y = y;
}
Punto::~Punto() {};

void Punto::setX(float x) {
	this->x = x;
}
void Punto::setY(float y) {
	this->y = y;
}
float Punto::getX()const { return this->x; }
float Punto::getY()const { return this->y; }

float CompararDistancias(const Punto& p1, const Punto& p2) {
	float d1 = sqrt(p1.x * p1.x + p1.y * p1.y);
	float d2 = sqrt(p2.x * p2.x + p2.y * p2.y);

	if (d1 <= d2)
		return d1;
	else
		return d2;
}