#include <stdio.h>
#define DIM 10
int main() {

  int i,n,vett[DIM],*vett_ptr,somma=0;

  vett_ptr=vett;
  do {
    printf("Inserisci dimensione array: \n");
    scanf("%d", &n);
  } while(n<1 || n>DIM);

  printf("\nInserisci i %d elementi: \n",n);
  for(i=0;i<n;i++) {
      printf("\nelementodi indice - %d : ",i);
      scanf("%d",vett+i);
  }

  printf("\nCalcolo la somma...");
  for(i=0;i<n;i++) {
      somma += *vett_ptr;
      vett_ptr++;
  }
  printf("\nLa somma vale: %d\n",somma);
}
