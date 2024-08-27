#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Declarando as duas variáveis flutuantes a e b.
  float a, b;
  float calculo;

  //Lendo os valores a e b:
  printf("Digite o valor de a: ");
  scanf("%f", &a);
  printf("Digite o valor de b: ");
  scanf("%f", &b);

  //Efetuando os cálculos e imprimindo os resultados.
  if((unsigned long)&a % 3 == 0 && (unsigned long)&b % 3 == 0)
  {
    calculo = a + b;
    printf("O resultado da soma eh: %.2f\n", calculo);
  } else if ((unsigned long)&a % 5 == 0 && (unsigned long)&b % 5 == 0)
  {
    calculo = a - b;
    printf("O resultado da subtracao eh: %.2f\n", calculo);
  } else if (labs((unsigned long)&a - (unsigned long)&b) > 4)
  {
    calculo = a * b;
    printf("O resultado da multiplicacao eh: %.2f\n", calculo);
  } else {
    calculo = a / b;
    printf("O resultado da divisao eh: %.2f\n", calculo);
  }
  return 0;
}
