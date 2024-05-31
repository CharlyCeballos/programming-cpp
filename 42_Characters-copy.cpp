#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
  char originalWord[] = "Palabra original";
  int lengthWord = strlen(originalWord);
  char copyWord[lengthWord];

  strcpy(copyWord, originalWord);

  cout<<endl<<"La palabra original es '"<<originalWord<<"'";
  cout<<endl<<"La palabra copiada es '"<<copyWord<<"'";

  getch();
  return 0;
}
