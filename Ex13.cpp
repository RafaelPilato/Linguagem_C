#include <stdio.h>
#include <locale.h>

/*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o pre�o da etiqueta e aescolha da condi��o de pagamento. 
Utilize os c�digos da tabela a seguir para ler qual a condi��o de pagamentoescolhida e efetuar o c�lculo adequado.*/

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
	printf("\n\n 1 - � vista em dinheiro ou cheque, recebe 10%% de desconto");
	printf("\n 2 - � vista no cart�o de cr�dito, recebe 5%% de desconto");
	printf("\n 3 - Em 2 vezes, pre�o da etiqueta sem juros");
	printf("\n 4 - Em 3 vezes, pre�o da etiqueta mais juros de 10%%");
	printf("\n\n >>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<");
	
	printf("\n\n Informe o valor da etiqueta (ex R$ 50,00) R$ ");
	scanf("%f", &preco_etiqueta);
	
	printf("\n Informe o COD da forma de pagamento: ");
	scanf("%i", &cod);
	
	switch (cod)
	{
		case 1:
			desconto_preco = preco_etiqueta * (1 - 0.1);
			
			printf("\n\n O valor total da compra � de R$ %.2f", preco_etiqueta);
			printf("\n\n O valor a pagar com desconto � de R$ %.2f", desconto_preco);
			break;
			
		case 2:
			desconto_preco = preco_etiqueta * (1 - 0.05);
			
			printf("\n\n O valor total da compra � de R$ %.2f", preco_etiqueta);
			printf("\n\n O valor a pagar com desconto � de R$ %.2f", desconto_preco);
			break;
			
		case 3:
			desconto_preco = preco_etiqueta / 2;
			
			printf("\n\n O valor total da compra � de R$ %.2f", preco_etiqueta);
			printf("\n Voc� parcelou em 2 vezes, suas faturas s�o de R$ %.2f", desconto_preco);
			break;
			
		case 4:
			desconto_preco = preco_etiqueta * (1 + 0.1);
			parcela = desconto_preco / 3;
			
			printf("\n\n O valor total da compra � de R$ %.2f", desconto_preco);
			printf("\n Ser�o 3x de R$ %.2f", parcela);
			
		default:
			printf("\n Voc� inseriu um COD inv�lido, por favor tente novamente!");
	}	
}
