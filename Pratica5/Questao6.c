#include <stdio.h>
#include <stdlib.h>

//Função para converter tipos de temperatura:
void conversao(int celsius, float *fahrenheit)
{
  *fahrenheit = (celsius * 9.0 / 5.0) + 32;
}

int main()
{
  int celsius;
  float fahrenheit;

  printf("Digite a temperatura em Celsius: ");
  scanf("%d", &celsius);

//Chama a função:
  conversao(celsius, &fahrenheit);

  printf("A temperatura em Fahrenheit eh: %.2lf\n", fahrenheit);

  return 0;
}
