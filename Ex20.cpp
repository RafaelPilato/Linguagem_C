#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int cod;
	
	printf("\n--->>>Leitor de Códigos<<<---");
	printf("\nInsira o codigo do produto: ");
	scanf("%i", &cod);
	
	switch (cod)
	{
		case 1:
			printf("\nAlimento não-perecível.");
			break;
		
		case 2 ... 4:
			printf("\nAlimento perecível.");
			break;
			
		case 5 ... 6:
			printf("\nVestuário.");
			break;
			
		case 7:
			printf("\nHigiene Pessoal.");
			break;
			
		case 8 ... 15:
			printf("\nLimpeza e Utensílios Domésticos.");
			break;
			
		default:
			printf("\nCódigo inválido.");
	}
}
