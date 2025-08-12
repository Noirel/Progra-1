#include "Empleado.h"
#include "ContVent.h"
// Ta vivo?
Empleado::Empleado(){

    this-> idE = new string("");
    this-> nombreE = new string("");
    this-> calificacion = new int(0);

}

Empleado::Empleado(string*, string*, int*){


}

Empleado::~Empleado()
{
}

void Empleado::setIdE(string* aux)
{
}

void Empleado::setNombreE(string* aux)
{
}

void Empleado::setCalificacion(int* aux)
{
}

ContVent* Empleado::getContVent()
{
    return nullptr;
}

string Empleado::getIdE()
{
    return string();
}

string Empleado::getNombreE()
{
    return string();
}

int Empleado::getCalificacion()
{
    return 0;
}

~Empleado::Empleado(){
    
}
