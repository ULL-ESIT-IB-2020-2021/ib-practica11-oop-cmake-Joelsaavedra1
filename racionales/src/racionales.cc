//Joel Saavedra Páez.
//ULL.
//Informática básica.
//Práctica 11.
//Ejercicio 3. Racionales.
//Este programa pide un par de números racionales y muestra la suma, la diferencia, el producto, el cociente y la comparación de estos.

#include <iostream>
#include "racionales.h"
using namespace std;

int mcd(int a, int b){
  while(b != 0){
    int t = b;
    b = a % b;
    a = t;    
  }
  return a;
}

void Racional::reducir(){
  int M = mcd(_numerador, _denominador);
  _numerador /= M;
  _denominador /= M;  
  if((_numerador < 0 && _denominador < 0) || (_denominador < 0 && _numerador > 0)){
    _numerador = -_numerador;
    _denominador = -_denominador;        
  }  
}

Racional::Racional(){
  _numerador = 0;
  _denominador = 1;
}

Racional::Racional(const Racional& other){
  _numerador = other._numerador;
  _denominador = other._denominador;
}

Racional::Racional(int numerador, int denominador){
  _numerador = numerador;
  _denominador = denominador;
  reducir();
}

void Racional::escribe(ostream& o) const{
  o << _numerador << '/' << _denominador;    
}

void Racional::lee(istream& i) {
  char c;
  i >> _numerador >> c >> _denominador;
  reducir();
}

ostream& operator << (ostream& o, const Racional& R) {
  R.escribe(o);
  return o;
}

istream& operator >> (istream& i, Racional& R) {
  R.lee(i);
  return i;
}

void Racional::operator+=(const Racional& otro){
  int a = _numerador, b = _denominador;
  int c = otro._numerador, d = otro._denominador;
  _numerador = a*d + c*b;
  _denominador = b*d;
  reducir();
}

void Racional::operator-=(const Racional& otro){
  int a = _numerador, b = _denominador;
  int c = otro._numerador, d = otro._denominador;
  _numerador = a*d - c*b;
  _denominador = b*d;
  reducir();
}

void Racional::operator*=(const Racional& otro){
  _numerador *= otro._numerador;
  _denominador *= otro._denominador;
  reducir();
}

void Racional::operator/=(const Racional& otro){
  _numerador *= otro._denominador;
  _denominador *= otro._numerador;
  reducir();
}

Racional Racional::operator+(const Racional& otro) const{
  Racional resultado(_numerador, _denominador);
  resultado += otro;
  return resultado;  
}

Racional Racional::operator-(const Racional& otro) const{
  Racional resultado(_numerador, _denominador);
  resultado -= otro;
  return resultado;  
}

Racional Racional::operator*(const Racional& otro) const{
  Racional resultado(_numerador, _denominador);
  resultado *= otro;
  return resultado;  
}

Racional Racional::operator/(const Racional& otro) const{
  Racional resultado(_numerador, _denominador);
  resultado /= otro;
  return resultado;  
}








