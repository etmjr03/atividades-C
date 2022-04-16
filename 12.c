#include <stdlib.h>
#include <math.h>
#include <stdio.h>


 
int main(){

int vezes, i, vetor[6], lado;

	printf("Quantas vezes vc jogou o dado?:");
	scanf("%d", &vezes);

	for(i = 1; i <= 6; i++)
	{
	vetor[i] = 0;
	}

	for(i = 1; i <= vezes; i++){
	printf("Digite a face do dado:");
	scanf("%d", &lado);
	vetor[lado]++;
	}

	for(i = 1; i <= vezes; i++){
	if(vetor[i] != 0){ 
	printf("A face %d caiu %d vezes. \n", i, vetor[i]); 
	}	
	} 

return 0;	
}
