#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
  char name[] = "Carlos";
  /*
  string lastName = {'C','e','b','a','l','l','o','s'};
  string lastLastName = {'A','m','a','d','o','r'};
  */
  char fullName[1];
  /*
  char one[] = {'X'};
  char two = {'Y'};
  char three[] = {'Z'};
  */

  cout<<endl<<name;
  /*
  cout<<endl<<lastName;
  cout<<endl<<lastLastName;
  */
  /*
  cout<<endl<<one<<endl;
  cout<<endl<<two<<endl;
  cout<<endl<<three<<endl;
  */

  cout<<endl<<"Ingrese su nombre completo: ";
  cin.getline(fullName, 22, '\n');
  cout<<endl<<fullName;


  getch();
  return 0;
}
