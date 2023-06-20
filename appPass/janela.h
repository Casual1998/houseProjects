
#include<stdio.h>
#include"gerarRandom.h"
#include"gerarFicheiro.h"

int tamanhoPass;

void janelaPrograma(){
	
	char selecionaMenu;

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
			
			gerarFicheiro(tamanhoPass);


		break;

	
	default:
                printf("Exit or somting went wrong ");
		break;
		}
	
	}while(selecionaMenu != '0');
	

}
