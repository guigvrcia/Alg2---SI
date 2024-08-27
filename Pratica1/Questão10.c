#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Declarando um vetor de tipo double de 5 posições:
  double vetor[5];

  //Lendo as posições do vetor do teclado:
  printf("Posicao 1: \n");
  scanf("%lf", &vetor[0]);
  printf("Posicao 2: \n");
  scanf("%lf", &vetor[1]);
  printf("Posicao 3: \n");
  scanf("%lf", &vetor[2]);
  printf("Posicao 4: \n");
  scanf("%lf", &vetor[3]);
  printf("Posicao 5: \n");
  scanf("%lf", &vetor[4]);

  //Declrando um ponteiro para double:
  double *ponteiro;

  //Fazendo o ponteiro apontar para o menor valor:
  ponteiro = &vetor[0];
  for(int i = 1; i < 5; i++)
  {
    if(*ponteiro > vetor[i])
    {
      ponteiro = &vetor[i];
    }
  }
  printf("O menor valor do vetor eh: %lf\n", *ponteiro);
  return 0;
}
