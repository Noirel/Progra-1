#pragma once
#include <iostream>
using namespace std;
class Persona
{
private:
	string nombre;
	int edad;
public:
	Persona();
	Persona(int edad, string nombre);
	~Persona();
	void setNom(string nombre);
	void setEdad(int edad);
	string getNom();
	int getEdad();
	string toString();


};

