#include <stdio.h>

int main()
{
  int n, m, somma;

  printf("Inserisci i numeri: ");
  scanf("%d%d", &n,&m);

  somma=n+m;

  printf("%d + %d: %d\n",n,m, somma);

  return 0;
}
