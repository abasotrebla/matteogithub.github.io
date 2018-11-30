#include <stdio.h>
int main()
{
  int i=1,n,num,somma=0;
  float media;

  printf("Quanti n vuoi inserire? ");
  scanf("%d",&n);
  while(i<=n)
  {
    printf("\nInserisci numero %d: ",i);
    scanf("%d",&num);
    somma+=num;
    ++i;
  }
  media=(float)somma/n;
  printf("\nLa media vale: %f\n",media);
}
