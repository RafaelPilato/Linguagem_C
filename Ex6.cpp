#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float nota_1, nota_2, media;
	
	
	printf("\nInsira a 1� nota:");
	scanf("%f", &nota_1);
	
	printf("Insira a 2� nota:");
	scanf("%f", &nota_2);
	
	media = (nota_1 + nota_2) / 2;
	
	if(media >= 6.0 )
	{
		printf("\nVoc� foi aprovado!");
		printf("\nSua nota final foi:%.2f", media);
	}
	
	else if(media >= 4 && media < 6)
	{
		printf("\nVoc� est� de recupera��o :(");
		printf("\nSua m�dia final foi:%.2f", media);
	}
	
	else
	{
		printf("\nVoc� reprovado :(");
		printf("\nSua m�dia final foi:%.2f", media);
	}
}
