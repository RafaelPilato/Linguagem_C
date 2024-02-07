#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	char nome[5][50], endereco[5][100], cpf_rg[5][20];
	int i;
	
	printf("-------------------------");
	printf("\n   Pr�dio Comercial     ");
	printf("\n   Cadastro de Pessoas  ");
	printf("\n-------------------------");
	
	for(i=0; i < 5; i++)
	{
		printf("\nDigite o nome da %i� pessoa: ", i+1);
		fflush(stdin); //limpar o buffer do teclado
		gets(nome[i]); //utilizado para guardar nomes com espa�o
		fflush(stdin);
		
		printf("\nInsira o endere�o da %i� pessoa: ", i+1);
		fflush(stdin);
		gets(endereco[i]);
		fflush(stdin);
		
		printf("\nInsira o CPF ou o RG da %i� pessoa ", i+1);
		scanf("%s", &cpf_rg[i]);
	}
	
	printf("\n\nCadastros de hoje\n");
	
	for(i=0; i < 5; i++)
	{
		printf("\n %s - %s - %s", nome[i], endereco[i], cpf_rg[i]);
	}
}
