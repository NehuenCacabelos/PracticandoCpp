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
	Complejo operator+(const Complejo& c);
	Complejo operator-(const Complejo& c);
	Complejo operator*(const Complejo& c);
	Complejo operator/(const Complejo& c);
};
Complejo::Complejo(float r, float i) {
	this->r = r;
	this->i = i;
}
Complejo:: ~Complejo() {};


Complejo Complejo::operator+(const Complejo& c) {
	return Complejo(this->r + c.r, this->i + c.i);
}
Complejo Complejo::operator-(const Complejo& c) {
	return Complejo(this->r - c.r, this->i - c.i);
}
Complejo Complejo::operator*(const Complejo& c) {
	float nuevaR = (this->r * c.r) - (this->i * c.i);
	float nuevaI = (this->r * c.i) + (this->i * c.r);
	return Complejo(nuevaR, nuevaI);
}

Complejo Complejo::operator/(const Complejo& c) {
	// a = this->r, b = this->i
	// c = c.r,     d = c.i

	// Calculamos el denominador: c^2 + d^2
	float denominador = (c.r * c.r) + (c.i * c.i);

	// ¡Importante! Evitar división por cero
	if (denominador == 0) {
		// Opcional: imprimir un error o "lanzar una excepción"
		// Por ahora, devolvemos 0 + 0i
		return Complejo(0, 0);
	}

	// Calculamos la nueva parte real: (ac + bd) / denominador
	float nuevaR = ((this->r * c.r) + (this->i * c.i)) / denominador;

	// Calculamos la nueva parte imaginaria: (bc - ad) / denominador
	float nuevaI = ((this->i * c.r) - (this->r * c.i)) / denominador;

	return Complejo(nuevaR, nuevaI);
}