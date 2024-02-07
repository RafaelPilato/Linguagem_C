#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int valor1, valor2, calculo;
	char sinal;
	
	printf("\n Insira o primeiro n�mero:");
	scanf("%i", &valor1);
	
	printf("\n Insira a opera��o desejada:");
	scanf("%s", &sinal);
	
	printf("\n Insira o segundo n�mero:");
	scanf("%i", &valor2);
	
	switch(sinal)
	{
		case '+':
			calculo = valor1 + valor2;
			printf("\n\n O resultado �: %i", calculo);
			break;
			
		case '-':
			calculo = valor1 - valor2;
			printf("\n\n O resultado �: %i", calculo);
			break;
			
		case '*':
			calculo = valor1 * valor2;
			printf("\n\n O resultado �: %i", calculo);
			break;
			
		case '/':
			if(valor1 == 0 || valor2 == 0)
			{
				printf("\n O valor digitado foi 0, n�o � poss�vel fazer a opera��o:(");
			}
			else
			calculo = valor1 / valor2;
			printf("\n\n O resultado �: %i", calculo);
			break;
	}
}
