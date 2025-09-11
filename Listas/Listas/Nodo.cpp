#include"Nodo.h"
Nodo::Nodo() {
	ptro = NULL;
	sig = NULL;
}
Nodo::Nodo(Persona* per, Nodo* s) {
	ptro = per;
	sig = s;
}
Nodo::~Nodo() {
	delete ptro; //???????????
}
//Accesores...
Persona* Nodo::getPersona() { return ptro; }
Nodo* Nodo::getSigNodo() { return sig; }
//Mutadores....
void Nodo::setPersona(Persona* per) { ptro = per; }
void Nodo::setSiguiente(Nodo* s) { sig = s; }