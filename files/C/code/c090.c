#include <stdio.h>

int quadrato();
int n=4; //variabile globale

int main() {

  printf("\nIl quadrato di %d vale %d\n",n,quadrato());
  //Il quadrato di 4 vale 16
  printf("Ora n vale: %d\n",n);
  //Ora n vale 16
  int n=5;
  printf("\nIl quadrato di %d vale %d\n",n,quadrato());
  //Il quadrato di 5 vale 256
  printf("Ora n vale: %d\n",n);
  //Ora n vale 5
}

int quadrato() {
  n=n*n;
  return n;
}
