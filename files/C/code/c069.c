#include <stdio.h>
int main() {

  int n1,n2;
  int *p1,*p2;

  printf("Inserisci un numero: ");
  scanf("%d",&n1);
  printf("Inserisci un altro numero: ");
  scanf("%d",&n2);

  p1=&n1;
  p2=&n2;

  printf("La somma vale %d", *p1 + *p2);
}
