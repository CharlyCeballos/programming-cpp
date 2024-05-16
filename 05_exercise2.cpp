/*
Escribe la siguiente expresión matemótica como expresión en C++:
a/b + 1
*/

#include <iostream>
using namespace std;

int main() {
  float a, b, result;

  cout<<endl<<"Ingrese a: ";
  cin>>a;
  cout<<endl<<"Ingrese b: ";
  cin>>b;

  result = (a/b) + 1;

  cout<<endl<<"El resultado es: "<<result;

  return 0;
}
