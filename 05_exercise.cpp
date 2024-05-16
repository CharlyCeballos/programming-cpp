/*
Realice un programa que lea de la entrada estándar de los siguientes datos de una persona:
Edad: dato de tipo entero.
Sexo: dato de tipo carácter.
Altura en centimetros: dato de tipo real.
Tras Leer Los datos, el programa debe mostrarlos en la salida estándar.
*/

#include <iostream>
using namespace std;

int main(void) {
  int old, tallCm;
  string sex;
  float tallM;

  cout<<endl<<"Ingrese su edad con numeros: ";
  cin>>old;
  cout<<endl<<"Ingrese su genero: ";
  cin>>sex;
  sex.resize(9);
  cout<<endl<<"Ingrese su altura (cm): ";
  cin>>tallCm;
  tallM = tallCm / 100.0;

  cout<<endl<<"Edad: "<<old<<" primaveras"<<endl<<"Sexo: "<<sex<<endl<<"Altura: "<<tallCm<<" centimetros"<<endl<<"Altura: "<<tallM<<" metros";

  return 0;
}
