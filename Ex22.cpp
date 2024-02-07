#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int p;
	float valor_produto, produto;
	
	for(p=1; p <= 5; p++)
	{
		printf("\nInsira o valor do %i° produto em reias R$ ", p);
		scanf("%f", &produto);
		
		valor_produto = valor_produto + produto;
	}
	
	printf("\nO valor total da compra é R$ %.2f", valor_produto);
}
