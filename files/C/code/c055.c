#include <stdio.h>
#define DIM 100

int main()
{
    char stringa[DIM];
    int i;

    printf("Inserisci testo: ");
    for(i=0;((stringa[i]=getchar())!='\n') && (i<DIM);i++);
    stringa[i]='\0';
    printf("Parola: %s \n",stringa);
}
