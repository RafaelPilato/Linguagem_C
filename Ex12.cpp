#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int cod;
	
	printf("\nInsira o cod do produto: ");
	scanf("%i", &cod);
	
	switch(cod)
	{
		case 110:
			printf("\nVestu�rio");
			break;
			
		case 215:
			printf("\nEletrodom�stico");
			break;
			
		case 230:
			printf("\nInform�tica");
			break;
			
		case 354:
			printf("\nLivraria");
			break;
			
		case 412:
			printf("\nEsportes");
			break;
		
		default:
			printf("\nCod Inv�lido!");
			
	}
}
