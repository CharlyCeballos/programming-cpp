#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int n) {
  if (n==0) {
    n = 1;
  } else {
    n = n * factorial(n-1);
  }

  return n;
}

int main() {
  int natural = 0;

  cout<<"Ingrese un numero natural: ";
  cin>>natural;

  if (natural < 0) {
    cout<<endl<<endl<<"El numero debe ser positivo";
    return 0;
  }

  cout<<endl<<natural<<"! = "<<factorial(natural);

  getch();
  return 0;
}
