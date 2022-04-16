#include<stdio.h>
int main(){
 int valor[5],i, z=0, soma=0;
 
 printf("Digite o valor do vetor\n");
 scanf("%d", &z);

 for(i=0; i<z; i++){
 printf("Qual o %do valor?\n ", i+1);
 scanf("%d", &valor[i]);
 soma=soma+valor[i];
 }

 printf("A soma vale: %d", soma);

 getch();
} 

