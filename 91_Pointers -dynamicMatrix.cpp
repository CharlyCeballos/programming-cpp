#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int **matrixPointer, nRows, nColumns;

void postData() {
  int value = 0;

  cout<<"Ingrese el numero de columnas: ";
  cin>>nRows;
  cout<<"Ingrese el numero de filas: ";
  cin>>nColumns;

  matrixPointer = new int*[nColumns]; // Reservando memoria para las columnas
  for (int i = 0; i < nColumns; i++) {
    matrixPointer[i] = new int[nRows]; // Reservando memoria para las filas
  }

  for (int i = 0; i < nColumns; i++) {
    for (int j = 0; j < nRows; j++) {
      *( *(matrixPointer+i)+j ) = value;
      value++;
    }
  }
}

void getData(int **matrixPointer, int rows, int columns) {
  cout<<endl<<endl<<"-----Imprimiendo matriz-----"<<endl;
  for (int i = 0; i < columns; i++) {
    for (int j = 0; j < rows; j++) {
      cout<<*( *(matrixPointer+i)+j )<<"\t";
    }
    cout<<endl;
  }
}

void deleteData(int rows) {
  for (int i = 0; i < rows; i++) {
    delete[] matrixPointer[i];
  }
  delete[] matrixPointer;
}

int main() {
  postData();
  getData(matrixPointer, nRows, nColumns);
  deleteData(nColumns);


  getch();
  return 0;
}
