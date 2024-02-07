#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int caixas=9, qtdCaixa, doces, total, i=0;
	float preco_doce, preco_caixa;
	
	while(caixas >= i)
	{
		i = i + 1;
		
		printf("\n----- Contador de Doces -----");
		
		printf("\n\nInsira a quantidade de doces contidos na %iº caixa: ", i);
		scanf("%i", &qtdCaixa);
		
		printf("\n\nInsira o preço unitário do doce contido na caixa R$ ");
		scanf("%f", &preco_doce);
		
		preco_caixa = preco_caixa + (preco_doce * qtdCaixa);
		
		doces = doces + qtdCaixa;
		
		system("cls");
	}
	
	printf("\n\nO total de doces contidos nas 10 caixas são: %i doces!", doces);
	printf("\nO valor total a pagar é R$ %.2f", preco_caixa);
}
