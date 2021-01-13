//Joel Saavedra Páez.
//ULL.
//Informática básica.
//Práctica 11.
//Ejercicio 3. Racionales.
//Este programa pide un par de números racionales y muestra la suma, la diferencia, el producto, el cociente y la comparación de estos.

#include <iostream>
#include "racionales.h"
using namespace std;

int main(){
  Racional a,b,c,d;
  cout << "Esbriba el primer racional(a) del primer par, de la forma (x/y): ";
  cin >> a;
  cout << "Esbriba el segundo racional(b) del primer par, de la forma (x/y): ";
  cin >> b;
  cout << endl;
  cout << "Tu primer par de racionales es: "<< a << " y " << b << endl;
  cout << "La suma(a+b) de lo racionales es: " << a + b << endl;
  cout << "La diferencia(a-b) de los racionales es: " << a - b << endl;
  cout << "El producto(a*b) de los racionales es: " << a * b << endl;
  cout << "El cociente(a/b) de los racionales es: " << a / b << endl;
  cout << endl;
  cout << "----------------------------------------------------------------------" << endl;
  cout << endl;
  cout << "Esbriba el primer racional(a) del segundo par, de la forma (x/y): ";
  cin >> c;
  cout << "Esbriba el segundo racional(b) del segundo par, de la forma (x/y): ";
  cin >> d;
  cout << endl;
  cout << "Tu segundo par de racionales es: "<< c << " y " << d << endl;
  cout << "La suma(c+d) de lo racionales es: " << c + d << endl;
  cout << "La diferencia(c-d) de los racionales es: " << c - d << endl;
  cout << "El producto(c*d) de los racionales es: " << c * d << endl;
  cout << "El cociente(c/d) de los racionales es: " << c / d << endl;

return 0;
}








