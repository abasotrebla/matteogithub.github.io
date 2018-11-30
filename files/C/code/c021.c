#include <stdio.h>
int main()
{
  int i,n,somma=0;

  for(i=1;i<=3;i=i+1)
  {
    scanf("%d",&n);
    somma=somma+n;
  }
  printf("%d",somma);
}
