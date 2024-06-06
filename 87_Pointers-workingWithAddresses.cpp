#include <iostream>
#include <conio.h>
using namespace std;

void interchange(float *pointer1, float *pointer2) { // Recibe PUNTEROS
  float aux;

  aux = *pointer1;
  *pointer1 = *pointer2;
  *pointer2 = aux;
  cout<<endl<<endl<<"Despues del intercambio";
}

int main() {
  float num1 = 5.55, num2 = 945.9;

  cout<<endl<<"Primer numero: "<<num1;
  cout<<endl<<"Segundo numero: "<<num2;

  interchange(&num1, &num2); // Manda DIRECCIONES DE MEMORIA

  cout<<endl<<"Primer numero: "<<num1;
  cout<<endl<<"Segundo numero: "<<num2;

  getch();
  return 0;
}
