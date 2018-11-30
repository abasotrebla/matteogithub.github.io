#include <stdio.h>
#define DIM 50

int main()
{
    int m1[DIM][DIM],m2[DIM][DIM],sum[DIM][DIM],i,j,n;

    do  {
      printf("Dimensione matrice quadrata: \n");
      scanf("%d", &n);
    } while(n<1 || n>DIM);

    printf("Elementi della prima matrice:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("elemento - [%d],[%d] : ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    printf("Elementi della seconda matrice:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("elemento - [%d],[%d] : ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            sum[i][j]=m1[i][j]+m2[i][j];

    printf("\n\nLa somma vale: \n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++)
            printf("%d\t",sum[i][j]);
    }
    printf("\n\n");
}
