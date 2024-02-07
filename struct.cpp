#include <stdio.h>
#include <locale.h>
#include <windows.h>

struct garrafa{
	char cor[10], dono[20];
	float peso, cap, preco;		
};

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int n, i;
	
	printf("\nQuantas garrafas voc� quer cadastrar? ");
	scanf("%i", &n);
	
	struct garrafa g1[n];
	
	for(i=0; i < n; i++)
	{
		printf("\nInforme a cor da %i� garrafa: ", i+1);
		scanf("%s", &g1[i].cor);
		
		printf("\nInforme o nome do dono da %i� garrafa: ", i+1);
		scanf("%s", &g1[i].dono);
		
		printf("\nInforme o peso da %i� garrafa em gramas: ", i+1);
		scanf("%f", &g1[i].peso);
		
		printf("\nInforme a capacidade da %i� garrafa em litros: ", i+1);
		scanf("%f", &g1[i].cap);
		
		printf("\nInforme o pre�o da %i� garrafa R$ ", i+1);
		scanf("%f", &g1[i].preco);
		
		system("cls");
	}	
	
	for(i=0; i < n; i++)
	{
		printf("\n######## DADOS DA %i� GARRAFA ########\n");
		printf("\nA garrafa %s � do(a) %s", g1[i].cor, g1[i].dono);	
		printf("\nO peso da garrafa � %.2f g, a capacidade � %.2f l e seu pre�o � R$ %.2f", g1[i].peso, g1[i].cap, g1[i].preco);
		printf("\n");
	}
}
