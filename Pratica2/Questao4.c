#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Criando ponteiro genérico:
  void *ponteiro;

  //Declarando 3 variáveis dos tipos int, float e double:
  int variavel1;
  float variavel2;
  double variavel3;

  //Lendo os valores do usuário:
  printf("Digite um valor para inteiro: \n");
  scanf("%d", &variavel1);
  printf("Digite um valor para float: \n");
  scanf("%f", &variavel2);
  printf("Digite um valor para double: \n");
  scanf("%lf", &variavel3);

  //Apontando os valores das variáveis e imprimindo seus valores usando ponteiro:
  ponteiro = &variavel1;
  printf("O valor da primeira variavel inteira digitada eh: %d\n", *(int *)ponteiro);
  ponteiro = &variavel2;
  printf("O valor da segunda variavel float digitada eh: %f\n", *(float *)ponteiro);
  ponteiro = &variavel3;
  printf("O valor da terceira variavel double digitado eh: %lf\n", *(double *)ponteiro);

  return 0;
}
