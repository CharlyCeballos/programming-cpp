#include <iostream>
#include <conio.h>
using namespace std;

void square(int vec[], int length) {
  for (int i = 0; i < length; i++) {
    vec[i] *= vec[i];
    cout<<vec[i]<<" ";
  }
}

int main() {
  const int LENGTH = 5;
  int vec[LENGTH] = {1,2,3,4,5};

  square(vec, LENGTH);


  getch();
  return 0;
}
