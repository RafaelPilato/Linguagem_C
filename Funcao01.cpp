#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "BT_Funcao.h"

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int num1, num2, soma;
	
	printf("\n--- Programa de Soma ---\n");
	
	printf("\nInsira o 1� n�mero: ");
	scanf("%i", &num1);
	
	printf("\nInsira o 2� n�mero: ");
	scanf("%i", &num2);
	
	soma = somaF(num1, num2);
	
	printf("\n\nA somas dos n�meros � %i", soma);
}
