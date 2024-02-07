#include <stdio.h>
#include <locale.h>
#include <windows.h>

struct mercado {
	char nome[50], data[10];
	float preco;
};

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int n, i;
	
	printf("\nInsira quantos produtos você deseja controlar: ");
	scanf("%i", &n);
	
	system("cls");
	
	struct mercado m[n];
	
	for(i=0; i < n; i++)
	{
		printf("\n---- PRODUTO %i ----\n", i+1);
		printf("\nInforme o nome do produto: ");
		scanf("%s", &m[i].nome);
		
		printf("\nInforme a data de compra do produto (dd/mm/aaaa): ");
		scanf("%s", &m[i].data);
		
		printf("\nInforme o valor do produto R$");
		scanf("%f", &m[i].preco);
		
		system("cls");
	}
	
	for(i=0; i<n; i++)
	{
		printf("\n------ Resumo da venda Produto %i ------\n", i+1);
		printf("\nProduto: %s", m[i].nome);
		printf("\nProduto: %s", m[i].data);
		printf("\nProduto: %.2f", m[i].preco);
		
		printf("\n\n");
	}
}
