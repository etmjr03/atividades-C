#include <stdio.h>

int main(){

    int tamPar, i, vetD[5], vetPar[5];
    tamPar = 0;
    float media;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d%*c", &vetD[i]);

        if (vetD[i] % 2 == 0){
            vetPar[tamPar] = vetD[i];
            tamPar++;
        }
    }
    printf("\nVetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", vetD[i]);
    }
    printf("\nNumeros par:\n");
    for (i = 0; i < tamPar; i++) {
        printf("%d\n", vetPar[i]);
    }
    return 0;
}
