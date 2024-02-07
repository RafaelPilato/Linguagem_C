#include <stdio.h>
#include <locale.h>

/*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço da etiqueta e aescolha da condição de pagamento. 
Utilize os códigos da tabela a seguir para ler qual a condição de pagamentoescolhida e efetuar o cálculo adequado.*/

// system (cls) = limpa a tela
int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int cod;
	float preco_etiqueta, desconto_preco, parcela;
	
	printf("\n #################################");
	printf("\n --------------Caixa--------------");
	printf("\n #################################");
	
	printf("\n\n >>>>>>>>>>>>>Tabela<<<<<<<<<<<<<<");
	printf("\n\n 1 - À vista em dinheiro ou cheque, recebe 10%% de desconto");
	printf("\n 2 - À vista no cartão de crédito, recebe 5%% de desconto");
	printf("\n 3 - Em 2 vezes, preço da etiqueta sem juros");
	printf("\n 4 - Em 3 vezes, preço da etiqueta mais juros de 10%%");
	printf("\n\n >>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<");
	
	printf("\n\n Informe o valor da etiqueta (ex R$ 50,00) R$ ");
	scanf("%f", &preco_etiqueta);
	
	printf("\n Informe o COD da forma de pagamento: ");
	scanf("%i", &cod);
	
	switch (cod)
	{
		case 1:
			desconto_preco = preco_etiqueta * (1 - 0.1);
			
			printf("\n\n O valor total da compra é de R$ %.2f", preco_etiqueta);
			printf("\n\n O valor a pagar com desconto é de R$ %.2f", desconto_preco);
			break;
			
		case 2:
			desconto_preco = preco_etiqueta * (1 - 0.05);
			
			printf("\n\n O valor total da compra é de R$ %.2f", preco_etiqueta);
			printf("\n\n O valor a pagar com desconto é de R$ %.2f", desconto_preco);
			break;
			
		case 3:
			desconto_preco = preco_etiqueta / 2;
			
			printf("\n\n O valor total da compra é de R$ %.2f", preco_etiqueta);
			printf("\n Você parcelou em 2 vezes, suas faturas são de R$ %.2f", desconto_preco);
			break;
			
		case 4:
			desconto_preco = preco_etiqueta * (1 + 0.1);
			parcela = desconto_preco / 3;
			
			printf("\n\n O valor total da compra é de R$ %.2f", desconto_preco);
			printf("\n Serão 3x de R$ %.2f", parcela);
			
		default:
			printf("\n Você inseriu um COD inválido, por favor tente novamente!");
	}	
}
