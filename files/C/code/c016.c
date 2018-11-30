#include <stdio.h>
int main()
{
  int n1,n2;
  char oper;

  printf("Inserisci un primo numero \n");
  scanf("%d",&n1);

  printf("\nDefinisci l'operazione \n");
  printf("+ - * /\n");
  scanf(" %c",&oper);

  printf("\nInserisci un secondo numero \n");
  scanf("%d",&n2);

  switch (oper)
  {
    case '+':
    	printf("%d %c %d: %d\n",n1,oper,n2,n1+n2);
    	break;
    case '-':
    	printf("%d %c %d: %d\n",n1,oper,n2,n1-n2);
    	break;
    case '*':
      printf("%d %c %d: %d\n",n1,oper,n2,n1*n2);
      break;
    case '/':
      printf("%d %c %d: %d\n",n1,oper,n2,n1/n2);
      break;
    default:
      printf("Scelta non valida!\n");
  }
  return 0;
}
