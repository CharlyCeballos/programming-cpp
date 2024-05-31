#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
  char word[] = "Palabra";
  char longWord[] = "Palabra mas larga";
  int lengthWord = 0;
  int lengthLongWord = 0;

  lengthWord = strlen(word);
  lengthLongWord = strlen(longWord);

  cout<<endl<<"Numero de caracteres de la palabra '"<<word<<"' es = "<<lengthWord;
  cout<<endl<<"Numero de caracteres de la palabra '"<<longWord<<"' es = "<<lengthLongWord;

  getch();
  return 0;
}
