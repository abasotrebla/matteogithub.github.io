#include <stdio.h>

int somma(int,int);

int main() {
  int a=1,b=1,sum;

  sum=somma(a,b);
  printf("\nLa somma vale %d\n",sum);
}

int somma(int c,int d) {
  int s;
  s=c+d;
  return s;
}
