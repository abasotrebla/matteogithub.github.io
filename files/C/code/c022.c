#include <stdio.h>
int main()
{
  int i,n,somma=0;

  for(i=1;i<=3;i=i+1)
  {
    printf("\nInserisci numero %d: ",i);
    scanf("%d",&n);
    somma=somma+n;
  }
  printf("\nLa somma vale: %d\n",somma);
}
