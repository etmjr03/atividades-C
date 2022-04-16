#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(){ 
int num[10], i, val, contido, j; 
srand (time(NULL)); 
 
for (i=0; i<10; i++) { 
num[i] = rand() % 50 + 1; 
do { 
contido = 1; 
for (j=0; j<i; j++)

if (num[i] == num[j]) { 
num[i] = rand() % 50 + 1; 
contido = 0; 
} 
} while(contido == 0); 
}
printf("Informe um numero de 1 a 50: "); 
scanf("%d", &val); 
i=0; 
while((i<10) && (num[i] != val)) 
i++; 
if(i < 10) 
printf("%d encontra-se na posicao %d do vetor\n", val, i); 
else 
printf("%d nao esta contido no vetor\n", val); 
return 0; 
}
