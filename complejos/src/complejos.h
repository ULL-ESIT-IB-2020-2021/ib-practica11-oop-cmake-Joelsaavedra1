//Joel Saavedra Páez.
//ULL.
//Informática básica.
//Práctica 11.
//Ejercicio 2. Complejos.
//Este programa pide dos números complejos y muestra la suma y difrencia de estos.

#include <iostream>
using namespace std;

class Complejo{

 private:
   double real,imag;

 public:
   Complejo(){
     real=imag=0;
   }
 
   Complejo(double r){
     real=r;
     imag=0;
   }

   Complejo(double r, double i){
     real=r;
     imag=i;
   }

   Complejo(Complejo &obj){
     real=obj.real;
     imag=obj.imag;
   }

   Complejo add(Complejo c){
     Complejo Add;
     Add.real = real + c.real;
     Add.imag = imag + c.imag;
     return Add;
   }

   Complejo res(Complejo c){
     Complejo Res;
     Res.real = real - c.real;
     Res.imag = imag - c.imag;
     return Res;
   }

   void print(){
     cout<<real<<"+"<<imag<<"i"<<endl<<endl;
   }

   double getReal() const{
     return real;
   }

   double getImag() const{
     return imag;
   }

   void setReal(double re){
     real = re;
   }

   void setImag(double im){
     imag = im;
   }
};