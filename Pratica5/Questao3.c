#include <stdio.h>
#include <stdlib.h>

//Cria a função para verificar se o número é ímpar ou par:
int verificador(int N)
{
  if(N % 2 == 0)
  {
    return 1;
  } else 
  {
    return 0;
  }
}

int main()
{
  int N;

  printf("Digite um numero para verificar se ele eh par ou impar: \n");
  scanf("%d", &N);

  //Chama a função:
  if(verificador(N) == 1)
  {
    printf("O numero %d digitado eh par.\n", N);
  } else {
    printf("O numero %d digitado eh impar.\n", N);
  }

  return 0;
}
