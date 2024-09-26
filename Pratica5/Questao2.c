#include <stdio.h>
#include <stdlib.h>

//Cria a função para verificar se é positivo ou negativo:
int verificaPolo(int N)
{
  if(N > 0)
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

  printf("Digite um numero inteiro positivo ou negativo: \n");
  scanf("%d", &N);

  //Chama a função:
  if(verificaPolo(N) == 1)
  {
    printf("O numero digitado %d eh positivo.\n", N);
  } else 
  {
    printf("O numero digitado %d eh negativo.\n", N);
  }

  return 0;
}
