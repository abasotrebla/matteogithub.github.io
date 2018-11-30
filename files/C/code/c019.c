#include <stdio.h>
int main()
{
  int sel,n,m;
  const float Pi=3.14;

  printf("Calcolo area\n");
  printf("1: cerchio; ");
  printf("2: rettangolo; ");
  printf("3: triangolo.\n");
  scanf("%d",&sel);

  switch (sel)
  {
    case 1:
      printf("Raggio: \n");
      scanf("%d",&n);
    	printf("Area cerchio: %.2f\n",Pi*n*n);
    	break;
    case 2:
      printf("Lati: \n");
      scanf("%d%d",&n,&m);
      printf("Area rettangolo: %d\n",n*m);
    	break;
    case 3:
      printf("Base e altezza: \n");
      scanf("%d%d",&n,&m);
      printf("Area triangolo: %.2f\n",n*m*.5);
      break;
    default:
      printf("Scelta non valida!\n");
  }
  return 0;
}
