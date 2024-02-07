#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, alunos;
	
	printf("\nInsira a quantida de alunos: ");
	scanf("%i", &alunos);
	
	float notas[alunos], soma, media;
	
	system("cls");
	
	for(i=0; i < alunos; i++)
	{
		printf("\nInsira a nota do %iº aluno: ", i+1);
		scanf("%f", &notas[i]);
		
		soma = soma + notas[i];
		
		system("cls");
	}
	
	for(i=0; i < alunos; i++)
	{
		printf("\nA nota do %iº aluno é %.2f", i+1, notas[i]);
	}
	media = soma / alunos;
	
	printf("\n\nA média de notas da turma é de %.2f", media);
}
