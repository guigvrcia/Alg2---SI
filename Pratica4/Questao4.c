#include <stdio.h>

int main() {
  int num = 8;
  int *pi;
  int **ppi;
  int ***pppi;

  // Configurando os ponteiros
  pi = &num;
  ppi = &pi;
  pppi = &ppi;

  // Imprimindo os endereços de memória
  printf("Endereco de num: %p\n", (void*)&num);
  printf("Endereco de pi: %p\n", (void*)&pi);
  printf("Endereco de ppi: %p\n", (void*)&ppi);
  printf("Endereco de pppi: %p\n", (void*)&pppi);

  // Imprimindo os conteúdos
  printf("Conteudo de num: %d\n", num);
  printf("Conteudo de pi (endereco de num): %p\n", (void*)pi);
  printf("Conteudo de ppi (endereco de pi): %p\n", (void*)ppi);
  printf("Conteudo de pppi (endereco de ppi): %p\n", (void*)pppi);

  // Acessando o conteúdo de num usando pppi
  printf("Conteudo de num acessado via pppi: %d\n", ***pppi);

  return 0;
}
