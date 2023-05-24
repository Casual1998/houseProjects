

#include<stdio.h>
#include"gerarRandom.h"


void gerarFicheiro(int tamanhoArrNumeroLetraReceber){

	//tamanhoArrNumeroLetraReceber = 5;

	int* arrNumeroLetraReceber = gerarRandom(tamanhoArrNumeroLetraReceber);


	//tamanhoArrNumeroLetraReceber = sizeof(arrNumeroLetraReceber)/sizeof(arrNumeroLetraReceber[0]);


	FILE* file = fopen("teste.txt", "w");

	
	for(int i = 0; i < tamanhoArrNumeroLetraReceber; i ++){

		fprintf(file, "%c", arrNumeroLetraReceber[i]);

	}
	
	fclose(file);



}
