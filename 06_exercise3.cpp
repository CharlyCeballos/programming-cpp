/*
Escribe la siguiente expresión matemótica como expresión en C++:
a+b / c+d
*/

#include <iostream>
using namespace std;

int main() {
  float a, b, c, d, result;

  cout<<endl<<"Ingrese a: ";
  cin>>a;
  cout<<endl<<"Ingrese b: ";
  cin>>b;
  cout<<endl<<"Ingrese c: ";
  cin>>c;
  cout<<endl<<"Ingrese d: ";
  cin>>d;

  result = (a+b) / (c+d);

  cout<<endl<<"El resultado es: "<<result;

  return 0;
}
