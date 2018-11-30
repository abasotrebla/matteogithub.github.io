#include <stdio.h>
int main()
{
  const float Pi=3.14;
  float raggio, diametro, circ, area;
  char sel='Y';

  while(sel=='Y')
  {
    printf("Inserisci raggio: ");
    scanf("%f",&raggio);
    diametro=2*raggio;
    circ=diametro*Pi;
    area=Pi*raggio*raggio;
    printf("Diametro: %f ",diametro);
    printf("Circonferenza: %f ",circ);
    printf("Area: %f ",area);
    printf("\nY per continuare, N per uscire\n");
    scanf(" %c",&sel);
  }
}
