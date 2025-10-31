#pragma once
class Complejo
{
private:
	float i;
	float r;

public:
	Complejo(float, float);
	~Complejo();

	void setI(float);
	void setR(float);

	float getI()const;
	float getR()const;
	friend Complejo operator+(const Complejo& c1, const Complejo& c2);
	friend Complejo operator-(const Complejo& c1, const Complejo& c2);
	friend Complejo operator*(const Complejo& c1, const Complejo& c2);
	friend Complejo operator/(const Complejo& c1, const Complejo& c2);

	friend void MostrarComplejo(const Complejo& c);
};
