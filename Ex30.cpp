/*
Considere que um funcion�rio recebe todo inicio de m�s um cr�dito de R$500,00 de vale aleimenta��o em seu cart�o. Fa�a um programa utilizando a estrutura de
repeti��o repita (do ...while) que ap�s o recebimento do credito controle o saldo do cart�o alimenta��o deste funcion�rio.
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	float credito=500, vlr_compra;
	char validacao;
	
	printf("\n***** Vale Refei��o *****");
		
	do{		
		printf("\n\nInsira o valor da compra em R$: R$");
		scanf("%f", &vlr_compra);
		
		if(credito > vlr_compra)
		{
			printf("\nTransa��o aprovada!");
			
			credito = credito - vlr_compra;
			
			printf("\nSeu saldo atual � de R$%.2f", credito);
		}
		
		else
		{
			printf("\nTransa��o negada!\nSeu saldo � insuficiente!");
			printf("\nSeu saldo atual � de R$%.2f", credito);
		}
		
		printf("\n\nDigite 'S' para sim ou 'N' para n�o.");
		printf("\nVoc� deseja continuar suas compras? ");
		scanf("%s", &validacao);	
		
		system("cls");
		
	}while(validacao == 'S' || validacao == 's');
	
	printf("\nProcesso finalizao!");
}
