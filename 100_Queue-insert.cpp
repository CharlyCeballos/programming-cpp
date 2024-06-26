/**
 * Pasos para agregar elementos en una cola:
 * 1. Crear un espacio de memoria para almacenar un nodo (frente, fin).
 * 2. Asignar ese nuevo nodo al dato que queremos insertar.
 * 3. Asignar los punteros frente y fin hacia el nuevo nodo.
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
  /** Step 1 */
  Node *new_node = new Node();
  /** Step 2 */
  new_node->data = n;
  new_node->next = NULL;
  /** Step 3 */
  if (front == NULL) {
    front = new_node;
  } else {
    end->next = new_node;
  }
  end = new_node;
}

void printQueue(Node *&queue) {
  cout<<endl<<"Listado de todos los elementos de la cola:";
  while (queue != NULL) {
    cout<<endl<<queue->data;
    queue = queue->next;
  }
  cout<<endl<<"---------------";
}

int main() {
  Node *front = NULL;
  Node *end = NULL;
  int elements = 0, input = 0;

  cout<<endl<<"De cero a cien cuantos elementos quiere ingresar a la cola? ";
  cin>>elements;
  if (0 > elements || elements > 100) {
    cout<<"Rango incorrecto.";
    return 0;
  }

  while (elements > 0) {
    cout<<"Ingrese un numero: ";
    cin>>input;
    insertQueue(front, end, input);
    elements--;
  }

  printQueue(front);

  getch();
  return 0;
}