//Joel Saavedra Páez.
//ULL.
//Informática básica.
//Práctica 11.
//Ejercicio 3. Racionales.
//Este programa pide un par de números racionales y muestra la suma, la diferencia, el producto, el cociente y la comparación de estos.

#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>

class Racional {
  void reducir();
 public:
  Racional();
  Racional(const Racional& other);
  Racional(int numerador, int denominador = 1);

  void operator+=(const Racional& otro);
  void operator-=(const Racional& otro);
  void operator*=(const Racional& otro);
  void operator/=(const Racional& otro);

  Racional operator+(const Racional& otro) const;
  Racional operator-(const Racional& otro) const;
  Racional operator*(const Racional& otro) const;
  Racional operator/(const Racional& otro) const;

  void escribe(std::ostream& o) const;
  void lee(std::istream& i); 

 private:
  int _numerador;
  int _denominador;
};

std::ostream& operator << (std::ostream& o, const Racional& R);
std::istream& operator >> (std::istream& i, Racional& R);

#endif
