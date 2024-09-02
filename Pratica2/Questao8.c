#include <stdio.h>
#include <stdlib.h>

// Criando struct chamada ponteiros:
struct ponteiros
{
  int *ptr_1;
  float *ptr_2;
  char *ptr_3;
};
int main()
{
// Criando 3 variáveis:
int a = 10;
float b = 3.14;
char c = 'X';

// Criando uma variável do tipo ponteiro:
struct ponteiros ptr;

// Fazendo ponteiro guardar o endereço de memória das 3 variáveis primarias:
ptr.ptr_1 = &a;
ptr.ptr_2 = &b;
ptr.ptr_3 = &c;

// Imprimindo os endereços de memória:
printf("Endereco de inteiro: %p\n", ptr.ptr_1);
printf("Endereco de float: %p\n", ptr.ptr_2);
printf("Endereco de char: %p\n", ptr.ptr_3);

return 0;
}
