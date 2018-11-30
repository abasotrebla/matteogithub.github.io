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
    scanf("%s",studente.nome);
    printf("\nCognome studente: ");
    scanf("%s",studente.cognome);
    printf("\nMatricola: ");
    scanf("%d",&studente.matricola);

    printf("\n\nDati studente: ");
    printf("%s %s - matricola %d\n",(*pointer).nome,
    (*pointer).cognome,(*pointer).matricola);
}
