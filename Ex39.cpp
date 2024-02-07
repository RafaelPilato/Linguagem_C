#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, j, total_vendas=0, total_sul, vendas[4][5];
	char regioes[5][13]={"Norte", "Nordeste", "Sul", "Sudeste", "Centro-Oeste"};
	
	//Para mudar os valores do randon, não repetir
	//srand(time(NULL));
	
	for(i=0; i<4; i++)
	{
		system("cls");
		
		for(j=0; j<5; j++)
		{
			//Para preencer a matriz randomicamente
			//vendas[i][j] = rand() % 2600 ;
			printf("\nInsira a quantidade vendida no %iº Trimestre na região %s ", i+1, regioes[j]);
			scanf("%i", &vendas[i][j]);
			
			total_vendas = total_vendas + vendas[i][j];
		}
		
		total_sul = total_sul + vendas[i][2];
	}
	
	system("cls");
	
	printf("\nO total de vendas no pais todo durante todo o ano foi %i", total_vendas);
	printf("\n\nO total de vendas durante o ano no sul foi de %i", total_sul); 	
}
