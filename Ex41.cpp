/*2) Faça um programa que leia duas matrizes 4 x 3 de números inteiros, mat1 e mat2; 
calcule a matriz soma (mat3) e emseguida mostre mat3 na tela.*/

#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, j, mat1[4][3], mat2[4][3], mat3[4][3], soma;
	
	for(i=0; i < 4; i++)
	{
		for(j=0; j < 3; j++)
		{
			printf("\nMatriz 1, informe o valor da %iº linha da %iº coluna:", i+1, j+1);
			scanf("%i", &mat1[i][j]);
			
			system("cls"); 
		}
	}
	
	for(i=0; i < 4; i++)
	{
		for(j=0; j < 3; j++)
		{
			printf("\nMatriz 2, informe o valor da %iº linha da %iº coluna:", i+1, j+1);
			scanf("%i", &mat2[i][j]);	
			
			system("cls");
		}
	}
	
	for(i=0; i < 4; i++)
	{		
		for(j=0; j < 3; j++)
		{
			mat3[i][j] = mat2[i][j] + mat1[i][j];
			
			printf("[%i]", mat3[i][j]);
		}
		
		printf("\n");
	}
}
