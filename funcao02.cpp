#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "BT_Funcao.h"

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int val1, val2, val3, maior;
	
	printf("\n--- Descobrindo o valor maior! ---\n");
	
	printf("\nInsira o 1º valor: ");
	scanf("%i", &val1);
	
	printf("\nInsira o 2º valor: ");
	scanf("%i", &val2);
	
	printf("\nInsira o 3º valor: ");
	scanf("%i", &val3);
	
	maior = Fmaior (val1, val2,val3);
	
	printf("\n\nO número maior é: %i", maior);
}
