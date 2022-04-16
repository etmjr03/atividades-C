#include <stdio.h>

int main(){

    int tamPar, tamImpar, i, vetD[5], vetPar[5], vetImpar[5], qtd;
    tamPar = 0;
    tamImpar = 0;
    qtd = vetImpar[i] * tamImpar;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ",i+1);
        scanf("%d%*c", &vetD[i]);

        if (vetD[i] % 2 == 1){
            vetImpar[tamImpar] = vetD[i];
            tamImpar++;
        }
        else {
            vetPar[tamPar] = vetD[i];
            tamPar++;
        }
    }

    printf("\nVetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", vetD[i]);
    }

    printf("\nNumeros Impar:\n");
    for (i = 0; i < tamImpar; i++) {
        printf("%d\n", vetImpar[i]);
    }
    return 0;
}
