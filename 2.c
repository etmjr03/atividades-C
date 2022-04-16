#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, maior=0, menor=0;
    float Valores[5];

    printf("digite os 5 valores");
    printf("\n");
    for (a=0;a<5;a++){
      printf("Valor %d : ", a+1);
      scanf("%f", &Valores[a]);
      if(a==0){
	  maior=Valores[a];
	  menor=Valores[a];
	}
      if(Valores[a]>maior){
        maior=Valores[a];
      }
      else{
        if(Valores[a]<menor){
        menor=Valores[a];
        }
      }
    }
    for(a=0;a<5;a++)
	printf("\n%d\n",a+1);
	
    printf("\nValor maior %d\n", maior);
    printf("\nValor menor %d\n", menor);
    system("pause");
    return 0;
}
