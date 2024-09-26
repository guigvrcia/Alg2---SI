#include <stdio.h>
#include <stdlib.h>

//Função para retornar o fatorial duplo de um numero inteiro positivo impar:
float fatorial(int N)
{
  float resultado = 1;
  for(int i = 1; i <= N; i += 2)
  {
    resultado *= i;
  }
  return resultado;
}

int main()
{
  int N;

  printf("Digite um numero inteiro positivo impar: ");
  scanf("%d", &N);

//Chamando a função para calcular o fatorial duplo de N:
  float resultado = fatorial(N);
  if(N % 2 == 0)
  {
    printf("Erro: O numero digitado nao eh impar. \n");
    return 1;
  } else {
    printf("O fatorial duplo de %d eh %.2lf. \n", N, resultado);
  }

  return 0;
}
