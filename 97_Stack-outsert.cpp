/**
 * Pasos para extraer elementos en una pila:
 * 1. Corroborar que la pila NO esta vacia
 * 2. Imprimir el valor actual (tope) de la pila.
 * 3. Cambiar el apuntador al siguiente elemento de la pila.
 * 4. Eliminar la pila.
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
  Node *new_node = new Node();
  new_node -> data = n;
  new_node -> next = stack;
  stack = new_node;
}

void outStack(Node *&stack) {
  /** Step 1 */
  if (stack != NULL) {
    cout<<endl<<"Listado de todos los elementos de la pila:";
    while (stack != NULL) {
      /** Step 2 */
      cout<<endl<<stack->data;
      /** Step 3 */
      stack = stack->next;
    }
    /** Step 4 */
    delete stack;
    cout<<endl<<"---------------";
  } else {
    cout<<endl<<"La pila esta vacia.";
  }
  
}

int main() {
  Node *stack = NULL;
  int element = 0;

  while (element < 10) {
    addStack(stack, element);
    element++;
  }

  outStack(stack);
  outStack(stack);

  getch();
  return 0;
}
