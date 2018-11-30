#include <stdio.h>

void bmi(float,float);

int main() {
  float peso,altezza;

  printf("\nPeso in Kg: ");
  scanf("%f",&peso);
  printf("\nAltezza in m: ");
  scanf("%f",&altezza);
  bmi(peso,altezza);
}

void bmi(float p,float a) {

  printf("\nIl bmi vale %.2f\n",p/(a*a));
}
