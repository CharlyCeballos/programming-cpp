#include <iostream>
#include <conio.h>
using namespace std;

struct People {
  char name[20];
  int age;
}
people1 = { "Carlos", 30 },
people2 = { "Roberto", 32 };

int main() {
  cout<<endl<<"Nombre1: "<<people1.name;
  cout<<endl<<"Edad1: "<<people1.age;

  cout<<endl<<"Nombre2: "<<people2.name;
  cout<<endl<<"Edad2: "<<people2.age;

  getch();
  return 0;
}
