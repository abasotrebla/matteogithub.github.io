//array in ordine crescente BUBBLESORT
#include <stdio.h>
#define DIM 100

int main()
{
    int v[DIM], n, i, j, tmp;

    do  {
      printf("Inserisci dimensione array: \n");
      scanf("%d", &n);
    } while(n<1 || n>DIM);
    printf("Inserisci i %d elementi:\n",n);
    for(i=0;i<n;i++)  {
        printf("elementodi indice - %d : ",i);
        scanf("%d",&v[i]);
    }

    for(i=0; i<n-1; i++)  {
        for(j=0; j<n-1; j++) {
            if(v[j] > v[j+1]) {
                tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }
        }
    }
    printf("\nElementi in ordine crescente:\n");
    for(i=0; i<n; i++)
        printf("%d  ", v[i]);
}
