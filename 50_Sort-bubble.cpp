#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int number[10] = {8,4,1,5,2,6,5,9,8,5}, i, j, aux;

  cout<<endl<<"Original: "<<number[0]<<number[1]<<number[2]<<number[3]<<number[4]<<number[5]<<number[6]<<number[7]<<number[8]<<number[9]<<endl;

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (number[j] > number[j+1]) {
        aux = number[j];
        number[j] = number[j+1];
        number[j+1] = aux;
      }
    }
  }
  cout<<endl<<"Ordenado: "<<number[0]<<number[1]<<number[2]<<number[3]<<number[4]<<number[5]<<number[6]<<number[7]<<number[8]<<number[9]<<endl;


  getch();
  return 0;
}
