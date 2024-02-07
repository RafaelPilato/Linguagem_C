#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float ano_fabricado, preco, calculo, porcentagem;
	
	printf("\nInsira o ano de frabicação do veículo: ");
	scanf("%f", &ano_fabricado);
	
	printf("\nInsira o preço de venda do veículo: ");
	scanf("%f", &preco);
	
	if(ano_fabricado < 1990)
	{
		calculo = preco * (1 + 0.01);
		porcentagem = preco * 0.01;
		
		printf("\n\nO valor total ficará R$ %.2f", calculo);
		printf("\nA taxa cobrada é de R$ %.2f", porcentagem);
	}
	
	else
	{
		calculo = preco * (1 + 0.015);
		porcentagem = preco * 0.015;
		
		printf("\n\nO valor total ficará R$ %.2f", calculo);
		printf("\nA taxa cobrada é de R$ %.2f", porcentagem);
	}
}
