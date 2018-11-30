/* Pari dispari */
#include <stdio.h>

int main()
{
  int n;

  printf("Inserisci un numero intero: ");
  scanf("%d",&n);
  if(n%2==0)
    printf("\n%d e' pari\n",n);
  else
    printf("\n%d e' dispari\n",n);

  return 0;
}
