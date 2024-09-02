#include <stdio.h>
#include <stdlib.h>

//Criando struct para aluno:
struct aluno{
  char nome[50];
  int idade;
  float nota;
};
int main()
{
  //Criando matriz 3 x 3 para aluno:
  struct aluno alunos[3][3];

  //Adicionar os valores da matriz:
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      printf("Digite o nome do aluno: ");
      scanf("%s", alunos[i][j].nome);
      getchar();
      printf("Digite quantos anos o aluno tem: ");
      scanf("%d", &alunos[i][j].idade);
      printf("Digite a nota final do aluno: ");
      scanf("%f", &alunos[i][j].nota);
    }
  }
  //Percorrendo a matriz usando ponteiro e imprimindo seus valores:
  struct aluno *ptr = &alunos[0][0];
  for(int i = 0; i < 3 * 3; i++)
  {
    printf("Nome do aluno: %s, Idade: %d e Nota final: %.2f\n", ptr->nome, ptr->idade, ptr->nota);
    ptr++;
  }

  return 0;
}
