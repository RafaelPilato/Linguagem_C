#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	float altura, peso_ideal;
	char genero;
	
	printf("\nUse (M) para Masculino e (F) para Feminino");
	printf("\nInsira o seu g�nero: ");
	scanf("%c", &genero);
	
	printf("\nInsira a sua altura em metros (ex: 1,70)\n-->Insira sua altura aqui: ");
	scanf("%f", &altura);
	
	//Masculino
	if(genero == 'M' || genero == 'm')
	{
		peso_ideal = (72.7 * altura) - 58;
		printf("\nSeu peso ideal � %.2f", peso_ideal);		
	}
	
	//Feminino
	else if(genero == 'F' || genero == 'f')
	{
		peso_ideal = (62.1 * altura) - 44.7;
		printf("\nSeu peso ideal � %.2f", peso_ideal);
	}
	
	printf("\nAgora � com voc�!!!");
}
