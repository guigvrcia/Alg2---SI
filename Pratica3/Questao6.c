#include <stdlib.h>
#include <stdio.h>

int main()
{
  int numeros, tamanho = 0, quantidade = 0;

  //Alocando memoria pro vetor:
  int *vetor = (int *)malloc(sizeof(int));
  if (vetor == NULL)
  {
    printf("Erro: Memoria nao alocada.");
  }

  //Recebendo os numeros do usuario:
  printf("Digite um numero ou insira '0' para sair.\n");

  while (1)
  {
    scanf("%d", &numeros);
    if(numeros == 0) {
      break;
    }

    if(tamanho == quantidade) {
      tamanho += 10;
      vetor = (int *)realloc(vetor, tamanho * sizeof(int));
      if (vetor == NULL)
      {
        printf("Erro: Memoria nao alocada.");
      }
    }
    vetor[quantidade] = numeros;
    quantidade++;
  }

  //Imprimindo os numeros que foram armazenados:
  printf("Numeros digitados armazenados: \n");
  for(int i = 0; i < quantidade; i ++)
  {
    printf("%d\n", vetor[i]);
  }
  printf("\n");

  //Liberando memoria:
  free(vetor);
  
  return 0;
}
