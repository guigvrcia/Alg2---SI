#include <stdio.h>
#include <stdlib.h>

//Criando um struct com dois valores inteiro e double:
struct valores
{
  int valor1;
  double valor2;
};

int main()
{
//Criando um vetor de 4 posições do tipo valores e criando ponteiro para o vetor:
struct valores vetor[4];
struct valores *ptr_vetor = vetor;

//Adicionando elementos ao vetor:
vetor[0].valor1 = 14;
vetor[0].valor2 = 3.14;
vetor[1].valor1 = 20;
vetor[1].valor2 = 2.95;
vetor[2].valor1 = 70;
vetor[2].valor2 = 1.75;
vetor[3].valor1 = 90;
vetor[3].valor2 = 0.25;

//Imprimindo o conteúdo do vetor usando ponteiro e a posição da memória de cada elemento com ponteiro:
for(int i = 0; i < 4; i++)
{
  printf("Posicao 1 [%d] = %d\n", i, ptr_vetor->valor1);
  printf("Posicao 2 [%d] = %.2f\n", i, ptr_vetor->valor2);
  printf("Endereco de Posicao 1[%d] = %p\n", i, &ptr_vetor->valor1);
  printf("Endereco de Posicao 2[%d] = %p\n", i, &ptr_vetor->valor2);
  ptr_vetor++;
}

  return 0;
}
