#include <stdio.h>
int main()
{
  int giudizio;
  printf("Inserisci un giudizio tra 1-3\n");
  scanf("%d",&giudizio);

  switch (giudizio)
  {
    case 1:
    	printf("Hai assegnato 1!\n");
      	printf("Ci dispiace...\n");
    	break;
    case 2:
    	printf("Hai assegnato 2!\n");
      	printf("Grazie!\n");
    	break;
    case 3:
    	printf("Hai assegnato 3!\n");
      	printf("Grazie mille!.\n");
    	break;
    default:
    	printf("Giudizio non valido!\n");
  }
  return 0;
}
