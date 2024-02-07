#include <stdio.h>
#include <locale.h>
#include <windows.h>

struct aluno {
	char nome[50];
	float NtLinguagem, NtMatematica, NtCieNat, NtCieHum, NtRed;
};

int main ()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int qtdAlunos, i;
	
	printf("##########\n");
	printf("   ENEM");
	printf("\n##########\n");
	
	printf("\nInsira a quantidade de alunos: ");
	scanf("%i", &qtdAlunos);
	
	struct aluno notas[qtdAlunos];
	float med[qtdAlunos];
	int medias=0;
	
	system("cls");
	
	for(i=0; i<qtdAlunos; i++)
	{
		printf("##########\n");
		printf("   ENEM");
		printf("\n##########\n");
	
		printf("\n--- Aluno %i ---\n", i+1);
		
		printf("\nInforme o nome do aluno: ");
		fflush(stdin);
		gets(notas[i].nome);
		fflush(stdin);
		
		printf("\nInforme a nota de linguagem: ");
		scanf("%f", &notas[i].NtLinguagem);
		
		printf("\nInforme a nota de matemática: ");
		scanf("%f", &notas[i].NtMatematica);
		
		printf("\nInforme a nota de ciências da natureza: ");
		scanf("%f", &notas[i].NtCieNat);
		
		printf("\nInforme a nota de ciências humanas: ");
		scanf("%f", &notas[i].NtCieHum);
		
		printf("\nInforme a nota da redação: ");
		scanf("%f", &notas[i].NtRed);
		
		system("cls");
		
		med[i] = (notas[i].NtLinguagem + notas[i].NtMatematica + notas[i].NtCieNat + notas[i].NtCieHum + notas[i].NtRed) / 5;
		 
		if(med[i] >= 7)
		{
			medias = medias + 1;
		}
	}	
	
	for(i=0; i<qtdAlunos; i++)
	{
		printf("\n--- Aluno %i ---\n", i+1);
		
		printf("\nNome: %s", notas[i].nome);
		printf("\nMédia: %.2f", med[i]);
	}
	
	printf("\nMédia de alunos maior ou igual a 7: %i", medias);
}
