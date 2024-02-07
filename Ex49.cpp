#include <stdio.h>
#include <locale.h>
#include <windows.h>

struct empresa{
	int cnpj;
	char ramo[50];
};

struct bolsa{
	char nome[50];
	float vlrAtual, vlrAnterior;
	struct empresa em;	
};

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	struct bolsa bol;
	
	printf("\nInsira o nome da empresa: ");
	fflush(stdin);
	gets(bol.nome);
	fflush(stdin);
	
	printf("\nInsira o valor atual da ação R$");
	scanf("%f", &bol.vlrAtual);
	
	printf("\nInsira o valor anterior da ação R$");
	scanf("%f", &bol.vlrAnterior);
	
	printf("\nInsira o CNPJ da empresa: ");
	scanf("%i", &bol.em.cnpj);
	
	printf("\nInsira os ramos de atividades da empresa: ");
	fflush(stdin);
	gets(bol.em.ramo);
	fflush(stdin);
	
	printf("\n--- Empresa ---\n");
	printf("\nNome: %s", bol.nome);
	printf("\nValor atual: %.2f", bol.vlrAtual);
	printf("\nVlor anterior: %.2f", bol.vlrAnterior);
	
	printf("\n\n--- Dados da Empresa ---\n");
	printf("\nCNPJ: %i", bol.em.cnpj);
	printf("\nRamo: %s", bol.em.ramo);
}
