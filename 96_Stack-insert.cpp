/**
 * Pasos para agregar elementos en una pila:
 * 1. Crear el espacio en memoria para almacenar un nodo.
 * 2. Cargar el valor dentro del nodo(dato).
 * 3. Cargar el puntero pila dentro del nodo(*siguiente).
 * 4. Asignar el nuevo nodo a pila.
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Node {
  int data;
  Node *next;
};

void addStack(Node *&stack, int n) {
  /** Step 1 */
  Node *new_node = new Node();
  /** Step 2 */
  new_node -> data = n;
  /** Step 3 */
  new_node -> next = stack;
  /** Step 4 */
  stack = new_node;
}

void printStack(Node *&stack) {
  cout<<endl<<"Listado de todos los elementos de la pila:";
  while (stack != NULL) {
    cout<<endl<<stack->data;
    stack = stack->next;
  }
  cout<<endl<<"---------------";
}

int main() {
  Node *stack = NULL;
  int elements = 0, element = 0;

  cout<<endl<<"De cero a cien cuantos elementos quiere ingresar a la pila? ";
  cin>>elements;
  if (0 > elements || elements > 100) {
    cout<<"Rango incorrecto.";
    return 0;
  }

  while (elements > 0) {
    cout<<"Ingrese un numero: ";
    cin>>element;
    addStack(stack, element);
    elements--;
  }

  printStack(stack);

  getch();
  return 0;
}
