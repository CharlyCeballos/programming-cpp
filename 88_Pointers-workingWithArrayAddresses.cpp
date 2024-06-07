#include <iostream>
#include <conio.h>
using namespace std;

int foundMax(int *dirVec, int nElements) {
  int max = 0;

  for (int i = 0; i < nElements; i++) {
    /*dirVec es la dirección estática,
    por eso se usa i para hacer el recorrido de la dirección de memoria*/
    if ( *(dirVec+i) > max ) {
      max = *(dirVec+i);
    }
  }
  return max;
}

int main() {
  const int nElements = 20;
  int numbers[nElements] = {47, 235, 109, 16, 382, 297, 421, 83, 498, 124, 356, 201, 7, 440, 319, 254, 95, 463, 142, 331};

  cout<<"El numero mas grande es: "<<foundMax(numbers, nElements);

  getch();
  return 0;
}
