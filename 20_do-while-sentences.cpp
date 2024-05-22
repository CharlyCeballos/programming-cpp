#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int i = 1;

  do {
    cout<<endl<<i;
    i++;
  } while (i <= 10);

  i = 10;

  cout<<endl;

  do {
    cout<<endl<<i;
    i--;
  } while (i >= 1);

  getch();
  return 0;
}
