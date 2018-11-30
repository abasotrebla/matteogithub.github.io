/* BMI*/
#include <stdio.h>
int main()
{
	float altezza,peso,bmi;
	printf("Inserisci altezza in m:\n");
	scanf("%f",&altezza);
	printf("Inserisci peso in Kg:\n");
	scanf("%f",&peso);
	bmi=peso/(altezza*altezza);
	if(bmi<=20)
		printf("Il tuo BMI e' pari a %.2f e sei sottopeso\n",bmi);
		else if (bmi>20 && bmi<=30)
			printf("Il tuo BMI e' pari a %.2f e sei normopeso\n",bmi);
			else printf("Il tuo BMI e' pari a %.2f e sei sovrappeso\n",bmi);
	return 0;
}
