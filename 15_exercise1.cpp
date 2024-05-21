/*
Escriba un programa que lea un carácter e indique en la salida si el carácter es una vocal minúscula o no
*/

#include <iostream>
using namespace std;

int main() {
  char character;

  cout<<"Introduzca un caracter: ";
  cin>>character;

  switch (character) {
    case 'a':
      cout<<endl<<character<<" SI es una vocal minuscula";
      break;
    case 'e':
      cout<<endl<<character<<" SI es una vocal minuscula";
      break;
    case 'i':
      cout<<endl<<character<<" SI es una vocal minuscula";
      break;
    case 'o':
      cout<<endl<<character<<" SI es una vocal minuscula";
      break;
    case 'u':
      cout<<endl<<character<<" SI es una vocal minuscula";
      break;
    
    default:
      cout<<endl<<character<<" NO es una vocal minuscula";
      break;
  }

  return 0;
}
