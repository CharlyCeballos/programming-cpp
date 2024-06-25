/**
  Las Colas son estructuras de datos FIFO (First-In First-Out)
  Se usa push para añadir elementos
  Se usa pop  para quitar elementos
  Su forma básica es:
    struct Node {
      int dato;
      Node *siguiente;
    }
*/
#include <iostream>
#include <conio.h>
using namespace std;

struct Node {
  int data;
  Node *next;
};

int main() {
  cout<<"Hello everybody out there"<<endl;
  cout<<"Welcome to QUEUES";

  getch();
  return 0;
}
