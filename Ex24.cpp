#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	float peso, altura, IMC;
	int i, n_alunos, vazio;
	
	printf(">>>>> Calculador IMC <<<<<");
	
	printf("\n\n\nInsira a quantidade de alunos: ");
	scanf("%i", &n_alunos);
	
	for(i=0; i < n_alunos; i++)
	{
		printf("\n\nInsira o peso do %iº aluno em kilos: ", i+1);
		scanf("%f", &peso);
		
		printf("\nInsira o altura do %iº aluno em cm: ", i+1);
		scanf("%f", &altura);
		
		IMC = peso / (altura * altura);
		
		printf("\nO IMC do %iº aluno é %.2f", i+1, IMC);
		
		printf("\n\nPressione 1 + enter para continuar! ");
		scanf("%i", &vazio);
		
		system("cls");
	}
}
