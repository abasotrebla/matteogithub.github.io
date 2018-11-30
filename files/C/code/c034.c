#include <stdio.h>
#define NVOTI 10

int main()
{
  int i,n,voti[NVOTI],somma=0;
  float media;

  printf("Quanti n vuoi inserire? ");
  scanf("%d",&n);
  for(i=0;i<n;++i)  {
    printf("\nInserisci voto %d: ",i+1);
    scanf("%d",&voti[i]);
    somma+=voti[i];
    }
  media=(float)somma/n;
  printf("\nLa media vale: %f\n",media);
}
