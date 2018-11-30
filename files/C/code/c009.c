/* Conversione tra valori */
#include <stdio.h>

int main()
{
    float f1=3.7, f2;
    int i1,i2=-10;

    i1=f1; //conversione da float ad intero: 3
    printf("%f assegnato ad intero produce: %d\n", f1, i1);

    f1=i2; // conversione da intero a float: -10.000
    printf("%d assegnato a float produce: %f\n", i2, f1);

    f1=i2/3; // divisione tra interi: -3.000
    printf("%d diviso 3 produce: %f\n", i2, f1);

    f2=i2/3.0; // intero diviso float: -3.333
    printf("%d diviso 3.0 produce: %f\n",i2,f2);

    f2=(float) i2/3; //cast: -3.333
    printf("(float) %d diviso 3 produce: %.1f\n",i2,f2);

    printf("Dim intero %ld\n",sizeof(int));

    int x=0;
    if(x==0) printf("x vale 0");

    return 0;
}
