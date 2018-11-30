#include <stdio.h>

void pari_dispari(int);

int main() {
  int num;

  printf("\nInserisci un numero intero ");
  scanf("%d",&num);
  pari_dispari(num);
}

void pari_dispari(int n) {

  if(n%2==0) printf("\nIl num e' pari\n");
  else printf("\nIl num e' dispari\n");
}
