#include <stdio.h>
#include <string.h>

int main(){
  int i;
  char codificaP[500];
	printf("Digite a frase:");
	scanf(" %[^\n]s", codificaP);

  for(i = 0; i < strlen(codificaP); i++){
    if(!(codificaP[i] == 'p' && codificaP[i+2] == 'p'))
    if (!(codificaP[i] == 'p' && !(codificaP[i+1] == 'p')))
    printf("%c", codificaP[i]);
}
return 0;
}
