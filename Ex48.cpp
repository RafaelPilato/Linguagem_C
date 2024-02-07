#include <stdio.h>
#include <locale.h>
#include <windows.h>

struct game {
	char title[100], genre[50], plataform[50];
	int release_year;
	float rating;
};

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, n;
	
	printf("\n********** GAMEZONE **********\n");
	
	printf("\nInsira a quantidade de jogos que deseja registrar: ");
	scanf("%i", &n);
	
	struct game g[n];
	
	system("cls");
	
	for(i=0; i<n; i++)
	{
		printf("\n----- Livro %i -----\n", i+1);
		
		printf("\nInsira o t�tulo do jogo: ");
		fflush(stdin);
		gets(g[i].title);
		fflush(stdin);
		
		printf("\nInsira o gen�ro do jogo: ");
		scanf("%s", &g[i].genre);
		
		printf("\nInsira o ano de lan�amento do jogo: ");
		scanf("%i", &g[i].release_year);
		
		printf("\nInsira a classifica��o do jogo: ");
		scanf("%f", &g[i].rating);
		
		printf("\nInsira a plataforma do jogo: ");
		scanf("%s", &g[i].plataform);
		
		system("cls");
	}
	
	for(i=0; i<n; i++)
	{
		printf("\n----- Livro %i -----\n", i+1);
		
		printf("\nNome: %s", g[i].title);
		printf("\nGen�ro: %s", g[i].genre);
		printf("\nAno de Lan�amento: %i", g[i].release_year);
		printf("\nClassifica��o: %.2f", g[i].rating);
		printf("\nPlataforma: %s", g[i].plataform);
		printf("\n");
	}
}
