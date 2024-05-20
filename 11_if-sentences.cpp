#include <iostream>
using namespace std;

int main() {
  int number, data = 5;
  cout<<"Ingrese un numero: ";
  cin>>number;

  if (number == data) {
    cout<<"El numero es = "<<data;
  } else {
    cout<<"El numero es diferente de "<<data;
  }

  cout<<endl;

  if (number != data) {
    cout<<"EL NUMERO ES DIFERENTE DE "<<data;
  } else {
    cout<<"EL NUMERO ES = "<<data;
  }

  return 0;
}
