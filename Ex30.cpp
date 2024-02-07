/*
Considere que um funcionário recebe todo inicio de mês um crédito de R$500,00 de vale aleimentação em seu cartão. Faça um programa utilizando a estrutura de
repetição repita (do ...while) que após o recebimento do credito controle o saldo do cartão alimentação deste funcionário.
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float credito=500, vlr_compra;
	char validacao;
	
	printf("\n***** Vale Refeição *****");
		
	do{		
		printf("\n\nInsira o valor da compra em R$: R$");
		scanf("%f", &vlr_compra);
		
		if(credito > vlr_compra)
		{
			printf("\nTransação aprovada!");
			
			credito = credito - vlr_compra;
			
			printf("\nSeu saldo atual é de R$%.2f", credito);
		}
		
		else
		{
			printf("\nTransação negada!\nSeu saldo é insuficiente!");
			printf("\nSeu saldo atual é de R$%.2f", credito);
		}
		
		printf("\n\nDigite 'S' para sim ou 'N' para não.");
		printf("\nVocê deseja continuar suas compras? ");
		scanf("%s", &validacao);	
		
		system("cls");
		
	}while(validacao == 'S' || validacao == 's');
	
	printf("\nProcesso finalizao!");
}
