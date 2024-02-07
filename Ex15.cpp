#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Faça um algoritmo que leia dois valores representando o operador e o raio de uma circunferência. Caso ooperador seja igual a 1, apresentar a área da
circunferência (?r2). Caso o operador seja igual a 2, apresentar operímetro da circunferência (2?r). Caso o indicador não seja nenhum destes valores, 
apresentar uma mensagemde erro.*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int operador;
	float raio, calculo;
	
	printf("\nInsira o operador: ");
	scanf("%i", &operador);
	
	printf("\nInsira o raio da circunferência (ex: 1,25) em cm: ");
	scanf("%f", &raio);
	
	if (operador == 1)
	{
		calculo = 3.14 * pow(raio, 2);
		printf("\n\nA área da circunferência é: %.2f", calculo);
	}
	
	else if (operador == 2)
	{
		calculo = 2 * 3.14 * raio;
		printf("\n\nA área da circunferência é: %.2f", calculo);
	}
	
	else
	{
		printf("\n\nErro: Operador inválido!");
	}
}
