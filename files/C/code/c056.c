#include <stdio.h>
#define NOME 20

int main() {
    struct anagr
    {
        int matricola;
        char nome[NOME];
        char cognome[NOME];
    };

    struct anagr studente;

    printf("\nNome studente: ");
    scanf("%s",studente.nome);
    printf("\nCognome studente: ");
    scanf("%s",studente.cognome);
    printf("\nMatricola: ");
    scanf("%d",&studente.matricola);

    printf("\n\nLo studente si chiama: ");
    printf("%s %s e la sua matricola e' %d\n",studente.nome,studente.cognome,studente.matricola);
}
