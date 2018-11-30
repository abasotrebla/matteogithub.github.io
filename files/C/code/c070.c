#include <stdio.h>
int main() {

  int n1,n2,max;
  int *p1,*p2;

  printf("Inserisci un numero: ");
  scanf("%d",&n1);
  printf("Inserisci un altro numero: ");
  scanf("%d",&n2);

  p1=&n1;
  p2=&n2;

  if(*p1>*p2) max=*p1;
  else max=*p2;
  printf("Il valore maggiore e' %d", max);
}
