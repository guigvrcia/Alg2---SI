#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Criando array de inteiros contendo 5 elementos:
  int array[5];

  //Lendo o array do teclado:
  for(int i = 0; i < 5; i++)
  {
    printf("Digite o primeiro elemento do array:");
    scanf("%d", &array[i]);
  }

  //Imprimindo o dobro de cada valor lido utilizando aritmética de ponteiros:
  int *ptr_array = array;
  for(int i = 0; i < 5; i++)
  {
    printf("O dobro do valor [%d] digitado eh: %d\n", i + 1, *(ptr_array + i) * 2); 
  }

  return 0;
}
