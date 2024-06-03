#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int numbers[10] = {8,4,1,5,2,6,5,9,8,5}, i, j, aux, min;

  cout<<endl<<"Original: "<<numbers[0]<<numbers[1]<<numbers[2]<<numbers[3]<<numbers[4]<<numbers[5]<<numbers[6]<<numbers[7]<<numbers[8]<<numbers[9]<<endl;

  for (i = 0; i < 10; i++) {
    min = i;
    for (j = i+1; j < 10; j++) {
      if (numbers[j] < numbers[min]) {
        min = j;
      }
    }
    aux = numbers[i];
    numbers[i] = numbers[min];
    numbers[min] = aux;
  }
  cout<<endl<<"Ordenado: "<<numbers[0]<<numbers[1]<<numbers[2]<<numbers[3]<<numbers[4]<<numbers[5]<<numbers[6]<<numbers[7]<<numbers[8]<<numbers[9]<<endl;


  getch();
  return 0;
}
