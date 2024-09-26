#include <stdio.h>
#include <stdlib.h>

//Função para desenhlar linhas na tela:
void DesenhaLinha (int num)
{
  for(int i = 0; i < num; i++)
  {
    printf("=");
  }
  printf("\n");
}

int main()
{
  int num;

  printf("Digite o tamanho da linha a ser desenhada: \n");
  scanf("%d", &num);

//Chama a função:
  DesenhaLinha(num);

  return 0;
}
