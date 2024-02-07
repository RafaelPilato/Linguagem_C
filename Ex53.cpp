#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

struct dados {
	char nome[50];
	int numero, moradores;
	float area, valor;
};

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int qtdAp, i, totalMoradores=0;
	
	printf("\n###########################\n");
	printf("     IMOBILIARIA");
	printf("\n###########################\n");
	
	printf("\nInsira a quantidade de apartamentos: ");
	scanf("%i", &qtdAp);
	
	struct dados ap[qtdAp];
	
	system("cls");
	
	for(i=0; i<qtdAp; i++)
	{
		printf("\n***** %iº Apartamento *****\n", i+1);
		
		printf("\nNome responsável: ");
		fflush(stdin);
		gets(ap[i].nome);
		fflush(stdin);
		
		printf("\nNúmero do apartamento: ");
		scanf("%i", &ap[i].numero);
		
		printf("\nÁrea em m2: ");
		scanf("%f", &ap[i].area);
		
		printf("\nQuantidade de moradores: ");
		scanf("%i", &ap[i].moradores);
		
		printf("\nFatura do apartamento R$ ");
		scanf("%f", &ap[i].valor);
		
		totalMoradores = totalMoradores + ap[i].moradores;
		
		system("cls");
	}
	
	for(i=0; i<qtdAp; i++)
	{
		printf("\n***** %iº Apartamento *****\n", i+1);
		
		printf("\nNome: %s\n", ap[i].nome);
		printf("Número: %i\n", ap[i].numero);
		printf("Área: %.2f\n", ap[i].area);
		printf("Moradores: %i\n", ap[i].moradores);
		printf("Valor: %.2f\n", ap[i].valor);
	}
	
	printf("\nTotal de moradoes no condominio: %i", totalMoradores);
}
