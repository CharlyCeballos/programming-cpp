// nested
#include <iostream>
#include <conio.h>
using namespace std;

struct work_place {
  char street[40];
  int ext;
  char city[20];
  char state[20];
}address;

struct employee {
  char fullName[40];
  int employeeNumber;
  double salary;
  struct work_place office;
}employees[2];


int main() {
  cout<<endl<<"Ingrese la calle de la empresa: ";
  cin.getline(address.street, 40, '\n');
  cout<<"Ingrese el numero exterior de la empresa: ";
  cin>>address.ext;
  fflush(stdin);
  cout<<"Ingrese la ciudad de la empresa: ";
  cin.getline(address.city, 20, '\n');
  cout<<"Ingrese el estado de la empresa: ";
  cin.getline(address.state, 20, '\n');

  for (int i = 0; i < 2; i++) {
    fflush(stdin); // Vacia el buffer
    cout<<endl<<"Digite su nombre completo: ";
    cin.getline(employees[i].fullName, 40, '\n');
    cout<<"Digite su numero de empleado: ";
    cin>>employees[i].employeeNumber;
    cout<<"Digite su salario mensual: ";
    cin>>employees[i].salary;
  }
  cout<<endl<<"-------Imprimiendo datos capturados-------";
  for (int i = 0; i < 2; i++) {
    cout<<endl<<"Nombre completo: "<<employees[i].fullName;
    cout<<endl<<"Numero de empleado: "<<employees[i].employeeNumber;
    cout<<endl<<"Salario mensual: "<<employees[i].salary;
    cout<<endl<<"Oficina: "<<address.street<<" "<<address.ext<<" "<<address.city<<" "<<address.state<<endl;
  }

  getch();
  return 0;
}
