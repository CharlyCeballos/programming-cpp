#include <iostream>
#include <conio.h>
using namespace std;

void square(int mtx[][3], int rowsN, int columsN) {
  cout<<endl<<"Mostrando matriz al cuadrado: "<<endl;
  for (int i = 0; i < rowsN; i++) {
    for (int j = 0; j < columsN; j++) {
      mtx[i][j] *= mtx[i][j];
      cout<<mtx[i][j]<<"\t";
    }
    cout<<endl;
  }
}

int main() {
  const int COLUMSLENGTH = 3;
  const int ROWSLENGTH = 2;
  int matrix[ROWSLENGTH][COLUMSLENGTH] = { {1,2,3}, {4,5,6} };

  cout<<endl<<"Mostrando matriz original: "<<endl;
  for (int i = 0; i < ROWSLENGTH; i++) {
    for (int j = 0; j < COLUMSLENGTH; j++) {
      cout<<matrix[i][j]<<" \t";
    }
    cout<<endl;
  }

  square(matrix, ROWSLENGTH, COLUMSLENGTH);


  getch();
  return 0;
}
