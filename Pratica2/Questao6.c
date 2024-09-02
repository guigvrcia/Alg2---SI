#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Criando o struct funcionario:
struct funcionario{
  char nome_funcionario[40];
  float salario;
};

int main()
{
  //Declarando uma variável do tipo funcionario:
  struct funcionario fun_dados;

  //Criando um ponteiro para a variável do tipo funcionario:
  struct funcionario *ponteiro_fun;

  //Lendo os dados do funcionário:
  printf("Digite o nome do funcionario: ");
  scanf("%s", fun_dados.nome_funcionario);
  printf("Digite o salario do funcionario: ");
  scanf("%f", &fun_dados.salario);

  //Imprimindo as informações do funcionário usando apenas ponteiros:
  ponteiro_fun = &fun_dados;
  printf("Nome do funcionario: %s\n", ponteiro_fun->nome_funcionario);
  printf("Salario do funcionario: %.2f\n", ponteiro_fun->salario);

  return 0;
}
