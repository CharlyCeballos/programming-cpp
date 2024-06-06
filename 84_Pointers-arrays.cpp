#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int numbers[] = {9,8,7,6,5,4,3,2,1}, *dir_numbers;

  dir_numbers = numbers;

  for(int i = 0; i < 9; i++) {
    cout<<endl<<"Elemento del vector ["<<i<<"]: "<<*dir_numbers++;
  }


  getch();
  return 0;
}
