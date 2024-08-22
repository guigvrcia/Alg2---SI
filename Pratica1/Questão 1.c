#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Escrevendo o inteiro, real e o chart:
  int numero = 7;
  float flutuante = 3.14;
  char caractere = 'A';

  //Associando variáveis aos ponteiros:
  int *ponteiro1 = &numero;
  float *ponteiro2= &flutuante;
  char *ponteiro3 = &caractere;

  //Armazenando os valores das variáveis antes das modificações:
  int numero_antes = numero;
  float flutuante_antes = flutuante;
  char caractere_antes = caractere;

  //Modificando os valores das variáveis:
  *ponteiro1 = 31;
  *ponteiro2 = 2.71;
  *ponteiro3 = 'E';

  //Imprimindo os valores das variáveis antes e depois das modificações:
  printf("O valor do inteiro antes da modificacao eh: %d. Apos: %d\n", numero_antes, *ponteiro1);
  printf("O valor do flutuante antes da modificacao eh: %f. Apos: %f\n", flutuante_antes, *ponteiro2);
  printf("O valor do caractere antes da modificacao eh: %c. Apos: %c\n", caractere_antes, *ponteiro3);

  return 0;
}
