#include <stdio.h>
#include <locale.h>
#include <windows.h>


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	char nome[50], sexo;
	int qtd_masculino, qtd_feminino, i, qtd;
	float media, soma=0, idade;
	
	printf("\n---- Contador de Pessoas -----");
	
	printf("\n\nInsira a quantidade de pessoas: ");
	scanf("%i", &qtd);
	
	for(i=0; i < qtd; i++)
	{
		
		printf("\n\nInsira o %i� nome: ", i+1);
		scanf("%s", &nome);
		
		printf("\n\nUse (M) para Masculino e (F) para Feminino.");
		printf("\nInsira o sexo da %i� pessoa: ", i+1);
		scanf("%s", &sexo);
		
		printf("\n\nInforme a idade da %i� pessoa: ", i+1);
		scanf("%f", &idade);
		
		soma = soma + idade;

		if(sexo == 'M' || sexo == 'm')
		{
			qtd_masculino = qtd_masculino + 1;
		}
	
		else if (sexo == 'F' || sexo == 'f')
		{
			qtd_feminino = qtd_feminino + 1;
		}
	
		else 
		{
			printf("\n\nO sexo inserido � inv�lido!");
		}
	}
	
	media = soma / qtd;
	
	printf("\n\nO total de masculino � %i", qtd_masculino);
	printf("\nO total de fiminino � %i", qtd_feminino);
	printf("\nA m�dia de idade � %.2f", media);
}
