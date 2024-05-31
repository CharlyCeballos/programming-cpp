#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
  char hello[] = "Hello everybody out there";
  cout<<endl<<"Texto original: "<<hello;
  cout<<endl<<"Texto uppercase: "<<strupr(hello);

  getch();
  return 0;
}
