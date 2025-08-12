#include "ContVent.h"

ContVent::ContVent()
{
	this->año = new int(0);
	this->vecV = new double(0);
	this->can = new int(0);
}

ContVent::ContVent(int* tm, int* año, double* vecV)
{
	año = new int[*tm];
	vecV = new double [*tm];

	for (int i = 0; i < *tm; i++) {
		setAño(0);
		setVecV(0);;
	}
}

ContVent::~ContVent(){
	
	for(int i=0; i < *can; i++){
		delete [i] vecV;
	}
	delete[] vecV;

}

int* ContVent::getAño()
{
	return this->año;
}

double* ContVent::getVecV()
{
	return this->vecV;
}

void ContVent::setAño(int* año)
{
	if (*año < 0) {
		this->año = new int(0);
	}
	else {
		this->año = año;
	}
}

void ContVent::setVecV(double* vecV)
{
	if (*vecV < 0) {
		this->vecV = new double(0);
	}
	else if (*can <= 12 && *can <! 0 && *vecV > 0) 
	{
		for(int i=0; i<*can; i++){
			can++;
			this->vecV[i] = *vecV;
		}
	}
}

double* ContVent::sumaDeVentas()
{
	return nullptr;
}

