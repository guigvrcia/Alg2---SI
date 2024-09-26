#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Função para verificar se um número é um quadrado perfeito:
int quadradoPerfeito(int num)
{
  int raiz = (int)sqrt(num);
  return (raiz * raiz == num);
}

int main()
{
  int num;

  printf("Digite um numero inteiro para verificar se ele eh um quadrado perfeito: \n");
  scanf("%d", &num);

  //Chama a função:
  if(quadradoPerfeito(num))
  {
    printf("O numero %d digitado eh um quadrado perfeito.\n", num);
  } else {
    printf("O numero %d digitado nao eh um quadrado perfeito.\n", num);
}

  return 0;
}
