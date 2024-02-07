#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "BT_funcao05.h"

/*Escreva uma função que receba os valores de um vetorde 5 posições e ao final retorne a soma de todos oselementos do vetor*/
int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int t_vet, result, i;
	
	printf("\n---- Soma de Numeros ----\n");
	
	printf("\nInsira a quantidade de números que deseja somar: ");
	scanf("%i", &t_vet);
	
	int vet[t_vet];
	
	for(i=0; i<t_vet; i++)
	{
		printf("\nInsira o %iº valor: ", i+1);
		scanf("%i", &vet[i]);
	}
	
	result = soma (vet, t_vet);
	
	printf("\nO resultado da soma é %i", result);
}
