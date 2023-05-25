
#include<stdio.h>
#include"gerarRandom.h"
//#include"gerarFicheiro.h"


void janelaPrograma(){
	
	char selecionaMenu;
	int* teste, tamanhoPass, guardarGerarRandom;

	do{	
		printf("\n");	
		printf("Option 1: Generate a random password \n");
		printf("Option 0: Exit \n");
		printf("Select a option:  \n");
		scanf("%c", &selecionaMenu);

		switch(selecionaMenu){
		
		case '1':
		{
			printf("\n");
			printf("Insert the password size: \n");
			scanf("%d", &tamanhoPass);
			gerarRandom(tamanhoPass);

		break;
		}
		case '2':
			
			
			//gerarFicheiro(tamanhoPass);		

			//tamanhoArrNumeroLetraReceber = 5;
			
			//int* arrNumeroLetraReceber = gerarRandom(tamanhoArrNumeroLetraReceber);
			
			
			//tamanhoArrNumeroLetraReceber = sizeof(arrNumeroLetraReceber)/sizeof(arrNumeroLetraReceber[0]);


			//FILE* file = fopen("teste.txt", "w");

			//for(int i = 0; i < tamanhoArrNumeroLetraReceber; i ++){

			//	fprintf(file, "%c", arrNumeroLetraReceber[i]);

			//}
			
			//fclose(file);


		break;

	
	default:
                printf("Exit or somting went wrong ");
		break;
		}
	
	}while(selecionaMenu != '0');
	

}
