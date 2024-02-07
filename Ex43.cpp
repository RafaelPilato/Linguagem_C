/*4) Escreva um programa em C++ para ler uma matriz N × N de valores inteiros de 1 a 9 (Nestabelecido via #define), 
representando imóveis alugados em uma região comercial deCuritiba. Valores inferiores a 5 na matriz indicam imóveis 
com aluguel mensal de R$1000 e osdemais valores indicam imóveis com aluguel mensal de R$5000. 
Seu programa deve imprimiro custo mensal desta região comercial.*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define N 3

main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int matriz[N][N], i, j;
	float soma_a=0, soma_b=0, soma_total=0;
	
	for(i=0; i < N; i++)
	{
		for(j=0; j < N; j++)
		{
			printf("\nOs valores inseridos devem ser de 1 a 9.");
			printf("\nInsira o valor da linha %i da coluna %i: ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
			
			system("cls");
			
			if(matriz[i][j] < 5)
			{
				soma_a = soma_a + 1000;
			}
			
			else
			{
				soma_b = soma_b + 5000;
			}
		}
	}
	
	soma_total = soma_a + soma_b;
	
	printf("\nO total do aluguel é R$%.2f", soma_total);	
}
