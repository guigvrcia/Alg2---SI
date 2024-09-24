#include <stdio.h>
#include <stdlib.h>

int encontrarX(int **matriz, int linhas, int colunas, int x)
{
  for(int i = 0; i < linhas; i++)
  {
    for(int j = 0; j < colunas; j++)
    {
      if(matriz[i][j] == x)
      {
        printf("O valor %d foi encontrado na posicao [%d][%d].\n", x, i, j);
        return 1;
      }
      }
    }
    return 0;
  }


int main()
{
  int **matriz;
  int linhas, colunas, x;

  printf("Defina a quantidade de linhas da matriz: ");
  scanf("%d", &linhas);
  printf("Defina a quantidade de colunas da matriz: ");
  scanf("%d", &colunas);

  matriz = (int **)malloc(linhas * sizeof(int *));
  if(matriz == NULL)
  {
    printf("Memoria insuficiente. Nao foi possivel alocar a matriz.\n");
    return 1;
  }

  for(int i = 0; i < linhas; i++)
  {
    matriz[i] = (int *)malloc(colunas * sizeof(int));
    if(matriz[i] == NULL)
    {
      printf("Memoria insuficiente. Nao foi possivel alocar a matriz.\n");
      return 1;
    }
  }

  for(int i = 0; i < linhas; i++)
  {
    for(int j = 0; j < colunas; j ++) {
      printf("Digite o valor na posicao [%d][%d]; ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Matriz digitada pelo usuario: \n");
  for(int i = 0; i < linhas; i++) {
    for(int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Digite o valor que deseja encontrar dentro da matriz: ");
  scanf("%d", &x);

  if(!encontrarX(matriz, linhas, colunas, x)) {
    printf("O valor %d nao foi encontrado na matriz. \n", x);
  }

  for(int i = 0; i < linhas; i++) {
    free(matriz[i]);
  }
  free(matriz);
  return 0;
}
