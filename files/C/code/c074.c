#include <stdio.h>
#define DIM 10
int main() {

  int i,n,vett[DIM],*vett_ptr;

  vett_ptr=vett;
  do {
    printf("Inserisci dimensione array: \n");
    scanf("%d", &n);
  } while(n<1 || n>DIM);

  printf("Inserisci i %d elementi:\n",n);
  for(i=0;i<n;i++) {
      printf("elementodi indice - %d : ",i);
      scanf("%d",&vett[i]);
      //scanf("%d",vett+i);
      //scanf("%d",vett_ptr+i);
  }

  for(i=0;i<n;i++)
    printf("%d ",vett[i]);

  for(i=0;i<n;i++)
    printf("%d ",*(vett+i));

  for(i=0;i<n;i++)
    printf("%d ",*(vett_ptr+i));

  for(i=0;i<n;i++)
    printf("%d ",*(vett_ptr++));
}
