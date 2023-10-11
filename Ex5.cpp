#include <stdio.h> // função básica
#include <locale.h> //ajustar texto portugues
#include <windows.h> //ajustar cor o sistema

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float nota_1, nota_2, media;
	
	//system("color x") mostra as cores do sistema
	printf("\nInsira a 1º nota:");
	scanf("%f", &nota_1);
	
	printf("Insira a 2º nota:");
	scanf("%f", &nota_2);
	
	media = (nota_1 + nota_2) / 2;
	
	if(media >= 6.0 )
	{
		system("color 02");
		printf("\nVocê foi aprovado!");
		printf("\nSua nota final foi:%.2f", media);
	}
	else
	{
		printf("\nVocê foi reprovado :(");
		printf("\nSua média final foi:%.2f", media);
	}
}
