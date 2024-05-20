/*
Escriba un programa que lea dos números y determine cuál de ellos es mayor
*/

#include <iostream>
using namespace std;

int main() {
  int number1 = 0, number2 = 0;

  cout<<endl<<"Ingrese el primer numero: ";
  cin>> number1;

  cout<<endl<<"Ingrese el segundo numero: ";
  cin>> number2;

  if (number1 > number2) {
    cout<<endl<<number1<< " es mayor a "<<number2;
  } else if (number1 < number2) {
    cout<<endl<<number2<< " es mayor a "<<number1;
  } else if (number1 == number2) {
    cout<<endl<<number2<< " es igual a "<<number1;
  } else {
    cout<<endl<<"ERROR";
  }

  return 0;
}
