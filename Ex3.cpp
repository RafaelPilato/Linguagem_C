#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "PORTUGUESE");
	int Dias, Salario;
	
	printf("Insira o número de dias trabalhados no mês:");
	scanf("%i", &Dias);
	
	Salario = (Dias * 8) * 25;
	
	printf("Seu salário é de R$ %i", Salario);
		
}
