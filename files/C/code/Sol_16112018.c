#include <stdio.h>
#define DIM 10

int main() {
  int v[DIM],s[DIM],n,i,j,ind,count=0;

  do  {
    printf("Inserisci dimensione array: \n");
    scanf("%d", &n);
  } while(n<1 || n>DIM);

  printf("Inserisci i %d elementi:\n",n);
  for(i=0;i<n;i++)  {
      printf("elemento di indice - %d : ",i);
      scanf("%d",&v[i]);
  }

  printf("\nElementi inseriti: ");
  if(v[0]%2==0)
      for(i=0;i<n;i++)
          printf("%d ",v[i]);
    else
      for(i=n-1;i>=0;i--)
          printf("%d ",v[i]);

  ind=0;
  for(i=0;i<n;i++) {
    for(j=0;j<n;j++)
      if(v[i]==v[j]) count++;

    if(count==1) {
      s[ind]=v[i];
      ind++;
    }
    count=0;
  }

  printf("\nElementi unici: ");
  for(i=0;i<ind;i++)
      printf("%d ",s[i]);
}
