#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  //Recebendo do usuário o tamanho de uma string:
  char *ptr;
  int tamanho;
  
  printf("Informe o tamanho da string: \n");
  scanf("%d", &tamanho);
  getchar();
  
  //Alocando a string:
  ptr = (char*)malloc(tamanho * sizeof(char));
  if(ptr == NULL)
  {
    printf("Memoria nao foi alocada.");
    exit(1);
  }
  
  //Recebendo a string do usuário:
  printf("Infome o conteudo da string: \n");
  fgets(ptr, tamanho, stdin);

  //Imprimindo a string sem suas vogais:
  printf("O conteudo dessa string sem vogais: \n");
  for(int i = 0; ptr[i] != '\0'; i++)
  {
    if(ptr[i] != 'a' && ptr[i] != 'e' && ptr[i] != 'i' && ptr[i] != 'o' && ptr[i] != 'u'
    && ptr[i] != 'A' && ptr[i] != 'E' && ptr[i] != 'I' && ptr[i] != 'O' && ptr[i] != 'U')
    {
      printf("%c", ptr[i]);
    }
  }
  printf("\n");

  free(ptr);

  return 0;
}
