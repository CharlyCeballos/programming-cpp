/*
Realice un programa que lea de la entrada estándar de los siguientes datos de una persona:
Edad: dato de tipo entero.
Sexo: dato de tipo carácter.
Altura en metros: dato de tipo real.
Tras Leer Los datos, el programa debe mostrarlos en la salida estándar.
*/

#include <iostream>
using namespace std;

int main(void) {
  int old;
  string sex;
  float tall;

  cout<<endl<<"Ingrese su edad con numeros: ";
  cin>>old;
  cout<<endl<<"Ingrese su genero: ";
  cin>>sex;
  sex.resize(9);
  cout<<endl<<"Ingrese su altura (cm): ";
  cin>>tall;

  cout<<endl<<"Edad: "<<old<<" primaveras"<<endl<<"Sexo: "<<sex<<endl<<"Altura: "<<tall<<" centimetros";

  return 0;
}
