#include <iostream>
#include <conio.h>
using namespace std;

void changeValue(int &xNum, int &yNum) {
  cout<<endl<<"El valor del primer numero es: "<<xNum;
  cout<<endl<<"El valor del segundo numero es: "<<yNum;

  xNum = xNum * -1;
  yNum = yNum * -1;
}

int main() {
  int num1=0, num2=0;

  cout<<endl<<"Ingrese dos numeros: "<<endl;
  cin>>num1>>num2;

  changeValue(num1, num2);

  cout<<endl<<"El nuevo valor del primer numero es: "<<num1;
  cout<<endl<<"El nuevo valor del segundo numero es: "<<num2;

  getch();
  return 0;
}
