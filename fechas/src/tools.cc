//Joel Saavedra Páez.
//ULL.
//Informática básica.
//Práctica 11.
//Ejercicio 1. Fechas.
//Este programa pide una fecha y las N fechas siguientes,luego las muestra en pantalla.

#include <iostream>
#include <cstdlib>   
#include "tools.h"    

void Usage(int argc, char *argv[]) {
  if (argc != 5) {
    std::cout << argv[0] << ": Los datos indroducidos no son correctos." << std::endl;
    std::cout << "Los datos se deben introducir como en el siguiente ejemplo:" << std::endl;
    std::cout << argv[0] << " 02 03 2020 5" << std::endl;
    std::cout << "Siendo 02 los dias, 03 el mes, 2020 el año y 5 el número de fechas siguientes que se mostrarán." << std::endl;
    exit(EXIT_SUCCESS);
  }
}
