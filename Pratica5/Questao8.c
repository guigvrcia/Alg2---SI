#include <stdio.h>
#include <stdlib.h>

//Função para calcular a soma dos numeros inteiros existente entre dois numeros;
int calcSoma(int num1, int num2)
{
  int soma = 0;
  if (num1 > 0 && num2 > 0)
  {
    if (num1 > num2)
    {
      int temp = num1;
      num1 = num2;
      num2 = temp;
    }
    for (int i = num1 + 1; i < num2; i++)
    {
      soma += i;
    }
  }
  return soma;
}

int main()
{
  int num1, num2, soma;

  printf("Digite o primeiro numero: \n");
  scanf("%d", &num1);
  printf("Digite o segundo numero: \n");
  scanf("%d", &num2);

//Chama a função:
  soma = calcSoma(num1, num2);

  printf("A soma dos numeros positivos existentes entre os numeros digitados eh: %d\n", soma);

  return 0;
}
