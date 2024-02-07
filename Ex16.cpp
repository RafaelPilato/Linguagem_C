#include <stdio.h>
#include <locale.h>

/*Desenvolva um algoritmo para ler o n�mero do dia da semana e imprimir o seu respectivo nome por extenso.Considerar o n�mero 1 como domingo, 2 para segunda etc. 
Caso o dia da semana n�o exista (menor do que 1 oumaior do que 7), exibir a mensagem Dia da semana inv�lido".*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int num_semana;
	
	printf("\nInsira o n�mero de 1 a 7, o qual deseja descobrir o dia: ");
	scanf("%i", &num_semana);
	
	switch (num_semana)
	{
		case 1:
			printf("\n\nO dia referente a este n�mero � segunda-feira");
			break;
			
		case 2:
			printf("\n\nO dia referente a este n�mero � ter�a-feira");
			break;
			
		case 3:
			printf("\n\nO dia referente a este n�mero � quata-feira");
			break;
			
		case 4:
			printf("\n\nO dia referente a este n�mero � quinta-feira");
			break;
			
		case 5:
			printf("\n\nO dia referente a este n�mero � sexta-feira");
			break;
			
		case 6:
			printf("\n\nO dia referente a este n�mero � s�bado");
			break;
			
		case 7:
			printf("\n\nO dia referente a este n�mero � domingo");
			break;
			
		default:
			printf("\n\nDia da semana inv�lido!");
	}
}
