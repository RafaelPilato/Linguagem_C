#include <stdio.h>
#include <locale.h>

/*Desenvolva um algoritmo para ler o número do dia da semana e imprimir o seu respectivo nome por extenso.Considerar o número 1 como domingo, 2 para segunda etc. 
Caso o dia da semana não exista (menor do que 1 oumaior do que 7), exibir a mensagem Dia da semana inválido".*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int num_semana;
	
	printf("\nInsira o número de 1 a 7, o qual deseja descobrir o dia: ");
	scanf("%i", &num_semana);
	
	switch (num_semana)
	{
		case 1:
			printf("\n\nO dia referente a este número é segunda-feira");
			break;
			
		case 2:
			printf("\n\nO dia referente a este número é terça-feira");
			break;
			
		case 3:
			printf("\n\nO dia referente a este número é quata-feira");
			break;
			
		case 4:
			printf("\n\nO dia referente a este número é quinta-feira");
			break;
			
		case 5:
			printf("\n\nO dia referente a este número é sexta-feira");
			break;
			
		case 6:
			printf("\n\nO dia referente a este número é sábado");
			break;
			
		case 7:
			printf("\n\nO dia referente a este número é domingo");
			break;
			
		default:
			printf("\n\nDia da semana inválido!");
	}
}
