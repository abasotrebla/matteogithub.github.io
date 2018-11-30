#include <stdio.h>
int main() {

  int i,vett[3]={1,2,3};

  for(i=0;i<3;i++)
    printf("%d ",vett[i]);

  for(i=0;i<3;i++)
    printf("%d ",*(vett+i));

  // for(i=0;i<3;i++)
  //   printf("%d ",*(vett++));
}
