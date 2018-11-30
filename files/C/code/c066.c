#include <stdio.h>
#define NOME 50

int main() {
    struct st
    {
        int *p1;
        int *p2;
    };

    struct st st_pointers;
    int n1=10, n2;

    st_pointers.p1=&n1;
    st_pointers.p2=&n2;

    *st_pointers.p1=20;
    *st_pointers.p2=*st_pointers.p1 * 2;

    printf("\n%d %d",n1,n2); //stampa 20 40
}
