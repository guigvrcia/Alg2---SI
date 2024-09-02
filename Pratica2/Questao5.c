#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Lendo conteúdo do array do usuário:
  int array[10];
  int *ptr_array = array;

  for(int i = 0; i < 10; i++)
  {
    printf("Digite a posicao [%d] do array: ", i);
    scanf("%d", ptr_array + i);
  }
  //Manipulando o array e trocando valores:
  for(int i = 0; i < 10 - 1; i++)
  {
    for(int j = i + 1; j < 10; j++)
    {
      if(*(ptr_array + i) > *(ptr_array + j))
      {
        int aux = *(ptr_array + i);
        *(ptr_array + i) = *(ptr_array + j);
        *(ptr_array + j) = aux;
      }
    }
  }
  //Imprimindo o array ordenado:
  printf("O array ordenando fica: ");
  for(int i = 0; i < 10; i++)
  {
    printf("%d ", *(ptr_array + i));
  }

  return 0;
}
