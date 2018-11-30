#include <stdio.h>
#define DIM_NOME 20
#define DIM_STUD 100

int main() {
    struct anagr {
        int voto_laurea;
        char nome[DIM_NOME];
        char cognome[DIM_NOME];
    };

    struct anagr studente[DIM_STUD];
    int n_studenti,somma=0,i;
    float media;

    printf("\nQuanti studenti vuoi inserire? ");
    scanf("%d",&n_studenti);
    printf("\nInserisci studenti:\n");
    for(i=0;i<n_studenti;++i) {
        printf("Studente - %d: ", i+1);
        printf("\nNome studente: ");
        scanf("%s",studente[i].nome);
        printf("\nCognome studente: ");
        scanf("%s",studente[i].cognome);
        printf("\nVoto di laurea: ");
        scanf("%d",&studente[i].voto_laurea);
        somma+=studente[i].voto_laurea;
    }
    media=(float)somma/n_studenti;
    printf("\n\nElenco studenti:\n");
    for(i=0;i<n_studenti;++i) {
        printf("%s %s - diff media: %.1f\n",studente[i].nome,studente[i].cognome,studente[i].voto_laurea-media);
    }
}
