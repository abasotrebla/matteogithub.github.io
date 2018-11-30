//copia tra arrays
#include <stdio.h>
#define DIM 100

int main()
{
    int arr1[DIM], arr2[DIM];
    int i, n;

    printf("Numero elementi del primo array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("elemento - %d : ",i+1);
        scanf("%d",&arr1[i]);
    }

    for(i=0; i<n; i++)
        arr2[i] = arr1[i];

    printf("\nPrimo array:\n");
    for(i=0; i<n; i++)
        printf("%3d", arr1[i]);
    printf("\n\nSecondo array:\n");
    for(i=0; i<n; i++)
        printf("%3d", arr2[i]);
}
