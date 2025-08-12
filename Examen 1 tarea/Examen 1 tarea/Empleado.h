#pragma once
#include "ContVent.h"
#include <iostream>
using namespace std;
class Empleado
{
private:

 string* idE;
 string* nombreE;
 int* calificacion;
 ContVent * contVent;
 

 public:

 Empleado();
 Empleado(string* idE, string* nombreE, int* calificacion);
 ~Empleado();
 void setIdE(string* idE);
 void setNombreE(string* nombreE);
 void setCalificacion(int* calificacion);
 
 ContVent * getContVent();
 string getIdE();
 string getNombreE();
 int getCalificacion();

};

