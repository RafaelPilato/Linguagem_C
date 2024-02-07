#include <stdio.h>
#include <locale.h>
#include <windows.h>

float cal_imposto (float produto, float taxa)
{
	float venda;
	
	venda = (produto * (taxa/100)) + produto;
	
	return venda;
}

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float produto, taxa, venda;
	
	printf("\n----- Imposto Venda -----\n");
	
	printf("\nInsira o valor do produto R$");
	scanf("%f", &produto);
	
	printf("\nInsira a taxa do produto: ");
	scanf("%f", &taxa);
	
	system("cls");
	
	venda = cal_imposto(produto, taxa);
	
	printf("O custo do produto é R$ %.2f \nE o valor de venda do produto é R$ %.2f", produto, venda);
}
