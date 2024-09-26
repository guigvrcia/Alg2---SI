#include <stdio.h>
#include <stdlib.h>


//Função para calcular a sério:
double calcSerie(int N)
{
  double S = 0.0;

  for(int i = 1; i <= N; i++)
  {
    S += (double)(i * 1 + 1) / (i + 3);
  }

  return S;
}

int main()
{
  int N;
  
  printf("Digite o valor de N para calcular a serie: \n");
  scanf("%d", &N);

//Chama função:
  double calculo = calcSerie(N);
  printf("O resultado da soma da serie eh: %.2f\n", calculo);

  return 0;
}
