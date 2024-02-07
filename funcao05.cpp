#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "BT_funcao05.h"

/*O INSS � um desconto que o funcion�rio tem sobre seu sal�rio. Esse desconto � realizado com base na seguintetabela, 
referente ao ano de 2023.

Para os sal�rios maiores que 67.507,49 ser� aplicado o teto m�ximo de 14% sobre esse valor.Esse c�lculo deve ser realizado 
sobre o valor do sal�rio bruto + a gratifica��o ou horas extras.Fa�a um programa que solicite ao usu�rio o valor do sal�rio 
e este seja passado para uma fun��o que retorne o valordo INSS a ser pago pelo funcion�rio.*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float salario=0, extra=0, total=0, vlr_inss;
	char escolha;
	
	printf("\n->->->-> Calculador de INSS <-<-<-<-\n");
	
	printf("\nInsira o valor do seu sal�rio R$");
	scanf("%f", &salario);
	
	printf("\nUse (S) - para sim e (N) - para n�o.");
	printf("\nVoc� possui horas extras: ");
	scanf("%s", &escolha);
	
	if(escolha == 'S' || escolha == 's')
	{
		printf("\nInforme o valor das suas extras R$");
		scanf("%f", &extra);
	}
	
	if(escolha == 'N' || escolha == 'n')
	{
		extra = 0;
	}
	
	else
	{
		printf("\nO codigo inserio � inv�lido!");
	}
	
	total = salario + extra;
	
	vlr_inss = inss (total);
	
	printf("\nO valor do INSS � de R$%.2f", vlr_inss);
}
