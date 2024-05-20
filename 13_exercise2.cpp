/*
Escriba un programa que lea tres números y determine cuál de ellos es mayor
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int number1 = 0, number2 = 0, number3 = 0, sortingNumbers[3] = {0, 0, 0};
  int n = sizeof(sortingNumbers) / sizeof(sortingNumbers[0]);

  cout<<endl<<"Ingrese el primer numero: ";
  cin>> number1;
  sortingNumbers[0] = number1;

  cout<<endl<<"Ingrese el segundo numero: ";
  cin>> number2;
  sortingNumbers[1] = number2;

  cout<<endl<<"Ingrese el tercer numero: ";
  cin>> number3;
  sortingNumbers[2] = number3;

  sort(sortingNumbers, sortingNumbers + n, greater<int>());

  cout<<endl<<"El numero mayor es: "<<sortingNumbers[0];

  return 0;
}
