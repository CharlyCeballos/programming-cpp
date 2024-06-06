#include <iostream>
#include <conio.h>
using namespace std;

struct Person {
  char fullName[35];
  int age;
}p1;

void getData() {
  cout<<endl<<"Ingrese su nombre completo: ";
  cin.getline(p1.fullName, 35, '\n');
  cout<<"Ingrese su edad: ";
  cin>>p1.age;
}

void showData(Person p) {
  cout<<endl<<endl<<"Nombre: "<<p.fullName;
  cout<<endl<<"Edad: "<<p.age;
}

int main() {
  getData();
  showData(p1);

  getch();
  return 0;
}
