#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int numbers[10] = {8,4,1,5,2,6,5,9,8,5}, i, pos, aux;

  cout<<endl<<"Original: "<<numbers[0]<<numbers[1]<<numbers[2]<<numbers[3]<<numbers[4]<<numbers[5]<<numbers[6]<<numbers[7]<<numbers[8]<<numbers[9]<<endl;

  for (i = 0; i < 10; i++) {
    pos = i;
    aux = numbers[i];

    while ( (pos>0) && (numbers[pos-1] > aux) ) {
      numbers[pos] = numbers[pos-1];
      pos--;
    }
    numbers[pos] = aux;
  }
  cout<<endl<<"Ordenado: "<<numbers[0]<<numbers[1]<<numbers[2]<<numbers[3]<<numbers[4]<<numbers[5]<<numbers[6]<<numbers[7]<<numbers[8]<<numbers[9]<<endl;


  getch();
  return 0;
}
