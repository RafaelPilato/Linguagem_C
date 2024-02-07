#include <stdio.h>
#include <locale.h>
#include <windows.h>

int consumoAgua (int litros[], int pessoas)
{
	int soma=0, i;
	
	for(i=0; i<pessoas; i++)
	{
		soma = soma + litros[i];
	}
	
	return soma;
}

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int pessoas, i, consumo, mes;
	
	printf("\n###########################\n");
	printf("     Consumo de Água");
	printf("\n###########################\n");
	
	printf("\nInsira a quantidade de pessoas na casa:");
	scanf("%i", &pessoas);
	
	int litros[pessoas];
	
	system("cls");
	
	for(i=0; i<pessoas; i++)
	{
		printf("\n###########################\n");
		printf("     Consumo de Água");
		printf("\n###########################\n");
	
		printf("\nInsira a quantidade de litros consumidos diariamente pela %iº pessoa: ", i+1);
		scanf("%i", &litros[i]);
		
		system("cls");
	}
		
	consumo = consumoAgua(litros, pessoas);
	
	mes = consumo * 30;
	
	printf("\n###########################\n");
	printf("     Consumo de Água");
	printf("\n###########################\n");
	
	printf("\nO Total de consumo mensal é de %i Litos.", mes);
}
