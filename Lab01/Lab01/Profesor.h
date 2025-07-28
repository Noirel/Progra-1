#pragma once
#include <string>
#include <sstream>

using namespace std;
class Profesor
{
private:
    string id;
    string nombre;
    string direccion;
    int edad;
    int categoria;
public:
    Profesor();
    Profesor(string, string, string, int, int);

    void setId(string id);
    string getId();

    void setNombre(string nombre);
    string getNombre();

    void setDireccion(string direccion);
    string getDireccion();

    void setEdad(int edad);
    int getEdad();

    void setCategoria(int categoria);
    int getCategoria();

    string toString();

};

