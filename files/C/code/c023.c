#include <stdio.h>
int main()
{
  int i,n,somma=0;

  printf("Quanto vale N? ");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
    somma+=i;
  printf("\nLa somma dei numeri natutali fino a %d vale: %d\n",n, somma);
}
