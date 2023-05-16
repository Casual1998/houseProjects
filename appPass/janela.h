
#include<stdio.h>
#include"gerarRandom.h"
//#include"gerarFicheiro.h"

void janelaPrograma(){
	
	char selecionaMenu;
	int* teste, tamanhoPass, arrNumeroLetraReceber; 
	int tamanhoArrNumeroLetraReceber;

	do{	
		printf("\n");	
		printf("Opcao 1: \n");
		printf("Opcao 0: Sair \n");
		printf("Seleciona a opcao:  \n");
		scanf("%c", &selecionaMenu);

		switch(selecionaMenu){
		
		case '1':
		{
			printf("Insere o tamanho da pass: \n");
			scanf("%d", &tamanhoPass);
			gerarRandom(tamanhoPass);

		break;
		}
		case '2':
			

			tamanhoArrNumeroLetraReceber = 5;
			
			int* arrNumeroLetraReceber = gerarRandom(tamanhoArrNumeroLetraReceber);
			
			
			//tamanhoArrNumeroLetraReceber = sizeof(arrNumeroLetraReceber)/sizeof(arrNumeroLetraReceber[0]);


			FILE* file = fopen("teste.txt", "w");

			for(int i = 0; i < tamanhoArrNumeroLetraReceber; i ++){

				fprintf(file, "%c", arrNumeroLetraReceber[i]);

			}
			
			fclose(file);


		break;

	
	default:
                printf("Bateu mal: ");
		break;
		}
	
	}while(selecionaMenu != '0');
	

}
