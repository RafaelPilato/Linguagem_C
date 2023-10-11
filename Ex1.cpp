#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int nota2, nota5, nota10, nota50, nota100, valor_reais;
		
	printf("Insira a quantidade de notas de 2 reais:");
	scanf("%i", &nota2);
	
	printf("Insira a quantidade de notas de 5 reais:");
	scanf("%i", &nota5);
	
	printf("Insira a quantidade de notas de 10 reais:");
	scanf("%i", &nota10);
	
	printf("Insira a quantidade de notas de 50 reais:");
	scanf("%i", &nota50);
	
	printf("Insira a quantidade de notas de 100 reais:");
	scanf("%i", &nota100);
	
	valor_reais = (nota2 * 2) + (nota5 * 5) + (nota10 * 10) + (nota50 * 50) + (nota100 * 100);
	
	printf("Você possui um total de R$%i", valor_reais);
}
