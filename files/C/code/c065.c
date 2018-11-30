#include <stdio.h>
#define NOME 50

int main() {
    struct anagr
    {
        int matricola;
        char nome[NOME];
        char cognome[NOME];
    };

    struct anagr studente;
    struct anagr *pointer;

    pointer=&studente;

    printf("\nNome studente: ");
    scanf("%s",pointer->nome);
    printf("\nCognome studente: ");
    scanf("%s",pointer->cognome);
    printf("\nMatricola: ");
    scanf("%d",&pointer->matricola);

    printf("\n\nDati studente: ");
    printf("%s %s - matricola %d\n",studente.nome,
    studente.cognome,studente.matricola);
}
