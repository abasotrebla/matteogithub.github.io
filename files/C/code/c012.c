/* anno bisestile */
#include <stdio.h>

int main()
{
   int anno;

   printf("Inserisci l'anno: ");
   scanf("%d",&anno);

   if ((anno%4 == 0 && anno%100 != 0) || anno%400 == 0)
      printf("\n%d e' bisestile\n", anno);
   else
      printf("\n%d non e' bisestile\n", anno);

   return 0;
}
