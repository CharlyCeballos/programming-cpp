/*
Escriba un programa que reciba tres números. Al recibir un cuarto número determinar si es igual a alguno de los tres anteriores.
*/

#include <iostream>
using namespace std;

int main() {
  int num1 = 0, num2 = 0, num3 = 0, num4 = 0;

  cout<<endl<<"Introduzca el primer  numero: ";
  cin>>num1;
  cout<<endl<<"Introduzca el segundo numero: ";
  cin>>num2;
  cout<<endl<<"Introduzca el tercer  numero: ";
  cin>>num3;
  cout<<endl<<"Introduzca el cuarto  numero: ";
  cin>>num4;

  if (num1 == num4 || num2 == num4 || num3 == num4) {
    cout<<endl<<"El cuarto numero es igual a uno de los anteriores tres";
  } else {
    cout<<endl<<"El cuarto numero es difernete de todos los anteriores tres";
  }
  

  return 0;
}
