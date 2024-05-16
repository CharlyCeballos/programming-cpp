/*
La calificación final de un estudiante es la media ponderada de tres notas: 
  La nota de prácticas que cuenta un 30% del total
  La nota teórica que cuenta un 60%
  La nota de participación que cuenta el 10% restante.
Escriba un programa que lea de la entrada estándar las tres notas de un alumno
y escriba en la salida estándar su nota final.
*/

#include <iostream>
using namespace std;

int main() {
  float practices, theory, participation, finalNote;

  cout<<endl<<"Ingrese su calificacion de las practicas: ";
  cin>>practices;
  cout<<endl<<"Ingrese su calificacion de la teoria: ";
  cin>>theory;
  cout<<endl<<"Ingrese su calificacion de participacion: ";
  cin>>participation;

  finalNote = (practices * 0.3) + (theory * 0.6) + (participation * 0.1);

  cout<<endl<<"Su calificacion final es = "<<finalNote;

  return 0;
}
