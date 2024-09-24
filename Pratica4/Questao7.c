#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int numero;
  struct No *p;
} no;

int main()
{
  int N;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &N);

  //Alocando a memoria para o vetor:
  no *vetor = (no *)malloc(N * sizeof(no));
  if(vetor == NULL) {
    printf("Memoria para alocar insuficiente\n");
    return 1;
  }

  //Preenchendo o vetor:
  printf("Digite os elementos do vetor: ");
  for(int i = 0; i < N; i++) {
    scanf("%d", &vetor[i].numero);
     if(i < N - 1) {
    vetor[i].p = &vetor[i + 1];
  } else {
    vetor[i].p = NULL;
  }
  }

  //Imprimindo o vetor:
  no *aux = &vetor[0];
  while(aux != NULL) {
    printf("%d ", aux->numero);
    aux = aux->p;
  }
  printf("\n");

  free(vetor);
  return 0;
}
