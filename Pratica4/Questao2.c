#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int maioresValores (int **matriz, int N, int M, int *valoresMaiores) {
  valoresMaiores[0] = valoresMaiores[1] = valoresMaiores[2] = INT_MIN;

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      if(matriz[i][j] > valoresMaiores[0]) {
        valoresMaiores[2] = valoresMaiores[1];
        valoresMaiores[1] = valoresMaiores[0];
        valoresMaiores[0] = matriz[i][j];
      } else if(matriz[i][j] > valoresMaiores[1]) {
        valoresMaiores[2] = valoresMaiores[1];
        valoresMaiores[1] = matriz[i][j];
      } else if(matriz[i][j] > valoresMaiores[2]) {
        valoresMaiores[2] = matriz[i][j];
      }
    }
  }
  return 0;
}


int main()
{
  int N, M, valoresMaiores[3];;
  int **matriz_a, **matriz_transposta;

  printf("Digite a quantidade de linhas da primeira matriz: ");
  scanf("%d", &N);
  printf("Digite a quantidade de colunas da primeira matriz: ");
  scanf("%d", &M);

  matriz_a = (int **)malloc(N * sizeof(int*));
  if(matriz_a == NULL)
  {
    printf("Memória insuficiente\n");
    return 1;
  }

  for(int i = 0; i < N; i++)
  {
    matriz_a[i] = (int *)malloc(M * sizeof(int));
    if(matriz_a[i] == NULL)
    {
      printf("Memória insuficiente\n");
      return 1;
    }
  }
  
  printf("Digite os elementos da matriz:\n");
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      printf("Digite o elemento na posicao [%d[%d]: ", i, j);
      scanf("%d", &matriz_a[i][j]);
    }
  }

  matriz_transposta = (int **)malloc(M * sizeof(int*));
  for(int i = 0; i < M; i++) {
    matriz_transposta[i] = (int *)malloc(N * sizeof(int));
  }

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      matriz_transposta[j][i] = matriz_a[i][j];
    }
  }

  //Imprimindo as matrizes:
  printf("Matriz original: \n");
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      printf("%d ", matriz_a[i][j]);
    }
    printf("\n");
  }

  printf("Matriz transposta: \n");
  for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
      printf("%d ", matriz_transposta[i][j]);
    }
    printf("\n");
  }

  maioresValores(matriz_a, N, M, valoresMaiores);
  printf("Os 3 maiores valores da matriz original sao: %d, %d e %d.\n", valoresMaiores[0], valoresMaiores[1], valoresMaiores[2]);

  for(int i = 0; i < N; i ++) {
    free(matriz_a[i]);
  }

  free(matriz_a);

  for(int i = 0; i < M; i++) {
    free(matriz_transposta[i]);
  }

  free(matriz_transposta);

  return 0;
}
