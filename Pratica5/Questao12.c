#include <stdio.h>
#include <stdlib.h>

//Função para retornar o fatorial de um número positivo:
float fatorial(int N)
{
  float resultado = 1;
  for(int i = 1; i <= N; i++)
  {
    resultado *= i;
  }
  return resultado;
}

int main()
{
  int N;

  printf("Digite um numero positivo: \n");
  scanf("%d", &N);

//Chama função:
  float resultado = fatorial(N);
  if(N > 0)
  {
    printf("O fatorial de %d eh %.0f\n", N, resultado);
  } else {
    printf("O numero digitado nao eh posivito.\n");
  }

  return 0;
}
