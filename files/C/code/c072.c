#include <stdio.h>
int main() {

  int i,vett[3]={1,2,3};
  int *vett_ptr;

  for(i=0;i<3;i++)
    printf("%d ",vett[i]);

  vett_ptr=vett;

  for(i=0;i<3;i++)
    printf("%d ",*(vett+i));

  for(i=0;i<3;i++)
    printf("%d ",*(vett++));

  for(i=0;i<3;i++)
    printf("%d ",*(vett_ptr++));
}
