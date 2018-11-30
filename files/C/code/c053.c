//concatena due stringhe
#include <stdio.h>
#define DIM 100

int main()
{
    char parola1[]="Elementi di ";
    char parola2[]="Informatica";
    char concat[DIM];
    int i,j;

    for(i=0;parola1[i]!='\0';++i)
        concat[i]=parola1[i];

    for(j=0;parola2[j]!='\0';++j)
        concat[i+j]=parola2[j];

    printf("%s\n",concat);
}
