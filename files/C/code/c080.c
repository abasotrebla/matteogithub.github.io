#include <stdio.h>

void messaggio();

int main() {
  int i;

  for(i=1;i<=5;i++)
    messaggio();  
}

void messaggio() {

  printf("\nLa mia prima funzione\n");
}
