#include "Profesor.h"
#include<iostream>
using namespace std;

Profesor::Profesor()
{
}

Profesor::Profesor(string _id, string _nombre, string _direccion, int _edad, int _categoria)
{
id = _id;
    nombre = _nombre;
    direccion = _direccion;
    edad = _edad;
    categoria = _categoria;
}
void Profesor::setId(string _id)
{
	id = _id;
}
void Profesor::setNombre(string _nombre)
{
	nombre = _nombre;
}
void Profesor::setDireccion(string _direccion)
{
	direccion = _direccion;
}
void Profesor::setEdad(int _edad)
{
	edad = _edad;
}
void Profesor::setCategoria(int _categoria)
{
	categoria = _categoria;
}
string Profesor::getId()
{
	return id;
}

string Profesor::getNombre()
{
	return nombre;
}

string Profesor::getDireccion()
{
	return direccion;
}

int Profesor::getEdad()
{
	return edad;
}

int Profesor::getCategoria()
{
	return categoria;
}

string Profesor::toString()
{
	stringstream s;
	s << "Id: " << id << endl << "Nombre: " << nombre << endl << "Direccion: " << direccion << endl << "Edad: " << edad << endl << "Categoria: " << categoria;
	return s.str();
}



