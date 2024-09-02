#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Criando a matriz float 3x3:
  float matriz[3][3];

  //Imprimindo o endereço de cada posição da matriz:
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      printf("O endereco da linha [%d] e coluna [%d] eh: %p\n", i, j, &matriz[i][j]);
    }
  }
  return 0;
}
