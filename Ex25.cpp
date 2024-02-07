#include <stdio.h>
#include <locale.h>
#include <windows.h>

/* 
Em uma maternidade, nasceram 15 crianças em um dia. Faça um algoritmo queverifique o peso e o tamanho (em cm) das crianças, após indique o maior peso e maior 
tamanho registrado, neste dia.
*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int i, nu_criancas;
	float peso, tamanho, m_peso, m_tamanho;
	
	printf("\n----- Maternidade -----");
	
	printf("\n\nInsira a quantidade de crianças: ");
	scanf("%i", &nu_criancas);
	
	for(i=0; i < nu_criancas; i++)
	{
		printf("\nInsira o peso da %iº criança: ", i+1);
		scanf("%f", &peso);
		
		printf("\nInsira o tamanho da %iº criança: ", i+1);
		scanf("%f", &tamanho);
		
		if(peso > m_peso)
		{
			m_peso = peso;
		}
		
		if(tamanho > m_tamanho)
		{
			m_tamanho = tamanho;
		}
		
		system("cls");
	}
	
	printf("\n\nO maior peso é %.2f", m_peso);
	printf("\n\nO maior tamanho é %.2f", m_tamanho);
}
