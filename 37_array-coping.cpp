#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int array1[2][2] = {{1,2},{3,4}}, array2[2][2];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      array2[i][j] = array1[i][j];
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout<<array2[i][j]<<" ";
    }
    cout<<"\n";
  }

  getch();
  return 0;
}
