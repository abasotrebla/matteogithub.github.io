#include <stdio.h>
#define DIM_NOME 20
#define DIM_STUD 1000
#define DIM_ESAME 50

int main() {
    struct corso {
        int voto;
        char nome[DIM_NOME];
    };

    struct anagr {
        char nome[DIM_NOME];
        char cognome[DIM_NOME];
        struct corso esame[DIM_ESAME];
    };

    struct anagr studente[DIM_STUD];
    int n_studenti,n_esami,somma[DIM_STUD]={0};
    float media[DIM_STUD]={0};

    printf("Qunati studenti vuoi inserire? ");
    scanf("%d",&n_studenti);
    printf("\nInserisci studenti.");
    for(int i=0;i<n_studenti;++i) {
        printf("\nStudente - %d", i+1);
        printf("\nNome studente: ");
        scanf("%s",studente[i].nome);
        printf("\nCognome studente: ");
        scanf("%s",studente[i].cognome);
        printf("\nQuanti esami ha sostenuto?: ");
        scanf("%d",&n_esami);
        for(int j=0;j<n_esami;++j) {
            printf("\nEsame - %d",j+1);
            printf("\nNome corso: ");
            scanf("%s",studente[i].esame[j].nome);
            printf("\nVoto: ");
            scanf("%d",&studente[i].esame[j].voto);
            somma[i]+=studente[i].esame[j].voto;
        }
        media[i]=(float)somma[i]/n_esami;
    }
    printf("\n\nElenco studenti\n");
    for(int i=0;i<n_studenti;++i) {
        printf("%s %s - media: %.1f\n",studente[i].nome,studente[i].cognome,media[i]);
    }
}
