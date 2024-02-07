#include <stdio.h>
#include <locale.h>
#include <windows.h>

struct notas {
	char nome[65];
	float nota1, nota2, media, extra;
};

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, n;
	
	printf("\n############################\n");
	printf("	Média final");
	printf("\n############################\n");
	
	printf("\nInsira a quantidade de alunos avaliados: ");
	scanf("%i", &n);
	
	struct notas a[n];
	
	system("cls");
	
	for(i=0; i<n; i++)
	{
		printf("\n----- Aluno %i -----\n", i+1);
		
		printf("\nInsira o nome o aluno: ");
		fflush(stdin);
		gets(a[i].nome);
		fflush(stdin);
		
		printf("\nInsira a nota 1: ");
		scanf("%f", &a[i].nota1);
		
		printf("\nInsira a nota 2: ");
		scanf("%f", &a[i].nota2);
		
		printf("\nInsira a nota extra: ");
		scanf("%f", &a[i].extra);
		
		a[i].media = (a[i].nota1 + a[i].nota2) / 2;
		
		a[i].media = a[i].media + a[i].extra;
		
		if(a[i].media > 10)
		{
			a[i].media = 10;
		}
		
		system("cls");
	}
	
	for(i=0; i<n; i++)
	{
		printf("\n--- Aluno %i ---\n", i+1);
		printf("Nome: %s", a[i].nome);
		printf("\nMédia: %.2f", a[i].media);
		printf("\n\n");
	}
}
