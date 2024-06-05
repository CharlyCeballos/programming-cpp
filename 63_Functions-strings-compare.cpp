#include <algorithm> // for using transform
#include <cctype> // for using toupper
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void stringCompare(string &first, string &second) {
  if (first.compare(second) != 0) {
    cout<<endl<<"Las palabras '"<<first<<"' y '"<<second<<"' son diferentes";
  } else {
    cout<<endl<<"Las palabras '"<<first<<"' y '"<<second<<"' son iguales";
  }
}

int main() {
  string one = "Palabra original";
  string two = "palabra original";

  stringCompare(one, two);

  transform(begin(one), end(one), begin(one), ::toupper);
  transform(begin(two), end(two), begin(two), ::toupper);

  stringCompare(one, two);

  getch();
  return 0;
}
