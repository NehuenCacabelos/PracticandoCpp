#include <iostream>
#include "Persona.h"
#include "figura.h"
#include "Rectangulo.h"
#include "Estudiante.h"
#include "Docente.h"
#include "Triangulo.h"
using namespace std;


int main()
{

    // --- Ejercicio 39 ---
    /* Persona p1 = Persona("Nehuen", "Cacabelos", 24);
    Persona *p2 = new Persona("Mailen", "Delfabro", 25);

    p1.MostrarDatos();
    p2->MostrarDatos();
    delete p2; */ 

    
    /* // --- Ejercicio 40 ---
    Figura f1 = Figura(25, 35);
    Figura* f2 = new Figura(15, 25);
    f1.MostrarDatos();
    f2->MostrarDatos(); 
    delete f2;
                                    Deja de funcionar ya que los metodos son solo visibles desde las clases.
    Rectangulo r1(10, 5);
    r1.setBase(20);
    float b = r1.getBase();
    r1.MostrarDatos(); */


    /* --- Ejercicio 45--- 
    Persona* p1 = new Estudiante("Juan", "Carlos", 25, "Sistemas");
    Persona* p2 = new Docente("Marco", "Antonio", 67, "Algoritmos II");

    p1->MostrarDatos();
    p2->MostrarDatos();
    delete p1;
    delete p2;  */

    /*---Ejercicio 46---
    Triangulo t1(25, 30);
    Triangulo t2(15, 19);

    Rectangulo r1 = t1 + t2;
    r1.MostrarDatos(); */ 

   

}


