/*Você foi designado para criar um programa simples para registrar e analisar temperaturas de Curitiba. 
O programa deve permitir o cadastro de temperaturas ao longo de uma semana. 
Crie um vetor para armazenar as temperaturas de cada dia da semana. 
Ao final mostre a temperatura média da semana e o dia que fez mais calor.*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float temperaturas[7], maior_t, media, soma;
	int i;
	
	for(i=0; i < 7; i++)
	{
		printf("\nInsira a temperatura do %iº dia: ", i+1);
		scanf("%f", &temperaturas[i]);
		
		soma = soma + temperaturas[i];
		
		if(temperaturas[i] > maior_t)
		{
			maior_t = temperaturas[i];
		}
	}
	
	media = soma / 7;
	
	printf("\n\nA temperatura média foi %.1f°C", media);
	
	printf("\n\nA temperatura mais quente que teve foi de %.1f°C.", maior_t);
}
