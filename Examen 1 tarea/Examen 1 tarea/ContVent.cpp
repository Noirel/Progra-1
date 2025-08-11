#include "ContVent.h"

ContVent::ContVent()
{
	this->a�o = new int(0);
	this->vecV = new double(0);
	this->can = new int(12);
}

ContVent::ContVent(int* tm, int* a�o, double* vecV)
{
	a�o = new int[*tm];
	vecV = new double [*tm];

	for (int i = 0; i < *tm; i++) {
		setA�o(0);
		setVecV(0);;
	}
}

int* ContVent::getA�o()
{
	return this->a�o;
}

double* ContVent::getVecV()
{
	return this->vecV;
}

void ContVent::setA�o(int* a�o)
{
	if (*a�o < 0) {
		this->a�o = new int(0);
	}
	else {
		this->a�o = a�o;
	}
}

void ContVent::setVecV(double* vecV)
{
	if (*vecV < 0) {
		this->vecV = new double(0);
	}
	else {
		this->vecV = vecV;
	}
}
