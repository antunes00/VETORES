//20. Escreva um algoritmo que possua um vetor com 200 posi��es. Cada
//posi��o do vetor deve ser alimentada por um valor de retorno da fun��o
//randi. Mostre o vetor constru�do.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int num [200], i;

int main(){
	for (i=0;i<200;i++){
		num[i]=rand() % 200;
		printf("\ni=%i\tnum=%i",i, num[i]);
	}
	
}
