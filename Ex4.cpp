#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	float Numero, Dobro, Terca;
	
	printf("Insira um número qualquer:");
	scanf("%f", &Numero);
	
	Dobro = Numero * 2;
	Terca = Numero / 3;
	
	printf("\nO dobro do seu número é %.1f", Dobro);
	printf("\nA terça parte do seu número é: %.2f", Terca);
	
}
