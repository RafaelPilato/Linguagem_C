/*
3) Faça um algoritmo que receba as vendas semanais (de um mês, considere o mês com 4 semanas) de 5 vendedores deuma loja 
e armazene essas vendas em uma matriz. Calcule e imprima:
· Total de vendas do mês (4 semanas) de cada vendedor;
· Total de vendas de cada semana (todos os vendedores juntos);
. Total de vendas do mês.
*/
#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, j, vendas[5][4], soma_vendedor,soma_semana, ven_mes[5], semana[4], total_mes=0;
	
	for(i=0; i < 5; i++)
	{
		soma_vendedor = 0;
		
		for(j=0; j < 4; j++)
		{
			printf("\nInsira a quantidade vendida do vendedor %i na %iº semana do mês: ", i+1, j+1);
			scanf("%i", &vendas[i][j]);
			
			system("cls");
			
			soma_vendedor = soma_vendedor + vendas[i][j];
			
			total_mes = total_mes + vendas[i][j];
		}
		
		ven_mes[i] = soma_vendedor;
	}
	
	printf("\n--- Total vendido por vendedor ---\n");
	
	for(i=0; i < 5; i++)
	{
		printf("\nA quantidade vendida pelo vendedor %i foi %i ", i+1, ven_mes[i]);		
	}
	
	printf("\n\n--- Total vendido por semana ---\n");
	
	for(j=0; j < 4; j++)
	{
		soma_semana = 0;
				
		for(i=0; i < 5; i++)
		{
			soma_semana = soma_semana + vendas[i][j];
		}
		
		semana[j] = soma_semana;
	}
	
	for(i=0; i < 4; i++)
	{
		printf("\nA quantidade vendida na %iº semana foi %i ", i+1, semana[i]);	
	}
	
	printf("\n\nO total vendido no mês foi %i", total_mes);
}
