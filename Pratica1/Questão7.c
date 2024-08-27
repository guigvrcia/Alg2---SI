#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Declarando um inteiro para verificar se sua memória é divisível por 5.
  int numero = 20;

  //Verificando se a memoria é divisível por 5.
  if((unsigned long)&numero % 5 == 0)
  {
    printf("A memoria do inteiro eh: %p, portanto divisivel por 5.\n", &numero);
  } else {
    printf("A memoria do inteiro eh: %p, portanto nao eh divisivel por 5.\n", &numero);
  }
  return 0;
}
