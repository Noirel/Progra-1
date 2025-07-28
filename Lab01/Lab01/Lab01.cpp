#include <iostream>
#include "Profesor.h"
using namespace std;

int main()
{
	Profesor p1;
	p1.setId("119630654");
	p1.setNombre("Fabrizio Arias Solano");
	p1.setDireccion("Cartago");
	p1.setEdad(19);
	p1.setCategoria(2);
	cout<<"Profesor 1: "<<endl<<p1.toString() << endl;

	Profesor p2("119630654", "Fabrizio Arias Solano", "Cartago", 19, 2);

	cout << "Profesor 1: " << endl << p1.toString() << endl<<endl;
	cout << "Profesor 2: " <<endl<< p2.toString() << endl;
	
}