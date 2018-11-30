#include <stdio.h>

int quadrato(int);

int main() {
  int num,q;

  printf("\nInserisci un numero intero: ");
  scanf("%d",&num);
  q=quadrato(num);
  printf("\nIl quadrato di %d vale %d\n",num,q);
}

int quadrato(int num) {

  num=num*num;
  return num;
}
