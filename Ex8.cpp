#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int ano_atual, ano_nascimento, cnh, falta;
	
	printf("\nInsira o ano atual: ");
	scanf("%i", &ano_atual);
	
	printf("\nInsira o ano do seu nascimento: ");
	scanf("%i", &ano_nascimento);
	
	cnh = ano_atual - ano_nascimento;
	
	if(cnh >= 18)
	{
		printf("\n\nVoc� j� pode tirar a carteira!");
	}
	
	else
	{
		falta = 18 - cnh;
		printf("\nVoc� ainda n�o pode tirar a carteira :(");
		printf("\nFalta %i ano(s)", falta);
	}
}
