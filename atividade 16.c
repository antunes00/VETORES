//16. Em uma cidade do interior, sabe-se que, durante 31 dias do m�s de
//outubro, foi feita a coleta de temperatura diariamente pela manh�.
//Elabore um algoritmo que leia os dados e que calcule e escreva:
//? A temperatura m�dia
//? Quantos dias a temperatura foi inferior � temperatura m�dia;
//? Quais os dias do m�s nos quais a temperatura foi superior �
//temperatura m�dia;

# include <stdio.h>

int dia[31], somatemp=0 , tempmenor=0, i=1 ;

float mediatemp;

int main(){
	for (i=0; i<5; i++){
		
		 printf("informe a temperatura redonda:");
		 scanf("%i", &dia[i]);
		 somatemp+=dia[i];
		 
	}
	 printf("\n\n%i", somatemp);
	 
	 mediatemp = somatemp/ i ;
	 printf("\nmedia temperatura : %.2f", mediatemp);
	 
	 for (i=0; i<5; i++){
	 	
	 	if (dia [i]<mediatemp){
	 		tempmenor++;
	 		
		 }
		 if (dia[i]>mediatemp){
		 	
		 	printf("\ndias com a temperatura maior que a media %i=%i",i, dia[i]);
		 }
		 
	 }
	 printf("quantidade de dias abaixo da media %i", tempmenor);
	
}
