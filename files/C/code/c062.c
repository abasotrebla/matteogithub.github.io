#include <stdio.h>

int main()
{
  int n=10,m;
  int *p,*q;

  p=&n;
  m=*p;
  n=20;
  printf("%d %d %d",n,*p,m);

  *p=30;
  printf("%d %d %d",n,*p,m);

  q=p;
  printf("%d %d %d",n,*p,*q);
}
