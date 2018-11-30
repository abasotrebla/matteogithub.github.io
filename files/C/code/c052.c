#include <stdio.h>
#define DIM 100

int main()
{
    char parola[]="Elementi di Informatica";
    char altra_parola[DIM];
    int i;

    for(i=0;parola[i]!='\0';i++)
      altra_parola[i]=parola[i];

    altra_parola[i]='\0';
    printf("Prima: %s - Seconda: %s\n",parola,altra_parola);
}
