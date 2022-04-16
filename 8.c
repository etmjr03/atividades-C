#include <stdio.h>

void main(){
  const n = 5;
  int a[n], b[n], valorx;
  int i;
  
  printf("Digite o valor de X:\n");
  scanf("%d", &valorx);

  for (i=0; i<n; i++){
    printf("Digite o %d. valor do vetor A: ", (i+1), n);
    scanf("%d", &a[i]);
  }

  printf("\n\n");

  for (i=0; i<n; i++) {
    b[i] = a[i] * valorx;
  }

  printf("\nVetor b\n");
  for (i=0; i<n; i++) {
    printf("%4d\n", b[i]);
  }
}
