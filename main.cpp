#include <iostream>
#include "Suma.h"
#include "Resta.h"

int main() { // sin argumentos


   // creamos una instancia de la clase Suma, o lo que es lo mismo,
   // una variable del tipo Suma,

   Suma s; 
   

 s.cargar1();
 s.cargar2();
 s.operar();
 s.mostrar_resultado();



   Resta r;


 r.cargar1();
 r.cargar2();
 r.operar();
 r.mostrar_resultado();

 return 0;

}

