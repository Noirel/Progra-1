#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Estudiante
{
private:
	string* id;
	string* nombre;
	string* direccion;
	int* edad;
	string* tipoBeca;
	float* montoBeca;
public:
	Estudiante();

	Estudiante(string* id,string* nombre ,string* direccion ,int* edad ,string* tipoBeca ,float* montoBeca);

	void setId(string *id);
	string getId();

	void setNombre(string *nombre);
	string getNombre();

	void setDireccion(string *direccion);
	string getDireccion();

	void setEdad(int *edad);
	int getEdad();

	void setTipoBeca(string *tipoBeca);
	string getTipoBeca();

	void setMontoBeca(float *montoBeca);
	int getMontoBeca();

	string toString();
};

