#include <stdio.h>
#include <stdlib.h>

//Criando a função para verificar se o número é primo ou não:
int verificador(int N)
{
  for(int i = 2; i <= N / 2; i++)
  {
    if(N % i == 0)
    {
      return 0;
    } else {
      return 1;
    }
  }
  return 0;
}

int main()
{
  int N;

  printf("Digite um numero para vericar se ele eh primo ou nao: \n");
  scanf("%d", &N);


  //Chama a função:
  if(verificador(N) == 1)
  {
    printf("O numero %d digitado eh primo. \n", N);
  } else {
    printf("O numero %d digitado nao eh primo. \n", N);
  }

  return 0;
}
