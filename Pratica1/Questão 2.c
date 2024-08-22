#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Escrevendo as duas variáveis inteiras:
  int primeiraVar = 14;
  int segundaVar = 99;

  //Imprimindo os valores das variáveis:
  printf("O endereco da primeira variavel eh: %p\n", (void*)&primeiraVar);
  printf("O endereco da segunda variavel eh: %p\n", (void*)&segundaVar);

  //Comparando endereços e exibindo o maior:
  if(&primeiraVar > &segundaVar)
  {
    printf("O endereco da primeira variavel eh maior que o da segunda variavel. %p\n", (void*)&primeiraVar);
  } else {
    printf("O endereco da segunda variavel eh maior que o da primeira variavel. %p\n", (void*)&segundaVar);
  }

  return 0;
}
