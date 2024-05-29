/*
Los arreglos se definen como => type name[length]
Ejemplo:                          Inicialización:
int numbers[rows][colums];        int numbers[rows][colums] = {{1,2,3}, {a,b,c}};
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int numbers[5][10], asciiLetter = 65;

  printf("Salida ASCII");
  cout<<"\n";
  cout<<"\n";

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      numbers[i][j] = asciiLetter;
      asciiLetter++;
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%c ", numbers[i][j]);
    }
    cout<<"\n";
  }

  getch();
  return 0;
}
