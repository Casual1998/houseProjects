

#include<stdio.h>
#include"gerarRandom.h"


void gerarFicheiro(int tamanhoPass){


	int arrNumeroLetraFicheiro;

	arrNumeroLetraFicheiro = arrNumeroLetra;



	FILE* file = fopen("teste.txt", "w");

	//fprintf(file, "%s \n" , infoFicheiro);

	for(int i = 0; i < tamanhoPass; i ++){

	       fprintf(file, "%c", arrNumeroLetraFicheiro[i]);

	}

	fclose(file);

}
