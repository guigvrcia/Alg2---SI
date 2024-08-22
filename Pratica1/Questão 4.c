#include <stdio.h>
#include <stdlib.h>

int main(){
  //Lendo dois valores inteiros:
  int valor1, valor2;

  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);
  printf("Digite o segundo valor: ");
  scanf("%d", &valor2);

  //Declarando dois ponteiros A e B:
  int *A = &valor1;
  int *B = &valor2;

  //Imprimindo o conteúdo para onde cada ponteiro aponta:
  printf("A = %d\n", *A);
  printf("B = %d\n", *B);

  //Trocando os endereços dos ponteiros:
  int *aux = A;
  A = B;
  B = aux;

  //Imprimindo os valores trocados:
  printf("O novo valor de A apos a troca eh: %d\n", *A);
  printf("O novo valor de B apos a troca eh: %d\n", *B);

  return 0;
}
