#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "PORTUGUESE");
	int Dias, Salario;
	
	printf("Insira o n�mero de dias trabalhados no m�s:");
	scanf("%i", &Dias);
	
	Salario = (Dias * 8) * 25;
	
	printf("Seu sal�rio � de R$ %i", Salario);
		
}
