/*
Escriba un programa que calcule las soluciones de segundo grado de la forma
ax² + bx + c = 0
Teniendo en cuenta que:
x = -b±√(b²-4ac) / 2a
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float a, b, c, result1, result2;

  cout<<endl<<"Ingrese el valor de a: ";
  cin>>a;
  cout<<"Ingrese el valor de b: ";
  cin>>b;
  cout<<"Ingrese el valor de c: ";
  cin>>c;

  result1 = ( (-1 * b) + ( sqrt( ( (pow(b,2)) - (4*a*c) )) ) ) / (2*a);
  result2 = ( (-1 * b) - ( sqrt( ( (pow(b,2)) - (4*a*c) )) ) ) / (2*a);

  cout<<endl<<"El resultado de X1 es = "<<result1;
  cout<<endl<<"El resultado de X2 es = "<<result2;

  return 0;
}
