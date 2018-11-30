#include <stdio.h>
int main()
{
  int i,n,num,somma=0;
  float media;

  printf("Quanti n vuoi inserire? ");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  {
    printf("\nInserisci numero %d: ",i);
    scanf("%d",&num);
    somma+=num;
  }
  media=(float)somma/n;
  printf("\nLa media vale: %f\n",media);
}
