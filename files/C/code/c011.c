/* pos o neg */
#include <stdio.h>

int main()
{
  int n;

  printf("Inserisci un numero intero: ");
  scanf("%d",&n);
  if(n>=0)
    printf("\n%d e' positivo\n",n);
  else
    printf("\n%d e' negativo\n",n);

  return 0;
}
