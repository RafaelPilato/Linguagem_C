#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int I, num;
	float nota, soma, media;
	
	printf("\nInforme o número de alunos da terma: ");
	scanf("%i", &num);
	
	for(I=1; I<=num; I++)
	{
		printf("\nInforme a nota do aluno %i : ", I);
		scanf("%f", &nota);
		
		soma = soma + nota;
	}
	
	media = soma / num;
	
	printf("\nA média da turma foi: %.2f", media);
}
