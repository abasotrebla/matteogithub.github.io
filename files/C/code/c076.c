#include <stdio.h>
#define DIM 5

int main() {
  int v[DIM],n,i;
  int num,pos;

  do  {
    printf("Dimensione array: \n");
    scanf("%d", &n);
  } while(n<1 || n>DIM);

  printf("Inserisci elementi:\n");
  for(i=0;i<n;i++)  {
      printf("elemento di indice - %d : ",i);
      scanf("%d",&v[i]);
  }

  printf("\nArray: ");
  for(i=0;i<n;i++)
      printf("%d ",v[i]);

  printf("\nInserisci nuovo elemento ");
  scanf("%d",&num);
  printf("\nInserisci la posizione ");
  scanf("%d",&pos);

  if(pos<0 || pos>n || pos>DIM || n==DIM) {
    printf("\nInserimento non valido ");
  }
  else {
    //sposta a destra
    for(i=n;i>pos;i--)
      v[i]=v[i-1];
    v[pos]=num;
    n++;
  }

  printf("\nArray dopo ins: ");
  for(i=0;i<n;i++)
      printf("%d ",v[i]);
}
