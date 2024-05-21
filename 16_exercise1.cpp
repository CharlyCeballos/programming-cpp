/*
Escriba un programa que solicite una edad (int) e indique si la edad esta en el rango de 18 a 25
*/

#include <iostream>
using namespace std;

int main() {
  int age = 0;

  cout<<"Introduzca su edad: ";
  cin>>age;

  if (18 <= age <= 25) {
    cout<<endl<<"La edad introducida esta DENTRO del rango de 18 a 25";
  } else {
    cout<<endl<<"La edad introducida esta FUERA  del rango de 18 a 25";
  }
  

  return 0;
}
