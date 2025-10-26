#include <iostream>
#include "Persona.h"
#include "figura.h"
using namespace std;


int main()
{

    // --- Ejercicio 39 ---
    /* Persona p1 = Persona("Nehuen", "Cacabelos", 24);
    Persona *p2 = new Persona("Mailen", "Delfabro", 25);

    p1.MostrarDatos();
    p2->MostrarDatos();
    delete p2; */ 

    // --- Ejercicio 40 ---
    Figura f1 = Figura(25, 35);
    Figura* f2 = new Figura(15, 25);
    f1.MostrarDatos();
    f2->MostrarDatos();
    delete f2;
}


