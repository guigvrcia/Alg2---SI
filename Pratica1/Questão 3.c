#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Escrevendo duas variáveis inteiras:
  int primeiraVar;
  int segundaVar;

  //Lendo as variáveis do teclado:
  printf("Digite o valor da primeira variavel: ");
  scanf("%d", &primeiraVar);
  printf("Digite o valor da segunda variavel: ");
  scanf("%d", &segundaVar);

  //Imprimindo os endereços das variáveis:
  printf("O endereco da primeira variavel eh: %p\n", (void*)&primeiraVar);
  printf("O endereco da segunda variavel eh: %p\n", (void*)&segundaVar);

  //Declarando ponteiros e comparando endereços e exibindo o conteúdo do maior endereço:
  int *ponteiro1 = &primeiraVar;
  int *ponteiro2 = &segundaVar;

  if(ponteiro1 > ponteiro2)
  {
    printf("O conteudo presente no maior endereco eh: %d\n", *ponteiro1);
  } else {
    printf("O conteudo presente no maior endereco eh: %d\n", *ponteiro2);
  }

  return 0;
}
