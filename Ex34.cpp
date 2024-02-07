#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	char gabarito[]={'A', 'B', 'C', 'D', 'B'}, respostas[4];
	int i, corretas=0, erradas;
	
	for(i=0; i < 5; i++)
	{
		printf("\nInforme a resposta da %iº questão: ", i+1);
		scanf("%s", &respostas[i]);
		
		if(respostas[i] == gabarito[i])
		{
			corretas = corretas + 1;
		}
		
		else
		{
			erradas = erradas + 1;
		}
	
	}
	
	printf("\n\nO total de acertos foi %i", corretas);
}
