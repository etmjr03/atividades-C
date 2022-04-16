#include <stdio.h>

int main(){
    int a[5], b[5], c[5], i;
    for (i = 0; i<5; i++) {
    printf("Digite o %d numero do primeiro vetor: ", (i+1));
    scanf("%d", &a[i]);
}
for (i = 0; i<5; i++) {
    printf(" Digite o %d numero do segundo vetor: ", (i+1));
    scanf("%d", &b[i]);
}
for (i = 0; i<5; i++){
    c[i] = a[i] * b[i];
    printf("\n%d Multiplicacao dos indices: %d\n", (i+1), c[i]);
}
    return 0;
}
