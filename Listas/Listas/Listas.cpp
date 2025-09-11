
#include <iostream>
#include "Nodo.h"
using namespace std;

int main() {
	cout << "Creando un Lista Enlazada sencilla" << endl;
	Nodo* ppio; // ppio = Puntero al principio.
	cout << "Creando personas para ingresar a la Lista" << endl;
	Persona* ptr1 = new Persona(23, "Ana");
	Persona* ptr2 = new Persona(30, "Pedro");
	Persona* ptr3 = new Persona(25, "Berta");
	Persona* ptr4 = new Persona(26, "Mario");
	cout << "nuevo1, nuevo2,.. serán punteros a nodos..." << endl;
	cout << "y se le ingresa una Persona a c/nodo" << endl;
	Nodo* nuevo1 = new Nodo(ptr1, NULL);
	Nodo* nuevo2 = new Nodo(ptr2, NULL);
	Nodo* nuevo3 = new Nodo(ptr3, NULL);
	Nodo* nuevo4 = new Nodo(ptr4, NULL);
		cout << "Se liga ppio con el primer nodo...así:" << endl;
	ppio = nuevo1; // se apunta con ppio al primer nodo.
	cout << "Ahora, se ligan todos los nodos, consecutivamente" << endl;
	nuevo1->setSiguiente(nuevo2); //nuevo1 se enlaza con nuevo2
	nuevo2->setSiguiente(nuevo3); //nuevo2 se enlaza con nuevo3
	nuevo3->setSiguiente(nuevo4); //nuevo3 se enlaza con nuevo4
	nuevo4->setSiguiente(NULL); //nuevo4 se enlaza con NULL
	cout << " Para recorrer la lista se crea un puntero p" << endl;
		cout << " externo y se utiliza para saltar de nodo en" << endl;
	cout << " nodo con ayuda de una estructura iterativa " << endl;
	cout << " como un while para imprimirla.(por ejemplo)" << endl;
	cout << "Creacion de puntero externo p, para recorre la lista";
	Nodo* p;
	cout << "Este puntero se enlaza al primer nodo de la lista" << endl;
	p = ppio;
	cout << "El puntero p, saltara de nodo en nodo." << endl;
	cout << "Mientras se imprime la informacion de cada" << endl;
	cout << "nodo, con ayuda del while...: asi.." << endl;
	while (p != NULL) {
		cout << p->getPersona()->toString() << endl;
		p = p->getSigNodo(); // salto al otro nodo.
	}
	// Queda como ejercicio para el lector eliminar a todos los nodos
	// de la lista y sus objetos dinámicos (tipo Persona) antes de
	// abandonar la aplicación.
	system("pause");
	return 0;
}