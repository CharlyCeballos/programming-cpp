#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int cube = 3, array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  int array2[cube][cube];

  for (int i = 0; i < cube; i++) {
    for (int j = 0; j < cube; j++) {
      array2[j][i] = array1[i][j];
    }
  }

  for (int i = 0; i < cube; i++) {
    for (int j = 0; j < cube; j++) {
      cout<<array2[i][j]<<" ";
    }
    cout<<"\n";
  }

  getch();
  return 0;
}
