#include <stdio.h>
int main()
{
  int i,n;

  printf("Inserisci un numero ");
  scanf("%d",&n);
  for(i=1;i<=10;++i)
    printf("\n%d * %d = %d",i,n,i*n);
}
