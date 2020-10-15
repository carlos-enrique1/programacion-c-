# include "operacion.h"
# include <iostream>


void Operacion::cargar1() {
  std::cout <<"Introduzca el valor 1:" << std::endl;
  std::cin >> valor1;
}
void Operacion::cargar2() {
  std::cout <<"Introduzca el valor 2:" << std::endl;
  std::cin >> valor2;
}

void Operacion::mostrar_resultado(){
   std::cout <<"Resultado:" << resultado <<std::endl;



}
;
