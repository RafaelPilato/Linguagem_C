 #include <stdio.h>
 #include <locale.h>
 #include <windows.h>
 
 main()
 {
 	setlocale(LC_ALL, "PORTUGUESE");
 	
 	printf("Questão 02");
 	
 	int dias, i, j, qtdAplicativo;
 	
 	printf("\n\nInsira o número de dias que deseja avaliar: ");
 	scanf("%i", &dias);
 	
 	printf("\n\nInsira o número de aplicativos que deseja avaliar: ");
 	scanf("%i", &qtdAplicativo);
 	
 	int consumo[dias][5];
 	char aplicativos[qtdAplicativo][9]={""};
	 
	for(i=0; i < qtdAplicativo; i++)
	{
		printf("\nInsira o nome do %iº aplicativo: ", i+1);
		scanf("%s", &aplicativos[i]);
	}
	
	system("cls");
 	
 	for(i=0; i < dias; i++)
 	{
 		for(j=0; j < 5; j++)
		{
			printf("\nInsira o tempo em minutos utilizados no %s no dia %i: ", aplicativos[j], i+1);
			scanf("%i", &consumo[i][j]);	
		}	
		
		system("cls");
	}
 }
