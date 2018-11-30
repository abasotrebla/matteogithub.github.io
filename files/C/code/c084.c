#include <stdio.h>

float bmi(float,float);

int main() {
  float peso,altezza,mio_bmi;

  printf("\nPeso in Kg: ");
  scanf("%f",&peso);
  printf("\nAltezza in m: ");
  scanf("%f",&altezza);
  mio_bmi=bmi(peso,altezza);
  printf("\nIl bmi vale %.2f\n",mio_bmi);
}

float bmi(float p,float a) {
  
  return p/(a*a);
}
