#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int idade;
	
	printf("\nInsira a idade do ser: ");
	scanf("%i", &idade);
	
	switch(idade)
	{
		case 5 ... 10:
			printf("\nCategoria Infantil!");
			break;
			
		case 11 ... 15:
			printf("\nCategoria Juvenil!");
			break;
			
		case 16 ... 20:
			printf("\nCategoria Junior!");
			break;
			
		case 21 ... 25:
			printf("\nCategoria Profissional!");
			break;
			
		default:
			printf("\nO valor inserido está incorreto!");
	}
}
