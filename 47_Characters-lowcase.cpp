#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
  char hello[] = "Hello Everybody Out There";
  cout<<endl<<"Texto original: "<<hello;
  cout<<endl<<"Texto lowercase: "<<strlwr(hello);

  getch();
  return 0;
}
