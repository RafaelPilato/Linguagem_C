#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float nota1, nota2, media;
	char resp='S';
	int i;
	
	while(resp == 'S' || resp == 's')
	{
		printf("\n##### Média Aluno #####");
		
		i = i + 1;
		printf("\n\nInforme a nota 1 do %iº aluno: ", i);
		scanf("%f", &nota1);
		
		printf("\nInforme a nota 2 do %iº aluno: ", i);
		scanf("%f", &nota2);
		
		media = (nota1 + nota2) / 2;
		
		printf("\nA média do aluno foi: %.2f", media);
		
		if(media >= 7.0)
		{
			printf("\nO aluno está aprovado!");
		}
		
		else
		{
			printf("\nO aluno está em recuperação!");
		}
		
		printf("\n\nUse 'S' para sim, e 'N' para não.");
		printf("\nVocê deseja consultar mais algum aluno? ");
		scanf("%s", &resp);
		
		system("cls");
	}
	
	printf("\n\nO total de alunos de alunos avaliados foi %i.", i);
}
