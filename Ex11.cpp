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
		printf("\nVoc� pode votar!\nMas seu voto n�o � obrigar�rio.");
	}
	
	else if(idade >= 18)
	{
		printf("\nVoc� � obrigado a votar!");
	}
	
	
	else
	{
		printf("\nVoc� n�o possui idade para votar :(");
	}
}
