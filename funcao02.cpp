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
	
	printf("\nInsira o 1� valor: ");
	scanf("%i", &val1);
	
	printf("\nInsira o 2� valor: ");
	scanf("%i", &val2);
	
	printf("\nInsira o 3� valor: ");
	scanf("%i", &val3);
	
	maior = Fmaior (val1, val2,val3);
	
	printf("\n\nO n�mero maior �: %i", maior);
}
