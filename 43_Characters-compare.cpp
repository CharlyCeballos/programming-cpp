#include <algorithm> // for using transform
#include <cctype> // for using toupper
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
  char one[] = "Palabra original";
  char two[] = "palabra original";

  if (strcmp(one, two) != 0) {
    cout<<endl<<"Las palabras '"<<one<<"' y '"<<two<<"' son diferentes";
  } else {
    cout<<endl<<"Las palabras '"<<one<<"' y '"<<two<<"' son iguales";
  }

  transform(begin(one), end(one), begin(one), ::toupper);
  transform(begin(two), end(two), begin(two), ::toupper);

  if (strcmp(one, two) != 0) {
    cout<<endl<<"Las palabras '"<<one<<"' y '"<<two<<"' son diferentes";
  } else {
    cout<<endl<<"Las palabras '"<<one<<"' y '"<<two<<"' son iguales";
  }

  getch();
  return 0;
}
