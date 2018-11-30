#include <stdio.h>

int quadrato();
int n=4; //variabile globale

int main() {

  printf("\nIl quadrato di %d vale %d\n",n,quadrato());
  //Il quadrato di 4 vale 16
  printf("Ora n vale: %d\n",n);
  //Quanto vale n?
}

int quadrato() {
  n=n*n;
  return n;
}
