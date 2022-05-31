#include <iostream>

#include "persona.h"

using namespace std;

int main()
{
    cout << "Mi primer proyecto en Git y GitHub!" << endl;
    Persona p;
    p.nombre = "Rodrigo";
    p.edad = 39;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
    return 0;
}
