/*5) A cidade de "Cleantown" está empenhada em controlar a poluição do ar e monitorar diariamente os níveis de substâncias 
prejudiciais em quatro áreas diferentes da cidade. Os gases monitorados são óxidos de nitrogênio (NOx), 
monóxido de carbono (CO), dióxido de enxofre (SO2) e partículas em suspensão (PM10).
Cada área da cidade tem um índice de poluição diária para cada um dos quatro poluentes, representados por uma matriz 4x4, 
onde as linhas representam as áreas (A1, A2, A3, A4) e as colunas representam os poluentes (NOx, CO, SO2 , PM10).

Escreva um programa em linguagem C que realize as operações:
Leia os índices de poluição para cada área e poluente, armazenando-os em uma matriz.
Calcule e exiba a média de poluição para cada poluente em toda a cidade.
Determine e exiba a área com maior média de poluição geral.
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
			printf("\nInsira o índice de poluição de %s da área %i: ", poluentes[j], i+1);
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
	
	printf("\n--- Média por poluente ---\n");
	
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
		
		printf("\nA média de %s é %.2f", poluentes[i], poluente[j]);
	}
	
	printf("\n\nA área com maior média de poluição é a área %i com uma média de %.2f", area_maior, maior_area);
}
