#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
int vetorA[4], vetorB[4], vetorC[4], cont=0, contb=0, contc=0, igual = 0;

	printf("Digite os valores da Matriz A:\n");
	
	for(cont = 0; cont < 4; cont++){
	scanf("%d",&vetorA[cont]);
	}
	
	printf("Digite os valores da Matriz A:\n");
	for(cont = 0; cont < 4; cont++){
	scanf("%d",&vetorB[cont]);
	}
	for(cont = 0; cont < 4; cont++){
	for(contb = 0; contb < 4; contb++){
	if (vetorA[contc] == vetorB[contb]){
	vetorC[contc++] = vetorA[cont];
	}
	}
	}
	for(cont = 0; cont < contc; cont++){
	printf("Valores iguais: %d\n",vetorC[cont]);
	}
	system("pause");
	return 0;
}

