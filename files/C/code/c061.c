#include <stdio.h>

int main()
{
  int n=10;
  int *p;

  p=&n;
  printf("%d %d",n,*p);
}
