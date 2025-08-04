#include "Estudiante.h"
#include<iostream>
using namespace std;

Estudiante::Estudiante()
{
	this->id = new string("");
	this->nombre = new string("");
	this->direccion = new string("");
	this->edad = new int(0);
	this->tipoBeca = new string("");
	this->montoBeca = new float(0);
}

Estudiante::Estudiante(string* id, string* nombre, string* direccion, int* edad, string* tipoBeca, int* montoBeca)
{
	this->setId(id);
	this->setNombre(nombre);
	this->setDireccion(direccion);
	this->setEdad(edad);
	this->setTipoBeca(tipoBeca);
	this->setMontoBeca(montoBeca);
}

void Estudiante::setId(string* id)
{
	this->id = id;
}

void Estudiante::setNombre(string* nombre)
{
	nombre = nombre;
}

void Estudiante::setDireccion(string _direccion)
{
	direccion = _direccion;
}

void Estudiante::setEdad(int _edad)
{
	edad = _edad;
}

void Estudiante::setTipoBeca(string _tipoBeca)
{
	tipoBeca = _tipoBeca;
}

void Estudiante::setMontoBeca(float _montoBeca)
{
	montoBeca = _montoBeca;
}

string Estudiante::getId()
{
	return id;
}

string Estudiante::getNombre()
{
	return nombre;
}

string Estudiante::getDireccion()
{
	return direccion;
}

int Estudiante::getEdad()
{
	return edad;
}

string Estudiante::getTipoBeca()
{
	return tipoBeca;
}

int Estudiante::getMontoBeca()
{
	return montoBeca;
}

string Estudiante::toString() {
	stringstream s;
	s<<"Id: "<<id<<endl
		<<"Nombre: " << nombre << endl
		<< "Direccion: " << direccion << endl
		<< "Edad: " << edad << endl
		<< "Tipo de Beca: " << tipoBeca << endl
		<< "Monto de Beca: " << montoBeca << endl;
	return s.str();
}