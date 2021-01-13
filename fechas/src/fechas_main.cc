//Joel Saavedra Páez.
//ULL.
//Informática básica.
//Práctica 11.
//Ejercicio 1. Fechas.
//Este programa pide una fecha y las N fechas siguientes,luego las muestra en pantalla.

#include <iostream>
#include "fechas.h" 
#include "tools.h" 

using namespace std;

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  int dia = atoi(argv[1]);
  int mes = atoi(argv[2]);
  int ano = atoi(argv[3]);
  int N = atoi(argv[4]);
  Fecha fecha;
  fecha.SetDia(dia);
  fecha.SetMes(mes);
  fecha.SetAno(ano);
  fecha.ObtenerFecha(N); 
  return 0;
}   