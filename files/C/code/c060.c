#include <stdio.h>
#include <string.h>
#define DIM 10

int main() {
    char stringa[DIM];

    printf("Inserisci una stringa: ");
    scanf("%s",stringa);

    printf("La tua stringa e' lunga: %ld\n",strlen(stringa));
}
