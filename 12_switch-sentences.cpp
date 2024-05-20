#include <iostream>
using namespace std;

int main() {
  int number;

  cout<<"Ingrese un numero en el rango del 1 al 5"<<endl;
  cin>>number;

  switch (number) {
  case 1:
    cout<<endl<<"Usted ingreso el numero "<<number;
    break;
  case 2:
    cout<<endl<<"Usted ingreso el numero "<<number;
    break;
  case 3:
    cout<<endl<<"Usted ingreso el numero "<<number;
    break;
  case 4:
    cout<<endl<<"Usted ingreso el numero "<<number;
    break;
  case 5:
    cout<<endl<<"Usted ingreso el numero "<<number;
    break;
  
  default:
    cout<<endl<<"ERROR"<<endl<<"Usted ingreso un numero fuera del rango del 1 al 5";
    break;
  }

  return 0;
}
