#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "funcao03.h"

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int bandeira;
	float km, total;
	
	printf("\n---## Programa de Taxi ##---\n");
	
	printf("\nInsira qual a bandeirada (1 ou 2): ");
	scanf("%i", &bandeira);
	
	printf("\nInsira a quantidade de km rodados: ");
	scanf("%f", &km);
	
	if (bandeira == 1)
	{
		total = bandeira1 (km);
	}
	
	else
	{
		total = bandeira2 (km);
	}
	
	printf("\n\nO total a pagar pela corrida é R$%.2f", total);
}
