#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int numbers[9] = {1,2,3,4,5,6,7,8,9};
  int superior, inferior, mid, data;
  bool flag = false;

  data = 4;

  // Binary Search Algorithm
  inferior = numbers[0];
  superior = numbers[8];

  while (inferior <= superior) {
    mid = (inferior+superior)/2;

    if (numbers[mid] == data) {
      flag = true;
      break;
    } else if (numbers[mid] > data) {
      superior = mid;
      mid = (inferior+superior)/2;
    } else if (numbers[mid] < data) {
      inferior = mid;
      mid = (inferior+superior)/2;
    }
  }
  if (flag) {
    cout<<endl<<"El numero '"<<data<<"' ha sido encontrado en la posicion: "<<mid;
  } else {
    cout<<endl<<"El numero '"<<data<<"' NO ha sido encontrado";
  }
  

  getch();
  return 0;
}
