//Frequenza voti da 18 a 30
#include <stdio.h>
#define VOTI 13
#define VMIN 18
#define VMAX 30

int main()
{
    int i,counter_voti[VOTI],voto,n_voti;

    for(i=0;i<VOTI;++i)
        counter_voti[i]=0;
        
    printf("Quanti voti devi registrare?\n");
    scanf("%d",&n_voti);
    for(i=0;i<n_voti;++i) {
      do  {
        printf("Inserisci voto %d: \n",i+1);
        scanf("%d",&voto);
      } while(voto<VMIN || voto>VMAX);
      ++counter_voti[voto-VMIN];
    }
    printf("Voto; Frequenza\n");
    for(i=0;i<VOTI;++i)
      printf("%3d -> %10d\n",i+VMIN,counter_voti[i]);
}
