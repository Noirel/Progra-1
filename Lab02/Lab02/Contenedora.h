#pragma once
#define TAM 5
#include "Estudiante.h"
using namespace std;
class Contenedora
{
private:
	int v1[TAM];
	Estudiante v2[TAM];
	int* v3[TAM];
	Estudiante* v4[TAM];
public:
	Contenedora();

	Contenedora(int tm);

	~Contenedora();
	
	
};

