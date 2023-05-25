
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int *gerarRandom(int tamanhoPass){
	

	int  *arrNumeroLetra, numeroVezes, tamanhoNumeroLetra, tamanhoPreencherDocumento, index = 0, index2 = 0, temp1, temp2;
	char verificarFicheiro, infoFicheiro[99];

	// Gera um numero random para adicionar a quantidade de dados ascii
	int min = 250;
	int max = 500;


	// Gerar um numero random
	srand(time(NULL));
	numeroVezes = min + rand() % (max - min + 1);


	// Tamanho do array 
	tamanhoNumeroLetra = 94 * numeroVezes;
	// Declaracao do array
	arrNumeroLetra = (int*) malloc(tamanhoNumeroLetra* sizeof(int));


	// Quantidade de vezes que vai adicionar os dados ascii
	for(int j = 0; j<numeroVezes; j++){
		for(int i = 33; i<=126; i++){
			arrNumeroLetra[index] = i;
			index ++; 
		}
	}

	// Fazer troca de posicoes
	for(int i = tamanhoNumeroLetra; i > 0 ; i--){
		// Gera um index a sorte e aplica a troca		
		index2 = rand() % (i + 1);
	
		temp1 = arrNumeroLetra[i];
		arrNumeroLetra[i] = arrNumeroLetra[index2];
		arrNumeroLetra[index2] = temp1;
	}

	// Imprimir a password
	for(int i = numeroVezes; i <(numeroVezes + tamanhoPass); i++){
		printf("%c", arrNumeroLetra[i]);
	}
	printf("\n");

	
	// Gerar ficheiro txt ----------------

	printf("Do you want to generate a .txt with the password? S ou N \n");
	scanf(" %c", &verificarFicheiro);



        if(verificarFicheiro == 'S'){

		// Insert the a name to the password
		printf("Ad where your are going to use the password: \n Ex: Email  $a8&:B5 \n");
        	scanf(" %[^\n]", infoFicheiro);

		//Size of the number
                //tamanhoPreencherDocumento = sizeof(infoFicheiro) / sizeof(infoFicheiro[0]);
		
		//infoFicheiro = (char*)  malloc(tamanhoPreencherDocumento* sizeof(char));

		/*
		for(int i = 0; i < tamanhoPreencherDocumento; i++){
		
			printf("%s", infoFicheiro[i]);

		}
		*/		

                FILE* file = fopen("teste.txt", "w");

                fprintf(file, "%s \n" , infoFicheiro);

                for(int i = numeroVezes; i < (numeroVezes + tamanhoPass); i ++){

                       fprintf(file, "%c", arrNumeroLetra[i]);

                }

                fclose(file);
        }	
	
/*	
	if(verificarFicheiro == 'S'){

		FILE* file = fopen("teste.txt", "w");

		fprintf(file, "Rodolfo\nemail");

		for(int i = numeroVezes; i < (numeroVezes + tamanhoPass); i ++){

		       fprintf(file, "%c", arrNumeroLetra[i]);

		}

		fclose(file);
	}
*/
	return arrNumeroLetra;
}
