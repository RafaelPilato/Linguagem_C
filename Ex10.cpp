#include <stdio.h>
#include <locale.h>

// Calculador de desconto de inss

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	// bruto = salario bruto. liquido = salario liquido
	float bruto, liquido;
	
	printf("\nInforme o salário bruto (ex 1500,00): R$");
	scanf("%f", &bruto);
	
	if(bruto <= 1320)
	{
		liquido = bruto * (1 - 0.075);
		
		printf("\nSalário liquido de R$ %.2f", liquido);
	}
	
	if(bruto > 1320 && bruto <= 2571.29)
	{
		liquido = bruto * (1 - 0.09);
		
		printf("\nSalário liquido de R$ %.2f", liquido);
	}
	
	if(bruto > 2571.29 && bruto <= 3856.94)
	{
		liquido = bruto * (1 - 0.12);
		
		printf("\nSalário liquido de R$ %.2f", liquido);
	}
	
	else if(bruto > 2856.94)
	{
		liquido = bruto * (1 - 0.14);
		
		printf("\nSalário liquido de R$ %.2f", liquido);
	}
}
