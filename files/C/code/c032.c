/* BMI*/
#include <stdio.h>
int main()
{
	float altezza,peso,bmi;
	char sel='Y';

	while(sel!='N')
	{

		printf("Inserisci altezza in m:\n");
		scanf("%f",&altezza);
		printf("Inserisci peso in Kg:\n");
		scanf("%f",&peso);
		bmi=peso/(altezza*altezza);
		if(bmi<=20)
			printf("BMI: %.2f; sottopeso\n",bmi);
			else if (bmi>20 && bmi<=30)
				printf("BMI: %.2f; normopeso\n",bmi);
				else printf("BMI: %.2f; sovrappeso\n",bmi);

		printf("N per uscire, Y per continuare: \n");
		scanf(" %c",&sel);
		while(sel!='N' && sel!='Y')
		{
			printf("Scelta non valida \n");
			printf("N per uscire, Y per continuare: \n");
			scanf(" %c",&sel);
		}
	}
}
