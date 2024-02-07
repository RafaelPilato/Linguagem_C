#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float preco[10], faturamento;
	
	int i, qtd[10];
	
	for(i=0; i < 10; i++)
	{
		printf("\n---------------------------");
		printf("\n    Faturamento Diário     ");
		printf("\n---------------------------\n");
		
		printf("\nInsira o preço do item %i R$", i+1);
		scanf("%f", &preco[i]);
		
		printf("\nInsira a quantidade vendida do item %i: ", i+1);
		scanf("%i", &qtd[i]);
		
		faturamento = faturamento + (preco[i] * qtd[i]);
		
		system("cls");
	}
	
	printf("\n---------------------------");
	printf("\n    Faturamento Diário     ");
	printf("\n---------------------------\n");
	
	printf("\nO faturamento diário foi de R$%.2f", faturamento);
}
