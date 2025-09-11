#pragma once
#include "Persona.h" //Archivo de cabecera
class Nodo {
private:
	Persona* ptro; //Puntero a objeto-dinámico.
	Nodo* sig; //enlace al próximo nodo
public:
	Nodo(); //Constructor. Por defecto.
	Nodo(Persona*, Nodo*); //Constr. Parámetros.
	~Nodo(); //Destructor.
	//Accesores...
	Persona* getPersona();
	Nodo* getSigNodo();
	//Mutadores...
	void setPersona(Persona* per);
	void setSiguiente(Nodo* s);
};


