//21. Escreva um vetor de 300 posições e carregue-o com elementos gerados
//com a função randi. Mostre quantos elementos são pares e quantos são
//ímpares.


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int num [200], i, par=0 , impar=0 ;

int main(){
	for (i=0;i<200;i++){
		num[i]=rand() % 200;
		printf("\ni=%i\tnum=%i",i, num[i]);
		
		if(num[i]%2==0)
		par++; 
		else 
		impar++;
		
	}
	printf("\n\ndias pares %i, dias impares %i\n", par, impar);
}
