#include <stdio.h>
#include <locale.h>
#include <windows.h>

struct livros{
	char titulo[50], area[50];
	int ano_edicao, pag;
	float preco; 
};

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	struct livros l[5];
	int i, soma=0;
	float media;
	
	for(i=0; i<5; i++)
	{
		printf("\n######## Livro %i ########\n", i+1);
		
		printf("\nIsira o nome do livro: ");
		fflush(stdin);
		gets(l[i].titulo);
		fflush(stdin);
		
		printf("\nIsira a area do livro: ");
		scanf("%s", &l[i].area);
		
		printf("\nIsira o ano de edi��o do livro: ");
		scanf("%i", &l[i].ano_edicao);
		
		printf("\nIsira o n�mero de pags do livro: ");
		scanf("%i", &l[i].pag);
		
		printf("\nIsira o pre�o do livro R$ ");
		scanf("%f", &l[i].preco);
		
		system("cls");
		
		soma = soma + l[i].pag;
	}
	
	media = soma / 5;
	
	for(i=0; i<5; i++)
	{
		printf("\nT�tulo: %s", l[i].titulo);
		printf("\n�rea: %s", l[i].area);
		printf("\nAno de edi��o: %i", l[i].ano_edicao);
		printf("\nN�mero de P�ginas: %i", l[i].pag);
		printf("\nPre�o: %.2f", l[i].preco);
		printf("\n\n");
	}
	
	printf("\nA m�dia de p�ginas � %.2f", media);
}
