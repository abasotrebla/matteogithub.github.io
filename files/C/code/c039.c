//Frequenza voti da 0 a 10
#include <stdio.h>
#define VOTI 11

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
      } while(voto<0 || voto>10);
      ++counter_voti[voto];
    }
    printf("Voto; Frequenza\n");
    for(i=0;i<VOTI;++i) printf("%3d -> %10d\n",i,counter_voti[i]);
}
