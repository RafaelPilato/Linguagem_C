#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

int dias_vida (int vlrAno, int vlrMeses)
{
	int diasAno=0, diasMeses=0, dias=0;
	
	diasAno = vlrAno * 365;
	
	diasMeses = vlrMeses * 30;
	
	dias = diasAno + diasMeses;
	
	return dias;
}

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int anos, meses, dias;
	
	printf("\n_______Contador de dias de Vida_______\n");
	
	printf("\nInsira quantos anos de vida você tem: ");
	scanf("%i", &anos);
	
	printf("\nInsira quantos meses você tem: ");
	scanf("%i", &meses);
	
	system("cls");
	
	dias = dias_vida (anos, meses);
	
	printf("\nVocê possui %i dias de vida!", dias);
}
