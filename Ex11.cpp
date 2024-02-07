#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int idade;
	
	printf("\nInforme a sua idade:");
	scanf("%i", &idade);
	
	if(idade >= 16 && idade < 18 || idade > 70)
	{
		printf("\nVocê pode votar!\nMas seu voto não é obrigarório.");
	}
	
	else if(idade >= 18)
	{
		printf("\nVocê é obrigado a votar!");
	}
	
	
	else
	{
		printf("\nVocê não possui idade para votar :(");
	}
}
