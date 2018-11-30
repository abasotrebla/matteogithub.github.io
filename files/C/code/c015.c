#include <stdio.h>
int main()
{
  int n;
  printf("Inserisci un numero intero \n");
  scanf("%d",&n);

  printf("%d\n", n % 2);

  switch (n % 2)
  {
    case 0:
    	printf("Il numero %d e' pari\n",n);
    	break;
    case 1:
      printf("Il numero %d e' dispari\n",n);
    	break;
  }
  return 0;
}
