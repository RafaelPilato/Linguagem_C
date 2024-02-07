#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float ano_fabricado, preco, calculo, porcentagem;
	
	printf("\nInsira o ano de frabica��o do ve�culo: ");
	scanf("%f", &ano_fabricado);
	
	printf("\nInsira o pre�o de venda do ve�culo: ");
	scanf("%f", &preco);
	
	if(ano_fabricado < 1990)
	{
		calculo = preco * (1 + 0.01);
		porcentagem = preco * 0.01;
		
		printf("\n\nO valor total ficar� R$ %.2f", calculo);
		printf("\nA taxa cobrada � de R$ %.2f", porcentagem);
	}
	
	else
	{
		calculo = preco * (1 + 0.015);
		porcentagem = preco * 0.015;
		
		printf("\n\nO valor total ficar� R$ %.2f", calculo);
		printf("\nA taxa cobrada � de R$ %.2f", porcentagem);
	}
}
