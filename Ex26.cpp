#include <stdio.h>
#include <locale.h>
#include <windows.h>

/*
Construa um algoritmo que receba os dados de uma turma de 45 alunos. Ap�s o recebimento dos dados determine:
a) A idade m�dia dos alunos com menos de 1,70m de altura;
b) A altura m�dia dos alunos com mais de 20 anos.
*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, alunos;
	float altura, idade, media, soma_idade;
	
	printf("\n***** Dados Sala de Aula *****");
	
	printf("\n\nInsira a quantidade alunos: ");
	scanf("%i", &alunos);
	
	system("cls");
	
	for(i=0; i < alunos; i++)
	{
		printf("\nInsira a idade do %i� aluno: ", i+1);
		scanf("%f", &idade);
		
		printf("\nInsira a altura do %i� aluno: ", i+1);
		scanf("%f", &altura);
		
		if(altura < 1.70)
		{
			soma_idade += idade;
		}
			
	}	
	
	media = soma_idade / alunos;
}
