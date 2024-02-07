#include <stdio.h>
#include <locale.h>

/*Os funcionários de uma empresa receberam um aumento de salário: 
técnicos (código = 1), 50%;
gerentes (código = 2), 30%; 
demais funcionários (código = 3), 20%.
Escrever um algoritmo para ler o código do cargo de um funcionário e o valor do seu salário atual, calcular eimprimir o novo salário após o aumento.*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int cod_cargo;
	float sal_atual, sal_aumen, aumento;
	
	printf(">>>>>>>>>>Calculador de Aumento<<<<<<<<<<");
	
	printf("\n\n---------Relação de Aumento---------");
	printf("\nTécnicos (código = 1), 50%%\nGerentes (código = 2), 30%%\nDemais funcionários (código = 3), 20%%");
	printf("\n------------------------------------");
	
	printf("\n\nInsira o cod da função do funcionário: ");
	scanf("%i", &cod_cargo);
	
	printf("\nInsira o sálario atual deste funcionário (ex: R$ 1500,00): R$ ");
	scanf("%f", &sal_atual);
	
	switch(cod_cargo)
	{
		case 1:
			aumento = sal_atual * 0.5;
			sal_aumen = sal_atual * (1 + 0.5);
			printf("\n\nAumento de R$ %.2f", aumento);
			printf("\nSeu novo salário é R$ %.2f", sal_aumen);
			break;
			
		case 2:
			aumento = sal_atual * 0.3;
			sal_aumen = sal_atual * (1 + 0.3);
			printf("\n\nAumento de R$ %.2f", aumento);
			printf("\nSeu novo salário é R$ %.2f", sal_aumen);
			break;
		
		case 3:
			aumento = sal_atual * 0.2;
			sal_aumen = sal_atual * (1 + 0.2);
			printf("\n\nAumento de R$ %.2f", aumento);
			printf("\nSeu novo salário é R$ %.2f", sal_aumen);
			break;
			
		default:
			printf("\nO cod informado é inválido!");
	}
}
