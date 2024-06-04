#include <iostream>
#include <conio.h>
using namespace std;

struct People {
  char name[20];
  int age;
}people1;

int main() {
  cout<<endl<<"Ingrese el nombre de la persona: ";
  cin.getline(people1.name, 20, '\n');
  cout<<endl<<"Ingrese la edad de la persona: ";
  cin>>people1.age;

  cout<<endl<<"\nImprimiendo datos capturados\n";
  cout<<"Nombre: "<<people1.name<<endl;
  cout<<"Edad: "<<people1.age<<endl;

  getch();
  return 0;
}
