/*
Escriba un programa que lea un carácter e indique en la salida si el carácter es una vocal minúscula, es una vocal mayuscula o no es vocal
*/

#include <iostream>
using namespace std;

int main() {
  char character;

  cout<<"Introduzca un caracter: ";
  cin>>character;

  switch (character) {
    case 'a':
      cout<<endl<<character<<" es una vocal minuscula";
      break;
    case 'e':
      cout<<endl<<character<<" es una vocal minuscula";
      break;
    case 'i':
      cout<<endl<<character<<" es una vocal minuscula";
      break;
    case 'o':
      cout<<endl<<character<<" es una vocal minuscula";
      break;
    case 'u':
      cout<<endl<<character<<" es una vocal minuscula";
      break;
    case 'A':
      cout<<endl<<character<<" SI es una vocal mayuscula";
      break;
    case 'E':
      cout<<endl<<character<<" SI es una vocal mayuscula";
      break;
    case 'I':
      cout<<endl<<character<<" SI es una vocal mayuscula";
      break;
    case 'O':
      cout<<endl<<character<<" SI es una vocal mayuscula";
      break;
    case 'U':
      cout<<endl<<character<<" SI es una vocal mayuscula";
      break;
    
    default:
      cout<<endl<<character<<" NO es una vocal";
      break;
  }

  return 0;
}
