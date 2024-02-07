#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "BT_funcao05.h"

/*O INSS é um desconto que o funcionário tem sobre seu salário. Esse desconto é realizado com base na seguintetabela, 
referente ao ano de 2023.

Para os salários maiores que 67.507,49 será aplicado o teto máximo de 14% sobre esse valor.Esse cálculo deve ser realizado 
sobre o valor do salário bruto + a gratificação ou horas extras.Faça um programa que solicite ao usuário o valor do salário 
e este seja passado para uma função que retorne o valordo INSS a ser pago pelo funcionário.*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float salario=0, extra=0, total=0, vlr_inss;
	char escolha;
	
	printf("\n->->->-> Calculador de INSS <-<-<-<-\n");
	
	printf("\nInsira o valor do seu salário R$");
	scanf("%f", &salario);
	
	printf("\nUse (S) - para sim e (N) - para não.");
	printf("\nVocê possui horas extras: ");
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
		printf("\nO codigo inserio é inválido!");
	}
	
	total = salario + extra;
	
	vlr_inss = inss (total);
	
	printf("\nO valor do INSS é de R$%.2f", vlr_inss);
}
