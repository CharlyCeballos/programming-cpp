/*
& indica la dirección de memoria
* Indica que se trata de un puntero
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int num = 20, *dir_num;
  dir_num = &num;

  cout<<endl<<"Numero: "<<*dir_num;
  cout<<endl<<"La direccion de memoria es: "<<dir_num;

  getch();
  return 0;
}
