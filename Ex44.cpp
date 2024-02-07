/*5) A cidade de "Cleantown" est� empenhada em controlar a polui��o do ar e monitorar diariamente os n�veis de subst�ncias 
prejudiciais em quatro �reas diferentes da cidade. Os gases monitorados s�o �xidos de nitrog�nio (NOx), 
mon�xido de carbono (CO), di�xido de enxofre (SO2) e part�culas em suspens�o (PM10).
Cada �rea da cidade tem um �ndice de polui��o di�ria para cada um dos quatro poluentes, representados por uma matriz 4x4, 
onde as linhas representam as �reas (A1, A2, A3, A4) e as colunas representam os poluentes (NOx, CO, SO2 , PM10).

Escreva um programa em linguagem C que realize as opera��es:
Leia os �ndices de polui��o para cada �rea e poluente, armazenando-os em uma matriz.
Calcule e exiba a m�dia de polui��o para cada poluente em toda a cidade.
Determine e exiba a �rea com maior m�dia de polui��o geral.
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float matriz[4][4], soma_poluente, media_poluente, poluente[4], soma_area, media_area, maior_area=0;
	char poluentes[][5]={"NOx", "CO", "SO2", "PM10"};
	int i, j, area_maior=0;
		
	for(i=0; i < 4; i++)
	{
		soma_area = 0;
		media_area = 0;
		
		for(j=0; j < 4; j++)
		{
			printf("\nInsira o �ndice de polui��o de %s da �rea %i: ", poluentes[j], i+1);
			scanf("%f", &matriz[i][j]);
			
			soma_area = soma_area + matriz[i][j];
		}
		
		system("cls");

		media_area = soma_area / 4;
		
		if(media_area > maior_area)
		{
			maior_area = media_area;
			area_maior = i+1;
		}
	}
	
	printf("\n--- M�dia por poluente ---\n");
	
	for(j=0; j < 4; j++)
	{
		soma_poluente = 0;
		
		media_poluente = 0;
		
		for(i=0; i < 4; i++)
		{
			soma_poluente = soma_poluente + matriz[i][j];
		}
		
		media_poluente = soma_poluente / 4;
		poluente[j] = media_poluente;
		
		printf("\nA m�dia de %s � %.2f", poluentes[i], poluente[j]);
	}
	
	printf("\n\nA �rea com maior m�dia de polui��o � a �rea %i com uma m�dia de %.2f", area_maior, maior_area);
}
