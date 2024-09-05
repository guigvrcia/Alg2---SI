#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Declarando variáveis:
  int *vetor;
  int tamanho = 1500;

  //Alocando memória para o vetor:
  vetor = (int *)calloc(tamanho, sizeof(int));
  if(vetor == NULL)
  {
    printf("Erro! Memoria insuficiente.\n");
    return 1;
  }

  //Exibindo os 10 primeiros elementos do vetor:
  printf("Os 10 primeiros elementos do vetor sao: \n");
  for(int i = 0; i < 10; i++)
  {
    printf("%d\n", vetor[i]);
  }
  printf("\n");

  //Exibindo os 10 últimos elementos do vetor:
  printf("Os 10 ultimos elementos do vetor sao: \n");
  for(int i = tamanho - 10; i < tamanho; i++)
  {
    printf("%d\n", vetor[i]);
  }
  printf("\n");

  free(vetor);

  return 0;
}
