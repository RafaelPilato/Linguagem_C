#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "BB_funcao03.h"



/*Fa�a um programa que solicite as tr�s notas obtidas por um aluno. Aseguir fa�a uma fun��o que recebe as tr�s notas de 
um aluno, calcule am�dia final do aluno e retorne o seu conceito, conforme a tabela abaixo:*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float nota1, nota2, nota3 ;
	char conceito;
	
	printf("\n---- Conceito Final ----\n");
	
	printf("\nInsira a 1� nota: ");
	scanf("%f", &nota1);
	
	printf("\nInsira a 2� nota: ");
	scanf("%f", &nota2);
	
	printf("\nInsira a 3� nota: ");
	scanf("%f", &nota3);
	
	system("cls");	
	
	conceito = media_conceito(nota1, nota2, nota3);
	
	printf("\nO aluno ficou com o conceito % c", conceito);	
}
