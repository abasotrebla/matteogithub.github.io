#include <stdio.h>
#define DIM 100
int main()
{
    int i,j,k,m1[DIM][DIM],rsum[DIM],csum[DIM],n;

    do  {
      printf("Dimensione matrice quadrata: \n");
      scanf("%d", &n);
    } while(n<1 || n>DIM);

    printf("Inserisci elementi della matrice:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("elemento - [%d],[%d] : ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    for(i=0;i<n;i++) {
        rsum[i]=0;
        for(j=0;j<n;j++)
            rsum[i]=rsum[i]+m1[i][j];
    }

    for(i=0;i<n;i++) {
        csum[i]=0;
        for(j=0;j<n;j++)
            csum[i]=csum[i]+m1[j][i];
    }

    printf("La somma righe e colonne vale:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            printf("% 4d",m1[i][j]);
        printf("% 8d",rsum[i]);
        printf("\n");
    }
    printf("\n");
    for(j=0;j<n;j++) {
        printf("% 4d",csum[j]);
    }
    printf("\n\n");
}
