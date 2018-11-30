#include <stdio.h>
#define DIM 10

int calcola_minimo(int *, int);

int main() {
  int n,v[DIM],i,min;

  do  {
    printf("Inserisci dimensione array: \n");
    scanf("%d", &n);
  } while(n<1 || n>DIM);

  printf("Inserisci i %d elementi:\n",n);
  for(i=0;i<n;i++)  {
      printf("elemento di indice - %d : ",i);
      scanf("%d",&v[i]);
  }

  min=calcola_minimo(v, n);
  printf("\nIl minimo vale: %d\n", min);
}

int calcola_minimo(int *v, int n) {
  int i,min=*v;

  for(i=0;i<n;i++) {
    if(*(v+i)<min)
      min=*(v+i);
  }
  return min;
}
