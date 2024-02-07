#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, j, qtd_alunos, qtd_notas;
	float soma, media;
	
	printf("\nInsira a quantidade de alunos avaliados: ");
	scanf("%i", &qtd_alunos);
	
	printf("\nInsira a quantidade de exercícios avaliados: ");
	scanf("%i", &qtd_notas);
	
	float alunos[qtd_alunos][qtd_notas];
	
	for(i=0; i<qtd_alunos; i++)
	{
		system("cls");
		soma = 0;
		media = 0;
		
		for(j=0; j<qtd_notas; j++)
		{
			printf("\nInsira a nota %i do %iº aluno: ", j+1, i+1);
			scanf("%f", &alunos[i][j]);
			
			soma = soma + alunos[i][j];
		}
			media = soma / qtd_notas;
			
			printf("\nA média do aluno foi %.2f\n\n", media);
			
			//system("pause"); // precione para continuar
			Sleep(3000); //Esperar por tantos milisegundos
	}
}
