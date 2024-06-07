#include <iostream>
#include <conio.h>
using namespace std;

struct Person {
  char fullName[35];
  int age;
}person, *pointerPerson = &person;

void postData() {
  cout<<"Ingrese su nombre completo: ";
  cin.getline(pointerPerson->fullName, 35, '\n');
  cout<<"Ingrese su edad: ";
  cin>>pointerPerson->age;
}

void getData(Person *pointerPerson) {
  cout<<"Nombre: "<<pointerPerson->fullName;
  cout<<endl<<"Edad: "<<pointerPerson->age;
}

int main() {
  for (int i = 0; i < 2; i++) {
    postData();
    getData(pointerPerson);
    fflush(stdin);
    cout<<endl<<endl;
  }


  getch();
  return 0;
}
