#include <stdio.h>
#include <locale.h>

/*Os funcion�rios de uma empresa receberam um aumento de sal�rio: 
t�cnicos (c�digo = 1), 50%;
gerentes (c�digo = 2), 30%; 
demais funcion�rios (c�digo = 3), 20%.
Escrever um algoritmo para ler o c�digo do cargo de um funcion�rio e o valor do seu sal�rio atual, calcular eimprimir o novo sal�rio ap�s o aumento.*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int cod_cargo;
	float sal_atual, sal_aumen, aumento;
	
	printf(">>>>>>>>>>Calculador de Aumento<<<<<<<<<<");
	
	printf("\n\n---------Rela��o de Aumento---------");
	printf("\nT�cnicos (c�digo = 1), 50%%\nGerentes (c�digo = 2), 30%%\nDemais funcion�rios (c�digo = 3), 20%%");
	printf("\n------------------------------------");
	
	printf("\n\nInsira o cod da fun��o do funcion�rio: ");
	scanf("%i", &cod_cargo);
	
	printf("\nInsira o s�lario atual deste funcion�rio (ex: R$ 1500,00): R$ ");
	scanf("%f", &sal_atual);
	
	switch(cod_cargo)
	{
		case 1:
			aumento = sal_atual * 0.5;
			sal_aumen = sal_atual * (1 + 0.5);
			printf("\n\nAumento de R$ %.2f", aumento);
			printf("\nSeu novo sal�rio � R$ %.2f", sal_aumen);
			break;
			
		case 2:
			aumento = sal_atual * 0.3;
			sal_aumen = sal_atual * (1 + 0.3);
			printf("\n\nAumento de R$ %.2f", aumento);
			printf("\nSeu novo sal�rio � R$ %.2f", sal_aumen);
			break;
		
		case 3:
			aumento = sal_atual * 0.2;
			sal_aumen = sal_atual * (1 + 0.2);
			printf("\n\nAumento de R$ %.2f", aumento);
			printf("\nSeu novo sal�rio � R$ %.2f", sal_aumen);
			break;
			
		default:
			printf("\nO cod informado � inv�lido!");
	}
}
