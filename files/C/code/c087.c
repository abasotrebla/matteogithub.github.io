#include <stdio.h>

int quadrato(int);
int n=4; //variabile globale

int main() {
  int n=3; //ATTENZIONE al mascheramento

  printf("\nIl quadrato di %d vale %d\n",n,quadrato(n));
  //Il quadrato di 3 vale 9
}

int quadrato(int n) {
  n=n*n;
  return n;
}
