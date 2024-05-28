/*
Los arreglos se definen como => type name[length]
Ejemplo:                Inicialización:
int integers[10];       int integers[] = { -1, 0, 3, 4, 5 };
char letters[5];        char letters[] = { 'a', 'e', 'i', 'o', 'u' };
float numbers[15];      float numbers[] = { 1.1, 2.0, 3.5, 4.878, 5.65642 };
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int naturals[] = { 1, 2, 3, 4, 5 }, suma = 0;

  for (int i = 0; i < 5; i++) {
    suma = suma + naturals[i];
    cout<<endl<<suma;
  }

  cout<<endl<<"La suma de los elementos del vector es = "<<suma<<endl;

  getch();
  return 0;
}
