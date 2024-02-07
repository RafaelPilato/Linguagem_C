 /*
Em um frigor�fico existe uma certa quantidade de bois. Cada boipossui uma identifica��o (c�digo) e um peso. Fa�a um algoritmoque leia essas
informa��es e encontre o boi mais gordo e o boimais magro. Essa leitura deve ser realizada enquanto a identifica��o do boi for diferente de zero.
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int cod, cod_g, cod_p;
	float peso, peso_g, peso_p=9999;
	
	printf("\n>>>>> Frigor�fico <<<<<");
		
	printf("\n\nInsira o c�digo do boi: ");
	scanf("%i", &cod);
		
	while (cod != 0)
	{
		printf("\nInsira o peso do boi em Kg: ");
		scanf("%f", &peso);
					
		if(peso > peso_g)
		{
			peso_g = peso;
			cod_g = cod;
		}
		
		if(peso < peso_p)
		{
			peso_p = peso;
			cod_p = cod;
		}
		
		printf("\nInsira o c�digo do boi: ");
		scanf("%i", &cod);
	}
	
	printf("\n\nO boi mais gordo � o %i e pesa %.2f Kg", cod_g, peso_g);
	printf("\n\nO boi mais magro � o %i e pesa %.2f", cod_p, peso_p);
	
}
