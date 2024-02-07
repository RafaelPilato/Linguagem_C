#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "Funcoes.h"

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int normal, vip, estudante;
	
	float total;
	
	printf("\n##################\n");
	printf("  ---  SHOW  ---");
	printf("\n##################\n");
	
	printf("\n----------------------\n");
	printf("       Ingressos\n");
	printf("Normal    = R$  50,00\n");
	printf("VIP       = R$ 100,00\n");
	printf("Estudante = R$  25,00");
	printf("\n----------------------\n");
	
	printf("\nInsira a quantidade de ingressos NORMAL: ");
	scanf("%i", &normal);
	
	printf("\nInsira a quantidade de ingressos VIP: ");
	scanf("%i", &vip);
	
	printf("\nInsira a quantidade de ingressos ESTUDANTE: ");
	scanf("%i", &estudante);
	
	total = ingressos (normal, vip, estudante);
	
	system("cls");
	
	printf("\n##################\n");
	printf("  ---  SHOW  ---");
	printf("\n##################\n");
	
	printf("\nO total a pagar é de R$ %.2f.", total);
	
}
