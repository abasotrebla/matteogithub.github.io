#include <stdio.h>
int main()
{
  int n,i,voto,somma=0,soglia,sopra;

  printf("Quanti voti?");
  scanf("%d",&n);
  printf("Che soglia?");
  scanf("%d",&soglia);
  for(i=1;i<=n;++i)
  {
    printf("Inserisci voto %d: ",i);
    scanf("%d",&voto);
    somma+=voto;
    if(voto>soglia) ++sopra;
  }
  printf("\nLa media e': %.1f\n",(float)somma/n);
  printf("\n%d voti sopra %d", sopra,soglia);
}
