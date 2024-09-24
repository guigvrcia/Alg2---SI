#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//Declarando a estrutura cidade;
typedef struct cidade {
  char nome[50];
  int x;
  int y;
} Cidade;

//Funcao para ler cidades:
void lerCidades(Cidade *cidade, int N) {
  for(int i = 0; i < N; i++) {
    printf("Digite o nome da cidade na posicao [%d]: ", i + 1);
    scanf("%s", cidade[i].nome);
    printf("Digite a coordenada X da cidade na posicao [%d]: ", i + 1);
    scanf("%d", &cidade[i].x);
    printf("Digite a coordenada Y da cidade na posicao [%d]: ", i + 1);
    scanf("%d", &cidade[i].y);
  }
}

//Calculando a distância entre as cidades:
void calcDistancia(Cidade *cidade, double **matDistancia, int N) {
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if (i == j) {
        matDistancia[i][j] = 0.0;
      } else {
        int dx = cidade[i].x - cidade[j].x;
        int dy = cidade[i].y - cidade[j].y;
        matDistancia[i][j] = sqrt(dx * dx + dy * dy);
      }
    }
  }
}

//Imprimindo as matrizes;
void resultMatriz(double **matDistancia, int N) {
  printf("Resultado do calculo entre as matrizes: ");
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      printf("%.2lf ", matDistancia[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int N;
  double **matDistancia;

  printf("Digite a quantidade de cidades que deseja inserir:");
  scanf("%d", &N);

  //Alocando e verificando a memoria:
  Cidade *cidade = (Cidade *)malloc(N * sizeof(Cidade));
  if(cidade == NULL)
  {
    printf("ERRO! Nao foi possivel alocar memoria.");
    return 1;
  }

  //Lendo as cidades:
  lerCidades(cidade, N);

  //Alocando memoria para as distancias:
  matDistancia = (double **)malloc(N * sizeof(double *));
  for(int i = 0; i < N; i++) {
    matDistancia[i] = (double *)malloc(N * sizeof(double));
  }

  //Calculando distancia e exibindo o resultado:
  calcDistancia(cidade, matDistancia, N);

  resultMatriz(matDistancia, N);

  //Liberando memoria:
  for(int i = 0; i < N; i++) {
    free(matDistancia[i]);
  }

  free(matDistancia);
  free(cidade);
  
  return 0;
}
