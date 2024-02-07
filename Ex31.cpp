//Do While

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	
	int real, soma;
	
	printf("\n##### Calculadora Real #####");
	
	do{
		printf("\n\nInsira um valor: ");
		scanf("%i", &real);
		
		soma = soma + real;
		
	}while(real != 0);
	
	printf("\n\nO seu total é de: %i", soma); 
}
