/*Sistema de séries para academia*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	char nome_exe[][50]={"Supina com barra", "Supino com barra inclinado", "Voador para peito", "Tricipes frânces", "Tricipes na polia", "Tricipes testa com barra H"}, quantidade[][10]={"3x10", "3x10", "3x10", "3x10", "3x10", "3x10"};
	int i;
	
	printf("\n########################");
	printf("\n       Bom treino       ");
	printf("\n########################\n");
	
	for(i=0; i < 6; i++)
	{
		printf("\n %s - %s", nome_exe[i], quantidade[i]);
	}
}
