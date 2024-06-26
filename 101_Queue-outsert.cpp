/**
 * Pasos para extraer elementos en una cola:
 * 1. Obtener el valor del nodo.
 * 2. Crea un nodo aux y asignarle el frente de la cola.
 * 3. Eliminar el nodo del frente de la cola.
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Node {
  int data;
  Node *next;
};

void insertQueue(Node *&front, Node *&end, int n) {
  Node *new_node = new Node();
  new_node->data = n;
  new_node->next = NULL;
  if (front == NULL) {
    front = new_node;
  } else {
    end->next = new_node;
  }
  end = new_node;
}

void outQueue(Node *&front, Node *&end, int &n) {
  /** Step 1 */
  n = front->data;
  /** Step 2 */
  Node *aux = front;
  /** Step 3 */
  if (front == end) {
    front = NULL;
    end = NULL;
  } else {
    front = front->next;
  }
  delete aux;
}

int main() {
  Node *front = NULL;
  Node *end = NULL;
  int input = 0;

  while (input < 10) {
    cout<<input<<" ingresado a la cola."<<endl;
    insertQueue(front, end, input);
    input++;
  }

  cout<<endl<<"Salida de la cola: "<<endl;
  while (front != NULL) {
    outQueue(front, end, input);

    cout<<input<<endl;
  }

  getch();
  return 0;
}
