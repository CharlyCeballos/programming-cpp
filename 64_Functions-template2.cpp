#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

template <class SOMENAME>
void showAbs(SOMENAME number) {
  cout<<endl<<"El numero original es: "<<number;
  cout<<endl<<"El numero absoluto es: "<<abs(number);
}

int main() {
  int integer = -6;
  float fNum = 6.6f;
  double dNum = -6.666666666d;

  showAbs(integer);
  showAbs(fNum);
  showAbs(dNum);

  getch();
  return 0;
}
