#pragma once
#define TAM 12;
#include <string>

class ContVent
{
private:
	int* año;
	double* vecV;
	int* can;
	
public:
	ContVent();
	ContVent(int* tm, int* año, double* vecV);
	int* getAño();
	double* getVecV();
	void setAño(int* año);
	void setVecV(double* vecV);



};

