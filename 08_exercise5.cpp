/*
Escribe un fragmento de programa que intercambie los valores de dos variables
*/

#include <iostream>
using namespace std;

int main() {
  float a, b, pivot;

  cout<<endl<<"Ingrese a: ";
  cin>>a;
  cout<<endl<<"Ingrese b: ";
  cin>>b;

  pivot = a;
  a = b;
  b = pivot;

  cout<<endl<<"Ahora a vale "<<a<<endl<<"Ahora b vale "<<b;

  return 0;
}
