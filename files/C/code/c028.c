#include <stdio.h>
int main()
{
  int i=1,n,somma=0;

  while(i<=3)
  {
    printf("\nInserisci numero %d: ",i);
    scanf("%d",&n);
    somma=somma+n;
    i++;
  }
  printf("\nLa somma vale: %d\n",somma);
}
