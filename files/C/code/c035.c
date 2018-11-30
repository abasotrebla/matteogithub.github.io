#include <stdio.h>
#define N 10

int main()
{
  int i,n,vett[N],somma=0;

  printf("Lunghezza vettore? ");
  scanf("%d",&n);
  for(i=0;i<n;++i)  {
    printf("\nInserisci numero %d: ",i+1);
    scanf("%d",&vett[i]);
    somma+=vett[i];
    }
  printf("\nLa somma vale: %d\n",somma);
}
