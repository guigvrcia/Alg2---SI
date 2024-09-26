#include <stdio.h>
#include <stdlib.h>


//Cria a função para calcular o dobro:
int calcDobro(int N)
{
  return N * 2;
}

int main()
{
  int N;

  printf("Digite um numero do tipo inteiro para encontrar seu dobro: \n");
  scanf("%d", &N);

  //Chama a função:
  calcDobro(N);

  printf("O dobro de %d eh: %d\n", N, calcDobro(N));

  return 0;
}
