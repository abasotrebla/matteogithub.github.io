#include <stdio.h>

int main()
{
  const float Pi=3.14;
  float raggio, diametro, circ, area;
  int check;

  printf("Inserisci raggio: ");
  check=scanf("%f",&raggio);
  printf("Check vale: %d ",check);

  diametro=2*raggio;
  circ=diametro*Pi;
  area=Pi*raggio*raggio;

  printf("Diametro: %f ",diametro);
  printf("Circonferenza: %f ",circ);
  printf("Area: %f ",area);

  return 0;
}
