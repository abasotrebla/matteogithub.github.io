#include <stdio.h>

int main()
{
  int base, altezza;

  printf("Inserisci la base: ");
  scanf("%d", &base);

  printf("Inserisci l'altezza: ");
  scanf("%d", &altezza);

  printf("L'area del rettangolo vale: %d\n",base * altezza);

  return 0;
}
