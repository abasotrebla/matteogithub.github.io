//leggi e stampa matrice
#include <stdio.h>
#define DIM 3
int main()
{
    int m[DIM][DIM],i,j;

    printf("Inserisci elementi nella matrice:\n");
    for(i=0;i<DIM;i++) {
        for(j=0;j<DIM;j++) {
            printf("elemento - [%d],[%d] : ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nLa matrice e': \n");
    for(i=0;i<DIM;i++) {
        printf("\n");
        for(j=0;j<DIM;j++)
            printf("%d\t",m[i][j]);
    }
}
