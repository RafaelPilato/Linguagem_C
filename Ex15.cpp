#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Fa�a um algoritmo que leia dois valores representando o operador e o raio de uma circunfer�ncia. Caso ooperador seja igual a 1, apresentar a �rea da
circunfer�ncia (?r2). Caso o operador seja igual a 2, apresentar oper�metro da circunfer�ncia (2?r). Caso o indicador n�o seja nenhum destes valores, 
apresentar uma mensagemde erro.*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int operador;
	float raio, calculo;
	
	printf("\nInsira o operador: ");
	scanf("%i", &operador);
	
	printf("\nInsira o raio da circunfer�ncia (ex: 1,25) em cm: ");
	scanf("%f", &raio);
	
	if (operador == 1)
	{
		calculo = 3.14 * pow(raio, 2);
		printf("\n\nA �rea da circunfer�ncia �: %.2f", calculo);
	}
	
	else if (operador == 2)
	{
		calculo = 2 * 3.14 * raio;
		printf("\n\nA �rea da circunfer�ncia �: %.2f", calculo);
	}
	
	else
	{
		printf("\n\nErro: Operador inv�lido!");
	}
}
