#include <stdio.h>
#define DIM 10

void ordina(int *, int);
void scambia(int *, int *);

int main() {
  int n,v[DIM],i;

  do  {
    printf("Inserisci dimensione array: \n");
    scanf("%d", &n);
  } while(n<1 || n>DIM);

  printf("Inserisci i %d elementi:\n",n);
  for(i=0;i<n;i++)  {
      printf("elemento di indice - %d : ",i);
      scanf("%d",&v[i]);
  }

  ordina(v, n);
  printf("\nVettore ordinato: ");
  for(i=0;i<n;i++)
      printf("%d ",v[i]);
}

void ordina(int *v, int n) {
  int i,j,tmp;

  for(i=0; i<n-1; i++)
      for(j=0; j<n-1; j++)
          if(*(v+j) > *(v+j+1))
            scambia((v+j), (v+j+1));
}

void scambia(int *x, int *y) {
  int tmp;
  tmp=*x;
  *x=*y;
  *y=tmp;
}
