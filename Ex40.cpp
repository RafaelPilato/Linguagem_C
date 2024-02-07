/*Escreva um algoritmo que lê uma matriz M(5,5) e calcule e imprima as somas:
a) da linha 4 de M;
b) da coluna 2 de M;
c) da diagonal principal;
d) da diagonal secundária  da M;
e) de todos os elementos da matriz;*/

#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, j, a=0, b=0, c=0, d=0, e=0, somas[2][2];
	
	srand(time(NULL));
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			somas[i][j] = rand() % 50;
			
			printf("[%i]", somas[i][j]);
			
			if(i == 3)
			{
				a = a + somas[i][j];
			}
			
			if(j == 1)
			{
				b = b + somas[i][j];
			}
			
			if( i == j)
			{
				c = c + somas[i][j];
			}
			
			if((i + j) == 4)
			{
				d = d + somas[i][j];
			}
			
			e = e + somas[i][j];
		}
		
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("a)Soma da linha 4: %i \n", a);
	
	printf("b)Soma da coluna 2: %i \n", b);
	
	printf("c)Soma da diagonal principal: %i \n", c);
	
	printf("d)Soma da diagonal segundária: %i \n", d);
	
	printf("e)Soma de toda a matriz: %i", e);
}
