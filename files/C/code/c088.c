#include <stdio.h>

int quadrato(int);
int n=4; //variabile globale

int main() {

  printf("\nIl quadrato di %d vale %d\n",n,quadrato(n));
  //Il quadrato di 4 vale 16
  printf("Ora n vale: %d\n",n);
  //Ora n vale 4
}

int quadrato(int n) {
  n=n*n;
  return n;
}
