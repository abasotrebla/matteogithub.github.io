#include <stdio.h>
#define DIM_NOME 20
#define DIM_STUD 100

int main() {
    struct anagr {
        int matricola;
        char nome[DIM_NOME];
        char cognome[DIM_NOME];
    };

    struct anagr studente[DIM_STUD];
    int n_studenti;

    printf("\nQuanti studenti vuoi inserire? ");
    scanf("%d",&n_studenti);

    printf("Inserisci studenti:\n");
    for(int i=0;i<n_studenti;++i) {
        printf("Studente - %d: ", i+1);
        printf("\nNome studente: ");
        scanf("%s",studente[i].nome);
        printf("\nCognome studente: ");
        scanf("%s",studente[i].cognome);
        printf("\nMatricola: ");
        scanf("%d",&studente[i].matricola);
    }

    printf("\n\nElenco studenti:\n");
    for(int i=0;i<n_studenti;++i) {
        printf("%s %s - matricola: %d\n",studente[i].nome,studente[i].cognome,studente[i].matricola);
    }
}
