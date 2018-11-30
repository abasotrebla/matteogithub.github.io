#include <stdio.h>

void scambia(int *, int *);

int main() {

  int x=0,y=1;
  printf("\nPrima x vale %d e y vale %d",x,y);
  scambia(&x, &y);
  printf("\nDopo x vale %d e y vale %d\n",x,y);
}

void scambia(int *x, int *y) {
  int tmp;
  tmp=*x;
  *x=*y;
  *y=tmp;
}
