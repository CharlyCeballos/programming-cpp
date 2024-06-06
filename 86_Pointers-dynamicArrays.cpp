#include <iostream>
#include <conio.h>
#include <stdlib.h> // para usar new y delete
using namespace std;
int notesLength = 0;
float *calif;

void postNotes() {
  cout<<"Ingrese el numero de parciales: ";
  cin>>notesLength;
  fflush(stdin);
  calif = new float[notesLength]; // Crea el arreglo
  cout<<endl;

  for (int i = 0; i < notesLength; i++) {
    cout<<"Ingrese la calificacion del parcial "<<i+1<<": ";
    cin>>calif[i];
    fflush(stdin);
  }
}

void getNotes() {
  cout<<endl<<endl<<"Sus calificaciones fueron: ";
  for (int i = 0; i < notesLength; i++) {
    cout<<endl<<"La calificacion del parcial "<<i+1<<" es: "<<calif[i];
  }
}

int main() {
  postNotes();
  getNotes();

  delete[] calif; //Libera el espacio de memoria usado por el arreglo calif

  getch();
  return 0;
}
