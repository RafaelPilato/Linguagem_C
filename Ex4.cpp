#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	float Numero, Dobro, Terca;
	
	printf("Insira um n�mero qualquer:");
	scanf("%f", &Numero);
	
	Dobro = Numero * 2;
	Terca = Numero / 3;
	
	printf("\nO dobro do seu n�mero � %.1f", Dobro);
	printf("\nA ter�a parte do seu n�mero �: %.2f", Terca);
	
}
