#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Criando o Array de float:
  float array[10];

  //Imprimindo endereço e cada posição do array:
  for(int i = 0; i < 10; i++)
  {
    printf("O endereco da posicao [%d] eh: %p\n", i, &array[i]);
  }

  return 0;
}
