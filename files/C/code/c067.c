#include <stdio.h>
int main() {
    struct lista_valori
    {
        int num;
        struct lista_valori *next;
    };
    struct lista_valori val1,val2;

    val1.num=10;
    val2.num=20;
    val1.next=&val2;

    printf("%d",val1.next->num);
}
