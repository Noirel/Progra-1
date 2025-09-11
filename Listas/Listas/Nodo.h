#pragma once
#include "Persona.h" //Archivo de cabecera
class Nodo {
private:
	Persona* ptro; //Puntero a objeto-din�mico.
	Nodo* sig; //enlace al pr�ximo nodo
public:
	Nodo(); //Constructor. Por defecto.
	Nodo(Persona*, Nodo*); //Constr. Par�metros.
	~Nodo(); //Destructor.
	//Accesores...
	Persona* getPersona();
	Nodo* getSigNodo();
	//Mutadores...
	void setPersona(Persona* per);
	void setSiguiente(Nodo* s);
};


