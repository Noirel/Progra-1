#include "Persona.h"
#include <sstream>

Persona::Persona()
{
}

Persona::Persona(int edad, string nombre)
{
	this->nombre = nombre;
	this->edad = edad;
}

Persona::~Persona()
{
}

void Persona::setNom(string nombre)
{
	this->nombre = nombre;
}

void Persona::setEdad(int edad)
{
	this->edad = edad;
}

string Persona::getNom()
{
	return nombre;
}

int Persona::getEdad()
{
	return edad;
}

string Persona::toString()
{
	stringstream s;
	s << getNom() << endl << getEdad() << endl;
	return s.str();
}
