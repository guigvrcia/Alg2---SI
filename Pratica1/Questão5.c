#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Declarando duas variáveis inteiras:
  int primeiraVar, segundaVar;

  //Lendo os valores do usuário e armazenando-os nas variáveis:
  printf("Digite o valor da primeira variável: \n");
  scanf("%d", &primeiraVar);
  printf("Digite o valor da primeira variável: \n");
  scanf("%d", &segundaVar);

  //Armazenando posições e conteúdo das variáveis antes da modificação:
  int *posicaoprimeiraVar = &primeiraVar;
  int *posicaosegundaVar = &segundaVar;
  int conteudoprimeiraVar = primeiraVar;
  int conteudosegundaVar = segundaVar;

  //Usando ponteiros para modificar o conteúdo das variáveis:
  int *ptrprimeiraVar = &primeiraVar;
  int *ptrsegundaVar = &segundaVar;

  *ptrprimeiraVar = conteudosegundaVar;
  *ptrsegundaVar = conteudoprimeiraVar;

  //Imprimindo os endedereços e conteúdos das variáveis antes e depois das modificações:
  printf("Endereco da primeira variavel antes da modificacao: %p\n", (int*)posicaoprimeiraVar);
  printf("Conteudo da primeira variavel antes da modificacao: %d\n", conteudoprimeiraVar);
  printf("Endereco da segunda variavel antes da modificacao: %p\n", (int*)posicaosegundaVar);
  printf("Conteudo da segunda variavel antes da modificacao: %d\n", conteudosegundaVar);
  printf("Endereco da primeira variavel depois da modificacao: %p\n", (int*)&primeiraVar);
  printf("Conteudo da primeira variavel depois da modificacao: %d\n", *ptrprimeiraVar);
  printf("Endereco da segunda variavel depois da modificacao: %p\n", (int*)&segundaVar);
  printf("Conteudo da segunda variavel depois da modificacao: %d\n", *ptrsegundaVar);

  return 0;
}
