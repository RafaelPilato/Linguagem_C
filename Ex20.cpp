#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int cod;
	
	printf("\n--->>>Leitor de C�digos<<<---");
	printf("\nInsira o codigo do produto: ");
	scanf("%i", &cod);
	
	switch (cod)
	{
		case 1:
			printf("\nAlimento n�o-perec�vel.");
			break;
		
		case 2 ... 4:
			printf("\nAlimento perec�vel.");
			break;
			
		case 5 ... 6:
			printf("\nVestu�rio.");
			break;
			
		case 7:
			printf("\nHigiene Pessoal.");
			break;
			
		case 8 ... 15:
			printf("\nLimpeza e Utens�lios Dom�sticos.");
			break;
			
		default:
			printf("\nC�digo inv�lido.");
	}
}
