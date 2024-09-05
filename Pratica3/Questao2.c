#include <stdio.h>
#include <stdlib.h>

int main()
{
//Lendo do usuário o tamanho de um vetor inteiro:
 int quantidade, *ptr;
 printf("Digite a quantidade de elemntos dentro do vetor: ");
 scanf("%d", &quantidade);

 //Fazendo a alocação da memória:
 ptr = (int *)malloc(quantidade * sizeof(int));
 if(ptr == NULL)
 {
  printf("Erro! Memoria nao alocada.");
 }

 //Lendo os valores do vetor:
 for(int i = 0; i < quantidade; i++)
 {
  printf("Digite o elemento da posicao %d do vetor: ", i);
  scanf("%d", &ptr[i]);
 }

 //Imprimindo os valores do vetor:
 for(int i = 0; i < quantidade; i++)
 {
  printf("Valor na posicao %d eh %d\n", i, ptr[i]);
 }

//Mostrando quantos dos números são pares e quantos são impares:
int pares = 0, impares = 0;
for(int i = 0; i < quantidade; i++)
{
  if(ptr[i] % 2 == 0)
  {
    pares++;
  } else {
    impares++;
  }
}
 printf("O vetor lido possui %d numeros pares. \n", pares);
 printf("O vetor lido possui %d numeros impares. \n", impares);
 free(ptr);

 return 0;
}
