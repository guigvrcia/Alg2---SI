#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  //Criando 3 variáveis do tipo inteiro:
  int primeiroValor, segundoValor, terceiroValor;
  int maiorValor;

  //Lendo os valores:
  printf("Digite o primeiro valor: ");
  scanf("%d", &primeiroValor);
  printf("Digite o segundo valor: ");
  scanf("%d", &segundoValor);
  printf("Digite o terceiro valor: ");
  scanf("%d", &terceiroValor);

  //Declarando ponteiros:
  int *ponteiro1;
  int *ponteiro2;

  ponteiro1 = &primeiroValor;
  ponteiro2 = &segundoValor;

  //Imprimindo o maior valor sem utilizar operadores relacionais:
  maiorValor = fmax(*ponteiro1, *ponteiro2);
  ponteiro1 = &terceiroValor;
  maiorValor = fmax(maiorValor, *ponteiro1);
  printf("O maior valor eh: %d\n", maiorValor);

  return 0;
}
