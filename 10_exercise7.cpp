/*
Realice un programa que calcule el valor que toma la siguiente función para los valos de X y Y
f(x,y) = √x / y² - 1
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float x, y, result;

  cout<<endl<<"Ingrese el valor de x: ";
  cin>>x;
  cout<<endl<<"Ingrese el valor de y: ";
  cin>>y;

  result = (sqrt(x) / (pow(y,2) - 1));

  cout<<endl<<"El resultado es = "<<result;

  return 0;
}
