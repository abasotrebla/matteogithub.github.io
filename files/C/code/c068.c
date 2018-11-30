#include <stdio.h>
int main() {
    struct lista_valori
    {
        int num;
        struct lista_valori *next;
    };
    struct lista_valori val1,val2,val3;
    struct lista_valori *punt_lista;

    val1.num=10;
    val1.next=&val2;
    val2.num=20;
    val2.next=&val3;
    val3.num=30;
    val3.next=NULL;

    punt_lista=&val1;

    while(punt_lista != NULL) {
      printf("%d ",punt_lista->num);
      punt_lista=punt_lista->next;
    }
}
