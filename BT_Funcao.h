#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

int somaF (int val1, int val2)
{
	int somaF;
	somaF = val1 + val2;
	return somaF;
}

int Fmaior (int num1, int num2, int num3)
{
	int maior=0;
	
	if(num1 > maior)
	{
		maior = num1;
	}
	
	if(num2 > maior)
	{
		maior = num2;
	}
	
	if(num3 > maior)
	{
		maior = num3;
	}
	
	return maior;
}
