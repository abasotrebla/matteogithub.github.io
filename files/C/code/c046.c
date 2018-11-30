#include <stdio.h>

int main() {

 struct data {
 int giorno;
 int mese;
 int anno;
};

struct data oggi;

printf("Inserisci la data di oggi: ");
scanf("%d%d%d",&oggi.giorno,&oggi.mese,&oggi.anno);
printf("\nOggi e' %d/%d/%d",oggi.giorno,oggi.mese,oggi.anno);
}
