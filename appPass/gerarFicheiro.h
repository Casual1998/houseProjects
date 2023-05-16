

#include<stdio.h>
#include"gerarRandom.h"


void gerarFicheiro(int gerarRandom){


	int receberNumeroLetra;
	receberNumeroLetra = gerarRandom;
	

	FILE* file = fopen(filename, "w");
    	

	for (int i = 0; i < size; i++) {
		fprintf(file, "%d ", gerarRandom[i]);
	}

	fclose(file);

	saveArrayToFile(gerarRandom, size, "output.txt");

}
