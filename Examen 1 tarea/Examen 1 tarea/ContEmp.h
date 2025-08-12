#pragma once
#include <iostream>
#include "Empleado.h"
using namespace std;

//ta vivo? pt2
//Que dolor los metodos de este, los se hacer por traumas con los proyectos
//r-e-g--r-e-t my exe's name is tattoed in my...
//r-e-g--r-e-t this temporary hair dye was a lie

class ContEmp
{
private:

 string nombreDep;
 string telefonoDep;
 Empleado ** vectEmp;
 int can;
 int tam;

 public:

 ContEmp(string*, string*,int*);
 ~ContEmp();
 Empleado* buscarEmpleado(string id);
 Empleado* empleadoMejoresVentas();
 double ingresoDepartamento();
 bool insertarVentaAEmpleado(string id, double monto);
 double promedioVentasEmpleado(string id);
 bool insertarEmpleado(Empleado*);
 bool empleadoRepetido(string id);


};

