#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  //Declarando o tipo de vetor
  int valores;
  void *vetor;

  //Inicializando os numeros aleatórios:
  srand(time(NULL));

  //Perguntando ao usuário quandos valores ele deseja armazenar no vetor:
  do {
    printf("Quantos valores voce deseja adicionar ao vetor? \n");
    scanf("%d", &valores);
    if(valores < 10)
    {
      printf("Insira um numero maior ou igual a 10.\n");
    }
  } while (valores < 10);

  //Alocando memoria para o vetor:
  vetor = malloc(valores * sizeof(float));
  if(vetor == NULL)
  {
    printf("Erro ao alocar memoria.\n");
    return 1;
  }

  //Atribuindo os valores aleatórios ao vetor:
  for(int i = 0; i < valores; i++)
  {
    ((float *)vetor)[i] = ((float)rand() / (float)(RAND_MAX)) * 100.0;
  }

  //Imprimindo os valores nos 10 primeiros elementos do vetor:
  for(int i = 0; i < 10; i++)
  {
    printf("Valor %d: %.2f\n", i + 1, ((float *)vetor)[i]);
  }

  free(vetor);
  return 0;
}
