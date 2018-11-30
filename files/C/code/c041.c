//ricerca
#include <stdio.h>
#define DIM 100

int main()
{
    int v[DIM], n, i, elem;

    do  {
      printf("Inserisci dimensione array: \n");
      scanf("%d", &n);
    } while(n<1 || n>DIM);
    printf("Inserisci i %d elementi:\n",n);
    for(i=0;i<n;i++)  {
        printf("elementodi indice - %d : ",i);
        scanf("%d",&v[i]);
    }
    printf("\nInserisci elemento da ricercare: ");
    scanf("%d",&elem);
    i=0;
    while(elem!=v[i] && i<n) ++i;
    if(elem==v[i]) printf("Elemento presente in pos %d\n",i);
    else printf("Elemento non presente\n");
}
