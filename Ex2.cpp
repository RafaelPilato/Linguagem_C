#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	float Salario, Porcentagem, Total_Novo, Aumento;
	
	printf("Insira o valor do seu s�lario:");
	scanf("%f", &Salario);

	printf("Insira a porcentagem de aumento:");
	scanf("%f", &Porcentagem);
	
	Total_Novo = Salario * ((Porcentagem/100)+1);
	
	Aumento = Salario * (Porcentagem/100);
	
	printf("\n\nSeu aumento � de R$ %.2f", Aumento);
	
	printf("\nSeu nova sal�rio � de R$ %.2f", Total_Novo);
	
}
