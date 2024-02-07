#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

float inss (float salario)
{
	float inss=0;
	
	if(salario < 1302.01)
	{
		inss = salario * 0.075;
	}
	
	if(salario > 1302 || salario < 2571.30)
	{
		inss = salario * 0.09;
	}
	
	if(salario > 2571.29 || salario < 3856.95)
	{
		inss = salario * 0.12;
	}
	
	if(salario > 3856.94 || salario < 7507.50)
	{
		inss = salario * 0.14;
	}
	
	if(salario > 7507.50)
	{
		inss = 7507.49 * 0.14;
	}
	
	return inss;
}

// 06

int soma (int vet[], int n)
{
	int soma=0, i;
	
	for(i=0; i<n; i++)
	{
		soma = soma + vet[i];
	}
	
	return soma;
}
