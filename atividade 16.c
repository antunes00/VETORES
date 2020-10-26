//16. Em uma cidade do interior, sabe-se que, durante 31 dias do mês de
//outubro, foi feita a coleta de temperatura diariamente pela manhã.
//Elabore um algoritmo que leia os dados e que calcule e escreva:
//? A temperatura média
//? Quantos dias a temperatura foi inferior à temperatura média;
//? Quais os dias do mês nos quais a temperatura foi superior à
//temperatura média;

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
