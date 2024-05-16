/*
Escribe la siguiente expresión matemótica como expresión en C++:
a + b/c
-------
d + e/f
*/

#include <iostream>
using namespace std;

int main() {
  float a, b, c, d, e, f, result;

  cout<<endl<<"Ingrese a: ";
  cin>>a;
  cout<<endl<<"Ingrese b: ";
  cin>>b;
  cout<<endl<<"Ingrese c: ";
  cin>>c;
  cout<<endl<<"Ingrese d: ";
  cin>>d;
  cout<<endl<<"Ingrese e: ";
  cin>>e;
  cout<<endl<<"Ingrese f: ";
  cin>>f;

  result = (a + (b/c)) / (d + (e/f));
  cout.precision(5); // Redondea a los digitos que se le indique

  cout<<endl<<"El resultado es = "<<result;

  return 0;
}
