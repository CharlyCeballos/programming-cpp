#include <iostream>
#include <conio.h>
using namespace std;

void calculate(int, int, int&, int&);

int main() {
  int num1=0, num2=0, sum=0, mult=0;

  cout<<endl<<"Ingrese 2 numeros: "<<endl;
  cin>>num1>>num2;

  calculate(num1, num2, sum, mult);

  cout<<endl<<"El valor de la suma es: "<<sum;
  cout<<endl<<"El valor de la multiplicacion es: "<<mult;


  getch();
  return 0;
}

void calculate(int first, int second, int &sumary, int &product) {
  sumary = first + second;
  product = first * second;
}