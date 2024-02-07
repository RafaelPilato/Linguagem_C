#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int i, alunos;
	
	printf("\nInsira o total de alunos avaliados: ");
	scanf("%i", &alunos);
	
	float notas[alunos];
	
	for(i=0; i < alunos; i++)
	{
		printf("\nInsira a nota do %iº aluno: ", i+1);
		scanf("%f", &notas[i]);	
	}	
	
	printf("\nA seguir as notas dos alunos que obtiveram 7.5 ou mais.\n");
	
	for(i=0; i < alunos; i++)
	{
		if(notas[i] >= 7.5)
		{			
			printf("\nNota do %iº aluno %.2f", i+1, notas[i]);
		}
	}
}
