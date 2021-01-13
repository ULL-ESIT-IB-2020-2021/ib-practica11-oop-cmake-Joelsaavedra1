//Joel Saavedra Páez.
//ULL.
//Informática básica.
//Práctica 11.
//Ejercicio 1. Fechas.
//Este programa pide una fecha y las N fechas siguientes,luego las muestra en pantalla.

#include <iostream>

using namespace std;

class Fecha{
 private:
  int ano_{};
  int mes_{};
  int dia_{};

 public:
  int ObtenerFecha(int x){
    for (int i = 0; i < x; ++i){
    ++dia_;
    cout<<dia_<<'/'<<mes_<<'/'<<ano_<<endl;
    }
  }
  
  int ObtenerMes() {return mes_ ;}
  void SetMes(int mes) {mes_= mes ;}
     
  int ObtenerDia() {return dia_ ;}
  void SetDia(int dia) {dia_=dia ;}

  int ObtenerAno() {return ano_ ;}
  void SetAno(int ano){ano_=ano ;}
 };




