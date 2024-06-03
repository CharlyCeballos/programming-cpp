#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main() {
  char original[] = "123456789012345678901234567.9999999";

  cout<<endl<<"Original char: "<<original;
  cout<<endl<<"Integer: "<<atoi(original);
  cout<<endl<<"Float: "<<atof(original);
  cout<<endl<<"Long: "<<atol(original);
  cout<<endl<<"Long Long: "<<atoll(original);
  cout<<endl<<"Original char: "<<original;

  getch();
  return 0;
}
