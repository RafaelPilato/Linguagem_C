#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

// Ex 04
char media_conceito (float nota1, float nota2, float nota3)
{
	float media=0;
	char conceito;
	
	media = (nota1 + nota2 + nota3) / 3;
	
	if(media >= 0 && media <= 4.9)
	{
		conceito = 'D';
	}
	
	if(media >= 5 && media <= 6.9)
	{
		conceito = 'C';
	}
	
	if(media >= 7 && media <= 8.9)
	{
		conceito = 'B';
	}
	
	else if(media >= 9 && media <= 10)
	{
		conceito = 'A';
	}
	
	return conceito;
}
