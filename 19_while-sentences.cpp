#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int i = 1;

  while (i <= 10) {
    cout<<endl<<i;
    i++;
  }

  i = 10;
  cout<<endl;

  while (i >= 1) {
    cout<<endl<<i;
    i--;
  }

  getch();
  return 0;
}
