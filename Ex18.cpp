#include <stdio.h>
#include <locale.h>

//Um posto est� vendendo combust�veis com a seguinte tabela de descontos:

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int cod_combustivel;
	float litros, preco_com, total_pag;
	
	printf(">>>Posto de Combustivel<<<");
	
	printf("\n\n-----Lista de Combust�veis-----");
	printf("\n (1) - �lcool\n (2) - Gasolina");
	printf("\n-------------------------------");
	
	printf("\n\nInsira o cod do tipo de combust�vel: ");
	scanf("%i", &cod_combustivel);
	
	if(cod_combustivel == 1)
	{
		printf("\nInsira o pre�o do �lcool R$ ");
		scanf("%f", &preco_com);	
	}
	
	else
	{
		printf("\nInsira o pre�o da gasolina R$ ");
		scanf("%f", &preco_com);	
	}
	
	printf("\nInsira a quantidade de litros abastecidos: ");
	scanf("%f", &litros);
	
	switch (cod_combustivel)
	{
		case 1:
			if (litros <= 20)
			{
				total_pag = (litros * preco_com) * (1 - 0.03);
				printf("\n\nO total a pagar R$ %.2f", total_pag);
			}
			
			else
			{
				total_pag = (litros * preco_com) * (1 - 0.05);
				printf("\n\nO total a pagar R$ %.2f", total_pag);
			}
			break;
		
		case 2:
			if (litros <= 20)
			{
				total_pag = (litros * preco_com) * (1 - 0.035);
				printf("\n\nO total a pagar R$ %.2f", total_pag);
			}
			else
			{
				total_pag = (litros * preco_com) * (1 - 0.06);
				printf("\n\nO total a pagar R$ %.2f", total_pag);
			}
			break;
		
		default:
			printf("\n\nO cod inserido � inv�lido!");
	}
}
