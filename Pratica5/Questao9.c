#include <stdio.h>
#include <stdlib.h>

//Função para criar o triangulo lateral:
void tgoLateral(int N)
{
  //Parte crescente:
  for(int i = 1; i <= N; i++)
  {
    for(int j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  //Parte decrescente:
  for(int i = N - 1; i > 0; i--)
  {
    for(int j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

int main()
{
  int N;

  printf("Digite o valor de N do traingulo lateral: \n");
  scanf("%d", &N);

//Chama a função:
  tgoLateral(N);

  return 0;
}
