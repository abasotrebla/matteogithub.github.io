#include <stdio.h>
#define DIM 10

void modifica(int *, int);

int main() {
  int n,v[DIM],i;
  float media;

  do  {
    printf("Inserisci dimensione array: \n");
    scanf("%d", &n);
  } while(n<1 || n>DIM);

  printf("Inserisci i %d elementi:\n",n);
  for(i=0;i<n;i++)  {
      printf("elemento di indice - %d : ",i);
      scanf("%d",&v[i]);
  }

  modifica(v, n);

  for(i=0;i<n;i++)
      printf("\nelemento di indice - %d: %d ",i, v[i]);
}

void modifica(int *v, int n) {
  int i;

  for(i=0;i<n;i++,v++)
    *v=0;
}
