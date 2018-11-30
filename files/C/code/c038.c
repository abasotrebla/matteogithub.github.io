#include <stdio.h>
#define NVOTI 10

int main()
{
  int i,n,voti[NVOTI],somma=0,min,max;
  float media;

  do  {
    printf("Quanti n vuoi inserire? ");
    scanf("%d",&n);
  } while(n<1 || n>NVOTI);

  for(i=0;i<n;++i)  {
    printf("\nInserisci voto %d: ",i+1);
    scanf("%d",&voti[i]);
    somma+=voti[i];
    }
  media=(float)somma/n;
  printf("\nLa media vale: %.1f\n",media);

  min=voti[0];
  max=voti[0];
  for(i=0;i<n;++i) {
    if(voti[i]<min) min=voti[i];
    if(voti[i]>max) max=voti[i];
  }
  printf("\nIl voto piu' alto e': %d\n",max);
  printf("\nIl voto piu' basso e': %d\n",min);
}
