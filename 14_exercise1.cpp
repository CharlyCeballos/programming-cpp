/*
Escriba un programa que lea Un valor entero y determine si se trata de un número par o none
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int number = 0;
  div_t result;

  cout<<"Introduzca un numero: ";
  cin>>number;

  result = div(number, 2);

  if (result.rem == 0) {
    cout<<endl<<"El numero "<<number<<" es par";
  } else {
    cout<<endl<<"El numero "<<number<<" es none";
  }

  return 0;
}
