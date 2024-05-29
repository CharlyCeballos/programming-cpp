#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  cout<<"Matriz Original"<<endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout<<array[i][j]<<" ";
    }
    cout<<"\n";
  }

  cout<<"\n";
  cout<<"\n";
  cout<<"Matriz Transpuesta"<<endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout<<array[j][i]<<" ";
    }
    cout<<"\n";
  }

  getch();
  return 0;
}
