#include <stdio.h>
#include <stdlib.h>

int main()
{

  //Declrando ponteiro genérico de 40 bytes:
  void *ponteiro;

  ponteiro = malloc(40);
  if(ponteiro == NULL) {
    printf("ERRO: Memoria nao alocada.");
    return 1;
  }

  //Alocando 10 inteiros:
  for(int i = 0; i < 10; i++) {
    ((int*)ponteiro)[i] = i + 1;
  }

  //Imprimindo os 10 valores inteiros:
  for(int i = 0; i < 10; i++) {
    printf("%d\n", i + 1, ((int*)ponteiro)[i]);
  }

  free(ponteiro);
  
  return 0;
}
