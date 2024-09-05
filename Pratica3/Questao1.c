#include <stdio.h>
#include <stdlib.h>

int main()
{

  //Iniciando o programa:
  int *ptr;

  //Alocando memória para os 5 ponteiros:
  ptr = (int *)malloc(5 * sizeof(int));
  if (ptr == NULL)
  {
    printf("Erro: Memoria nao alocada.");
    exit(0);
  }

  //Lendo os 5 inteiros digitados pelo usuário:
  for(int i = 0; i < 5; i++)
  {
    printf("Digite o valor de %d: ", i + 1);
    scanf("%d", &ptr[i]);
  }

  //Imprimindo os 5 numeros digitados:
  for(int i = 0; i < 5; i++)
  {
    printf("Na posicao %d, foi digitado: %d.\n", i + 1, ptr[i]);
  }

  free(ptr);
  
  return 0;
}
