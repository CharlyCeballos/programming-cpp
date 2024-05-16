#include <iostream>

using namespace std;

int main() {
  int integerNumberOne, integerNumberTwo, addition = 0, subtraction = 0, multiplication = 0, division = 0;

  cout<<endl<<"Digite el primer numero: ";
  cin>>integerNumberOne;
  cout<<endl<<"Digite el segundo numero: ";
  cin>>integerNumberTwo;

  addition = integerNumberOne + integerNumberTwo;
  subtraction = integerNumberOne - integerNumberTwo;
  multiplication = integerNumberOne * integerNumberTwo;
  division = integerNumberOne / integerNumberTwo;

  cout<<endl<<"La suma es = "<<addition;
  cout<<endl<<"La resta es = "<<subtraction;
  cout<<endl<<"La multiplicacion es = "<<multiplication;
  cout<<endl<<"La division es = "<<division;

  return 0;
}
